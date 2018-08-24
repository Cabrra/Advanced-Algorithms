#include "KdTree.h"

// BuildTree
//
// This function will recursively construct a KdTree from an initial leaf node.
void BuildTree(KdTree* pTree, KdTreeLeafNode* pLeaf)
{
	// We must first determine if this leaf can be split, and on what axis to split it.
	// Find the largest axis and it's length on the AABB.

	vec3f diagonal = pLeaf->m_Bounds.max - pLeaf->m_Bounds.min;
	vec3f center = (pLeaf->m_Bounds.max + pLeaf->m_Bounds.min) / 2;

	int largestIndex;

	if (diagonal.v[0] >= diagonal.v[1] && diagonal.v[0] >= diagonal.v[2])
		largestIndex = 0;
	else if (diagonal.v[1] >= diagonal.v[0] && diagonal.v[1] >= diagonal.v[2])
		largestIndex = 1;
	else if (diagonal.v[2] >= diagonal.v[0] && diagonal.v[2] >= diagonal.v[1])
		largestIndex = 2;

	float offset = center.v[largestIndex]; //length of the axis

	if (diagonal.v[largestIndex] < SceneObject::MAX_OBJECT_SIZE * 2)
	{
		// The maximum size of any object is given by SceneObject::MAX_OBJECT_SIZE.
		// A leaf must be at least twice this size in order to be safely split.
		// If a leaf can not be split, then it is a final leaf in the tree.
		//		-Final leaves should be added to the leaf list of the tree.
		//		-If this leaf has no parent then it will be the root of the tree.
		//		-If this leaf does have parent then we will set the parent's first available
		//			child pointer (Left or Right) to this leaf.
		//		- No further steps are needed at this point.

		pTree->m_LeafList.push_back(pLeaf);
		if (pLeaf->GetParent() == nullptr)
			pTree->m_Root = pLeaf;
		else
		{
			if (pLeaf->GetParent()->m_LeftChild == nullptr)
				pLeaf->GetParent()->m_LeftChild = pLeaf;
			else
				pLeaf->GetParent()->m_RightChild = pLeaf;
		}
	}
	else
	{
		// If a leaf can be split, then we will need a new internal node to represent this split.
		// The internal node's parent will need to be the parent of this leaf.
		// The internal node's dividing plane axis will be the largest axis of the leaf's AABB.
		// The internal node's plane offset will be the distance from the origin at the halflength of the AABB.

		KdTreeInternalNode* myIntern = new KdTreeInternalNode();
		myIntern->m_Parent = pLeaf->GetParent();
		myIntern->m_PlaneAxis = largestIndex;
		myIntern->m_PlaneOffset = offset;

		// If the internal node has no parent then it will be the root of the tree.
		// If the internal node does have a parent then we will set the parent's first available
		//	child pointer (Left of Right) to this internal node.

		if (myIntern->GetParent() == nullptr)
			pTree->m_Root = myIntern;
		else
		{
			if (myIntern->GetParent()->m_LeftChild == nullptr)
				myIntern->GetParent()->m_LeftChild = myIntern;
			else
				myIntern->GetParent()->m_RightChild = myIntern;
		}

		// The leaf is to be split, so we will need a new leaf node.
		// The new leaf's bounds should represent the second half of the original leaf's AABB.
		// The original leaf's bounds should be adjusted to represent the first half.
		// The parents of both leaves should be set to the new internal node.

		// Recursively build the tree, using both leaves

		KdTreeLeafNode* myleaf = new KdTreeLeafNode();
		myleaf->m_Bounds = pLeaf->m_Bounds;
		myleaf->m_Bounds.min.v[largestIndex] = center.v[largestIndex];
		pLeaf->m_Bounds.max.v[largestIndex] = center.v[largestIndex];

		pLeaf->m_Parent = myIntern;
		myleaf->m_Parent = myIntern;

		BuildTree(pTree, pLeaf); //left
		BuildTree(pTree, myleaf); //right
	}

}

