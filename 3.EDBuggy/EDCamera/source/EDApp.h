#ifndef _EDAPP_H_
#define _EDAPP_H_

#include "EDBVTree.h"

#include "EDCamera.h"


#include "Timer.h"

#include "Buggy.h"
#include "Bullet.h"
#include "Mortar.h"
#include "Target.h"
#include "Explosion.h"

#include "Crosshair.h"
// EDApp
//
// Main game/app class interface class.
// Contains the camera and other game objects.

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

	unsigned int m_TerTex;
	vector< vec3f > m_verts;
	vector< vec3f > m_norms;
	vector< uv > m_uvs;
	unsigned int m_BullTex;

public: // members
	
	// The application's camera
	EDCamera m_Camera;

	// The buggy object
	CBuggy m_Buggy;

	// Frame timer
	Timer m_Timer;

	// The array of bullets
	CBullet m_Bullets[20];
	// The array of mortars
	CMortar m_Mortars[20];
	// The array of targets
	CTarget m_Targets[20];
	//The array of explosions
	CExplosion m_Explosions[20];

	// Pointer to the currently selected target, if any
	CTarget *m_pTarget;

	// The crosshair
	CCrosshair m_Crosshair;

	// BVH for the terrain
	EDBVTree *m_pBVTree;

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

	// Get an array of triangles from the terrain that are near a line segment.
	//
	// In:
	//		EDTriangle **pTris - Pointer to an EDTriangle pointer. Recieves the array of triangles.
	//		unsigned int *pTriCount - Pointer to an unsigned int. Recieves the triangle count.
	//		const vec3f &startPoint - The start point of the line segment.
	//		const vec3f &endPoint - The end point of the line segment.
	// 
	// Note: Once you are done with the returned list of triangles, be sure to delete it to avoid memory leakage.
	//
	// Example usage:
	//
	// 		EDTriangle *pTris = NULL;
	// 		unsigned int uiTriCount = 0;
	// 		GetTriangles( &pTris, &uiTriCount, <start point for a line>, <end point for a line> );
	//
	// 		for( unsigned int i = 0; i < uiTriCount; ++i )
	// 		{
	//			// Perform needed tasks using triangle data from pTris[i].m_Vertices and/or pTris[i].m_Normal
	// 		}
	//
	// 		delete [] pTris;
	//
	void GetTriangles( EDTriangle **pTris, unsigned int *pTriCount, const vec3f &startPoint, const vec3f &endPoint );

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

	// Drive
	//
	// Controls movement of m_Buggy based on user input and the elapsed time
	//
	// In:
	//		float fTime - The time elapsed since the last frame
	void Drive(float fTime);
	bool LineSegment2Triangle(vec3f &vOut, unsigned int &uiTriIndex, EDTriangle *pTris, unsigned int uiTriCount, const vec3f &vStart, const vec3f &vEnd);
};

#endif