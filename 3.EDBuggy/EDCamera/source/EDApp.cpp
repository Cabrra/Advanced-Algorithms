#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include "EDDemo.h"
#include "BMPFile.h"

#include "EDCommon.h"

#ifndef FLT_EPSILON
#define FLT_EPSILON     1.192092896e-07F
#endif

bool EDApp::LineSegment2Triangle(vec3f &vOut, unsigned int &uiTriIndex, EDTriangle *pTris, unsigned int uiTriCount, const vec3f &vStart, const vec3f &vEnd)
{
	vec3f myStart = vStart;
	vOut = vEnd;
	uiTriIndex = -1;
	for (unsigned int i = 0; i < uiTriCount; i++)
	{
		float d0 = dot_product(myStart, pTris[i].m_Normal); //- dot_product(pTris[i].m_Vertices[0], pTris[i].m_Normal)
		float d1 = dot_product(pTris[i].m_Vertices[0], pTris[i].m_Normal); // dot_product(vOut, pTris[i].m_Normal); // - dot_product(pTris[i].m_Vertices[0], pTris[i].m_Normal)

		if (d0 - d1 < 0)
			continue;
		if (dot_product(vOut, pTris[i].m_Normal) - dot_product(pTris[i].m_Vertices[0], pTris[i].m_Normal) > 0)
			continue;

		float d2 = d0 - d1;
		vec3f L = vOut - myStart;

		float d3 = dot_product(pTris[i].m_Normal, L);
		float DF = -(d2 / d3);
		vec3f CP = myStart + L * DF;

		vec3f edge0 = pTris[i].m_Vertices[1] - pTris[i].m_Vertices[0];
		vec3f normal0;
		cross_product(normal0, edge0, pTris[i].m_Normal);

		vec3f myvector = CP - pTris[i].m_Vertices[1];
		float test1 = dot_product(normal0, myvector);
		if (test1 > 0)
			continue;

		vec3f edge1 = pTris[i].m_Vertices[2] - pTris[i].m_Vertices[1];
		vec3f normal1;
		cross_product(normal1, edge1, pTris[i].m_Normal);

		myvector = CP - pTris[i].m_Vertices[2];
		test1 = dot_product(normal1, myvector);
		if (test1 > 0)
			continue;

		vec3f edge2 = pTris[i].m_Vertices[0] - pTris[i].m_Vertices[2];
		vec3f normal2;
		cross_product(normal2, edge2, pTris[i].m_Normal);

		myvector = CP - pTris[i].m_Vertices[0];
		test1 = dot_product(normal2, myvector);
		if (test1 > 0)
			continue;

		vOut = CP;
		uiTriIndex = i;
	}

	if (uiTriIndex == -1)
		return false;
	else
		return true;
}

