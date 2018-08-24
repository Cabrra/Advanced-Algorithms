#include "BoundingVolume.h"

BoundingVolume* BoundingVolume::Create(BVType bvType)
{
	// Create and return a new BV of the appropriate type
	
	if (bvType == BV_AABB)
	{
		AabbBV* myBV = new AabbBV();
		return myBV;
	}
	else
	{
		SphereBV* myBV = new SphereBV();
		return myBV;
	}
}