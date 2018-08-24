#pragma once

#include "BVHLeafNode.h"
#include "BVHInternalNode.h"
#include <list>
using namespace std;
// BVH
//
// This class represents a BoundingVolumeHierarchy.
class BVH
{
	template< typename DataType, class LeafType >
	friend class BVHLeafNode;

	// Root node of the hierarchy
	BVHNode* m_Root;

	BVH(void) : m_Root(0) {}
	BVH(const BVH&) : m_Root(0) {}
	BVH& operator=(const BVH&){ return *this; }

	list< BVHLeafNodeBase* > m_LeafList;

public:
	~BVH()
	{
		delete m_Root;
	}

	// Traverse the hierarchy, starting at the root node
	void Traverse( TraversalData* pData );

	// Friend function used in construction of a BVH
	friend void BuildBVH( BVH* pBVH, BVHLeafNodeBase* pLeaf );

	const list< BVHLeafNodeBase* >& GetLeaves(void){ return m_LeafList; }
};