void EDApp::Drive(float fTime)
{
	matrix4f &BuggyMat = m_Buggy.m_Frames[CBuggy::BODY].GetLocalMat();

	vec3f start = m_Buggy.m_Frames[CBuggy::BODY].GetWorldMat().axis_pos;
	start.y += 50;
	vec3f ende = m_Buggy.m_Frames[CBuggy::BODY].GetWorldMat().axis_pos;
	ende.y -= 50;

	EDTriangle* mytriangles;
	unsigned int triCount;
	EDApp::GetTriangles(&mytriangles, &triCount, start, ende);
	
	vec3f myOut = start;
	unsigned int myindex;
	LineSegment2Triangle(myOut, myindex, mytriangles, triCount, start, ende);
		BuggyMat.axis_pos = myOut;

	delete[] mytriangles;

	//following
	EDTriangle* triangles1;
	unsigned int count1;
	EDTriangle* triangles2;
	unsigned int count2;
	EDTriangle* triangles3;
	unsigned int count3;

	vec3f myOutC1, myOutC2, myOutC3;

	myOutC1 = m_Buggy.m_Frames[CBuggy::FLWHEEL].GetWorldMat().axis_pos;
	myOutC2 = m_Buggy.m_Frames[CBuggy::FRWHEEL].GetWorldMat().axis_pos;
	myOutC3 = (m_Buggy.m_Frames[CBuggy::BLWHEEL].GetWorldMat().axis_pos + m_Buggy.m_Frames[CBuggy::BRWHEEL].GetWorldMat().axis_pos) * 0.5f;
	vec3f offset = vec3f(0.0f, 10.0f, 0.0f);
	vec3f leftWheelS = m_Buggy.m_Frames[CBuggy::FLWHEEL].GetWorldMat().axis_pos;
	leftWheelS += offset;
	vec3f leftWheelE = m_Buggy.m_Frames[CBuggy::FLWHEEL].GetWorldMat().axis_pos;
	leftWheelE -= offset;
	vec3f righttWheelS  = m_Buggy.m_Frames[CBuggy::FRWHEEL].GetWorldMat().axis_pos;
	righttWheelS += offset;
	vec3f righttWheelE = m_Buggy.m_Frames[CBuggy::FRWHEEL].GetWorldMat().axis_pos;
	righttWheelE -= offset;
	vec3f avegBackS = (m_Buggy.m_Frames[CBuggy::BLWHEEL].GetWorldMat().axis_pos + m_Buggy.m_Frames[CBuggy::BRWHEEL].GetWorldMat().axis_pos) * 0.5f;
	avegBackS += offset;
	vec3f avegBackE = (m_Buggy.m_Frames[CBuggy::BLWHEEL].GetWorldMat().axis_pos + m_Buggy.m_Frames[CBuggy::BRWHEEL].GetWorldMat().axis_pos)  * 0.5f;
	avegBackE -= offset;
	EDApp::GetTriangles(&triangles1, &count1, leftWheelS, leftWheelE);
	EDApp::GetTriangles(&triangles2, &count2, righttWheelS, righttWheelE);
	EDApp::GetTriangles(&triangles3, &count3, avegBackS, avegBackE);

	LineSegment2Triangle(myOutC1, myindex, triangles1, count1, leftWheelS, leftWheelE);
	LineSegment2Triangle(myOutC2, myindex, triangles2, count2, righttWheelS, righttWheelE);
	LineSegment2Triangle(myOutC3, myindex, triangles3, count3, avegBackS, avegBackE);

	vec3f help;
	help = myOutC1;
	myOutC1 = ((help - leftWheelS) * 0.01f) + leftWheelS;
	help = myOutC2;
	myOutC2 = ((help - righttWheelS) * 0.01f) + righttWheelS;
	help = myOutC3;
	myOutC3 = ((help - avegBackS) * 0.01f) + avegBackS;

	vec3f mynewX = (myOutC1 - myOutC2).normalize();
	vec3f mynewY, mynewZ;
	vec3f tempZ = (myOutC2 - myOutC3);
	cross_product(mynewY, tempZ, mynewX);
	mynewY = mynewY.normalize();
	cross_product(mynewZ, mynewX, mynewY);
	BuggyMat.axis_x = mynewX;
	BuggyMat.axis_y = mynewY;
	BuggyMat.axis_z = mynewZ.normalize();
	

	delete[] triangles1;
	delete[] triangles2;
	delete[] triangles3;

	m_Buggy.m_Frames[CBuggy::BODY].Update();

	if( m_Camera.GetCameraMode() != EDCamera::MOUSE_LOOK && GetAsyncKeyState( VK_RBUTTON ) )
	{
		glutSetCursor( GLUT_CURSOR_NONE );
	}
	else
	{
		glutSetCursor( GLUT_CURSOR_INHERIT );
	}

	// Move the buggy forward along it's Z-Axis
	if( GetAsyncKeyState( 'W' ) )
	{

		matrix4f BuggyW = m_Buggy.m_Frames[CBuggy::BODY].GetWorldMat();
		matrix4f GunW = m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat();

		vec3f buggyWx = BuggyW.axis_x;
		vec3f gunWz = GunW.axis_z;

		float myRange = dot_product(buggyWx, gunWz);

		matrix4f &gunMat = m_Buggy.m_Frames[CBuggy::GUN].GetLocalMat();

		BuggyMat.rotate_y_pre(myRange * fTime);
		gunMat.rotate_y_pre(-myRange * fTime);

		BuggyMat.axis_pos += BuggyMat.axis_z * fTime;
	}

	// Move the buggy backward along it's Z-Axis
	if( GetAsyncKeyState( 'S' ) )
	{
		matrix4f BuggyW = m_Buggy.m_Frames[CBuggy::BODY].GetWorldMat();
		matrix4f GunW = m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat();

		vec3f buggyWx = BuggyW.axis_x;
		vec3f gunWz = GunW.axis_z;

		float myRange = dot_product(buggyWx, gunWz);

		matrix4f &gunMat = m_Buggy.m_Frames[CBuggy::GUN].GetLocalMat();

		BuggyMat.rotate_y_pre(myRange * fTime);
		gunMat.rotate_y_pre(-myRange * fTime);
		
		BuggyMat.axis_pos += BuggyMat.axis_z * -fTime;
	}
	// We moved the Buggy, so update it's frame.
	m_Buggy.m_Frames[CBuggy::BODY].Update();

	// Fire a mortar...
	if( GetAsyncKeyState( VK_SPACE ) & 0x0001 )
	{
		for( unsigned int i = 0; i < 20; ++i )
		{
			if( !m_Mortars[i].IsAlive() )
			{
				matrix4f temp = m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat();
				temp.axis_pos += temp.axis_y * 0.075f;
				temp.axis_pos += temp.axis_z * 0.25f;

				m_Mortars[i].Fire( temp );
				break;
			}
		}
	}
	
	// Fire a bullet...
	if( GetAsyncKeyState( VK_LBUTTON ) & 0x0001 )
	{
			for( unsigned int i = 0; i < 20; ++i )
			{
				if( !m_Bullets[i].IsAlive() )
				{
					matrix4f temp = m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat();
					temp.axis_pos += temp.axis_y * 0.075f;
					temp.axis_pos += temp.axis_z * 0.25f;

					m_Bullets[i].Fire( temp );
					break;
				}
			}
	}

	if (m_Camera.GetCameraMode() != EDCamera::MOUSE_LOOK && GetAsyncKeyState(VK_RBUTTON))
	{
		matrix4f &myGun = m_Buggy.m_Frames[CBuggy::GUN].GetLocalMat();
		MouseLook(myGun, fTime);

	}
}

