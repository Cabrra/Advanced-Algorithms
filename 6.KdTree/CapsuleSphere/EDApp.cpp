#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
//#include "extgl.h"

#include "EDDefault.h"

#include "../CollisionLibrary/CollisionLibrary.h"

#include "../CapsuleSphere/EDCommon.h"

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

	glLineWidth(1.0f);
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

bool DrawLeafBounds(KdTreeLeafNode* pNode, TraversalData* pData)
{
	FrustumAABB* pFrustumAABB = (FrustumAABB*)pData->m_pVoid;
	
	if( FrustumToAABB( *pFrustumAABB->m_Frustum, pNode->GetBounds() ) )
	{
		glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
		glColor3f( 1.0f, 1.0f, 1.0f );
		glDisable( GL_LIGHTING );
		glLineWidth(2.0f);
		DrawAABB( pNode->GetBounds() );
		glLineWidth(1.0f);
		glEnable( GL_LIGHTING );
		glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );

		return true;
	}

	return false;
}

void DrawSceneObjects(SceneObject* pObject, TraversalData* pData)
{
	FrustumAABB* pFrustumAABB = (FrustumAABB*)pData->m_pVoid;
	
	if( FrustumToSphere( *pFrustumAABB->m_Frustum, pObject->GetBounds() ) )
	{
		glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
		glColor3f( 0.0f, 1.0f, 0.0f );
	}
	else
	{
		glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
		glColor3f( 1.0f, 1.0f, 0.0f );
	}

	DrawSphere( pObject->GetBounds() );
	glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
}

bool FrustumTestLeafBounds(KdTreeLeafNode* pNode, TraversalData* pData)
{
	FrustumAABB* pFrustumAABB = (FrustumAABB*)pData->m_pVoid;
	
	return FrustumToAABB( *pFrustumAABB->m_Frustum, pNode->GetBounds() );
}

