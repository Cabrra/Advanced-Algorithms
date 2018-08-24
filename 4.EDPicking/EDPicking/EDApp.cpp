#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "extgl.h"

#include "BMPFile.h"
#include "EDDefault.h"

#ifndef FLT_EPSILON
#define FLT_EPSILON     1.192092896e-07F
#endif

extern HWND ghMainWnd;

void DrawGround(void);
void DrawAxes(float fScale = 1.0f);

// Controls:
//
// Right Mouse Button - Control the camera with the mouse-look and WASD
// Left Mouse Button - Pick a triangle from the terrain

// TODO : Implement the LineSegment2Triangle function
//
// This function takes a line segment and a list of triangles to perform the line-to-triangle intersection algorithm with.
// This implementation should find the intersecting triangle nearest to the start of the line.
//
// Return : 
//		bool - True if there was an intersection, false if not.
//
// In:
//		EDTriangle *pTris - pointer to the list of triangles
//		unsigned int uiTriCounnt - the number of triangles in the list
//		const vec3f &vStart - the start of the line segment
//		const vec3f &vEnd - the end of the line segment
//
// Out:
//		vec3f &vOut - stores the collision point
//		unsigned int &uiTriIndex - stores the index in the list of the intersected triangle
bool LineSegment2Triangle( vec3f &vOut, unsigned int &uiTriIndex, EDTriangle *pTris, unsigned int uiTriCount, const vec3f &vStart, const vec3f &vEnd )
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

		vec3f myvector = CP -  pTris[i].m_Vertices[1];
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
	/*Reminder: Find the NEAREST interesecting triangle*/
	if (uiTriIndex == -1)
		return false;
	else
		return true;
}

