#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
//#include "extgl.h"

#include "EDDefault.h"

#include "../CollisionLibrary/CollisionLibrary.h"

#include "../CapsuleSphereLab/EDCommon.h"

#ifndef FLT_EPSILON
#define FLT_EPSILON     1.192092896e-07F
#endif

extern HWND ghMainWnd;

void DrawGround(void);
void DrawAxes(float fScale = 1.0f);

void TransformPoint(vec3f& p, const matrix4f& mat)
{
	vec3f out;
	out.x = p.x * mat.xx + p.y * mat.yx + p.z * mat.zx + mat.wx;
	out.y = p.x * mat.xy + p.y * mat.yy + p.z * mat.zy + mat.wy;
	out.z = p.x * mat.xz + p.y * mat.yz + p.z * mat.zz + mat.wz;
	p = out;
}

void TransformVector(vec3f& p, const matrix4f& mat)
{
	vec3f out;
	out.x = p.x * mat.xx + p.y * mat.yx + p.z * mat.zx;
	out.y = p.x * mat.xy + p.y * mat.yy + p.z * mat.zy;
	out.z = p.x * mat.xz + p.y * mat.yz + p.z * mat.zz;
	p = out;
}

void DrawPolygon(const vec3f* pVerts, unsigned int vertCount)
{
	Plane polygonPlane;
	ComputePlane( polygonPlane, pVerts[0], pVerts[1], pVerts[2] );

	vec3f centroid(0.0f, 0.0f, 0.0f);

	glLineWidth( 3.0f );
	glDisable(GL_CULL_FACE);
	glDisable(GL_LIGHTING);
	glDisable( GL_BLEND );
		glBegin( GL_LINE_LOOP );
			for(unsigned int i = 0; i < vertCount; ++i)
			{
				glVertex3fv( pVerts[i].v );
				centroid += pVerts[i];
			}
			centroid *= (1.0f / vertCount);
		glEnd();

		glPushAttrib(GL_CURRENT_BIT);
		glBegin( GL_LINES );
			glColor3f( 0.0f, 0.0f, 1.0f );
			glVertex3fv( centroid.v );
			glColor3f( 1.0f, 1.0f, 1.0f );
			glVertex3fv( (centroid + polygonPlane.normal).v );
		glEnd();
		glPopAttrib();

	glDepthMask(0);
	glEnable( GL_BLEND );
		glBegin( GL_POLYGON );
			for(unsigned int i = 0; i < vertCount; ++i)
				glVertex3fv( pVerts[i].v );
		glEnd();
	glDepthMask(1);
	glEnable(GL_LIGHTING);
	glEnable(GL_CULL_FACE);

	//glLineWidth(1.0f);
}

void DrawPlane(const Plane& plane, const vec3f* pPlanePoint = 0)
{
	vec3f tangent;
	cross_product( tangent, worldY, plane.normal );

	if( dot_product( tangent, tangent ) < 0.01f )
		cross_product( tangent, plane.normal, worldX );

	vec3f bitangent;
	cross_product( bitangent, plane.normal, tangent );

	tangent.normalize();
	bitangent.normalize();

	vec3f planePoint;
	if( pPlanePoint == 0 )
		planePoint = plane.normal * plane.offset;
	else
		planePoint = *pPlanePoint;

	float planeExtent = 50.0f;

	vec3f points[4];
	points[0] = planePoint +  tangent * planeExtent + bitangent * planeExtent;
	points[1] = planePoint +  tangent * -planeExtent + bitangent * planeExtent;
	points[2] = planePoint +  tangent * -planeExtent + bitangent * -planeExtent;
	points[3] = planePoint +  tangent * planeExtent + bitangent * -planeExtent;

	glColor4f( 1.0f, 1.0f, 0.0f, 0.25f );
	DrawPolygon( points, 4 );

	glLineWidth( 3.0f );
	glDisable(GL_CULL_FACE);
	glDisable(GL_LIGHTING);
	glDisable( GL_BLEND );

	for(int j = (int)(-(planeExtent - 5.0f)); j < (int)planeExtent; j += 5)
	{
		glBegin(GL_LINES);
			glVertex3fv( (((tangent * (float)j) + bitangent * planeExtent) + planePoint).v );
			glVertex3fv( (((tangent * (float)j) + bitangent * -planeExtent) + planePoint).v );
			glVertex3fv( (((bitangent * (float)j) + tangent * planeExtent) + planePoint).v );
			glVertex3fv( (((bitangent * (float)j) + tangent * -planeExtent) + planePoint).v );
		glEnd();
	}

	glLineWidth(1.0f);
	glEnable(GL_CULL_FACE);
	glEnable(GL_LIGHTING);
	glEnable(GL_BLEND);
}

