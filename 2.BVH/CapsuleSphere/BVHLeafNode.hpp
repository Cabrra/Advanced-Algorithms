#pragma once


template< typename DataType, class LeafType >
BVH* BVHLeafNode<DataType, LeafType>::CreateBVH( const DataType& data, BVType bvType )
{
	// Create a new BVH, and a new Leaf of the specified LeafType.
	// Set the data of the new Leaf and Build it.
	// Build the BVH from the new BVH and the new leaf.
	// Return the new BVH.

	BVH* myBVH = new BVH();
	LeafType* myLeaf = new LeafType(bvType);
	myLeaf->m_Data = data;
	
	myLeaf->Build();
	BuildBVH(myBVH, myLeaf);

	return myBVH;
}

template< typename DataType, class LeafType >
void BVHLeafNode<DataType, LeafType>::Traverse( TraversalData* pData )
{
	// Use the PerBoundsFunc of the TraversalData to
	// determine if the PerLeafDataFunc needs to be 
	// called on the data stored in this leaf.

	if (pData->m_PerBoundsFunc != nullptr && pData->m_PerBoundsFunc(m_BoundingVolume, pData) == true)
		pData->m_PerLeafDataFunc(&m_Data, pData);
}