// TODO : Implement picking
//
// Picking is a method often used for selecting objects in a scene using the mouse or other cursor device.
// Graphics APIs sometimes implement methods for picking, such as the OpenGL name stack. However these methods
// are largely API specific, can incur significant performance costs, and are often limited to selecting only rendered
// geometry in the scene. The general method we will be implementing can be used across APIs and can be used to select
// objects based on non-rendered collision volumes.
//
// The most fundamental aspect of picking is the idea of reversing the process that transforms a point in the scene to the screen.
// Given a point in the 3D scene, to transform it into the 2D screen space for rendering we transform it by the modelview matrix
// and the projection matrix and then translate it into screen space using the viewport values. Picking reverses this process by taking a
// point in screen space and then translating it into client space and transforming it by the inverse of the modelview and projection matrices.
void EDApp::Pick(void)
{
	// For this example of picking we will be creating a line segment at the mouse position
	// that starts on the near-clip plane and ends on the far-clip, so we will need a start point and end point.


	// We will need the current mouse position.
	// On the Windows platform we can use GetCursorPos(...) to retrieve it.

	// We need to translate the current mouse position from screen space to client space,
	// or from relative to the screen to relative to the window.
	// On the Windows platform we can use ScreenToClient(...) to do this.


	// We now need three sets of values to transform our 2D point in the client into a 3D point in the scene.
	// We will need the viewport, the modelview matrix, and the projection matrix.
	//
	// If we don't already have these values available, methods for retrieving them will be API specific.
	// 
	// Retrieving the viewport
	//		OpenGL		:	glGetIntegerv( GL_VIEWPORT, ... )
	//      Direct3D(9) :	IDirect3DDevice9::GetViewPort(...)
	//
	// Retrieving the modelview matrix
	//		OpenGL		:	glGetDoublev( GL_MODELVIEW_MATRIX, ... )
	//		Direct3D(9)	:	IDirect3DDevice9::GetTransform( D3DTS_WORLDMATRIX, ... )
	//						IDirect3DDevice9::GetTransform( D3DTS_VIEW, ... )
	//						( D3D stores the world matrix and view matrices seperately, instead of as one modelview matrix )
	//
	//	Retrieving the projection matrix
	//		OpenGL		:	glGetDoublev( GL_PROJECTION_MATRIX, ... )
	//		Direct3D(9) :	IDirect3DDevice9::GetTransform( D3DTS_PROJECTION, ... )


	// OpenGL Specific:
	// Windows coordinates start with (0,0) at the top left, while OpenGL coordinates
	// start at the bottom left. To account for this, we subtract the Y-coordinate of the
	// client-space mouse position from the height component of the viewport to find
	// the new client-space Y-coordinate.


	// We now have a 2D point in client space to convert to a 3D point in client space.
	// But how do we get 3 values (X, Y, Z) from two (ScreenX, ScreenY)? Basically, we can't.
	// We will need a third value that tells us the distance, or depth, of the of the 2D
	// point in client space we are picking. Our third value will need to be in the range
	// of 0.0 to 1.0, 0.0 being on the near-plane and 1.0 being on the far-plane.
	//
	// If we wanted to know the exact depth of the point at which we clicked, we can read
	// a value from the depth buffer. You can do this in OpenGL with glReadPixels(...)
	//
	// However for this example, we will simply be finding points on the near-plane and
	// on the far-plane, so we will use values of 0.0 and 1.0.

	// To do the actual reverse transformation to find the 3D point in the scene,
	// API specific methods are available to us.
	//
	//		OpenGL (GL utility library) :	gluUnProject(...)
	//		Direct3D(9)					:	D3DXVec3Unproject(...)
	//
	// We are finding two points for our line-segment, so we will have to Unproject twice.

	// We should now have two points in our scene for a line segment.
	// Use the GetTriangles(...) function to retrieve the triangles in the BVH that are "near"
	// the line segment. 
	// GetTriangles() dynamically allocates memory which you must clean up with the "delete[]" operator

	// Use the LineSegment2Triangle(...) function to iterate through the list of triangles
	// to find the nearest triangle that intersects with the line segment.

	// Render the intersecting triangle.
	// ADDENDUM : Render a red sphere with a radius of 0.1f, centered at the collision point.

	/*
	glColor3f(...);				
	glVertexPointer(3, GL_FLOAT, 0, ...);
	glDrawArrays(GL_TRIANGLES, 0, (GLsizei)3);

	glPushMatrix();
	{
		glColor3f(...);	
		glTranslatef(...);
		GLUquadric *pSphere = gluNewQuadric();
		gluSphere(pSphere, 0.1f, 26, 13);
		gluDeleteQuadric(pSphere);
	}
	glPopMatrix();
	*/

	POINT myMouse;

	GetCursorPos(&myMouse);
	ScreenToClient(ghMainWnd, &myMouse);

	GLdouble ModelMatrix[16];
	glGetDoublev(GL_MODELVIEW_MATRIX, ModelMatrix);
	GLdouble ProjMatrix[16];
	glGetDoublev(GL_PROJECTION_MATRIX, ProjMatrix);
	GLint Viewport[4];
	glGetIntegerv(GL_VIEWPORT, Viewport);

	myMouse.y = Viewport[3] - myMouse.y;

	GLdouble nearX, nearY, nearZ, farX, farY, farZ;

	int nearP = gluUnProject(myMouse.x, myMouse.y, 0.0, ModelMatrix, ProjMatrix, Viewport, &nearX, &nearY, &nearZ);
	int farP = gluUnProject(myMouse.x, myMouse.y, 1.0, ModelMatrix, ProjMatrix, Viewport, &farX, &farY, &farZ);

	vec3f nearVec;
	nearVec.x = (float)nearX;
	nearVec.y = (float)nearY;
	nearVec.z = (float)nearZ;

	vec3f farVec;
	farVec.x = (float)farX;
	farVec.y = (float)farY;
	farVec.z = (float)farZ;

	EDTriangle *mytriangles;
	unsigned int myCount;
	GetTriangles(&mytriangles, &myCount, nearVec, farVec);

	vec3f myOut;
	unsigned int myindex;
	if (LineSegment2Triangle(myOut, myindex, mytriangles, myCount, nearVec, farVec))
	{
		glColor3f(0.3f, 0.7f, 0.2f);
		glVertexPointer(3, GL_FLOAT, 0, (GLvoid*)&mytriangles[myindex].m_Vertices[0]);
		glDrawArrays(GL_TRIANGLES, 0, (GLsizei)3);

		glPushMatrix();
		{
			glColor3f(0.7f, 0.2f, 0.8f);
			glTranslatef(myOut.x, myOut.y, myOut.z);
			GLUquadric *pSphere = gluNewQuadric();
			gluSphere(pSphere, 0.1f, 26, 13);
			gluDeleteQuadric(pSphere);
		}
		glPopMatrix();
	}
	delete[] mytriangles;



}

void EDApp::Update(void)
{
	// Get the elapsed seconds since the last frame
	float fTimeElapsed = m_Timer.GetElapsedTime() * 4.0f;
	m_Timer.Reset();

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

		#if 1 // Render the terrain or don't render the terrain
				glPushMatrix();
					glBindTexture( GL_TEXTURE_2D, m_TerTex );
					glColor3f( 1.0f, 1.0f, 1.0f );
				
					glEnable( GL_TEXTURE_2D );

					glVertexPointer( 3, GL_FLOAT, 0, m_verts[0].v );
					glNormalPointer( GL_FLOAT, 0, m_norms[0].v );
					glTexCoordPointer( 2, GL_FLOAT, 0, &m_uvs[0].s );

					glDrawArrays( GL_TRIANGLES, 0, (GLsizei)m_verts.size() );
					glDisable( GL_TEXTURE_2D );
				glPopMatrix();
		#endif

		if( GetAsyncKeyState( VK_LBUTTON ) )
			Pick();

		// Draw the world's coordinate axes
		glDisable(GL_LIGHTING);
			glDepthMask( 0 );
				glColor3f( 0.0f, 0.5f, 0.0f );
				DrawGround();
			glDepthMask( 1 );
			DrawAxes();
		glEnable(GL_LIGHTING);

	// Restore the identity
	glPopMatrix();
}