void DrawCapsule(const Capsule &capsule)
{
	GLUquadric *pQuadric = gluNewQuadric();

	vec3f diff = capsule.m_Segment.m_End - capsule.m_Segment.m_Start;
	float length = diff.magnitude();
	diff *= (1.0f / length );

	matrix4f capMat;
	capMat.make_identity();
	capMat.axis_pos = capsule.m_Segment.m_Start;
	capMat.axis_z = diff;

	cross_product( capMat.axis_x, vec3f(0.0f, 1.0f, 0.0f), capMat.axis_z );

	float xsq = dot_product( capMat.axis_x, capMat.axis_x );
	if(	xsq < 0.01f )
	{
		cross_product( capMat.axis_y, capMat.axis_z, vec3f(1.0f, 0.0f, 0.0f) );
		cross_product( capMat.axis_x, capMat.axis_y, capMat.axis_z );

		capMat.axis_y.normalize();
		capMat.axis_x.normalize();
	}
	else
	{
		cross_product( capMat.axis_y, capMat.axis_z, capMat.axis_x );

		capMat.axis_y.normalize();
		capMat.axis_x.normalize();		
	}

	glPushMatrix();
		glMultMatrixf( capMat.ma );
		gluSphere( pQuadric, capsule.m_Radius, 15, 15 );
		glPushMatrix();
			glTranslatef( 0.0f, 0.0f,  length );
			gluSphere( pQuadric, capsule.m_Radius, 15, 15 );
		glPopMatrix();
		gluCylinder( pQuadric, capsule.m_Radius, capsule.m_Radius, length, 15, 15 );
	glPopMatrix();

	gluDeleteQuadric(pQuadric);
}

void DrawSphere(const Sphere &sphere)
{
	GLUquadric *pQuadric = gluNewQuadric();

	glPushMatrix();
		glTranslatef( sphere.m_Center.x, sphere.m_Center.y, sphere.m_Center.z );
		gluSphere( pQuadric, sphere.m_Radius, 10, 10 );
	glPopMatrix();

	gluDeleteQuadric(pQuadric);
}

void DrawAABB(const AABB& aabb)
{
	glBegin( GL_QUADS );
		glNormal3f( 0.0f, 0.0f, 1.0f );
		glVertex3fv( aabb.max.v );
		glVertex3f( aabb.min.x, aabb.max.y, aabb.max.z );
		glVertex3f( aabb.min.x, aabb.min.y, aabb.max.z );
		glVertex3f( aabb.max.x, aabb.min.y, aabb.max.z );

		glNormal3f( 0.0f, 0.0f, -1.0f );
		glVertex3f( aabb.min.x, aabb.max.y, aabb.min.z );
		glVertex3f( aabb.max.x, aabb.max.y, aabb.min.z );
		glVertex3f( aabb.max.x, aabb.min.y, aabb.min.z );
		glVertex3fv( aabb.min.v );

		glNormal3f( 1.0f, 0.0f, 0.0f );
		glVertex3f( aabb.max.x, aabb.min.y, aabb.max.z );
		glVertex3f( aabb.max.x, aabb.min.y, aabb.min.z );
		glVertex3f( aabb.max.x, aabb.max.y, aabb.min.z );
		glVertex3fv( aabb.max.v );

		glNormal3f( -1.0f, 0.0f, 0.0f );
		glVertex3f( aabb.min.x, aabb.min.y, aabb.max.z );
		glVertex3f( aabb.min.x, aabb.max.y, aabb.max.z );
		glVertex3f( aabb.min.x, aabb.max.y, aabb.min.z );
		glVertex3fv( aabb.min.v );

		glNormal3f( 0.0f, 1.0f, 0.0f );
		glVertex3fv( aabb.max.v );
		glVertex3f( aabb.max.x, aabb.max.y, aabb.min.z );
		glVertex3f( aabb.min.x, aabb.max.y, aabb.min.z );
		glVertex3f( aabb.min.x, aabb.max.y, aabb.max.z );

		glNormal3f( 0.0f, -1.0f, 0.0f );
		glVertex3fv( aabb.min.v );
		glVertex3f( aabb.max.x, aabb.min.y, aabb.min.z );
		glVertex3f( aabb.max.x, aabb.min.y, aabb.max.z );
		glVertex3f( aabb.min.x, aabb.min.y, aabb.max.z );
	glEnd();
}


