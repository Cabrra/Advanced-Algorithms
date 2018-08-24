#include "BVHInternalNode.h"

void BVHInternalNode::Traverse( TraversalData* pData )
{
	// Traverse the BVH from this subtree.
	// Use the PerBoundsFunc of the TraversalData to
	// determine if the children of this node should be traversed.

	if (pData->m_PerBoundsFunc(m_BoundingVolume, pData) == true)
	{
		//NOT SURE
		if (m_LeftChild != nullptr) 
			m_LeftChild->Traverse(pData);

		if (m_RightChild != nullptr) 
			m_RightChild->Traverse(pData);
	}
}