#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"
#include "EDDemo.h"
#include "EDCommon.h"
#include "BMPFile.h"
#include "..\Reactions\Capsule Collisions.h"

struct BoxAndList
{
	ED2AABB m_aabb;
	std::list< const ED2LeafMesh *> m_meshList;
};

bool AABBIntersectCallback(ED2BVHNode *pNode, void *pVoid)
{
	BoxAndList* boxAndList = (BoxAndList*)pVoid;

	if( !ED2AABBIntersect( pNode->GetAABB(), boxAndList->m_aabb ) )
		return false;

	if( pNode->IsLeaf() )
	{
		ED2BVHLeafNode *pLeaf = (ED2BVHLeafNode*)pNode;
		
		for(unsigned int i = 0; i < pLeaf->GetMeshes().size(); ++i )
			boxAndList->m_meshList.push_back( &pLeaf->GetMeshes()[i] );
	}

	return true;
}

void EDApp::Update(void)
{
	// Get the elapsed seconds since the last frame
	float fTimeElapsed = m_Timer.GetElapsedTime();
	m_Timer.Reset();

	fTimeElapsed = max( 1/180.0f, fTimeElapsed );

	// Clear our screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	static int zoom = 0;
	static const float cylinderLength = 0.25f;

	// Save the identity
	glPushMatrix();
		
		// Update our camera
		m_Camera.Update(fTimeElapsed * 4.0f);
		m_Camera.ApplyCameraTransform();

		// Set LIGHT0's position
		GLfloat lightPos[] = { 0.57735f, 0.57735f, -0.57735f, 0.0f };
		GLfloat redLight[] = {1.0f, 0.0f, 0.0f, 1.0f};

		glLightfv( GL_LIGHT0, GL_POSITION, lightPos );
		
		glColor3f( 1.0f, 1.0f, 1.0f );
		glEnable( GL_TEXTURE_2D );
		for each( ED2BVHLeafNode *pLeaf in m_pBVH->GetLeaves() )
		{
			for(unsigned int i = 0; i < pLeaf->GetMeshes().size(); ++i)
			{
				glBindTexture( GL_TEXTURE_2D, m_TexIDs[ pLeaf->GetMeshes()[i].m_id ] );

				glVertexPointer( 3, GL_FLOAT, sizeof(ED2Vertex), pLeaf->GetMeshes()[i].m_Vertices[0].pos.v );
				glNormalPointer( GL_FLOAT, sizeof(ED2Vertex), pLeaf->GetMeshes()[i].m_Vertices[0].norm.v );
				glTexCoordPointer( 2, GL_FLOAT, sizeof(ED2Vertex), &pLeaf->GetMeshes()[i].m_Vertices[0].u );
				glDrawElements( GL_TRIANGLES, pLeaf->GetMeshes()[i].m_Triangles.size()*3, GL_UNSIGNED_INT, pLeaf->GetMeshes()[i].m_Triangles[0].indices );
			}
		}
		glDisable( GL_TEXTURE_2D );

		glColor3f( 0.0f, 0.0f, 0.0f );
		glLineWidth( 3.0f );
		glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
		for each( ED2BVHLeafNode *pLeaf in m_pBVH->GetLeaves() )
		{
			for(unsigned int i = 0; i < pLeaf->GetMeshes().size(); ++i)
			{
				glVertexPointer( 3, GL_FLOAT, sizeof(ED2Vertex), pLeaf->GetMeshes()[i].m_Vertices[0].pos.v );
				glNormalPointer( GL_FLOAT, sizeof(ED2Vertex), pLeaf->GetMeshes()[i].m_Vertices[0].norm.v );
				glTexCoordPointer( 2, GL_FLOAT, sizeof(ED2Vertex), &pLeaf->GetMeshes()[i].m_Vertices[0].u );
				glDrawElements( GL_TRIANGLES, pLeaf->GetMeshes()[i].m_Triangles.size()*3, GL_UNSIGNED_INT, pLeaf->GetMeshes()[i].m_Triangles[0].indices );
			}
		}
		glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
		glLineWidth(1.0f);

		matrix4f posMat;
		posMat.make_identity();
		posMat.axis_pos = m_GunMatrix.axis_pos;

		if( (m_Camera.GetCameraMode() != EDCamera::HARD_ATTACH && m_Camera.GetCameraMode() != EDCamera::SOFT_ATTACH) || zoom != 0 )
		{
			glPushMatrix();
				glMultMatrixf( posMat.ma );	
				GLUquadric *newQuad = gluNewQuadric();
				glColor3f( 1.0f, 0.0f, 0.0f );
				gluSphere( newQuad, m_TestRadius, 20, 20 );
				glPushMatrix();
					glTranslatef( 0.0f, -cylinderLength, 0.0f );
					gluSphere( newQuad, m_TestRadius, 20, 20 );
				glPopMatrix();
				glPushMatrix();
					glRotatef( 90.0f, 1.0f, 0.0f, 0.0f );
					gluCylinder( newQuad, m_TestRadius, m_TestRadius, cylinderLength, 20, 20 );
				glPopMatrix();
				gluDeleteQuadric(newQuad);
			glPopMatrix();
		}

		if( (m_Camera.GetCameraMode() == EDCamera::HARD_ATTACH || m_Camera.GetCameraMode() == EDCamera::SOFT_ATTACH) && zoom == 0 )
			glClear( GL_DEPTH_BUFFER_BIT );

		glPushMatrix();
			glMultMatrixf( m_GunMatrix.ma );
			glColor3f( 0.0f, 0.0f, 0.0f );
			glLineWidth( 3.5f );
			glCullFace( GL_FRONT );
			glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
				glVertexPointer( 3, GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].pos );
				glNormalPointer( GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].norm );
				glTexCoordPointer( 2, GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].u );
				glDrawElements( GL_TRIANGLES, (GLsizei)m_GunModel.m_Meshes[0].m_Tris.size() * 3, GL_UNSIGNED_INT, &m_GunModel.m_Meshes[0].m_Tris[0].indices );	
			glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
			glLineWidth(1.0f);
			glCullFace( GL_BACK );

			glColor3f( 0.25f, 0.25f, 0.75f );
			glVertexPointer( 3, GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].pos );
			glNormalPointer( GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].norm );
			glTexCoordPointer( 2, GL_FLOAT, sizeof( Vertex ), &m_GunModel.m_Meshes[0].m_Verts[0].u );
			glDrawElements( GL_TRIANGLES, (GLsizei)m_GunModel.m_Meshes[0].m_Tris.size() * 3, GL_UNSIGNED_INT, &m_GunModel.m_Meshes[0].m_Tris[0].indices );		
		glPopMatrix();

		static bool bResetMousePos = true;
		static bool bGrounded = false;
		
		if( GetAsyncKeyState( 'R' ) & 0x0001 )
		{
			m_GunMatrix.axis_pos = vec3f( 0.0f, 1.5f, 3.0f );
			m_TestVelocity.make_zero();
			bGrounded = false;
		}

		if( m_Camera.GetCameraMode() == EDCamera::HARD_ATTACH || m_Camera.GetCameraMode() == EDCamera::SOFT_ATTACH )
		{	
			if( GetAsyncKeyState( 'Q' ) & 0x0001 )
				++zoom;
			if( GetAsyncKeyState( 'E' ) & 0x0001 )
				--zoom;

			zoom = max( 0, min( 5, zoom ) );
		}

		m_Camera.m_OffsetVec = vec3f( 0.0f, 0.25f, -1.0f ) * zoom;

		if( (m_Camera.GetCameraMode() == EDCamera::HARD_ATTACH || m_Camera.GetCameraMode() == EDCamera::SOFT_ATTACH) && GetAsyncKeyState( VK_RBUTTON ) )
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

		float moveScalar = 10.5f;

		if( bGrounded )
		{
			m_TestVelocity.make_zero();
			
			vec3f zFlat = m_GunMatrix.axis_z;
			zFlat.y = 0.0f;
			zFlat.normalize(); 

			if( GetAsyncKeyState( 'W' ) )
			{
				m_TestVelocity += zFlat * fTimeElapsed * moveScalar;
			}
			if( GetAsyncKeyState( 'S' ) )
			{
				m_TestVelocity -= zFlat * fTimeElapsed * moveScalar;
			}
			if( GetAsyncKeyState( 'A' ) )
			{
				m_TestVelocity += m_GunMatrix.axis_x * fTimeElapsed * moveScalar;
			}
			if( GetAsyncKeyState( 'D' ) )
			{
				m_TestVelocity -= m_GunMatrix.axis_x * fTimeElapsed * moveScalar;
			}

			if( GetAsyncKeyState( VK_SPACE ) & 0x0001 )
				m_TestVelocity.y += 0.5f;
		}

		if( bGrounded == false )
			m_TestVelocity.y -= m_TestRadius * fTimeElapsed * moveScalar;

		if( dot_product( m_TestVelocity, m_TestVelocity ) > 25.0f )
		{
			m_TestVelocity.normalize();
			m_TestVelocity *= 5.0f;
		}

		float fPartialLength = min( 1.0f, fTimeElapsed * moveScalar );
		vec3f partialMove = m_TestVelocity * fPartialLength;
		float vTransSq = partialMove.magnitude();

		BoxAndList tempBoxAndList;

		vec3f p0 = m_GunMatrix.axis_pos;
		vec3f q0 = m_GunMatrix.axis_pos - m_GunMatrix.axis_y * cylinderLength;

		tempBoxAndList.m_aabb.max.x = max( p0.x + vTransSq + m_TestRadius, q0.x + vTransSq + m_TestRadius );
		tempBoxAndList.m_aabb.max.y = max( p0.y + vTransSq + m_TestRadius, q0.y + vTransSq + m_TestRadius );
		tempBoxAndList.m_aabb.max.z = max( p0.z + vTransSq + m_TestRadius, q0.z + vTransSq + m_TestRadius );

		tempBoxAndList.m_aabb.min.x = min( p0.x - (vTransSq + m_TestRadius), q0.x - (vTransSq + m_TestRadius) );
		tempBoxAndList.m_aabb.min.y = min( p0.y - (vTransSq + m_TestRadius), q0.y - (vTransSq + m_TestRadius) );
		tempBoxAndList.m_aabb.min.z = min( p0.z - (vTransSq + m_TestRadius), q0.z - (vTransSq + m_TestRadius) );

		m_pBVH->Traverse( AABBIntersectCallback, &tempBoxAndList );

		vec3f vEnd = m_GunMatrix.axis_pos;

		// Are we trying to move more than some minimum amount?
		if( dot_product( partialMove, partialMove ) >= FLT_EPSILON )
		{
			//Translate..
			vEnd += partialMove;

			//Test for collision and react
			unsigned int iResult = CapsuleToTrianglesReaction( vEnd, vEnd - vec3f( 0.0f, cylinderLength, 0.0f), m_TestRadius,
													tempBoxAndList.m_meshList, vEnd );
			//Update to the new position
			m_GunMatrix.axis_pos = vEnd;

			if( iResult != AC_NO_COLLISION )
				m_TestVelocity -= partialMove;

			// If there was a collision with the ground, then allow input based movement
			if( (iResult & AC_GROUND_COLLISION) == AC_GROUND_COLLISION )
				bGrounded = true;
			else
				bGrounded = false;

			// If there was a collision with the ceiling, then stop upward movement
			if( (iResult & AC_CEILING_COLLISION) == AC_CEILING_COLLISION )
				m_TestVelocity.y = min( m_TestVelocity.y, 0.0f);
		}

	// Restore the identity
	glPopMatrix();

	// Swap the buffer
	glutSwapBuffers();

	// Tell glut to render again
	glutPostRedisplay();
}

