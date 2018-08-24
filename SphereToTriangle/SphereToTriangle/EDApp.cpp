#include "EDApp.h"

#include <windows.h>

#include "gl.h"
#include "glu.h"
//#include "extgl.h"

#include "EDDefault.h"
#define EPSILON sqrt(1.192092896e-07F)

#ifndef FLT_EPSILON
#define FLT_EPSILON     1.192092896e-07F
#endif

extern HWND ghMainWnd;

void DrawGround(void);
void DrawAxes(float fScale = 1.0f);

vec3f EDApp::SPHERE_START(0.0f, 0.5f, 0.0f);

// SphereToTriangle
// Used for Test #1, enabled through hitting the '1' key
//
// This function takes in a Sphere and a Triangle and should
// simply determine, true or false, if there is a collision.
// 
// Return the boolean result.
//
// Notes:
// As an early out, verify that the sphere is touching the plane
// of the triangle. If it does not touch the plane, there can be
// no collision with the triangle on that plane.
bool SphereToTriangle(const Sphere& sphere, const Triangle& tri)
{

	float offset = dot_product(sphere.m_Center - tri.V[0], tri.N);
	vec3f Projected = sphere.m_Center - (tri.N * offset);

	if (dot_product(sphere.m_Center - Projected, sphere.m_Center - Projected) > sphere.m_Radius * sphere.m_Radius)
		return false;

	vec3f edge0 = tri.V[1] - tri.V[0];
	vec3f edge1 = tri.V[2] - tri.V[1];
	vec3f edge2 = tri.V[0] - tri.V[2];

	vec3f normal0, normal1, normal2;
	cross_product(normal0, edge0, tri.N);
	cross_product(normal1, edge1, tri.N);
	cross_product(normal2, edge2, tri.N);

	float test1, test2, test0;
	vec3f v = Projected - tri.V[0];
	test0 = dot_product(v, normal0);

	v = Projected - tri.V[1];
	test1 = dot_product(v, normal1);
	
	v = Projected - tri.V[2];
	test2 = dot_product(v, normal2);
	
	vec3f closest, closest0, closest1, closest2;

	if (test0 > 0 || test1 > 0 || test2 > 0)
	{
		//closest point in each segment
		vec3f capToSphe = Projected - tri.V[0];
		vec3f capLine = tri.V[1] - tri.V[0];
		float ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		closest0 = tri.V[0] + capLine * ratio;
		test0 = dot_product((sphere.m_Center - closest0), (sphere.m_Center - closest0));
		
		capToSphe = Projected - tri.V[1];
		capLine = tri.V[2] - tri.V[1];
		ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		closest1 = tri.V[1] + capLine * ratio;
		test1 = dot_product((sphere.m_Center - closest1), (sphere.m_Center - closest1));

		capToSphe = Projected - tri.V[2];
		capLine = tri.V[0] - tri.V[2];
		ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		closest2 = tri.V[2] + capLine * ratio;
		test2 = dot_product((sphere.m_Center - closest2), (sphere.m_Center - closest2));

		if (test0 <= test1 && test0 <= test2)
			closest = closest0;
		else if (test1 < test0 && test1 <= test2)
			closest = closest1;
		else
			closest = closest2;
	}
	else
		//else is inside the triangle
		closest = Projected;

	if (dot_product(sphere.m_Center - closest, sphere.m_Center - closest) <= sphere.m_Radius * sphere.m_Radius)
		return true;
	else
		return false;

}

