#pragma once

#ifndef _EDCAMERA_H_
#define _EDCAMERA_H_

#include <queue>
using namespace std;

#include "matrix4.h"

// EDCamera
//
// Camera Control class
class EDCamera
{
	// m_CameraMat
	// 4x4 Matrix representing camera position and orientation in worldspace
	matrix4f	m_CameraMat;

	// m_DefaultPos
	// Vector storing a default position for the camera
	vec3f		m_DefaultPos;
	
	// m_iCameraMode
	// The current enumerated camera mode
	int m_iCameraMode;

	// m_SoftAttachQueue
	// Queue of matrices used by the SOFT_ATTACH camera mode
	queue< matrix4f > m_SoftAttachQueue;

public:
	
	// Constructor
	EDCamera(void);

	// Destructor
	virtual ~EDCamera(void);

	// Update
	// 
	// Checks for input, switching the camera mode if necessary.
	// Applies the appropriate camera behavior to m_CameraMat.
	//
	// In:
	//		float fTime - The time elapsed since the last frame
	void Update(float fTime);

	// ApplyCameraTransform
	// 
	// Calculates the inverse of m_CameraMat by calling OrthoNormalInverse()
	// and multiplies the result with the currently selected OpenGL matrix stack
	void ApplyCameraTransform(void);

	int GetCameraMode(void){ return m_iCameraMode; }

	// Enumerated camera modes
	//
	// MOUSE_LOOK - Camera is rotated by moving the mouse, and translated using the arrow keys.
	// HARD_ATTACH - Camera is attached to another object and offset from it
	// SOFT_ATTACH - Camera is attached to another object by a buffered delay and offset from it
	// LOOK_AT - The camera sits at m_DefaultPos and looks at a target
	// TURN_TO - The camera sits at m_DefaultPos and turns over time to point at a target
	enum {MOUSE_LOOK = 0, HARD_ATTACH, SOFT_ATTACH, LOOK_AT, TURN_TO, MODE_COUNT};
};

#endif
