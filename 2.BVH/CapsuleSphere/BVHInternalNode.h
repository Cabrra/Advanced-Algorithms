#pragma once

#include "BVHNode.h"

// This class represents an internal node in the BVH
class BVHInternalNode : public BVHNode
{
	friend class BVH;

private:
	BVHNode* m_LeftChild;
	BVHNode* m_RightChild;

public:
	BVHInternalNode(BVType bvType) : m_LeftChild(0), m_RightChild(0), BVHNode(bvType)  {}
	BVHInternalNode::BVHInternalNode(const BoundingVolume* pBV) : BVHNode( pBV ), m_LeftChild(0), m_RightChild(0) {}

	~BVHInternalNode()
	{
		delete m_LeftChild;
		delete m_RightChild;
	}

	// Traverse the subtree a this node, using the TraversalData
	void Traverse( TraversalData* pData );

	// Get the node type of this node.
	// Used to determine type from base class pointer.
	BVHNodeType GetBVHNodeType(void)const{ return BVH_INTERNAL_NODE; }

	friend void BuildBVH( BVH* pBVH, BVHLeafNodeBase* pLeaf );
};