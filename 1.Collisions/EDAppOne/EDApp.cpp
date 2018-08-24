#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"
#include "EDDemo.h"
#include "EDCommon.h"

#define RAND_FLOAT(min,max)		(((rand()/(float)RAND_MAX)*((max)-(min)))+(min))

void EDApp::Update(void)
{
	// Get the elapsed seconds since the last frame
	float fTimeElapsed = m_Timer.GetElapsedTime();
	m_Timer.Reset();

	// Clear our screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Save the identity
	glPushMatrix();
		
		// Update our camera
		m_Camera.Update(fTimeElapsed * 4.0f);
		m_Camera.ApplyCameraTransform();

		// Set LIGHT0's position
		GLfloat lightPos[] = {0.0f, 0.70710678f, 0.70710678f, 0.0f};
		GLfloat redLight[] = {1.0f, 0.0f, 0.0f, 1.0f};

		glLightfv( GL_LIGHT0, GL_POSITION, lightPos );
		//glLightfv( GL_LIGHT0, GL_DIFFUSE, redLight );

		float yOffset = 0.5f;
		float cylLen = 2.0f;

		SHORT lbuttonState = GetAsyncKeyState( VK_LBUTTON );

		if( lbuttonState != 0 )
		{
			vec3f laserY;
			cross_product( laserY, m_Camera.GetMatrix().axis_z, m_GunMatrix.axis_z );

			if( dot_product( laserY, laserY ) < ED_EPSILON )
				laserY = worldY;
			else
				laserY.normalize();

			float fScale = 300.0f;
			float yScale = 0.01f;

			bool bCollided = false;

			switch( m_TestState )
			{
			case 0:
				{
					if( IntersectRayTriangle( m_TestTriVerts[0], m_TestTriVerts[1], m_TestTriVerts[2], m_TestTriNorm, m_GunMatrix.axis_pos, m_GunMatrix.axis_z, fScale ) )
						bCollided = true;
				}
				break;
			case 1:
				{
					vec3f intersection;
					if( IntersectRaySphere( m_GunMatrix.axis_pos, m_GunMatrix.axis_z, m_TestSpherePosition, m_TestRadius, fScale, intersection ) )
						bCollided = true;
				}
				break;
			case 2:
				{
					if( IntersectRayCylinder( m_GunMatrix.axis_pos, m_GunMatrix.axis_z, m_CylinderStart, m_CylinderEnd, m_TestRadius, fScale ) )
						bCollided = true;
				}
				break;
			case 3:
				{
					if( IntersectRayCapsule( m_GunMatrix.axis_pos, m_GunMatrix.axis_z, m_CylinderStart, m_CylinderEnd, m_TestRadius, fScale ) )
						bCollided = true;
				}
				break;
			case 4:
			case 5:
				{
					if( lbuttonState & 0x0001 )
					{
						MovingSphere tempSphere = { m_BulletRadius, m_GunMatrix.axis_pos, m_GunMatrix.axis_z };
						m_BulletList.push_back(tempSphere);

						while( m_BulletList.size() > 20 )
							m_BulletList.pop_front();
					}
				}
				break;
			default:
				break;
			}

			if( m_TestState < 4 )
			{
				if( bCollided == true )
				{
					GLfloat laserStart[] = { m_GunMatrix.axis_pos.x + m_GunMatrix.axis_z.x * fScale, m_GunMatrix.axis_pos.y + m_GunMatrix.axis_z.y * fScale, m_GunMatrix.axis_pos.z + m_GunMatrix.axis_z.z * fScale, 1.0f };
					GLfloat laserOffset[] = { m_GunMatrix.axis_pos.x + m_GunMatrix.axis_z.x * fScale * 0.95f, m_GunMatrix.axis_pos.y + m_GunMatrix.axis_z.y * fScale * 0.95f, m_GunMatrix.axis_pos.z + m_GunMatrix.axis_z.z * fScale * 0.95f, 1.0f };

					glLightfv( GL_LIGHT1, GL_POSITION, laserOffset );
					glEnable( GL_LIGHT1 );

					GLUquadric *newQuad = gluNewQuadric();
					glPushMatrix();
						glTranslatef( laserStart[0], laserStart[1], laserStart[2] );
						glColor3f( 1.0f, 0.0f, 0.0f );
						glDisable(GL_LIGHTING);
							gluSphere( newQuad, 0.05f, 15, 15 );
						glEnable(GL_LIGHTING);
					glPopMatrix();
					gluDeleteQuadric(newQuad);
				}
				else
					fScale = 300.0f;


				glEnable(GL_BLEND);
				glDisable(GL_LIGHTING);
				glDisable(GL_CULL_FACE);
					glBegin( GL_QUADS );
						glColor3f( 1.0f, 0.0f, 0.0f );
						glVertex3fv( (m_GunMatrix.axis_pos - laserY * yScale).v );
						glVertex3fv( (m_GunMatrix.axis_pos + laserY * yScale).v );
						glColor3f( 1.0f, 1.0f, 0.0f );
						glVertex3fv( (m_GunMatrix.axis_pos + laserY * yScale + m_GunMatrix.axis_z * fScale).v );
						glVertex3fv( (m_GunMatrix.axis_pos - laserY * yScale + m_GunMatrix.axis_z * fScale).v );
					glEnd();
				glEnable(GL_CULL_FACE);
				glEnable(GL_LIGHTING);
				glDisable(GL_BLEND);
			}
		}

		std::list<MovingSphere>::iterator bulletIter(m_BulletList.begin());

		GLUquadric *newQuad = gluNewQuadric();
		glColor3f( 1.0f, 0.0f, 0.0f );

		for(; bulletIter != m_BulletList.end(); ++bulletIter)
		{
			float fScale = FLT_MAX;
			vec3f surfaceNorm;
			float sphereSpeed = 3.0f;

			if( dot_product( bulletIter->m_Velocity, bulletIter->m_Velocity ) != 0.0f )
			{
				bool bCollide = false;

				if( m_TestState == 4 )
					bCollide = IntersectMovingSphereTriangle( m_TestTriVerts[0], m_TestTriVerts[1], m_TestTriVerts[2], m_TestTriNorm, bulletIter->m_Center, bulletIter->m_Velocity, bulletIter->m_Radius, fScale, surfaceNorm );
				else if( m_TestState == 5 )
				{
					vec3f vtos = m_DeathWheelCenter - bulletIter->m_Center;
					float dotRes = max( 0.0f, min( dot_product( vtos, bulletIter->m_Velocity ), fTimeElapsed * sphereSpeed ) ); 
					vtos = bulletIter->m_Center + bulletIter->m_Velocity * dotRes;

					if( dot_product( vtos - m_DeathWheelCenter, vtos - m_DeathWheelCenter ) <= m_DeathWheelRadius*m_DeathWheelRadius )
						bCollide = IntersectMovingSphereMesh( bulletIter->m_Center, bulletIter->m_Velocity, bulletIter->m_Radius, &m_DeathWheelMesh, fScale, surfaceNorm );
				}

				if( bCollide )
				{
					if( fScale <= fTimeElapsed * sphereSpeed )
					{
						bulletIter->m_Center += bulletIter->m_Velocity * fScale;
						bulletIter->m_Velocity.make_zero();
					}
					else
						bulletIter->m_Center += bulletIter->m_Velocity * sphereSpeed * fTimeElapsed;
				}
				else
					bulletIter->m_Center += bulletIter->m_Velocity * sphereSpeed * fTimeElapsed;
			}

			glPushMatrix();
				glTranslatef( bulletIter->m_Center.x, bulletIter->m_Center.y, bulletIter->m_Center.z );
				gluSphere( newQuad, bulletIter->m_Radius, 15, 15 );
			glPopMatrix();
		}
		gluDeleteQuadric(newQuad);

		glPushMatrix();
			glMultMatrixf( m_GunMatrix.ma );
			glColor3f( 0.25f, 0.25f, 0.75f );
			glVertexPointer( 3, GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].pos );
			glNormalPointer( GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].norm );
			glTexCoordPointer( 2, GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].u );
			glDrawElements( GL_TRIANGLES, (GLsizei)m_GunModel.m_Meshes[0].m_Tris.size() * 3, GL_UNSIGNED_INT, &m_GunModel.m_Meshes[0].m_Tris[0].indices );
		glPopMatrix();

		glColor3f( 1.0f, 1.0f, 1.0f );
		unsigned int objResolution = 20;
		switch(m_TestState)
		{
		case 0: //Triangle
		case 4:
			{
				glBegin(GL_TRIANGLES);
					glNormal3fv( m_TestTriNorm.v );
					glVertex3fv( m_TestTriVerts[0].v );
					glVertex3fv( m_TestTriVerts[1].v );
					glVertex3fv( m_TestTriVerts[2].v );
				glEnd();
			}
			break;
		case 1: //Sphere
			{
				GLUquadric *newQuad = gluNewQuadric();
				glPushMatrix();
					glTranslatef( m_TestSpherePosition.x, m_TestSpherePosition.y, m_TestSpherePosition.z );
					gluSphere( newQuad, m_TestRadius, objResolution, objResolution );
				glPopMatrix();
				gluDeleteQuadric(newQuad);
			}
			break;
		case 2: //Cylinder
			{
				GLUquadric *newQuad = gluNewQuadric();
				glPushMatrix();
					glTranslatef( m_CylinderStart.x, m_CylinderStart.y, m_CylinderStart.z);
					gluCylinder( newQuad, m_TestRadius, m_TestRadius, abs(m_CylinderEnd.z - m_CylinderStart.z), objResolution, objResolution );
				glPopMatrix();
				gluDeleteQuadric(newQuad);				
			}
			break;
		case 3: //Capsule
			{
				GLUquadric *newQuad = gluNewQuadric();
				glPushMatrix();
					glTranslatef( m_CylinderStart.x, m_CylinderStart.y, m_CylinderStart.z);
					gluSphere( newQuad, m_TestRadius, objResolution, objResolution );
					gluCylinder( newQuad, m_TestRadius, m_TestRadius, abs(m_CylinderEnd.z - m_CylinderStart.z), objResolution, objResolution );
					glTranslatef( 0.0f, 0.0f, m_CylinderEnd.z - m_CylinderStart.z );
					gluSphere( newQuad, m_TestRadius, objResolution, objResolution );
				glPopMatrix();
				gluDeleteQuadric(newQuad);	
			}
			break;
		case 5: //Mesh
			{
				glVertexPointer( 3, GL_FLOAT, sizeof(ED2Vertex), m_DeathWheelMesh.m_Vertices[0].pos.v );
				glNormalPointer( GL_FLOAT, sizeof(ED2Vertex), m_DeathWheelMesh.m_Vertices[0].norm.v );
				glTexCoordPointer( 2, GL_FLOAT, sizeof(ED2Vertex), &m_DeathWheelMesh.m_Vertices[0].u );
				glDrawElements( GL_TRIANGLES, m_DeathWheelMesh.m_Triangles.size()*3, GL_UNSIGNED_INT, m_DeathWheelMesh.m_Triangles[0].indices );
			}
			break;
		default:
			break;
		}

		glDisable(GL_LIGHT1);

		static bool bResetMousePos = true;
		if( m_Camera.GetCameraMode() == EDCamera::HARD_ATTACH && GetAsyncKeyState( VK_RBUTTON ) )
		{
			if( bResetMousePos == true )
			{
				SetCursorPos( 400, 300 );
				bResetMousePos = false;
			}
			else
				MouseLook( m_GunMatrix, fTimeElapsed );
		}
		else
			bResetMousePos = true;

		vec3f flatZ;
		cross_product( flatZ, m_GunMatrix.axis_x, worldY );
		flatZ.normalize();

		if( GetAsyncKeyState( 'W' ) )
			m_GunMatrix.axis_pos += flatZ * fTimeElapsed * 4.0f;
		if( GetAsyncKeyState( 'S' ) )
			m_GunMatrix.axis_pos += flatZ * fTimeElapsed * -4.0f;
		if( GetAsyncKeyState( 'A' ) )
			m_GunMatrix.axis_pos += m_GunMatrix.axis_x * fTimeElapsed * 4.0f;
		if( GetAsyncKeyState( 'D' ) )
			m_GunMatrix.axis_pos += m_GunMatrix.axis_x * fTimeElapsed * -4.0f;
		if( GetAsyncKeyState( '1' ) & 0x0001 )
		{
			if (m_TestState == 0)
				RandomizeTriangle();
			else
				InitializeTriangle();

			m_TestState = 0;
			m_BulletList.clear();
		}
		if( GetAsyncKeyState( '2' ) & 0x0001 )
		{
			if (m_TestState == 1)
				RandomizeSphere();
			else
				InitializeSphere();

			m_TestState = 1;
			m_BulletList.clear();
		}
		if( GetAsyncKeyState( '3' ) & 0x0001 )
		{
			if (m_TestState == 2)
				RandomizeCylinder();
			else
				InitializeCylinder();

			m_TestState = 2;
			m_BulletList.clear();
		}
		if( GetAsyncKeyState( '4' ) & 0x0001 )
		{
			if (m_TestState == 3)
				RandomizeCylinder();
			else
				InitializeCylinder();

			m_TestState = 3;
			m_BulletList.clear();
		}
		if( GetAsyncKeyState( '5' ) & 0x0001 )
		{
			if (m_TestState == 4)
				RandomizeTriangle();
			else
				InitializeTriangle();

			m_TestState = 4;
			m_BulletList.clear();
		}
		if( GetAsyncKeyState( '6' ) & 0x0001 )
		{
			m_TestState = 5;
			m_BulletList.clear();
		}

		// Draw the world's coordinate axes
		glDisable(GL_LIGHTING);
			glColor3f( 0.0f, 0.5f, 0.0f );
			DrawGround();			
			glLineWidth( 5.0f );
				DrawAxes();
			glLineWidth( 1.0f );
		glEnable(GL_LIGHTING);

	// Restore the identity
	glPopMatrix();

	// Swap the buffer
	glutSwapBuffers();

	// Tell glut to render again
	glutPostRedisplay();
}

