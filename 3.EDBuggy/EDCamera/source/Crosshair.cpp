#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include "EDApp.h"
#include "EDCommon.h"
#include "Crosshair.h"

unsigned int CCrosshair::m_uiRefCount = 0;
unsigned int CCrosshair::m_uiDrawList = 0;

void CCrosshair::Update(float fTime)
{

	// Reset the selected target to NULL
	matrix4f gunMat = EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat();
	vec3f offset = vec3f(0.0f, 0.0f, 25.0f);
	HardAttach(m_Matrix, gunMat, offset);

	EDApp::GetInstance().m_pTarget = NULL;

	vec3f gunZCheck = gunMat.axis_z;
	for (int i = 0; i < 20; i++)
	{
		vec3f gunToSphe = EDApp::GetInstance().m_Targets[i].GetPosition() - gunMat.axis_pos;
		vec3f ray = gunMat.axis_z;
		float ratio = dot_product(gunToSphe, ray) / dot_product(ray, ray);

		if (ratio < 0)
			ratio = 0.0f;

		vec3f closest = gunMat.axis_pos + ray * ratio;
		vec3f rayToCenter = EDApp::GetInstance().m_Targets[i].GetPosition() - closest;
		float distance = dot_product(rayToCenter, rayToCenter);

		float radiuse = (EDApp::GetInstance().m_Targets[i].GetRadius() + m_fRadius) * (EDApp::GetInstance().m_Targets[i].GetRadius() + m_fRadius);

		if (distance <= radiuse)
		{
			EDApp::GetInstance().m_pTarget = &EDApp::GetInstance().m_Targets[i];
			m_Matrix = EDApp::GetInstance().m_Targets[i].GetMatrix();
			break;
		}
	}

	vec3f start = EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat().axis_pos;
	vec3f ende = m_Matrix.axis_pos;

	EDTriangle* mytriangles;
	unsigned int triCount;
	EDApp::GetInstance().GetTriangles(&mytriangles, &triCount, start, ende);

	vec3f myOut;
	unsigned int myindex;
	if (EDApp::GetInstance().LineSegment2Triangle(myOut, myindex, mytriangles, triCount, start, ende))
		m_Matrix.axis_pos = myOut;

	delete[] mytriangles;

}

CCrosshair::CCrosshair(void)
{
	m_fRadius = 0.375f;

	if( m_uiRefCount == 0 )
	{
		m_uiDrawList = glGenLists(1);

		GLUquadric *pQuad = gluNewQuadric();
		glNewList( m_uiDrawList, GL_COMPILE );
			// innner ring
			gluCylinder( pQuad, 0.125f, 0.125f, 0.125f, 15, 15 );

			glPushMatrix();
				glTranslatef( 0.0f, 0.0f, 0.125f );
				gluDisk( pQuad, 0.0f, 0.125f, 15, 15 );
			glPopMatrix();
			glPushMatrix();
				glRotatef( 180.0f, 0.0f, 1.0f, 0.0f );
				gluDisk( pQuad, 0.0f, 0.125f, 15, 15 );
			glPopMatrix();

			// outer ring
			gluCylinder( pQuad, 0.375f, 0.375f, 0.125f, 15, 15 );
			gluCylinder( pQuad, 0.25f, 0.25f, 0.125f, 15, 15 );

			glPushMatrix();
				glTranslatef( 0.0f, 0.0f, 0.125f );
				gluDisk( pQuad, 0.25f, 0.375f, 15, 15 );
			glPopMatrix();
			glPushMatrix();
				glRotatef( 180.0f, 0.0f, 1.0f, 0.0f );
				gluDisk( pQuad, 0.25f, 0.375f, 15, 15 );
			glPopMatrix();
		glEndList();
		gluDeleteQuadric(pQuad);
	}
	
	++m_uiRefCount;
	m_Matrix.make_identity();
}

CCrosshair::~CCrosshair()
{
	--m_uiRefCount;

	if( m_uiRefCount == 0 )
	{
		glDeleteLists( m_uiDrawList, 1 );
		m_uiDrawList = 0;
	}
}

void CCrosshair::Render(void)
{
	glColor3f( 0.5f, 0.5f, 0.5f );	
	//glDisable( GL_LIGHTING );
	glDisable( GL_CULL_FACE );

	glPushMatrix();
		glMultMatrixf( m_Matrix.ma );
		glCallList( m_uiDrawList );
	glPopMatrix();
	//glEnable( GL_LIGHTING );
	glEnable( GL_CULL_FACE );
}

