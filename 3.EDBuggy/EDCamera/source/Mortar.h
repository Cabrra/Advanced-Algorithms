#ifndef _MORTAR_H_
#define _MORTAR_H_

#include "matrix4.h"

class CMortar
{
	// The matrix for this mortar, storing it's position, orientation, etc.
	matrix4f m_Matrix;

	//velocity
	vec3f m_vVelocity;

	// Specifies if the bullet is alive/active or not.
	bool m_bAliveFlag;			

	// The age of the mortar. How long it has been active.
	float m_fAge;

	// The radius of the bullet.
	float m_fRadius;

	// The old position of the mortar, used as the base-point for cylinder to sphere collision.
	vec3f m_fvOldPos;

	float m_fTrailTimer;
	vec3f m_trail[TRAILLEN];

	static unsigned int m_uiRefCount;
	static unsigned int m_uiDrawList;


public:
	CMortar(void);
	virtual ~CMortar(void);

	// Update the mortar
	void Update(float fTime);

	// Render the mortar
	void Render(void);

	// Kill the mortar, resetting it's timers and flagging it as inactive and creating an explosion at it's position.
	void Kill(void);

	// Fire a mortar, flagging it as active and starting it's timers and transforming it to attachMat.
	void Fire(const matrix4f &attachMat );		

	// Get the matrix of the mortar
	matrix4f &GetMatrix(void){ return m_Matrix; }

	// Get the radius of the mortar
	float GetRadius(void){ return m_fRadius; }

	// Returns true if the mortar is active, false if it is not.
	bool IsAlive(void){ return m_bAliveFlag; }
};

#endif