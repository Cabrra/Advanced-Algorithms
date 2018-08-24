#pragma once

#include "../CollisionLibrary/CollisionLibrary.h"

enum BVType{ BV_AABB, BV_SPHERE };

// BoundingVolume
//
// Base class for bounding volumes
class BoundingVolume
{
public:
	virtual ~BoundingVolume() {}

	// Get the BVType of this BV.
	// Used to determine type from base class pointers/referrences.
	virtual BVType GetBVType(void)const = 0;
	// Create a bounding volume of the specified type
	static BoundingVolume* Create(BVType bvType);
	// Make a copy of this BV with the same type and values
	virtual BoundingVolume* Copy(void)const = 0;
};

// SphereBV
//
// Class for sphere bounding volumes
class SphereBV : public BoundingVolume
{
	// The sphere of this BV
	Sphere m_Sphere;
public:
	// Get the BVType of this BV.
	// Used to determine type from base class pointers/referrences.
	BVType GetBVType(void)const{ return BV_SPHERE; }
	
	// Get the sphere of this BV
	const Sphere& GetSphere(void)const { return m_Sphere; }
	// Get the sphere of this BV
	Sphere& GetSphere(void){ return m_Sphere; }
	// Make a copy of this BV with the same type and values
	SphereBV* Copy(void)const
	{
		SphereBV* pCopy = new SphereBV;
		pCopy->m_Sphere = m_Sphere;

		return pCopy;
	}
};

class AabbBV : public BoundingVolume
{
	// The AABB of this BV
	AABB m_Aabb;
public:
	// Get the BVType of this BV.
	// Used to determine type from base class pointers/referrences.
	BVType GetBVType(void)const{ return BV_AABB; }

	// Get the AABB of this BV
	const AABB& GetAabb(void)const{ return m_Aabb; }
	// Get the AABB of this BV
	AABB& GetAabb(void){ return m_Aabb; }
	// Make a copy of this BV with the same type and values
	AabbBV* Copy(void)const
	{
		AabbBV* pCopy = new AabbBV;
		pCopy->m_Aabb = m_Aabb;

		return pCopy;
	}
};