void DrawSceneObjectsVisible(SceneObject* pObject, TraversalData* pData)
{
	FrustumAABB* pFrustumAABB = (FrustumAABB*)pData->m_pVoid;
	
	if( FrustumToSphere( *pFrustumAABB->m_Frustum, pObject->GetBounds() ) )
	{
		glColor3f( 0.0f, 1.0f, 0.0f );
		DrawSphere( pObject->GetBounds() );
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
		if( GetAsyncKeyState( '3' ) & 0x0001 )
		{
			DEMO_STATE = 3;
		}
		if( GetAsyncKeyState( '4' ) & 0x0001 )
		{
			DEMO_STATE = 4;
		}
		if( GetAsyncKeyState( '5' ) & 0x0001 )
		{
			DEMO_STATE = 5;
		}
		if( GetAsyncKeyState( '0' ) & 0x0001 )
		{
			DEMO_STATE = 0;
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
			m_ObjectFrame.GetLocalMat().rotate_y_pre( fTimeElapsed * 4.0f );
		if(GetAsyncKeyState('D'))
			m_ObjectFrame.GetLocalMat().rotate_y_pre( -fTimeElapsed * 4.0f );
		if(GetAsyncKeyState('Q'))
			m_ObjectFrame.GetLocalMat().rotate_x_pre( fTimeElapsed * 4.0f );
		if(GetAsyncKeyState('E'))
			m_ObjectFrame.GetLocalMat().rotate_x_pre( -fTimeElapsed * 4.0f );

		m_ObjectFrame.Update();

		m_TestSceneObject.GetBounds().m_Center = m_ObjectFrame.GetWorldMat().axis_pos;
		m_KdTree->Update();

		for(unsigned int i = 0; i < 3; ++i)
		{
			TransformPoint( verts[i], m_ObjectFrame.GetWorldMat() );
		}

		Plane tempPlane;
		ComputePlane( tempPlane, verts[0], verts[1], verts[2] );
		vec3f cntrd = (verts[0] + verts[1] + verts[2]) * (1.0f / 3.0f);

		switch( DEMO_STATE )
		{
		case 0:
			{
				Frustum frustum;
				BuildFrustum( frustum, 0.785398163f, 1.0f, 10.0f, 1.0f, m_ObjectFrame.GetWorldMat() );

				glColor3f( 1.0f, 1.0f, 1.0f );
								
				FrustumAABB frustumBox( &frustum );
				TraversalData traversalData;
				traversalData.m_pVoid = &frustumBox;
				traversalData.m_PerSplitFunc = FrustumAABB::FrustumAABBtoSplit;
				traversalData.m_PerLeafFunc = DrawLeafBounds;
				traversalData.m_PerObjectFunc = DrawSceneObjects;

				for(unsigned int i = 0; i < SCENE_OBJ_COUNT; ++i)
				{
					DrawSceneObjects( &m_SceneObjects[i], &traversalData );
				}

				vec3f nearPoly[4] = { frustum.corners[NBR], frustum.corners[NBL], frustum.corners[NTL], frustum.corners[NTR] };
				vec3f farPoly[4] = { frustum.corners[FBL], frustum.corners[FBR], frustum.corners[FTR], frustum.corners[FTL] };
				vec3f leftPoly[4] = { frustum.corners[NBL], frustum.corners[FBL], frustum.corners[FTL], frustum.corners[NTL] };
				vec3f rightPoly[4] = { frustum.corners[FBR], frustum.corners[NBR], frustum.corners[NTR], frustum.corners[FTR] };
				vec3f topPoly[4] = { frustum.corners[NTR], frustum.corners[NTL], frustum.corners[FTL], frustum.corners[FTR] };
				vec3f bottomPoly[4] = { frustum.corners[NBL], frustum.corners[NBR], frustum.corners[FBR], frustum.corners[FBL] };

				glColor4f( 1.0f, 0.0f, 0.0f, 0.25f );
				DrawPolygon( nearPoly, 4 );
				DrawPolygon( farPoly, 4 );
				DrawPolygon( leftPoly, 4 );
				DrawPolygon( rightPoly, 4 );
				DrawPolygon( topPoly, 4 );
				DrawPolygon( bottomPoly, 4 );
			}
			break;
		case 1:
			{
				Frustum frustum;
				BuildFrustum( frustum, 0.785398163f, 1.0f, 10.0f, 1.0f, m_ObjectFrame.GetWorldMat() );

				list< KdTreeLeafNode* >::const_iterator leafIter = m_KdTree->GetLeaves().begin();

				glColor3f( 1.0f, 1.0f, 1.0f );
				glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
				glLineWidth(2.0f);
				glDisable(GL_LIGHTING);
				for(; leafIter != m_KdTree->GetLeaves().end(); ++leafIter)
					if( FrustumToAABB( frustum, (*leafIter)->GetBounds() ) )
						DrawAABB( (*leafIter)->GetBounds() );
				glLineWidth(1.0f);
				glEnable(GL_LIGHTING);
				glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );


				vec3f nearPoly[4] = { frustum.corners[NBR], frustum.corners[NBL], frustum.corners[NTL], frustum.corners[NTR] };
				vec3f farPoly[4] = { frustum.corners[FBL], frustum.corners[FBR], frustum.corners[FTR], frustum.corners[FTL] };
				vec3f leftPoly[4] = { frustum.corners[NBL], frustum.corners[FBL], frustum.corners[FTL], frustum.corners[NTL] };
				vec3f rightPoly[4] = { frustum.corners[FBR], frustum.corners[NBR], frustum.corners[NTR], frustum.corners[FTR] };
				vec3f topPoly[4] = { frustum.corners[NTR], frustum.corners[NTL], frustum.corners[FTL], frustum.corners[FTR] };
				vec3f bottomPoly[4] = { frustum.corners[NBL], frustum.corners[NBR], frustum.corners[FBR], frustum.corners[FBL] };

				glColor4f( 1.0f, 0.0f, 0.0f, 0.25f );
				DrawPolygon( nearPoly, 4 );
				DrawPolygon( farPoly, 4 );
				DrawPolygon( leftPoly, 4 );
				DrawPolygon( rightPoly, 4 );
				DrawPolygon( topPoly, 4 );
				DrawPolygon( bottomPoly, 4 );
			}
			break;
		case 2:
			{
				Frustum frustum;
				BuildFrustum( frustum, 0.785398163f, 1.0f, 10.0f, 1.0f, m_ObjectFrame.GetWorldMat() );

				FrustumAABB frustumBox( &frustum );
				TraversalData traversalData;
				traversalData.m_pVoid = &frustumBox;
				traversalData.m_PerSplitFunc = FrustumAABB::FrustumAABBtoSplit;
				traversalData.m_PerLeafFunc = DrawLeafBounds;
				
				m_KdTree->Traverse( &traversalData );

				vec3f nearPoly[4] = { frustum.corners[NBR], frustum.corners[NBL], frustum.corners[NTL], frustum.corners[NTR] };
				vec3f farPoly[4] = { frustum.corners[FBL], frustum.corners[FBR], frustum.corners[FTR], frustum.corners[FTL] };
				vec3f leftPoly[4] = { frustum.corners[NBL], frustum.corners[FBL], frustum.corners[FTL], frustum.corners[NTL] };
				vec3f rightPoly[4] = { frustum.corners[FBR], frustum.corners[NBR], frustum.corners[NTR], frustum.corners[FTR] };
				vec3f topPoly[4] = { frustum.corners[NTR], frustum.corners[NTL], frustum.corners[FTL], frustum.corners[FTR] };
				vec3f bottomPoly[4] = { frustum.corners[NBL], frustum.corners[NBR], frustum.corners[FBR], frustum.corners[FBL] };

				glColor4f( 1.0f, 0.0f, 0.0f, 0.25f );
				DrawPolygon( nearPoly, 4 );
				DrawPolygon( farPoly, 4 );
				DrawPolygon( leftPoly, 4 );
				DrawPolygon( rightPoly, 4 );
				DrawPolygon( topPoly, 4 );
				DrawPolygon( bottomPoly, 4 );
			}
			break;
		case 3:
			{
				Frustum frustum;
				BuildFrustum( frustum, 0.785398163f, 1.0f, 10.0f, 1.0f, m_ObjectFrame.GetWorldMat() );

				FrustumAABB frustumBox( &frustum );
				TraversalData traversalData;
				traversalData.m_pVoid = &frustumBox;
				traversalData.m_PerSplitFunc = FrustumAABB::FrustumAABBtoSplit;
				traversalData.m_PerLeafFunc = DrawLeafBounds;
				traversalData.m_PerObjectFunc = DrawSceneObjects;
				
				m_KdTree->Traverse( &traversalData );

				vec3f nearPoly[4] = { frustum.corners[NBR], frustum.corners[NBL], frustum.corners[NTL], frustum.corners[NTR] };
				vec3f farPoly[4] = { frustum.corners[FBL], frustum.corners[FBR], frustum.corners[FTR], frustum.corners[FTL] };
				vec3f leftPoly[4] = { frustum.corners[NBL], frustum.corners[FBL], frustum.corners[FTL], frustum.corners[NTL] };
				vec3f rightPoly[4] = { frustum.corners[FBR], frustum.corners[NBR], frustum.corners[NTR], frustum.corners[FTR] };
				vec3f topPoly[4] = { frustum.corners[NTR], frustum.corners[NTL], frustum.corners[FTL], frustum.corners[FTR] };
				vec3f bottomPoly[4] = { frustum.corners[NBL], frustum.corners[NBR], frustum.corners[FBR], frustum.corners[FBL] };

				glColor4f( 1.0f, 0.0f, 0.0f, 0.25f );
				DrawPolygon( nearPoly, 4 );
				DrawPolygon( farPoly, 4 );
				DrawPolygon( leftPoly, 4 );
				DrawPolygon( rightPoly, 4 );
				DrawPolygon( topPoly, 4 );
				DrawPolygon( bottomPoly, 4 );
			}
			break;
		case 4:
			{
				Frustum frustum;
				BuildFrustum( frustum, 0.785398163f, 1.0f, 10.0f, 1.0f, m_ObjectFrame.GetWorldMat() );

				FrustumAABB frustumBox( &frustum );
				TraversalData traversalData;
				traversalData.m_pVoid = &frustumBox;
				traversalData.m_PerSplitFunc = FrustumAABB::FrustumAABBtoSplit;
				traversalData.m_PerLeafFunc = FrustumTestLeafBounds;
				traversalData.m_PerObjectFunc = DrawSceneObjectsVisible;
				
				m_KdTree->Traverse( &traversalData );

				vec3f nearPoly[4] = { frustum.corners[NBR], frustum.corners[NBL], frustum.corners[NTL], frustum.corners[NTR] };
				vec3f farPoly[4] = { frustum.corners[FBL], frustum.corners[FBR], frustum.corners[FTR], frustum.corners[FTL] };
				vec3f leftPoly[4] = { frustum.corners[NBL], frustum.corners[FBL], frustum.corners[FTL], frustum.corners[NTL] };
				vec3f rightPoly[4] = { frustum.corners[FBR], frustum.corners[NBR], frustum.corners[NTR], frustum.corners[FTR] };
				vec3f topPoly[4] = { frustum.corners[NTR], frustum.corners[NTL], frustum.corners[FTL], frustum.corners[FTR] };
				vec3f bottomPoly[4] = { frustum.corners[NBL], frustum.corners[NBR], frustum.corners[FBR], frustum.corners[FBL] };

				glColor4f( 1.0f, 0.0f, 0.0f, 0.25f );
				DrawPolygon( nearPoly, 4 );
				DrawPolygon( farPoly, 4 );
				DrawPolygon( leftPoly, 4 );
				DrawPolygon( rightPoly, 4 );
				DrawPolygon( topPoly, 4 );
				DrawPolygon( bottomPoly, 4 );
			}
			break;
		case 5:
			{
				m_ObjectFrame.GetLocalMat().axis_pos = m_TestSceneObject.GetBounds().m_Center;
				m_ObjectFrame.Update();

				glColor3f( 1.0f, 1.0f, 1.0f );
				DrawSphere( m_TestSceneObject.GetBounds() );

				for(unsigned int i = 0; i < 8; ++i)
				{
					if( m_TestSceneObject.GetOverlappedLeaves()[i] == 0 )
						continue;

					list<SceneObject*>::const_iterator objIter = m_TestSceneObject.GetOverlappedLeaves()[i]->GetOverlappingObjects().begin();
					for(; objIter != m_TestSceneObject.GetOverlappedLeaves()[i]->GetOverlappingObjects().end(); ++objIter)
					{
						if( (*objIter) == &m_TestSceneObject )
							continue;

						if( SphereToSphere( (*objIter)->GetBounds(), m_TestSceneObject.GetBounds() ) )
						{
							glColor3f( 0.0f, 1.0f, 0.0f );
							glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
						}
						else
						{
							glColor3f( 1.0f, 1.0f, 0.0f );
							glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
						}

						DrawSphere( (*objIter)->GetBounds() );
					}
				}
				glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );

				glDisable(GL_LIGHTING);
				glDisable(GL_DEPTH_TEST);
					glPushMatrix();
						glMultMatrixf( m_ObjectFrame.GetWorldMat().ma );
						DrawAxes( m_TestSceneObject.GetBounds().m_Radius );
					glPopMatrix();
				glEnable(GL_DEPTH_TEST);
				glEnable(GL_LIGHTING);

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

	//srand(GetTickCount());
	srand(0);

	AABB sceneBounds;
	sceneBounds.min = vec3f( -25.0f, -25.0f, -25.0f );
	sceneBounds.max = vec3f( 25.0f, 25.0f, 25.0f );

	m_KdTree = KdTree::CreateTree(sceneBounds); 

	for(unsigned int i = 0; i < SCENE_OBJ_COUNT; ++i)
	{
		float posX = 0.1f * ((rand() % 500) - 250);
		float posY = 0.1f * ((rand() % 500) - 250);
		float posZ = 0.1f * ((rand() % 500) - 250);
		float rad = 0.025f * ((rand() % ((int)(SceneObject::MAX_OBJECT_SIZE * 5.0f))) + (int)(SceneObject::MAX_OBJECT_SIZE * 5.0f)); 

		m_SceneObjects[i].GetBounds().m_Center.x = posX;
		m_SceneObjects[i].GetBounds().m_Center.y = posY;
		m_SceneObjects[i].GetBounds().m_Center.z = posZ;
		m_SceneObjects[i].GetBounds().m_Radius = rad;

		m_KdTree->InsertObject( &m_SceneObjects[i] );
	}

	m_TestSceneObject.GetBounds().m_Radius = SceneObject::MAX_OBJECT_SIZE * 0.5f;
	m_TestSceneObject.GetBounds().m_Center.make_zero();

	m_KdTree->InsertObject( &m_TestSceneObject );
}

void EDApp::Shutdown(void)
{
	delete m_KdTree;
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
	