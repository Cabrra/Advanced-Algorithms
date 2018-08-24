#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include "Bullet.h"
#include "EDCommon.h"
#include "EDApp.h"


void CBullet::Update(float fTime)
{
	m_fAge += fTime;
	m_fTrailTimer += fTime;

	if (m_fAge > 3.0f)
		Kill();

	//translate in Z
	m_Matrix.translate_post(vec3f(0.0f, 0.0f, 0.5f));
	
	if (EDApp::GetInstance().m_pTarget != NULL)
	{
		TurnTo(m_Matrix, EDApp::GetInstance().m_pTarget->GetPosition(), fTime);
	}

	for (int i = 0; i < 20; i++)
	{
		vec3f v = EDApp::GetInstance().m_Targets[i].GetPosition() - m_Matrix.axis_pos;
		float check = dot_product(v, v);
		float myRadius = (EDApp::GetInstance().m_Targets[i].GetRadius() + m_fRadius) * (EDApp::GetInstance().m_Targets[i].GetRadius() + m_fRadius);

		if (check < myRadius)
		{
			Kill();
			EDApp::GetInstance().m_Targets[i].Spin();
			break;
		}
	}

	// Update the bullet trail...
	if( m_fTrailTimer >= 0.0666f )
	{
		memmove( m_trail, &m_trail[1], sizeof(vec3f) * (TRAILLEN-1) );
		m_trail[TRAILLEN-1] = m_Matrix.axis_pos;
		m_fTrailTimer = 0.0f;
	}
}

void CBullet::Render(void)
{
	float fScale = (rand() % 100) / 100.0f;

	GLUquadric * pQuad = gluNewQuadric();

	gluQuadricTexture( pQuad, true );

	glColor4f( 0.0f, 1.0f, 1.0f, 1.0f );

	glPushMatrix();
		glMultMatrixf( m_Matrix.ma );
		gluSphere( pQuad, fScale * 0.0625f, 15, 15 );
	glPopMatrix();

	glLineWidth( 2.0f );
	glBegin( GL_LINE_STRIP );
		for( unsigned int i = 0; i < TRAILLEN; ++i )
		{
			float fTemp = i/(float)TRAILLEN;

			glColor4f( fTemp*fTemp*fTemp*fTemp, fTemp*fTemp, fTemp*fTemp, fTemp );
			glVertex3fv( m_trail[i].v );
		}
	glEnd();
	glLineWidth( 1.0f );

	gluDeleteQuadric( pQuad );
}