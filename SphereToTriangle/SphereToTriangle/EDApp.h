#ifndef _EDAPP_H_
#define _EDAPP_H_

#include "EDFrame.h"

#include "EDCamera.h"

#include "Timer.h"

// EDApp
//
// Main game/app class interface class.
// Contains the camera and other game objects.

struct uv
{
	float s;
	float t;
};

struct Segment
{
	vec3f m_Start;
	vec3f m_End;
};

struct Sphere
{
	vec3f m_Center;
	float m_Radius;
};

struct Capsule
{
	Segment m_Segment;
	float m_Radius;
};

struct Triangle
{
	vec3f V[3];
	vec3f N;
};

class EDApp
{
	// Private constructor for singleton architecture
	EDApp(void){}
	// Private copy constructor for singleton architecture
	EDApp( const EDApp & ){}

	EDFrame m_CameraFrame;

	Sphere m_Sphere;

	static const int ROW_COUNT = 40;
	vec3f verts[ROW_COUNT][ROW_COUNT];
	static vec3f SPHERE_START;

public: // members
	
	// The application's camera
	EDCamera m_Camera;

	// Frame timer
	Timer m_Timer;

public: // methods

	// Destructor
	~EDApp(void){}
	
	// GetInstance
	//
	// Gets the instance of the singleton
	//
	// Return:
	//		EDApp&	-	The singleton instance of the EDApp class
	static EDApp& GetInstance(void)
	{
		static EDApp theApp;
		return theApp;
	}

	// Initialize
	//
	// Initialize/Set-up the EDApp
	void Initialize(void);

	// Update
	//
	// Updates the camera and other game objects and renders the scene
	void Update(void);

	// Shutdown
	//
	// Shuts down the application and releases any remaining resources.
	void Shutdown(void);
};

#endif