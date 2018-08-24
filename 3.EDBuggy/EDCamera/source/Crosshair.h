#ifndef _CROSSHAIR_H_
#define _CROSSHAIR_H_

#include "matrix4.h"

class CCrosshair
{
	static unsigned int m_uiRefCount;
	static unsigned int m_uiDrawList;

	// The matrix for this crosshair, storing it's position, orientation, etc.
	matrix4f m_Matrix;

	// The radius of the crosshair
	float m_fRadius;

public:

	CCrosshair(void);
	virtual ~CCrosshair();

	void Render(void);
	void Update(float fTime);

	// Get the radius of the crosshair
	float GetRadius(void){ return m_fRadius; }

	// Get the matrix of the crosshair
	matrix4f &GetMatrix(void){ return m_Matrix; }
};

#endif