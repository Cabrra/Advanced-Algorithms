#ifndef _TARGET_H_
#define _TARGET_H_

#include "matrix4.h"

class CTarget
{
	friend class EDApp;

	static unsigned int m_uiRefCount;
	static unsigned int m_uiDrawList;
	
	// The radius of the target
	float m_fRadius;

	// How long the target has been spinning
	float m_fSpinTime;

	// Flag specifying if the target is spinning
	bool m_bSpinning;

	// The matrix of this target
	matrix4f m_Matrix;

public:

	CTarget(void);
	virtual ~CTarget();

	// Update the target
	void Update( float fTime );

	// Render the target
	void Render(void);

	// Start the target spinning.
	void Spin(void)
	{ 
		m_bSpinning = true;
		m_fSpinTime = 0.0f;
	}

	// Get the radius of the target.
	float GetRadius(void){ return m_fRadius; }

	// Get the position of the target.
	const vec3f& GetPosition(void){ return m_Matrix.axis_pos; }

	// Get the matrix of the target.
	matrix4f &GetMatrix(void){ return m_Matrix; }
};

#endif