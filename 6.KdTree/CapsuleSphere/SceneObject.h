#pragma once

class KdTree;
class KdTreeLeafNode;

#include "../CollisionLibrary/CollisionLibrary.h"

// SceneObject
//
// This class represents an object that will be managed and tracked by the KdTree.
class SceneObject
{
	friend class KdTree;

private:
	// Pointer to the tree that this object is managed by
	KdTree* m_Tree;
	// Pointers to the leaves in the KdTree that this object overlaps. Some may be null.
	KdTreeLeafNode* m_OverlappedLeaves[8];
	// Bounds of the object
	Sphere m_Bounds;

public:

	// Maximum size of an object in the tree, used to control creation of the KdTree
	static const float MAX_OBJECT_SIZE;

	SceneObject(void) : m_Tree(0)
	{
		memset( m_OverlappedLeaves, 0, sizeof(m_OverlappedLeaves) );
	}

	// Get the bounding sphere of this object
	Sphere& GetBounds(void){ return m_Bounds; }

	// Constrains a sphere to the inside of an AABB
	void ConstrainToAABB(const AABB& aabb);

	// Removes this object from all of it's overlapped leaves
	void RemoveFromLeaves(void);

	// Checks to see if the object is fully contained by it's overlapped leaves.
	// Used to determine if an object should be re-inserted into the tree.
	bool IsContained(void);

	// Get the array of pointers to the leaves that this object overlaps.
	KdTreeLeafNode** GetOverlappedLeaves(void){ return m_OverlappedLeaves; }
};