// CreateTree
//
// This function will create a new KdTree based on the provided sceneBounds
KdTree* KdTree::CreateTree(const AABB& sceneBounds)
{
	// Create a new KdTree and an initial Leaf.
	// The bounds of both should be set to the sceneBounds.
	// Build the tree.
	// Return the result.

	KdTree* myTree = new KdTree();
	myTree->m_SceneBounds = sceneBounds;
	
	KdTreeLeafNode* myLeaf = new KdTreeLeafNode();
	myLeaf->m_Bounds = sceneBounds;

	BuildTree(myTree, myLeaf);
	return myTree;
}

KdTree::~KdTree()
{
	// Remove all objects from the master object list and delete the root node.
}

void KdTree::Traverse( TraversalData* pData )
{
	// Call Traverse() from the root of the tree.
	m_Root->Traverse(pData);
}

void BuildAABB( AABB& aabb, const vec3f* pts, unsigned int ptCount )
{
	// For all the provided points, find the highest X, highest Y,
	// highest Z, lowest X, lowest Y, and lowest Z.
	// Use these values to build the AABB.

	vec3f myMin = vec3f(FLT_MAX, FLT_MAX, FLT_MAX);
	vec3f myMax = vec3f(-FLT_MAX, -FLT_MAX, -FLT_MAX);
	

	for (unsigned int i = 0; i < ptCount; i++)
	{
			for (unsigned int k = 0; k < 3; k++)
			{
				if (pts[i].v[k] <= myMin.v[k])
					myMin.v[k] = pts[i].v[k];
				else if ( pts[i].v[k] <= myMin.v[k])
					myMin.v[k] = pts[i].v[k];

				if ( pts[i].v[k] >= myMax.v[k])
					myMax.v[k] = pts[i].v[k];
				else if ( pts[i].v[k] >= myMax.v[k])
					myMax.v[k] = pts[i].v[k];
			}
	}

	aabb.max = myMax;
	aabb.min = myMin;

}

FrustumAABB::FrustumAABB(Frustum* pFrustum)
{
	// This function is completed for you
	m_Frustum = pFrustum;
	BuildAABB( m_Aabb, pFrustum->corners, 8 );
}

unsigned int FrustumAABB::FrustumAABBtoSplit(KdTreeInternalNode* pNode, TraversalData* pData)
{
	// This function is completed for you
	FrustumAABB* pFrustumAABB = (FrustumAABB*)pData->m_pVoid;
	return KdTree::ClassifyAABBToAAPlane( pFrustumAABB->m_Aabb, pNode->GetPlaneAxis(), pNode->GetPlaneOffset() );
}

unsigned int KdTree::ClassifyAABBToAAPlane( const AABB& aabb, unsigned int planeIndex, float planeOffset )
{
	 // Classify an AABB to an axis aligned plane.
	 // If the AABB is completely behind the plane, return 0.
	 // If the AABB is completely in front of the plane, return 1.
	 // If the AABB straddles the plane, return 2.

	if (aabb.max.v[planeIndex] < planeOffset)
		return 0;
	else if (aabb.min.v[planeIndex] > planeOffset)
		return 1;
	else
		return 2;

	/* TESTING AN AXIS-ALIGNED PLANE IS SIMPLER THAN TESTING A GENERIC PLANE */
	/* DO NOT USE THE ClassifyAabbToPlane FUNCTION FROM THE COLLISION LIBRARY */

}

