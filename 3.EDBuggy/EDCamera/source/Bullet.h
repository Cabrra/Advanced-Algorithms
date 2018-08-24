#ifndef _CBULLET_H_
#define _CBULLET_H_

#include "matrix4.h"

#define TRAILLEN 100

class CBullet
{
	// The matrix for this bullet, storing it's position, orientation, etc.
	matrix4f m_Matrix;

	// The radius of the bullet.
	float m_fRadius;

	// The age of the bullet. How long it has been active.
	float m_fAge;

	// Specifies if the bullet is alive/active or not.
	bool m_bAliveFlag;

	float m_fTrailTimer;
	vec3f m_trail[TRAILLEN];

public:

	CBullet(void) : m_fAge(0.0f), m_fTrailTimer(0.0f), m_bAliveFlag(false), m_fRadius(0.1f) {}

	virtual ~CBullet(){}

	// Update the bullet
	void Update(float fTime);

	// Fires a bullet, transforming it to attachMat and flagging it as alive.
	void Fire( const matrix4f &attachMat )
	{
		m_Matrix = attachMat;
		m_bAliveFlag = true;

		for( unsigned int i = 0; i < TRAILLEN; ++i )
			m_trail[i] = m_Matrix.axis_pos;
	}

	// Kills a bullet, resetting it's timers and flagging it as inactive.
	void Kill(void)
	{
		m_fAge = 0.0f;
		m_fTrailTimer = 0.0f;
		m_bAliveFlag = false;
	}

	// Returns true if the bullet is active, false if it is not.
	bool IsAlive(void){ return m_bAliveFlag; }

	// Render the bullet
	void Render(void);
};

#endif