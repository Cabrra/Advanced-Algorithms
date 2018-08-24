#include <windows.h>
#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include <math.h>
#include "EDDemo.h"


// Render our scene one time
void RenderScene(void)
{
	EDApp::GetInstance().Update();
}

// The programs entry point
int main(int argc, char *argv[])
{    
	// Tell glut what we want to support
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	// Setup the size of our window
	glutInitWindowSize(800, 600); 
	// Create and name our window
	glutCreateWindow("EDCamera"); 
	// Do all of our opengl setup here
	SetupGL();
	// Students do not need the next three lines
	// Create a menu
	//int menid = glutCreateMenu(Menu); 
	//Create the exit option
	//glutAddMenuEntry("Quit", 0); 
	// Make the menu come up when you right click
	//glutAttachMenu(GLUT_RIGHT_BUTTON); 
	// Tell glut what function is to be used for rendering
	glutDisplayFunc(RenderScene);
	// Tell glut what fucntion is to be used resizing
	glutReshapeFunc(ResizeGL);
	// Start the internal glut main loop, this does all the render and reszing calls for you
	glutMainLoop();
}

// Handle our right click menu options
// in	-	option	-	The menu option that was selected they are number from zero at the top
void Menu(int option)
{
	// We only have one option currently
	if(option == EXIT)
	{
		// Make sure shutdown cleans up any messes, exit is not very graceful.
		ShutDown();
		exit(0);
	}
	glutPostRedisplay();
}

// Set up our view and resize our scene
//in	-	w = width of window in pixels
//			h = height of window in pixels
void ResizeGL(int w, int h)
{
	// Tell opengl the windw coords
	glViewport(0, 0, w, h);
	// Callculate our aspect ratio
	float aspect = float(w)/float(h);
	// Switch to projection to set up our view
	glMatrixMode(GL_PROJECTION);
	// Clear out any matrices
	glLoadIdentity();
	// Set up our view
	gluPerspective(45, aspect, 0.1f, 300);
	// Return to modelview
	glMatrixMode(GL_MODELVIEW);
}

void SetupGL()
{
	GLfloat noLight[4] = { 0.0f, 0.0f, 0.0f, 1.0f };
	GLfloat fullLight[4] = { 1.0f, 1.0f, 1.0f, 1.0f };

	// Set the color that the screen will be cleared with
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc( GL_LEQUAL );

	// Set up our lighting
	// The last value of one makes this a position, instead of a direction
	GLfloat lightPos[] = {0.0f, 0.70710678f, 0.70710678f, 0.0f};
	
	// The light the spot light will point
	GLfloat lightDir[] = {0.0f, 0.0f, -1.0f, 1.0f};
	// Now the three properties of light
	glLightfv(GL_LIGHT0, GL_AMBIENT, noLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, fullLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, fullLight);
	// Setting the position of the light here will make it and offset from the camera
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);


	GLfloat redLight[] = {1.0f, 0.0f, 0.0f, 1.0f};
	glLightfv(GL_LIGHT1, GL_DIFFUSE, redLight);
	redLight[0] = 0.25f;
	glLightfv(GL_LIGHT1, GL_AMBIENT, noLight);

	// Globaly enable lighting
	glEnable(GL_LIGHTING);
	// Enable the one light we are currently using
	glEnable(GL_LIGHT0);
	// Turn off global light
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, noLight);	
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

	EDApp::GetInstance().Initialize();
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
}

// Clean up our mess
void ShutDown(void)
{
	EDApp::GetInstance().Shutdown();	
}