bool AabbPerBoundsFunc(const BoundingVolume* pBounds, TraversalData* pData)
{
	AABB* pAabb = (AABB*)pData->m_pVoid;

	AabbBV* pAabbBV = (AabbBV*)pBounds;

	if( AABBtoAABB( *pAabb, pAabbBV->GetAabb() ) )
	{
		DrawAABB( pAabbBV->GetAabb() );
		return true;
	}

	return false;
}

void AabbPerTriSetFunc(const void* pLeafData, TraversalData* pData)
{
	const TriangleSet* pTriSet = (const TriangleSet*)pLeafData;
	vec3f verts[3];

	for(unsigned int i = 0; i < pTriSet->m_TriIndices.size(); ++i)
	{
		unsigned int indexNumber = pTriSet->m_TriIndices[i] * 3;

		for(unsigned int j = 0; j < 3; ++j)
			verts[j] = pTriSet->m_pMesh->m_Vertices[ pTriSet->m_pMesh->m_VertIndices[ indexNumber + j ] ];
		
		glPushAttrib(GL_CURRENT_BIT);
		glColor3f( 0.0f, 0.0f, 1.0f );
		DrawPolygon( verts, 3 );
		glPopAttrib();
	}
}

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
		m_Camera.Update(fTimeElapsed);
		m_Camera.ApplyCameraTransform();

		// Set LIGHT0's position
		float fPos[4] = { 0.707f, 0.707f, 0.0f, 0.0f };
		glLightfv( GL_LIGHT0, GL_POSITION, fPos );

		vec3f verts[3];
		verts[0] = vec3f( -0.5f, 0.5f, 0.0f );
		verts[1] = vec3f( 0.5f, 0.5f, 0.0f );
		verts[2] = vec3f( 0.0f, -0.366025f, 0.0f );


		// Draw the world's coordinate axes
		glDisable(GL_LIGHTING);
			glDepthMask( 0 );
				glColor3f( 0.0f, 0.5f, 0.0f );
				DrawGround();
			glDepthMask( 1 );
			DrawAxes();
		glEnable(GL_LIGHTING);



		glDisable(GL_LIGHTING);
		glPushMatrix();
			glColor3f( 1.0f, 1.0f, 1.0f );
			glBegin( GL_TRIANGLES );
			for(unsigned int i = 0; i < m_Mesh.m_Vertices.size(); i +=3 )
			{
				glVertex3fv( m_Mesh.m_Vertices[i].v );
				glVertex3fv( m_Mesh.m_Vertices[i + 1].v );
				glVertex3fv( m_Mesh.m_Vertices[i + 2].v );
			}
			glEnd();

		glPopMatrix();

		glPushMatrix();

			glTranslatef( 0.0f, 0.001f, 0.0f );
			glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
			glLineWidth(3.0f);
			glColor3f( 0.0f, 0.0f, 0.0f );
			glBegin( GL_TRIANGLES );
			for(unsigned int i = 0; i < m_Mesh.m_Vertices.size(); i +=3 )
			{
				glVertex3fv( m_Mesh.m_Vertices[i].v );
				glVertex3fv( m_Mesh.m_Vertices[i + 1].v );
				glVertex3fv( m_Mesh.m_Vertices[i + 2].v );
			}
			glEnd();
			glLineWidth(1.0f);
			glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
			
		glPopMatrix();
		glEnable(GL_LIGHTING);


		const unsigned int POINT_COUNT = 200;
		static vec3f points[POINT_COUNT];
		static float radii[POINT_COUNT];
		static float bounceMultiplier[POINT_COUNT];
		static float yOffset[POINT_COUNT];

		static unsigned int DEMO_STATE = 1;
		const float SPHERE_RADIUS = 0.5f;

		bool bResetFrame = false;

		if( GetAsyncKeyState( '1' ) & 0x0001 )
		{
			DEMO_STATE = 1;
		}
		if( GetAsyncKeyState( '2' ) & 0x0001 )
		{
			DEMO_STATE = 2;
		}

		if(GetAsyncKeyState('R'))
			bResetFrame = true;
	
		if( bResetFrame )
		{
			m_ObjectFrame.GetLocalMat().make_identity();
			m_ObjectFrame.Update();
		}

		if(GetAsyncKeyState('W'))
			m_ObjectFrame.GetLocalMat().translate_pre( 0.0f, 0.0f, -fTimeElapsed * 4.0f );
		if(GetAsyncKeyState('S'))
			m_ObjectFrame.GetLocalMat().translate_pre( 0.0f, 0.0f, fTimeElapsed * 4.0f );
		if(GetAsyncKeyState('A'))
			m_ObjectFrame.GetLocalMat().translate_pre( -fTimeElapsed * 4.0f, 0.0f, 0.0f );
		if(GetAsyncKeyState('D'))
			m_ObjectFrame.GetLocalMat().translate_pre( fTimeElapsed * 4.0f, 0.0f, 0.0f );
		if(GetAsyncKeyState('Q'))
			m_ObjectFrame.GetLocalMat().translate_pre( 0.0f, fTimeElapsed * 4.0f, 0.0f );
		if(GetAsyncKeyState('E'))
			m_ObjectFrame.GetLocalMat().translate_pre( 0.0f, -fTimeElapsed * 4.0f, 0.0f );

		m_ObjectFrame.Update();

		switch( DEMO_STATE )
		{
		case 1:
			{
				glPushMatrix();

				AABB objectAABB;
				objectAABB.min = vec3f( -0.5f, 0.0f, -0.5f );
				objectAABB.min += m_ObjectFrame.GetWorldMat().axis_pos;
				objectAABB.max = vec3f( 0.5f, 2.0f, 0.5f );
				objectAABB.max += m_ObjectFrame.GetWorldMat().axis_pos;

				glColor3f( 0.0f, 1.0f, 0.0f );
				DrawAABB(objectAABB);

				TraversalData traversalData;
				traversalData.m_pVoid = &objectAABB;
				traversalData.m_PerLeafDataFunc = AabbPerTriSetFunc;
				traversalData.m_PerBoundsFunc = AabbPerBoundsFunc;

				if( m_pBVH != 0 )
				{
					glTranslatef( 0.0f, 0.01f, 0.0f );
					glDisable( GL_LIGHTING );
					glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
					glLineWidth( 4.0f );
					glColor3f( 1.0f, 0.0f, 0.0f );
				
					list<BVHLeafNodeBase*>::const_iterator leafIter = m_pBVH->GetLeaves().begin();
					for(; leafIter != m_pBVH->GetLeaves().end(); ++leafIter )
					{
						AabbPerBoundsFunc( (*leafIter)->GetBoundingVolume(), &traversalData );	
					}

					glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
					glLineWidth( 1.0f );
					glEnable( GL_LIGHTING );
				}

				glPopMatrix();

			}
			break;
		case 2:
			{
				glPushMatrix();

				AABB objectAABB;
				objectAABB.min = vec3f( -0.5f, 0.0f, -0.5f );
				objectAABB.min += m_ObjectFrame.GetWorldMat().axis_pos;
				objectAABB.max = vec3f( 0.5f, 2.0f, 0.5f );
				objectAABB.max += m_ObjectFrame.GetWorldMat().axis_pos;

				glColor3f( 0.0f, 1.0f, 0.0f );
				DrawAABB(objectAABB);

				TraversalData traversalData;
				traversalData.m_pVoid = &objectAABB;
				traversalData.m_PerLeafDataFunc = AabbPerTriSetFunc;
				traversalData.m_PerBoundsFunc = AabbPerBoundsFunc;

				glTranslatef( 0.0f, 0.01f, 0.0f );
				glDisable( GL_LIGHTING );
				glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
				glLineWidth( 4.0f );
				glColor3f( 1.0f, 0.0f, 0.0f );
				m_pBVH->Traverse( &traversalData );
				glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
				glLineWidth( 1.0f );
				glEnable( GL_LIGHTING );
				glPopMatrix();
			}
			break;
		default:
			break;
		}



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

	glEnable( GL_VERTEX_ARRAY );

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

	glEnable( GL_BLEND );
	glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

	m_ObjectFrame.GetLocalMat().make_identity();
	m_ObjectFrame.Update();

	srand(GetTickCount());

	size_t rowCount;

	FILE *pTerrainFile;
	fopen_s( &pTerrainFile, "terrain.bin", "rb" );

	TriangleSet triangleSet;

	if( pTerrainFile )
	{
		fread( &rowCount, sizeof(size_t), 1, pTerrainFile );

		m_Mesh.m_Vertices.resize( rowCount );

		fread( m_Mesh.m_Vertices[0].v, sizeof( vec3f ), rowCount, pTerrainFile );

		fclose( pTerrainFile );
	}

	vec3f highest = m_Mesh.m_Vertices[0];
	for( unsigned int i = 0; i < m_Mesh.m_Vertices.size(); ++i )
	{
		if( m_Mesh.m_Vertices[i].x > highest.x )
			highest.x = m_Mesh.m_Vertices[i].x;
		if( m_Mesh.m_Vertices[i].y > highest.y )
			highest.y = m_Mesh.m_Vertices[i].y;
		if( m_Mesh.m_Vertices[i].z > highest.z )
			highest.z = m_Mesh.m_Vertices[i].z;

		m_Mesh.m_VertIndices.push_back(i);
	}

	highest.x *= 0.5f;
	highest.z *= 0.5f;
	for( unsigned int i = 0; i < m_Mesh.m_Vertices.size(); ++i )
	{
		m_Mesh.m_Vertices[i] -= highest;
	}

	for(unsigned int i = 0, j = 0; i < m_Mesh.m_VertIndices.size(); i += 3, ++j)
	{
		triangleSet.m_TriIndices.push_back( j );
		vec3f centroid(0.0f, 0.0f, 0.0f);
		for(unsigned int v = 0; v < 3; ++v)
		{
			centroid += m_Mesh.m_Vertices[ m_Mesh.m_VertIndices[i] + v ];
		}

		centroid *= (1.0f/3.0f);

		m_Mesh.m_Centroids.push_back( centroid );

		vec3f norm;
		cross_product( norm, m_Mesh.m_Vertices[ m_Mesh.m_VertIndices[i] + 1] - m_Mesh.m_Vertices[ m_Mesh.m_VertIndices[i] ], m_Mesh.m_Vertices[ m_Mesh.m_VertIndices[i] + 2] - m_Mesh.m_Vertices[ m_Mesh.m_VertIndices[i] +1] );
		norm.normalize();
		m_Mesh.m_TriNormals.push_back( norm );
	}

	triangleSet.m_pMesh = &m_Mesh;

	vector<int> temp;
	temp.push_back( -10 );
	temp.push_back( 20 );
	temp.push_back( 5 );
	temp.push_back( 7 );
	temp.push_back( 9 );
	temp.push_back( -13 );
	temp.push_back( -25 );
	temp.push_back( 0 );

	m_pBVH = TriSetBVHLeaf::CreateBVH( triangleSet, BV_AABB );

	return;
}

void EDApp::Shutdown(void)
{
	delete m_pBVH;
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
	