void EDApp::Update(void)
{
	// Get the elapsed seconds since the last frame
	float fTimeElapsed = m_Timer.GetElapsedTime() * 4.0f;
	m_Timer.Reset();

	// Update/Drive the buggy
	Drive(fTimeElapsed);

	// Clear our screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Save the identity
	glPushMatrix();
		
		// Update our camera
		m_Camera.Update(fTimeElapsed);
		m_Camera.ApplyCameraTransform();

		// Set LIGHT0's position
		float fPos[4] = { 0.707f, 0.707f, 0.0f, 0.0f };
		glLightfv( GL_LIGHT0, GL_POSITION, fPos );

		// Render the buggy
		glBindTexture( GL_TEXTURE_2D, m_Buggy.m_uiTexID );
		glColor3f( 1.0f, 1.0f, 1.0f );
		glEnable( GL_TEXTURE_2D );
			m_Buggy.Render();
		glDisable( GL_TEXTURE_2D );

		#if 1 // Render the terrain or don't render the terrain
				glPushMatrix();
					glBindTexture( GL_TEXTURE_2D, m_TerTex );
					glColor3f( 1.0f, 1.0f, 1.0f );
				
					glEnable( GL_TEXTURE_2D );

					glVertexPointer( 3, GL_FLOAT, 0, m_verts[0].v );
					glNormalPointer( GL_FLOAT, 0, m_norms[0].v );
					glTexCoordPointer( 2, GL_FLOAT, 0, &m_uvs[0].s );

					glDrawArrays( GL_TRIANGLES, 0, m_verts.size() );
					glDisable( GL_TEXTURE_2D );
				glPopMatrix();
		#endif

		// UPDATE TARGETS
		for( unsigned int i = 0; i < 20; ++i )
		{
			m_Targets[i].Update(fTimeElapsed);
			m_Targets[i].Render();
		}

		// Draw the world's coordinate axes
		glDisable(GL_LIGHTING);
			glDepthMask( 0 );
				glColor3f( 0.0f, 0.5f, 0.0f );
				DrawGround();
			glDepthMask( 1 );
			DrawAxes();
		glEnable(GL_LIGHTING);

		// UPDATE THE CROSSHAIR
		m_Crosshair.Update(fTimeElapsed);
		m_Crosshair.Render();

		// UPDATE ACTIVE MORTARS
		for( unsigned int i = 0; i < 20; ++i )
		{
			if( m_Mortars[i].IsAlive() )
			{
				m_Mortars[i].Update(fTimeElapsed);
				m_Mortars[i].Render();
			}
		}

		// UPDATE ACTIVE EXPLOSIONS
		glDisable( GL_LIGHTING );
		glDisable( GL_CULL_FACE );
		glDepthMask( 0 );

		glEnable( GL_TEXTURE_2D );
		glBindTexture( GL_TEXTURE_2D, m_BullTex );

		for( unsigned int i = 0; i < 20; ++i )
		{
			if( m_Explosions[i].IsAlive() )
			{
				m_Explosions[i].Update( fTimeElapsed );
				m_Explosions[i].Render();
			}
		}

		glDisable( GL_TEXTURE_2D );
		glEnable( GL_LIGHTING );
		glEnable( GL_CULL_FACE );
		glDepthMask( 1 );

		glEnable( GL_TEXTURE_2D );
		glDisable( GL_LIGHTING );
		glDepthMask( 0 );

		// UPDATE ACTIVE BULLETS
		glBindTexture( GL_TEXTURE_2D, m_BullTex );
		for( unsigned int i = 0; i < 20; ++i )
		{
			if( m_Bullets[i].IsAlive() )
			{
				m_Bullets[i].Update(fTimeElapsed);
				m_Bullets[i].Render();
			}
		}
		glEnable( GL_LIGHTING );
		glDepthMask( 1 );
		glDisable( GL_TEXTURE_2D );

	// Restore the identity
	glPopMatrix();

	// Swap the buffer
	glutSwapBuffers();

	// Tell glut to render again
	glutPostRedisplay();
}

