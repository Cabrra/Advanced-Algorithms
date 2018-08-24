#ifndef _EXPLOSION_H_
#define _EXPLOSION_H_

#include "matrix4.h"

class CExplosion
{
	matrix4f m_Matrix;

	bool m_bAliveFlag;			
	float m_fAge;

	static unsigned int m_uiRefCount;
	static unsigned int m_uiDrawList;

public:
	CExplosion(void);
	virtual ~CExplosion();

	void Update(float fTime);
	void Render(void);

	bool IsAlive(void){ return m_bAliveFlag; }
	void Explode( const matrix4f &attachMat );
};

#endif