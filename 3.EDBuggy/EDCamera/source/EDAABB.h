#ifndef _EDAABB_H_
#define _EDAABB_H_

#ifndef NULL
	#define NULL 0
#endif

#include "vec3.h"
#include "EDTriangle.h"

class EDAABB
{
	friend class EDBVTree;

	vec3f m_min;
	vec3f m_max;

	EDTriangle *m_pTris;

	unsigned int m_uiTriCount;

public:

	EDAABB(void);

	virtual ~EDAABB(void);

	void Build( EDTriangle *pTris, unsigned int count );

	void Translate( const vec3f &move );

	void Draw(void) const;

	void DrawSolid(void) const;

	void DrawTriangles(void) const;

	bool Intersect(const EDAABB *pBV);

	inline const EDTriangle* GetTriangles(void) const
	{
		return m_pTris;
	}

	const vec3f& GetMin(void) const 
	{
		return m_min;
	}

	const vec3f& GetMax(void) const
	{
		return m_max;
	}

	inline void SetMin(const vec3f& min)
	{
		m_min = min;
	}

	inline void SetMax(const vec3f& max)
	{
		m_max = max;
	}

	inline unsigned int GetTriCount(void) const 
	{ 
		return m_uiTriCount;
	}

	friend void Split( EDAABB *pBV, EDAABB *pMinor, EDAABB *pMajor);
};

#endif