// SphereToTriangle
// Used for Test #2, enabled through hitting the '2' key
//
// This function takes in a Sphere and a Triangle and should
// determine, true or false, if there is a collision.
// If there is a collision, the proper displacement/correction vector
// should be calculated. This is the vector to translate the sphere
// along to push it out of the triangle. Store the result in "displacement".
//
// Return the boolean result.
//
// Notes:
// The code for this test is almost exactly the same as the code for the first test.
// Differences will be:
//	- Early out
//		+ If the sphere doesn't touch the plane OR its center is behind the plane,
//			there can be no collision.
//	- Displacement calculation
//		+ If there is a collision, calculate the displacement vector.
//			This is the contact normal scaled by the penetration depth.
//			See slides on collision reaction for the Sphere to Triangle collision test.
bool SphereToTriangle(const Sphere& sphere, const Triangle& tri, vec3f& displacement)
{
	
	float offset = dot_product(sphere.m_Center - tri.V[0], tri.N);
	vec3f Projected = sphere.m_Center - (tri.N * offset);

	if (dot_product(sphere.m_Center - Projected, sphere.m_Center - Projected) > sphere.m_Radius * sphere.m_Radius 
		|| dot_product(sphere.m_Center - tri.V[0], tri.N) < 0)
		return false;

	if (SphereToTriangle(sphere, tri) == true)
	{
		vec3f closest, closest0, closest1, closest2;
		float test0, test1, test2;

		vec3f capToSphe = Projected - tri.V[0];
		vec3f capLine = tri.V[1] - tri.V[0];
		float ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		closest0 = tri.V[0] + capLine * ratio;
		test0 = dot_product((sphere.m_Center - closest0), (sphere.m_Center - closest0));

		capToSphe = Projected - tri.V[1];
		capLine = tri.V[2] - tri.V[1];
		ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		closest1 = tri.V[1] + capLine * ratio;
		test1 = dot_product((sphere.m_Center - closest1), (sphere.m_Center - closest1));

		capToSphe = Projected - tri.V[2];
		capLine = tri.V[0] - tri.V[2];
		ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

		if (ratio < 0)
			ratio = 0;
		else if (ratio > 1)
			ratio = 1;

		closest2 = tri.V[2] + capLine * ratio;
		test2 = dot_product((sphere.m_Center - closest2), (sphere.m_Center - closest2));

		if (test0 <= test1 && test0 <= test2)
			closest = closest0;
		else if (test1 < test0 && test1 <= test2)
			closest = closest1;
		else
			closest = closest2;

		if (closest.magnitude() > EPSILON)
		{
			//special case
			vec3f V = sphere.m_Center - closest;
			float dist = V.magnitude();
			vec3f N = V.normalize();
			displacement = N * (sphere.m_Radius - dist);
		}
		else
		{
			//normal case
			displacement = tri.N * (sphere.m_Radius - dot_product((sphere.m_Center - tri.V[0]), tri.N));

		}

		return true;
	}
	else
		return false;
}

void DrawSphere(const Sphere &sphere)
{
	GLUquadric *pQuadric = gluNewQuadric();

	glPushMatrix();
		glTranslatef( sphere.m_Center.x, sphere.m_Center.y, sphere.m_Center.z );
		gluSphere( pQuadric, sphere.m_Radius, 15, 15 );
	glPopMatrix();

	gluDeleteQuadric(pQuadric);
}

