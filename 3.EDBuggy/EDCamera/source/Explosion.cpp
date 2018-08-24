#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include "EDApp.h"
#include "EDCommon.h"

#include "Explosion.h"

unsigned int CExplosion::m_uiRefCount = 0;
unsigned int CExplosion::m_uiDrawList = 0;

void CExplosion::Update(float fTime)
{
	m_fAge += fTime;

	if( m_fAge >= 5.0f )
		m_bAliveFlag = false;
	else
	{
		m_Matrix.scale_pre( 1.005, 1.005, 1.005 );
	}
}

CExplosion::CExplosion(void)
{
	m_fAge = 0.0f;
	if( m_uiRefCount == 0 )
	{
		m_uiDrawList = glGenLists(1);

		GLUquadric *pQuad = gluNewQuadric();
		gluQuadricTexture( pQuad, true );

		glNewList( m_uiDrawList, GL_COMPILE );

			gluSphere( pQuad, 0.5f, 15, 15 );

		glEndList();
		gluDeleteQuadric(pQuad);
	}

	++m_uiRefCount;
	m_Matrix.make_identity();
}

CExplosion::~CExplosion()
{
	--m_uiRefCount;

	if( m_uiRefCount == 0 )
	{
		glDeleteLists( m_uiDrawList, 1 );
		m_uiDrawList = 0;
	}
}

void CExplosion::Render(void)
{
	glPushMatrix();

		float fVar = (rand() % 100) / 100.0f;

		glColor4f( 1.0f, fVar, fVar*fVar, 1.0f - (m_fAge/5.0f) );

		glMultMatrixf( m_Matrix.ma );
		glCallList( m_uiDrawList );
	glPopMatrix();
}

void CExplosion::Explode( const matrix4f &attachMat )
{
	m_Matrix = attachMat;
	m_fAge = 0.0f;
	m_bAliveFlag = true;
}


