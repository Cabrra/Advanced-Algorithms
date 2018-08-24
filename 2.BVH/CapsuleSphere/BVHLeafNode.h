#pragma once

#include "BVHNode.h"

// BVHLeafNodeBase
//
// Base class for all leaf nodes.
class BVHLeafNodeBase : public BVHNode
{
	friend class BVH;

public:
	BVHLeafNodeBase(BVType bvType) : BVHNode(bvType) {}
	BVHNodeType GetBVHNodeType(void)const{ return BVH_LEAF_NODE; }
	virtual ~BVHLeafNodeBase(){}

	// Returns true of this leaf can be split.
	virtual bool Splittable(void) = 0;
	// Splits the node into two and returns the pointer to the newly
	// created leaf.
	virtual BVHLeafNodeBase* Split(void) = 0;
	// Build's the bounds of the node based on the data stored in the leaf.
	virtual void Build(void) = 0;

	// Friend function used in construction of a BVH
	friend void BuildBVH( BVH* pBVH, BVHLeafNodeBase* pLeaf );
};

// BVHLeafNode
//
// This class serves as a base for all possible leaf nodes.
// Any new leaf class must derive from this base,
// providing its type as the LeafType and the
// type of the data it stores as DataType.
template< typename DataType, class LeafType >
class BVHLeafNode : public BVHLeafNodeBase
{
	friend class BVH;

protected:
	// The data stored in this leaf
	DataType m_Data;

public:
	BVHLeafNode(BVType bvType) : BVHLeafNodeBase(bvType) {}
	virtual ~BVHLeafNode(){}

	// Traverse the subtree of this node, using the provided TraversalData.
	void Traverse( TraversalData* pData );

	// Create a BVH from the provided data and the provided BVType
	static BVH* CreateBVH( const DataType& data, BVType bvType );

	// Friend function used in construction of a BVH
	friend void BuildBVH( BVH* pBVH, BVHLeafNodeBase* pLeaf );
};

// BVHLeafNode is a template, so function definiton must
// be in a header file. This #include is used to separate
// definition from implementation.
#include "BVHLeafNode.hpp"