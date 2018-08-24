#include "BVH.h"

void BuildBVH( BVH* pBVH, BVHLeafNodeBase* pLeaf )
{
	// This logic of this function operates similarly to the Build of the KdTree.
	//
	// Check if the current leaf can be split.
	//	If the leaf can not be split, check if
	//	the leaf has a parent. If no parent exists

	if (pLeaf->Splittable() == false)
	{
		//  then this leaf will be the root of the tree.
			//pBVH->m_Root = pLeaf;
		if (pLeaf->m_Parent != nullptr)
		{
			//  If the leaf does have a parent then
			//	set the parent's first available child pointer
			//	to this leaf.

			if (pLeaf->m_Parent->m_LeftChild == nullptr)
				pLeaf->m_Parent->m_LeftChild = pLeaf;
			else if (pLeaf->m_Parent->m_RightChild == nullptr)
				pLeaf->m_Parent->m_RightChild = pLeaf;
		}
		else
			pBVH->m_Root = pLeaf;
	//  Add this leaf to the list of leaves in the BVH.
	//	No further processing needs to be done at this point.
	pBVH->m_LeafList.push_back(pLeaf);
	}
	else
	{
		// If the leaf can be split, create a new internal node using this
		// leaf's bounding volume. Set the new internal node's parent to the leaf's parent.

		BVHInternalNode* myIntern = new BVHInternalNode(pLeaf->GetBoundingVolume());

		myIntern->m_Parent = pLeaf->m_Parent;

		// Split the leaf, and set both leaves' parent nodes to the new internal node.

		BVHLeafNodeBase* mySecond = pLeaf->Split();

		mySecond->m_Parent = myIntern;
		pLeaf->m_Parent = myIntern;

		// If the new internal node has no parent, it will be the root of this BVH.
		// Otherwise, set the paren't first available child pointer to this new internal node.
		if (myIntern->m_Parent != nullptr)
		{
			if (myIntern->m_Parent->m_LeftChild == nullptr)
				myIntern->m_Parent->m_LeftChild = myIntern;
			else if (myIntern->m_Parent->m_RightChild == nullptr)
				myIntern->m_Parent->m_RightChild = myIntern;
		}
		else
			pBVH->m_Root = myIntern;

		// Recursively call BuildBV for the leaf and the new leaf.
		BuildBVH(pBVH, pLeaf);
		BuildBVH(pBVH, mySecond);
	}
}

void BVH::Traverse( TraversalData* pData )
{
	// Traverse this BVH using the TraversalData, starting at the root
	m_Root->Traverse(pData);
}