void EDApp::Initialize(void)
{
	BMPFile buggyTex( "jeepbmp.BMP" );
	glGenTextures( 1, &m_Buggy.m_uiTexID );
	glBindTexture( GL_TEXTURE_2D, m_Buggy.m_uiTexID );
	glTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexImage2D( GL_TEXTURE_2D, 0, 3, (GLsizei)buggyTex.GetWidth(), (GLsizei)buggyTex.GetHeight(), 0, GL_BGR, GL_UNSIGNED_BYTE, buggyTex.GetPixelData() ); 

	BMPFile terrainTex( "tempgrass2.bmp" );
	glGenTextures( 1, &m_TerTex );
	glBindTexture( GL_TEXTURE_2D, m_TerTex );
	glTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexImage2D( GL_TEXTURE_2D, 0, 3, (GLsizei)terrainTex.GetWidth(), (GLsizei)terrainTex.GetHeight(), 0, GL_BGR, GL_UNSIGNED_BYTE, terrainTex.GetPixelData() ); 

	BMPFile bullTex( "plasma2.bmp" );
	glGenTextures( 1, &m_BullTex );
	glBindTexture( GL_TEXTURE_2D, m_BullTex );
	glTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexImage2D( GL_TEXTURE_2D, 0, 3, (GLsizei)bullTex.GetWidth(), (GLsizei)bullTex.GetHeight(), 0, GL_BGR, GL_UNSIGNED_BYTE, bullTex.GetPixelData() ); 

	size_t rowCount;

	FILE *pTerrainFile = fopen( "terrain.bin", "rb" );

	if( pTerrainFile )
	{
		fread( &rowCount, sizeof(size_t), 1, pTerrainFile );

		m_verts.resize( rowCount );
		m_norms.resize( rowCount );
		m_uvs.resize( rowCount );

		fread( m_verts[0].v, sizeof( vec3f ), rowCount, pTerrainFile );
		fread( m_norms[0].v, sizeof( vec3f ), rowCount, pTerrainFile );
		fread( &m_uvs[0].s, sizeof( uv ), rowCount, pTerrainFile );

		fclose( pTerrainFile );
	}

	vec3f highest = m_verts[0];
	for( unsigned int i = 0; i < m_verts.size(); ++i )
	{
		if( m_verts[i].x > highest.x )
			highest.x = m_verts[i].x;
		if( m_verts[i].y > highest.y )
			highest.y = m_verts[i].y;
		if( m_verts[i].z > highest.z )
			highest.z = m_verts[i].z;
	}

	highest *= 0.5f;
	for( unsigned int i = 0; i < m_verts.size(); ++i )
	{
		m_verts[i] -= highest;
	}


	m_Buggy.m_Frames[CBuggy::BODY].GetLocalMat().axis_pos = vec3f(-1.5f, 1.5f, -1.5f);

	m_Buggy.m_Frames[CBuggy::BODY].Update();


	glEnable( GL_BLEND );
	glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
	srand(GetTickCount());

	for( unsigned int i = 0; i < 20; ++i )
	{
		size_t posIndex = rand() % m_verts.size();

		m_Targets[i].m_Matrix.axis_pos = m_verts[posIndex];
		m_Targets[i].m_Matrix.axis_pos.y += 2.5f;
	}

	m_Timer.Reset();

	m_pBVTree = new EDBVTree( &m_verts[0], (unsigned int)m_verts.size(), 10 );
}