void EDApp::Initialize(void)
{
	m_CameraFrame.GetLocalMat().make_identity();
	m_CameraFrame.GetLocalMat().axis_pos = vec3f( 0.0f, 10.0f, 10.0f );
	EDLookAt( m_CameraFrame.GetLocalMat(), vec3f( 0.0f, 0.0f, 0.0f ) );
	m_CameraFrame.Update();

	m_Camera.SetFrame( &m_CameraFrame );

	BMPFile terrainTex( "tempgrass2.bmp" );
	glGenTextures( 1, &m_TerTex );
	glBindTexture( GL_TEXTURE_2D, m_TerTex );
	glTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
	glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR );
	glTexImage2D( GL_TEXTURE_2D, 0, 3, (GLsizei)terrainTex.GetWidth(), (GLsizei)terrainTex.GetHeight(), 0, GL_BGR, GL_UNSIGNED_BYTE, terrainTex.GetPixelData() ); 

	size_t rowCount;

	FILE *pTerrainFile = fopen( "terrain.bin", "rb" );

	glEnable( GL_VERTEX_ARRAY );
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

	m_Timer.Reset();

	GLfloat noLight[4] = { 0.0f, 0.0f, 0.0f, 1.0f };
	GLfloat fullLight[4] = { 1.0f, 1.0f, 1.0f, 1.0f };

	// Set the color that the screen will be cleared with
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc( GL_LEQUAL );

	// Set up our lighting
	// The last value of one makes this a position, instead of a direction
	GLfloat lightPos[] = {0.0f, 0.0f, 0.0f, 1.0f};
	
	// The light the spot light will point
	GLfloat lightDir[] = {0.0f, 0.0f, -1.0f, 1.0f};
	// Now the three properties of light
	glLightfv(GL_LIGHT0, GL_AMBIENT, noLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, fullLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, fullLight);
	// Setting the position of the light here will make it and offset from the camera
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);

	// Globaly enable lighting
	glEnable(GL_LIGHTING);
	// Enable the one light we are currently using
	glEnable(GL_LIGHT0);
	// Turn off global light
	//glLightModelfv(GL_LIGHT_MODEL_AMBIENT, noLight);	
	// Set up coloring with lighting
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);

	// Set up a shiny material
	glMateriali(GL_FRONT, GL_SHININESS, 20);

	glCullFace( GL_BACK );
	glEnable( GL_CULL_FACE );

	glEnableClientState( GL_VERTEX_ARRAY );
	glEnableClientState( GL_NORMAL_ARRAY  );
	glEnableClientState( GL_TEXTURE_COORD_ARRAY );

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
	glDeleteTextures( 1, &m_TerTex );

	// Deleting the tree is causing an assert. Possibly due to an error in the EDBVTree library
	//delete m_pBVTree;
}

// Renders a grid
void DrawGround(void)
{
	GLfloat halfSize = 20.0f;
	GLfloat stepSize = 0.5f;
	GLfloat groundLevel = 0.0f;

	glBegin(GL_LINES);
	for(GLfloat x = -halfSize; x <= halfSize; x+= stepSize)
	{
		// These lines horizontal
		glVertex3f(-halfSize, groundLevel, x);
		glVertex3f(halfSize, groundLevel, x);
		// These lines vertical
		glVertex3f(x, groundLevel, -halfSize);
		glVertex3f(x, groundLevel, halfSize);
	}
	glEnd();
}

void DrawAxes(float fScale)
{
	//glDisable( GL_DEPTH_TEST );
	glDepthMask( 0 );
	glBegin(GL_LINES);
		glColor3f( 1.0f, 0.0f, 0.0f );
		glVertex3f( 0.0f, 0.0f, 0.0f );
		glVertex3f( fScale, 0.0f, 0.0f );

		glColor3f( 0.0f, 1.0f, 0.0f );
		glVertex3f( 0.0f, 0.0f, 0.0f );
		glVertex3f( 0.0f, fScale, 0.0f );

		glColor3f( 0.0f, 0.0f, 1.0f );
		glVertex3f( 0.0f, 0.0f, 0.0f );
		glVertex3f( 0.0f, 0.0f, fScale );
	glEnd();
	//glEnable( GL_DEPTH_TEST );
	glDepthMask( 1 );
}
	