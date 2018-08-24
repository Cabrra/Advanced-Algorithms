#pragma once

#include "BVHLeafNode.h"
#include "TriangleSet.h"

// TriSetBVHLeaf
//
// This class represents a BVHLeafNode where contained data is a TriangleSet.
class TriSetBVHLeaf : public BVHLeafNode< TriangleSet, TriSetBVHLeaf >
{
public:
	TriSetBVHLeaf(BVType bvType) : BVHLeafNode< TriangleSet, TriSetBVHLeaf >(bvType) {}
	
	// Splittable. Returns true if this leaf can be split. False if not.
	bool Splittable(void);

	// Split the leaf node and return the newly created leaf.
	BVHLeafNodeBase* Split(void);

	// Build the bounds of this leaf node using the stored data of the leaf.
	void Build(void);
};