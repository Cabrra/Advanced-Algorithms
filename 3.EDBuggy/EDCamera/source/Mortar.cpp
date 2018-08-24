#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include "EDApp.h"
#include "EDCommon.h"

#include "Mortar.h"

unsigned int CMortar::m_uiRefCount = 0;
unsigned int CMortar::m_uiDrawList = 0;

void CMortar::Update( float fTime )
{
	m_fAge += fTime;
	m_fTrailTimer += fTime;

	if (m_fAge > 60)
		Kill();

	vec3f oldpos = m_Matrix.axis_pos;
	m_Matrix.axis_pos += m_vVelocity * fTime;
	m_vVelocity += vec3f(0.0f, -1.0f, 0.0f) * 1.15f * fTime;

	for (int i = 0; i < 20; i++)
	{
		vec3f v = EDApp::GetInstance().m_Targets[i].GetPosition() - m_Matrix.axis_pos;
		vec3f capLine = m_Matrix.axis_pos - oldpos;
		float ratio = dot_product(v, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		vec3f closest = oldpos + capLine * ratio;

		vec3f v2 = EDApp::GetInstance().m_Targets[i].GetPosition() - closest;
		float check = dot_product(v, v);
		float myRadius = (EDApp::GetInstance().m_Targets[i].GetRadius() + m_fRadius) * (EDApp::GetInstance().m_Targets[i].GetRadius() + m_fRadius);

		if (check < myRadius)
		{
			Kill();
			EDApp::GetInstance().m_Targets[i].Spin();
			break;
		}
	}

	vec3f start = oldpos;
	vec3f ende = m_Matrix.axis_pos;

	EDTriangle* mytriangles;
	unsigned int triCount;
	EDApp::GetInstance().GetTriangles(&mytriangles, &triCount, start, ende);

	vec3f myOut;
	unsigned int myindex;
	if (EDApp::GetInstance().LineSegment2Triangle(myOut, myindex, mytriangles, triCount, start, ende))
		Kill();

	delete[] mytriangles;

	// Update the mortar trail...
	if( m_fTrailTimer >= 0.0666f )
	{
		memmove( m_trail, &m_trail[1], sizeof(vec3f) * (TRAILLEN-1) );
		m_trail[TRAILLEN-1] = m_Matrix.axis_pos;
		m_fTrailTimer = 0.0f;
	}
}

CMortar::CMortar(void)
{
	m_fRadius = 0.25f;
	m_fAge = 0.0f;
	m_fTrailTimer = 0.0f;

	if( m_uiRefCount == 0 )
	{
		m_uiDrawList = glGenLists(1);

		GLUquadric *pQuad = gluNewQuadric();
		glNewList( m_uiDrawList, GL_COMPILE );

			glPushMatrix();
				
				glPushMatrix();
					glTranslatef( 0.0f, 0.0f, -0.0625f );
					glColor3f( 0.75f, 0.75f, 0.0f );
					gluCylinder( pQuad, 0.0125f, 0.0125f, 0.125f, 15, 15 );
				glPopMatrix();
				
				glPushMatrix();
					glTranslatef( 0.0f, 0.0f, 0.0625f );
					glColor3f( 0.25f, 0.25f, 0.25f );
					gluSphere( pQuad, 0.0125f, 15, 15 );
				glPopMatrix();

				glPushMatrix();
					glTranslatef( 0.0f, 0.0f, -0.09375f );
					glColor3f( 0.75f, 0.75f, 0.0f );
					gluCylinder( pQuad, 0.00625f, 0.0125f, 0.03125f, 15, 15 );
				glPopMatrix();


				glPushMatrix();
					glTranslatef( 0.0f, 0.0f, -0.125f );
					gluCylinder( pQuad, 0.0125f, 0.00625f, 0.03125f, 15, 15 );

					glRotatef( 180.0f, 0.0f, 1.0f, 0.0f );
					glColor3f( 0.5f, 0.0f, 0.0f );
					gluDisk( pQuad, 0.0f, 0.0125f, 15, 15 );
				glPopMatrix();
				
			glPopMatrix();

		glEndList();
		gluDeleteQuadric(pQuad);
	}

	++m_uiRefCount;
	m_Matrix.make_identity();
}

CMortar::~CMortar()
{
	--m_uiRefCount;

	if( m_uiRefCount == 0 )
	{
		glDeleteLists( m_uiDrawList, 1 );
		m_uiDrawList = 0;
	}
}

void CMortar::Render(void)
{
	glPushMatrix();
		glMultMatrixf( m_Matrix.ma );
		glCallList( m_uiDrawList );
	glPopMatrix();

	glDisable( GL_LIGHTING );
	glDepthMask( 0 );

	glLineWidth( 2.0f );
	glBegin( GL_LINE_STRIP );
		for( unsigned int i = 0; i < TRAILLEN; ++i )
		{
			float fTemp = i/(float)TRAILLEN;

			glColor4f( 1.0f, fTemp*fTemp, fTemp*fTemp*fTemp*fTemp, fTemp );
			glVertex3fv( m_trail[i].v );
		}
	glEnd();

	glEnable( GL_LIGHTING );
	glDepthMask( 1 );
	glLineWidth( 1.0f );
}

void CMortar::Kill(void)
{
	for( unsigned int i = 0; i < 20; ++i )
	{
		if( !EDApp::GetInstance().m_Explosions[i].IsAlive() )
		{
			EDApp::GetInstance().m_Explosions[i].Explode( m_Matrix );
			break;
		}
	}

	m_fAge = 0.0f;
	m_fTrailTimer = 0.0f;
	m_bAliveFlag = false;
}

void CMortar::Fire( const matrix4f &attachMat )
{
	m_Matrix = attachMat;
	m_bAliveFlag = true;

	m_vVelocity = EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat().axis_z * 4.35f;

	for( unsigned int i = 0; i < TRAILLEN; ++i )
		m_trail[i] = m_Matrix.axis_pos;
}