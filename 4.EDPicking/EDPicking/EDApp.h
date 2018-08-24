#ifndef _EDAPP_H_
#define _EDAPP_H_

#include "EDBVTree.h"

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

	EDFrame m_CameraFrame;

public: // members
	
	// The application's camera
	EDCamera m_Camera;

	// Frame timer
	Timer m_Timer;

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

	void Pick(void);
};

#endif