bool AABB2LineSegment( const EDAABB &box, const vec3f& startPoint, const vec3f& endPoint )
{
	vec3f c = (box.GetMin() + box.GetMax()) * 0.5f;
	vec3f e = box.GetMax() - box.GetMin();
	vec3f d = endPoint - startPoint;
	vec3f m = startPoint + endPoint - box.GetMin() - box.GetMax();

	float adx = abs(d.x);
	if( abs(m.x) > e.x + adx ) return false;
	
	float ady = abs(d.y);
	if( abs(m.y) > e.y + ady ) return false;

	float adz = abs(d.z);
	if( abs(m.z) > e.z + adz ) return false;

	adx += FLT_EPSILON;
	ady += FLT_EPSILON;
	adz += FLT_EPSILON;

	if( abs(m.y * d.z - m.z * d.y) > e.y * adz + e.z * ady ) return false;
	if( abs(m.z * d.x - m.x * d.z) > e.x * adz + e.z * adx ) return false;
	if( abs(m.x * d.y - m.y * d.x) > e.x * ady + e.y * adx ) return false;

	return true;
}

bool AABB2LineSegmentTraverse( EDAABB *pBV, void *pVoid )
{
	vec3f* pPoints = (vec3f*)pVoid;

	if( AABB2LineSegment( *pBV, pPoints[0], pPoints[1] ) )
		return true;

	return false;
}

void EDApp::GetTriangles( EDTriangle **pTris, unsigned int *pTriCount, const vec3f &startPoint, const vec3f &endPoint )
{
	vec3f points[2];
	points[0] = startPoint;
	points[1] = endPoint;

	EDApp::GetInstance().m_pBVTree->Traverse( AABB2LineSegmentTraverse, points, pTris, pTriCount );
}

void EDApp::Shutdown(void)
{
	glDeleteTextures( 1, &m_Buggy.m_uiTexID );

	delete m_pBVTree;
}
	