void EDApp::Initialize(void)
{
	srand(GetTickCount());

	m_GunModel.Load("..\\Content\\raygun.bin", false);
	m_BulletRadius = 0.025f;

	MayaBin DeathWheel;
	DeathWheel.Load("..\\Content\\deathwheel.bin", false);

	m_DeathWheelMesh.m_Triangles.resize(DeathWheel.m_Meshes[0].m_Tris.size());
	m_DeathWheelMesh.m_TriNorms.resize(DeathWheel.m_Meshes[0].m_Tris.size());
	m_DeathWheelMesh.m_Vertices.resize(DeathWheel.m_Meshes[0].m_Verts.size());
	m_DeathWheelMesh.m_id = 0;

	m_DeathWheelCenter.make_zero();
	vec3f vmax( -FLT_MAX, -FLT_MAX, -FLT_MAX );
	vec3f vmin( FLT_MAX, FLT_MAX, FLT_MAX );

	for(unsigned int i = 0; i < DeathWheel.m_Meshes[0].m_Verts.size(); ++i)
	{
		m_DeathWheelMesh.m_Vertices[i].pos = DeathWheel.m_Meshes[0].m_Verts[i].pos;
		m_DeathWheelMesh.m_Vertices[i].pos.y += 1.0f;

		vmax.x = max( vmax.x, m_DeathWheelMesh.m_Vertices[i].pos.x );
		vmax.y = max( vmax.y, m_DeathWheelMesh.m_Vertices[i].pos.y );
		vmax.z = max( vmax.z, m_DeathWheelMesh.m_Vertices[i].pos.z );

		vmin.x = min( vmin.x, m_DeathWheelMesh.m_Vertices[i].pos.x );
		vmin.y = min( vmin.y, m_DeathWheelMesh.m_Vertices[i].pos.y );
		vmin.z = min( vmin.z, m_DeathWheelMesh.m_Vertices[i].pos.z );

		m_DeathWheelMesh.m_Vertices[i].norm = DeathWheel.m_Meshes[0].m_Verts[i].norm;
		m_DeathWheelMesh.m_Vertices[i].u = DeathWheel.m_Meshes[0].m_Verts[i].u;
		m_DeathWheelMesh.m_Vertices[i].v = DeathWheel.m_Meshes[0].m_Verts[i].v;
	}

	m_DeathWheelCenter = (vmax + vmin) * 0.5f;
	vmax.x += m_BulletRadius;
	vmax.y += m_BulletRadius;
	vmax.z += m_BulletRadius;

	m_DeathWheelRadius = sqrt( dot_product( vmax - m_DeathWheelCenter, vmax - m_DeathWheelCenter ) );

	for(unsigned int i = 0; i < DeathWheel.m_Meshes[0].m_Tris.size(); ++i)
	{
		m_DeathWheelMesh.m_Triangles[i].indices[0] = DeathWheel.m_Meshes[0].m_Tris[i].indices[0];
		m_DeathWheelMesh.m_Triangles[i].indices[1] = DeathWheel.m_Meshes[0].m_Tris[i].indices[1];
		m_DeathWheelMesh.m_Triangles[i].indices[2] = DeathWheel.m_Meshes[0].m_Tris[i].indices[2];

		vec3f edge0 = m_DeathWheelMesh.m_Vertices[ m_DeathWheelMesh.m_Triangles[i].indices[1] ].pos - m_DeathWheelMesh.m_Vertices[ m_DeathWheelMesh.m_Triangles[i].indices[0] ].pos;
		vec3f edge1 = m_DeathWheelMesh.m_Vertices[ m_DeathWheelMesh.m_Triangles[i].indices[2] ].pos - m_DeathWheelMesh.m_Vertices[ m_DeathWheelMesh.m_Triangles[i].indices[1] ].pos;

		cross_product( m_DeathWheelMesh.m_TriNorms[i], edge0, edge1 );
		m_DeathWheelMesh.m_TriNorms[i].normalize();
	}

	m_GunMatrix.make_identity();
	m_GunMatrix.rotate_y_pre(3.1415926535f);
	m_GunMatrix.axis_pos = vec3f( -0.125, 1.0f, 3.0f );

	m_Camera.m_OffsetVec = vec3f( 0.125f, 0.1f, -0.5f );
	m_Camera.m_pTargetMat = &m_GunMatrix;

	glEnableClientState( GL_VERTEX_ARRAY );
	glEnableClientState( GL_NORMAL_ARRAY  );
	glEnableClientState( GL_TEXTURE_COORD_ARRAY );
	
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_POINT_SIZE);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	m_TestTriVerts[0] = vec3f( 0.5f, 0.5f, 0.0f );
	m_TestTriVerts[1] = vec3f( 0.0f, 1.5f, 0.0f );
	m_TestTriVerts[2] = vec3f( -0.5f, 0.5f, 0.0f );
	m_TestTriNorm = vec3f( 0.0f, 0.0f, 1.0f );
	
	InitializeTriangle();
	InitializeSphere();
	InitializeCylinder();
	//m_TestRadius = 0.5f;

	m_TestState = 0;

	m_Timer.Reset();
}

