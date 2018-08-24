#ifndef _EDAPP_H_
#define _EDAPP_H_

#include "EDFrame.h"

#include "EDCamera.h"

#include "Timer.h"

#include "KdTree.h"

// EDApp
//
// Main game/app class interface class.
// Contains the camera and other game objects.

#define SCENE_OBJ_COUNT 10000

struct uv
{
	float s;
	float t;
};

class EDApp
{
	// Private constructor for singleton architecture
	EDApp(void){}
	// Private copy constructor for singleton architecture
	EDApp( const EDApp & ){}

	EDFrame m_CameraFrame;

	EDFrame m_ObjectFrame;
	//Sphere m_Spheres[5][5];
	//Capsule m_Capsule;

	KdTree* m_KdTree;

	SceneObject m_SceneObjects[SCENE_OBJ_COUNT];
	SceneObject m_TestSceneObject;

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