void EDApp::Update(void)
{
	const float TIME_STEP = 1.0f / 60.0f;
	const float TIME_STEP_SQ = TIME_STEP * TIME_STEP;

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

		const float SPEED = 15.0f;

		static unsigned int STATE = 1;
		static vec3f lastC = SPHERE_START;

		vec3f trans(0.0f, 0.0f, 0.0f);
		
		if( GetAsyncKeyState( '1' ) & 0x1 )
		{
			STATE = 1;
			m_Sphere.m_Center = SPHERE_START;
			lastC = SPHERE_START;
		}

		if( GetAsyncKeyState( '2' ) & 0x1 )
		{
			STATE = 2;
			m_Sphere.m_Center = SPHERE_START;
			lastC = SPHERE_START;
		}

		if( STATE == 2 )
			trans.y = -9.8f;

		if( GetAsyncKeyState( VK_UP ) )
			trans.z -= m_Sphere.m_Radius * SPEED;
		if( GetAsyncKeyState( VK_DOWN ) )
			trans.z += m_Sphere.m_Radius * SPEED;
		if( GetAsyncKeyState( VK_LEFT ) )
			trans.x -= m_Sphere.m_Radius * SPEED;
		if( GetAsyncKeyState( VK_RIGHT ) )
			trans.x += m_Sphere.m_Radius * SPEED;

		vec3f velocity = m_Sphere.m_Center - lastC;
		lastC = m_Sphere.m_Center;
		m_Sphere.m_Center += velocity * 0.99f + trans * TIME_STEP_SQ;

		glColor3f( 0.25f, 1.0f, 0.25f );
		glBegin( GL_TRIANGLES );
		for(int i = 0; i < ROW_COUNT-1; ++i)
		{
			for(int j = 0; j < ROW_COUNT-1; ++j)
			{
				vec3f norm;
				cross_product( norm, verts[j+1][i+1] - verts[j][i], verts[j+1][i] - verts[j+1][i+1] );
				norm.normalize();

				Triangle tri;
				tri.V[0] = verts[j][i];
				tri.V[1] = verts[j+1][i+1];
				tri.V[2] = verts[j+1][i];
				tri.N = norm;

				glColor3f( 0.25f, 1.0f, 0.25f );

				if( STATE == 2 )
				{
					vec3f displacement;
					if( SphereToTriangle( m_Sphere, tri, displacement ) )
					{
						m_Sphere.m_Center += displacement;
						glColor3f( 1.0f, 0.0f, 0.0f );
					}					
				}
				else if( STATE == 1 )
				{
					if( SphereToTriangle( m_Sphere, tri ) )
						glColor3f( 1.0f, 0.0f, 0.0f );
				}

				glNormal3fv( norm.v );
				glVertex3fv( verts[j][i].v );
				glVertex3fv( verts[j+1][i+1].v );
				glVertex3fv( verts[j+1][i].v );

				cross_product( norm, verts[j][i+1] - verts[j][i], verts[j+1][i+1] - verts[j][i+1] );
				norm.normalize();

				tri.V[0] = verts[j][i];
				tri.V[1] = verts[j][i+1];
				tri.V[2] = verts[j+1][i+1];
				tri.N = norm;

				glColor3f( 0.25f, 1.0f, 0.25f );

				if( STATE == 2 )
				{
					vec3f displacement;
					if( SphereToTriangle( m_Sphere, tri, displacement ) )
					{
						m_Sphere.m_Center += displacement;
						glColor3f( 1.0f, 0.0f, 0.0f );
					}					
				}
				else if( STATE == 1 )
				{
					if( SphereToTriangle( m_Sphere, tri ) )
					{
						glColor3f( 1.0f, 0.0f, 0.0f );
					}					
				}				

				glNormal3fv( norm.v );
				glVertex3fv( verts[j][i].v );
				glVertex3fv( verts[j][i+1].v );
				glVertex3fv( verts[j+1][i+1].v );
			}
		}
		glEnd();

		glColor3f( 0.0f, 0.0f, 0.0f );
		glLineWidth( 2.0f );
		glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
		glPushMatrix();
			glTranslatef(0.0f, 0.01f, 0.0f);
			glBegin( GL_TRIANGLES );
			for(int i = 0; i < ROW_COUNT-1; ++i)
			{
				for(int j = 0; j < ROW_COUNT-1; ++j)
				{
					glVertex3fv( verts[j][i].v );
					glVertex3fv( verts[j+1][i+1].v );
					glVertex3fv( verts[j+1][i].v );

					glVertex3fv( verts[j][i].v );
					glVertex3fv( verts[j][i+1].v );
					glVertex3fv( verts[j+1][i+1].v );
				}
			}
			glEnd();
			glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
		glPopMatrix();
		glLineWidth( 1.0f );

		glColor3f( 1.0f, 1.0f, 1.0f );
		DrawSphere( m_Sphere );

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

	m_Sphere.m_Center = SPHERE_START;
	m_Sphere.m_Radius = 0.5f;

	for(int i = 0; i < ROW_COUNT; ++i)
	{
		for(int j = 0; j < ROW_COUNT; ++j)
		{
			float x = -0.5f * ROW_COUNT + j;
			float z = -0.5f * ROW_COUNT + i;
			float d = sqrtf( x*x+z*z);
			float y = (1.0f + sinf( d )) * d * 0.125f;

			verts[j][i] = vec3f( x, y, z );
		}
	}
}

void EDApp::Shutdown(void)
{
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
	