void EDApp::Shutdown(void)
{
}
	
void EDApp::InitializeTriangle()
{
	m_TestTriVerts[0] = vec3f( 0.5f, 0.5f, 0.0f );
	m_TestTriVerts[1] = vec3f( 0.0f, 1.5f, 0.0f );
	m_TestTriVerts[2] = vec3f( -0.5f, 0.5f, 0.0f );
	m_TestTriNorm = vec3f( 0.0f, 0.0f, 1.0f );
}

void EDApp::RandomizeTriangle()
{
	m_TestTriVerts[0] = vec3f( RAND_FLOAT( 0.5,   2.0f), RAND_FLOAT( 0.3f,  1.2f), RAND_FLOAT(-2.0f, 2.0f));
	m_TestTriVerts[1] = vec3f( RAND_FLOAT(-0.5f,  0.5f), RAND_FLOAT( 1.5f,  2.5f), RAND_FLOAT(-2.0f, 2.0f));
	m_TestTriVerts[2] = vec3f( RAND_FLOAT(-2.0f, -0.5f), RAND_FLOAT( 0.3f,  1.2f), RAND_FLOAT(-2.0f, 2.0f));
	cross_product(m_TestTriNorm, m_TestTriVerts[1] - m_TestTriVerts[0], m_TestTriVerts[2] - m_TestTriVerts[1]);
	m_TestTriNorm.normalize();
}

void EDApp::InitializeSphere()
{
	m_TestRadius = 0.5f;
	m_TestSpherePosition = vec3f(0.0f, 0.5f, 0.0f);
}

void EDApp::RandomizeSphere()
{
	m_TestRadius = RAND_FLOAT(0.1f, 2.0f);
	m_TestSpherePosition = vec3f(RAND_FLOAT(-1.0f, 1.0f), RAND_FLOAT(-1.0f, 1.0f), RAND_FLOAT(-1.0f, 1.0f));
}

void EDApp::InitializeCylinder()
{
	m_TestRadius = 0.5f;
	m_CylinderStart = vec3f(0.0f, 0.5f, 0.0f);
	m_CylinderEnd   = vec3f(0.0f, 0.5f, 2.0f);
}

void EDApp::RandomizeCylinder()
{
	m_TestRadius	= RAND_FLOAT(0.1f, 2.0f);
	m_CylinderStart = vec3f(RAND_FLOAT(-1.0f, 1.0f), RAND_FLOAT( 0.25f, 1.0f), RAND_FLOAT(-3.0f, -0.5f));
	m_CylinderEnd   = vec3f(m_CylinderStart.x,		 m_CylinderStart.y,		   RAND_FLOAT( 0.5f,  3.0f));
}	