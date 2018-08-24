#pragma once

#include "KdTreeNode.h"
#include "SceneObject.h"

// KdTree
//
// This class represents the interface for a KdTree.
// A KdTree is a type of spatial partitioning system that breaks the world up into smaller sections with axis aligned planes.
// Each split divides the remaining space into two parts, and so the results are efficiently represented with a binary tree.
// The bounds of the scene are recursively split until some minimum size is reached.
class KdTree
{
private:
	// Root of the tree
	KdTreeNode* m_Root;
	// Maximum bounds of the scene/world.
	AABB m_SceneBounds;
	// List of all objects in the scene being tracked by the KdTree.
	list< SceneObject* > m_MasterObjectList;
	// List of all leaf nodes in the KdTree.
	list< KdTreeLeafNode* > m_LeafList;

	KdTree(void) : m_Root(0) {}
	KdTree(const KdTree&){}
	KdTree& operator=(const KdTree&){ return *this; }

	// Updates an object's place in the tree according to it's current position.
	void UpdateObject( SceneObject* pObject );

public:
	~KdTree();

	// Traverse the KdTree, starting at the root, using the values from the TraversalData.
	void Traverse( TraversalData* pData );
	// Insert an object into the KdTree for tracking and management.
	void InsertObject( SceneObject* pObject );
	// Remove an object from the KdTree.
	void RemoveObject( SceneObject* pObject );

	// Get the list of leaf nodes in the KdTree.
	const list< KdTreeLeafNode* >& GetLeaves(void){ return m_LeafList; }

	// Create a tree based off of some maximum scene/world bounds
	static KdTree* CreateTree(const AABB& sceneBounds);

	// Classify an AABB to an axis aligned plane
	static unsigned int ClassifyAABBToAAPlane( const AABB& aabb, unsigned int planeIndex, float planeOffset );

	// Classify a Sphere to an axis aligned plane
	static unsigned int ClassifySphereToAAPlane( const Sphere& sphere, unsigned int planeIndex, float planeOffset );

	// Classify an object to a node representing a dividing plane in the KdTree
	static unsigned int ClassifyObjectPerSplitFunc( KdTreeInternalNode* pNode, TraversalData* pData );

	// Insert an object in the scene into the leaf
	static bool InsertObjectPerLeafFunc( KdTreeLeafNode* pNode, TraversalData* pData );

	// Friend function used to construct a KdTree
	friend void BuildTree(KdTree* pTree, KdTreeLeafNode* pLeaf);

	// Updates all objects managed by the KdTree
	void Update(void);
};

// Calculate an AABB from a list of points
void BuildAABB( AABB& aabb, const vec3f* pts, unsigned int ptCount );

// FrustumAABB
//
// This structure represents a view frustum and the AABB that contains it.
// Testing a view frustum against other planes requires testing of the frustum corners.
// When dealing with Axis Aligned planes, like in a KdTree, it is efficient to calculate
// the minimum and maximum values from frustum points once at the start of a traversal and
// then used those values for each plane test against the tree.
struct FrustumAABB
{
	// Pointer to the frustum
	Frustum* m_Frustum;
	// AABB containing the frustum
	AABB m_Aabb;

	// Constructor, calculates AABB from frustum points
	FrustumAABB(Frustum* pFrustum);

	// Tests the AABB of the FrustumAABB against an dividing plane in the KdTree
	static unsigned int FrustumAABBtoSplit(KdTreeInternalNode* pNode, TraversalData* pData);
};