unsigned int KdTree::ClassifySphereToAAPlane( const Sphere& sphere, unsigned int planeIndex, float planeOffset )
{
	// Classify a sphere to an axis aligned plane.
	// If the sphere is completely behind the plane, return 0.
	// If the sphere is completely in front of the plane, return 1.
	// If the sphere straddles the plane, return 2.

	if (sphere.m_Center.v[planeIndex] + sphere.m_Radius < planeOffset)
		return 0;
	else if (sphere.m_Center.v[planeIndex] - sphere.m_Radius > planeOffset)
		return 1;
	else
		return 2;

	/* TESTING AN AXIS-ALIGNED PLANE IS SIMPLER THAN TESTING A GENERIC PLANE */
	/* DO NOT USE THE ClassifySphereToPlane FUNCTION FROM THE COLLISION LIBRARY */

	return -1;
}

unsigned int KdTree::ClassifyObjectPerSplitFunc( KdTreeInternalNode* pNode, TraversalData* pData )
{
	// In this function, the optional data member of the TraversalData represents a SceneObject*.
	// Return the result of ClassifySphereToAAPlane using this object's bounds and the internal nodes plane.

	SceneObject* myObject = (SceneObject*)pData->m_pVoid;

	return ClassifySphereToAAPlane(myObject->m_Bounds, pNode->m_PlaneAxis, pNode->m_PlaneOffset);
}

bool KdTree::InsertObjectPerLeafFunc( KdTreeLeafNode* pNode, TraversalData* pData )
{
	// In this function, the optional data member of the TraversalData represents a SceneObject*.
	// Add the object to this leaf's object list.
	// Add this leaf to the object's leaf list at the first available spot.

	SceneObject* myObject = (SceneObject*)pData->m_pVoid;

	pNode->m_OverlappingObjects.push_back(myObject);


	KdTreeLeafNode** myObjectLeaf = myObject->GetOverlappedLeaves();
	for (int i = 0; i < 8; i++)
	{
		if (myObjectLeaf[i] == nullptr)
		{
			myObjectLeaf[i] = pNode;
			break;
		}
	}

	return true;
}

void KdTree::UpdateObject( SceneObject* pObject )
{
	// Constrain this object to the scene bounds.
	// If the object is contained by its leaves then no further processing is needed.
	// If the object is not contained then it must be reinserted into the tree.
	//		- Remove the object from its current leaves
	//		- Use a TraversalData object and a call to KdTree::Traverse to reinsert the object into the KdTree.
	//			- The necessary PerSplitFunc and PerLeafFunc are static members of KdTree. 
	//			- All members of the TraversalData object must be set except the PerObjectFunc

	pObject->ConstrainToAABB(m_SceneBounds);
	if (pObject->IsContained() == false)
	{
		pObject->RemoveFromLeaves();
		TraversalData myData;

		myData.m_pVoid = pObject;
		myData.m_PerLeafFunc = InsertObjectPerLeafFunc;
		myData.m_PerSplitFunc = ClassifyObjectPerSplitFunc;

		Traverse(&myData);
	}
}

void KdTree::InsertObject( SceneObject* pObject )
{
	// First try to remove this object from the tree.
	// If the object's tree member is not now null,
	// then it must belong to another tree and we can not
	// add it to this one under the current system.

	// Otherwise, set the object's tree to this.
	// Add the object to the master list of objects.
	// Update the object to insert it into the tree.
	RemoveObject(pObject);

	if (pObject->m_Tree == nullptr)
	{
		pObject->m_Tree = this;
		m_MasterObjectList.push_back(pObject);
		UpdateObject(pObject);
	}
}

void KdTree::RemoveObject( SceneObject* pObject )
{
	// If the tree of the object is not this tree
	//	then we can not remove it.


	// Remove the object from it's current leaves.
	if (pObject->m_Tree == this)
	{
		pObject->RemoveFromLeaves();
		// Remove the object from the master list of objects.
		// Set the objects tree to null.

		m_MasterObjectList.remove(pObject);
		
		pObject->m_Tree = nullptr;
	}
}

void KdTree::Update(void)
{
	// For all objects in the master list, update each one
	for (auto it = m_MasterObjectList.begin(); it != m_MasterObjectList.end(); ++it)
	{
		UpdateObject((*it));
	}
}