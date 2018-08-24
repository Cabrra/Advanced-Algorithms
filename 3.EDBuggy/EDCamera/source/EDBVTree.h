#ifndef _EDBVTREE_H_
#define _EDBVTREE_H_

#include "EDAABB.h"
#include <memory.h>

class EDBVTree
{
private:

	struct TreeNode
	{
		EDAABB *m_pBV;
		TreeNode *m_pLeft;
		TreeNode *m_pRight;

		TreeNode(void) : m_pBV(NULL), m_pLeft(NULL), m_pRight(NULL) {}

		virtual ~TreeNode()
		{
			delete m_pBV;
			delete m_pLeft;
			delete m_pRight;
		}
	};
	
	unsigned int m_uiLeafSize;

	TreeNode *m_pRoot;

	void _traverse( TreeNode *pCurrent, bool (*fp)(EDAABB *pBV, void *pVoid), void *pV );

	void _traverse( TreeNode *pCurrent, bool (*fp)(EDAABB *pBV, void *pVoid), void *pV, EDTriangle **pTris, unsigned int *pTriCount );

public:

	EDBVTree(void) : m_uiLeafSize(0), m_pRoot(NULL) {}

	virtual ~EDBVTree()
	{
		delete m_pRoot;		
	}

	EDBVTree( const vec3f* pVerts, unsigned int uiVertCount, unsigned int uiLeafSize );

	void BuildTree( TreeNode *pCurrent );

	void Traverse( bool (*fp)(EDAABB *pBV, void *pVoid), void *pV )
	{
		_traverse( m_pRoot, fp, pV );
	}

	void Traverse( bool (*fp)(EDAABB *pBV, void *pVoid), void *pV, EDTriangle **pTris, unsigned int *pTriCount )
	{
		*pTriCount = 0;
		*pTris = NULL;
		_traverse( m_pRoot, fp, pV, pTris, pTriCount );
	}
};

#endif