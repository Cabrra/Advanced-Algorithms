#ifndef _EDAPP_H_
#define _EDAPP_H_

#include "EDCamera.h"
#include "Timer.h"
#include "MayaBin.h"
#include "ED2BVH.h"
#include "Advanced Collisions.h"

// EDApp
//
// Main game/app class interface class.
// Contains the camera and other game objects.
class EDApp
{
	// Private constructor for singleton architecture
	EDApp(void){}
	// Private copy constructor for singleton architecture
	EDApp( const EDApp & ){}

	MayaBin m_GunModel;
	matrix4f m_GunMatrix;

	ED2LeafMesh m_DeathWheelMesh;
	vec3f m_DeathWheelCenter;
	float m_DeathWheelRadius;

	vec3f m_TestTriVerts[3];
	vec3f m_TestTriNorm;

	struct MovingSphere
	{
		float m_Radius;
		vec3f m_Center;
		vec3f m_Velocity;
	};

	std::list<MovingSphere> m_BulletList;
	float m_BulletRadius;

public: // members
	
	// The application's camera
	EDCamera m_Camera;

	// Frame timer
	Timer m_Timer;

	unsigned int m_TestState;
	float m_TestRadius;
	vec3f m_TestSpherePosition;
	vec3f m_CylinderStart;
	vec3f m_CylinderEnd;

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

	void InitializeTriangle();
	void RandomizeTriangle();
	void InitializeSphere();
	void RandomizeSphere();
	void InitializeCylinder();
	void RandomizeCylinder();
};

#endif