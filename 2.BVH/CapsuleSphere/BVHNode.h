#pragma once

#include "BoundingVolume.h"

class BVHInternalNode;
class BVHLeafNodeBase;

struct TraversalData;
// typedef's for function pointers that are used in the traversal of the BVH.
//
// PerBoundsFunc
//
//	Functions of this type are called in the bounding volumes of nodes in the tree.
typedef bool (*PerBoundsFunc)(const BoundingVolume* pBounds, TraversalData* pData);
//
// PerLeafDataFunc
//	
//	Functions of this type are called on the data stored in leaves of the tree.
typedef void (*PerLeafDataFunc)(const void* pLeafData, TraversalData* pData);

// TraversalData
//
// Controls the traversal of the BVH.
struct TraversalData
{
	// Optional data to be used in the PerBoundsFunc and PerLeafDataFunc.
	void* m_pVoid;
	
	PerBoundsFunc m_PerBoundsFunc;

	PerLeafDataFunc m_PerLeafDataFunc;

	TraversalData(void)
	{
		m_pVoid = 0;
		m_PerBoundsFunc = 0;
		m_PerLeafDataFunc = 0;
	}
};

// BVHNode
//
// This class serves as the base for all nodes in the BVH.
class BVHNode
{
	friend class BVH;

private:
	// Parent of this node.
	BVHInternalNode* m_Parent;

protected:
	// Bounding volume of this node.
	// All nodes, internal and leaf, have bounds.
	BoundingVolume* m_BoundingVolume;

public:
	// Available node types - Internal and Leaves
	enum BVHNodeType{ BVH_INTERNAL_NODE = 0, BVH_LEAF_NODE = 1 };

	// Construct a node, creating its bounding volume using the provided type.
	BVHNode(BVType bvType);

	// Construct a node, creating its bounding volume based on the type of the provided BV.
	BVHNode(const BoundingVolume* pBV);

	virtual ~BVHNode()
	{
		delete m_BoundingVolume;
	}

	// Traverse the subtree of this node
	virtual void Traverse( TraversalData* pData ) = 0;

	// Get the type of this node.
	// Used to determine type from base class pointer/referrence.
	virtual BVHNodeType GetBVHNodeType(void)const = 0;
	// Get the BV of this node.
	const BoundingVolume* GetBoundingVolume(void)const{ return m_BoundingVolume; }
	// Get the BV of this node.
	BoundingVolume* GetBoundingVolume(void){ return m_BoundingVolume; }

	// Friend function used in construction of a BVH
	friend void BuildBVH( BVH* pBVH, BVHLeafNodeBase* pLeaf );
};



