#pragma once

#include "../CollisionLibrary/CollisionLibrary.h"
#include <list>
using namespace std;

// Forward declarations
class KdTree;
class KdTreeNode;
class KdTreeInternalNode;
class KdTreeLeafNode;
class SceneObject;
struct TraversalData;

// Typedefs for function pointer prototypes
//
// PerSplitFunc - Represents a pointer to a function that is called at each visited internal node during a traversal of a KdTree.
//				  Returns a result that controls the traversal of the subtree at that node.
//				  Returns 0 to traverse to the left child of the node.
//				  Returns 1 to traverse to the right child of the node.
//				  Returns 2 to traverse to the left and then the right child of the node.
//				  Returns 3 to traverse to the right and then left child of the node.
//				  Returns any other value to halt traversal on that subtree.
typedef unsigned int (*PerSplitFunc)(KdTreeInternalNode* pNode, TraversalData* pData);
//
// PerLeafFunc - Represents a pointer to a function that is called at each visited leaf node during a traversal of a KdTree.
//				 Returns true if the PerObjectFunc should be exectuted.
typedef bool (*PerLeafFunc)(KdTreeLeafNode* pNode, TraversalData* pData);
//
// PerObjectFunc - Represets a pointer to a function that is called at each object visited during a traversal of a KdTree.
//
typedef void (*PerObjectFunc)(SceneObject* pObject, TraversalData* pData);

// TraversalData
//
// This structure is used in the traversal of a KdTree.
// Contains function pointers that are called at the appropriate stages of traversal through a KdTree (see above).
// Contains a pointer to optional data (m_pVoid) that may be used by the function pointers.
struct TraversalData
{
	void* m_pVoid;
	PerSplitFunc m_PerSplitFunc;
	PerLeafFunc m_PerLeafFunc;
	PerObjectFunc m_PerObjectFunc;

	TraversalData(void)
	{
		m_pVoid = 0;
		m_PerSplitFunc = 0;
		m_PerLeafFunc = 0;
		m_PerObjectFunc = 0;
	}
};

// Abstract base class for all nodes in a KdTree
class KdTreeNode
{
	friend class KdTree;

private:
	// Pointer to this nodes parent.
	KdTreeInternalNode* m_Parent;
protected:
	KdTreeInternalNode* GetParent(void){ return m_Parent; }

public:
	// Enumeration for the types of possible nodes
	enum KdTreeNodeType{ KDTREE_INTERNAL = 0, KDTREE_LEAF };

	// Pure virtual function for traversal of this node
	virtual void Traverse( TraversalData* pData ) = 0;

	// Constructor
	KdTreeNode(void) : m_Parent(0) {}
	// Destructor
	virtual ~KdTreeNode(){}
	// Pure virtual function for determining the type of a node
	virtual KdTreeNodeType GetNodeType(void) = 0;

	// Friend function used to construct a KdTree
	friend void BuildTree(KdTree* pTree, KdTreeLeafNode* pLeaf);
};

// KdTreeInternalNode
//
// This class represents internal nodes in the tree. All nodes that have children are internal nodes.
// Each internal node represents a split/dividing plane in the KdTree.
class KdTreeInternalNode : public KdTreeNode
{
	friend class KdTree;

private:
	// Axis of this split (0 = X, 1 = Y, 2 = Z)
	unsigned int m_PlaneAxis;
	// Offset of this plane from the origin
	float m_PlaneOffset;

	// Pointer to the left child node of this node.
	KdTreeNode* m_LeftChild;
	// Pointer to the right child node of this node.
	KdTreeNode* m_RightChild;
public:
	// Constructor
	KdTreeInternalNode(void) : m_PlaneAxis(0), m_PlaneOffset(0.0f), m_LeftChild(0), m_RightChild(0) {}

	// GetNodeType
	//
	// Returns the type for this node. Used to determine node type from a base class pointer or referrence.
	KdTreeNodeType GetNodeType(void){ return KDTREE_INTERNAL; }

	// Returns the axis (X,Y, or Z) of the dividing plane represented by this internal node.
	unsigned int GetPlaneAxis(void){ return m_PlaneAxis; }

	// Returns the offset from the origin of this dividing plane.
	float GetPlaneOffset(void){ return m_PlaneOffset; }

	// Executes traversal of the KdTree at this node, using the TraversalData
	void Traverse( TraversalData* pData );

	// Destructor
	~KdTreeInternalNode()
	{
		delete m_LeftChild;
		delete m_RightChild;
	}

	// Friend function used to construct a KdTree
	friend void BuildTree(KdTree* pTree, KdTreeLeafNode* pLeaf);
};

// KdTreeLeafNode
//
// This class represents leaf nodes in the KdTree. Leaf nodes have no children nodes.
// Leaf nodes have an AABB representing the section of the scene that the node manages.
// Leaf nodes have a list of objects that overlap with this volume.
class KdTreeLeafNode : public KdTreeNode
{
	friend class KdTree;

private:
	// Bounding box for the volume of space represented and managed by this leaf.
	AABB m_Bounds;
	// List of objects in the scene that overlap with this volume of space.
	list< SceneObject* > m_OverlappingObjects;
public:
	KdTreeLeafNode(void){}
	~KdTreeLeafNode(){}

	// GetNodeType
	//
	// Returns the type for this node. Used to determine node type from a base class pointer or referrence.
	KdTreeNodeType GetNodeType(void){ return KDTREE_LEAF; }

	// Get the bounds of this leaf
	const AABB& GetBounds(void){ return m_Bounds; }

	// Get the list of objects overlapping with this space
	list< SceneObject* >& GetOverlappingObjects(void){ return m_OverlappingObjects; }

	// Executes traversal of the KdTree at this node, using the TraversalData
	void Traverse( TraversalData* pData );

	// Friend function used to construct a KdTree
	friend void BuildTree(KdTree* pTree, KdTreeLeafNode* pLeaf);
};