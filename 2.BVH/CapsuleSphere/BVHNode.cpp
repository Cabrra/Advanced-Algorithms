#include "BVHNode.h"

BVHNode::BVHNode(BVType bvType) : m_Parent(0)
{
	// Create the bounding volume of this node
	// using the type provided
	m_BoundingVolume = BoundingVolume::Create(bvType);
}

BVHNode::BVHNode(const BoundingVolume* pBV) : m_Parent(0)
{
	// Create the bounding volume of this node
	// using the type of the provided BV
	m_BoundingVolume = pBV->Copy();
}