void EDApp::Initialize(void)
{
	m_GunModel.Load("..\\Content\\raygun.bin", false);

	m_GunMatrix.make_identity();
	m_GunMatrix.rotate_y_pre(3.1415926535f);
	m_GunMatrix.axis_pos = vec3f( 0.0f, 1.5f, 3.0f );
	
	m_TestRadius = 0.1375f;
	
	vec3f gunOffset( -0.0625f, -0.0375f, 0.2f );

	for(unsigned int i = 0; i < m_GunModel.m_Meshes[0].m_Verts.size(); ++i)
	{
		m_GunModel.m_Meshes[0].m_Verts[i].pos *= 0.5f;
		m_GunModel.m_Meshes[0].m_Verts[i].pos += gunOffset;
	}
	
	m_Camera.m_OffsetVec = vec3f( 0.0f, 0.0f, 0.0f );
	m_Camera.m_pTargetMat = &m_GunMatrix;

	glEnableClientState( GL_VERTEX_ARRAY );
	glEnableClientState( GL_NORMAL_ARRAY  );
	glEnableClientState( GL_TEXTURE_COORD_ARRAY );
	
	glEnable(GL_BLEND);
	glDepthFunc(GL_LEQUAL);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	GLfloat amb[] = { 0.25f, 0.25f, 0.25f, 0.0f };
	glLightfv( GL_LIGHT0, GL_AMBIENT, amb );


	m_pBVH = new ED2BVH("..\\Content\\temple.BVH");
	m_TestVelocity.make_zero();

	BMPFile rockTex("..\\Content\\rock1024.bmp" );
	glGenTextures( 3, m_TexIDs );
	glBindTexture( GL_TEXTURE_2D, m_TexIDs[0] );  
	glTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexImage2D( GL_TEXTURE_2D, 0, 3, (GLsizei)rockTex.GetWidth(), (GLsizei)rockTex.GetHeight(), 0, GL_BGR, GL_UNSIGNED_BYTE, rockTex.GetPixelData() );

	m_Timer.Reset();
}

void EDApp::Shutdown(void)
{
	delete m_pBVH;
}
	