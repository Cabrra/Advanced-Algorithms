#include "CollisionLibrary.h"
#include <math.h>

// ComputePlane
//
// Calculate the plane normal and plane offset from the input points
void ComputePlane(Plane &plane, const vec3f& pointA, const vec3f& pointB, const vec3f &pointC)
{
	vec3f edge0 = pointB - pointA;
	vec3f edge1 = pointC - pointB;
	//vec3f edge2 = pointA - pointC;

	vec3f normal;
	cross_product(normal, edge0, edge1);
	plane.normal = normal.normalize();

	plane.offset = dot_product(pointA, plane.normal);
}

// ClassifyPointToPlane
//
// Perform a half-space test. Returns 1 if the point is on or in front of the plane.
// Returns 2 if the point is behind the plane.
int ClassifyPointToPlane(const Plane& plane, const vec3f& point)
{
	float myCheck = dot_product(plane.normal, point) - plane.offset;

	if (myCheck >= 0)
		return 1;
	else
		return 2;
}

// ClassifySphereToPlane
//
// Perform a sphere-to-plane test. 
// Returns 1 if the sphere is in front of the plane.
// Returns 2 if the sphere is behind the plane.
// Returns 3 if the sphere straddles the plane.
int ClassifySphereToPlane(const Plane& plane, const Sphere& sphere)
{
	float myCheck = dot_product(plane.normal, sphere.m_Center) - plane.offset;

	if (myCheck < -sphere.m_Radius)
		return 2;
	else if (myCheck > sphere.m_Radius)
		return 1;
	else
		return 3;
}

// ClassifyAabbToPlane
//
// Performs a AABB-to-plane test.
// Returns 1 if the aabb is in front of the plane.
// Returns 2 if the aabb is behind the plane.
// Returns 3 if the aabb straddles the plane.
int ClassifyAabbToPlane(const Plane& plane, const AABB& aabb)
{
	vec3f absNormal;
	absNormal.x = abs(plane.normal.x);
	absNormal.y = abs(plane.normal.y);
	absNormal.z = abs(plane.normal.z);

	vec3f center = (aabb.max + aabb.min) /2;
	vec3f extents = aabb.max - center;
	float radius = dot_product(absNormal, extents);
	float myCheck = dot_product(plane.normal, center) - plane.offset;


	if (myCheck < -radius)
		return 2;
	else if (myCheck > radius)
		return 1;
	else
		return 3;
}

// ClassifyCapsuleToPlane
//
// Performs a Capsule-to-plane test.
// Returns 1 if the aabb is in front of the plane.
// Returns 2 if the aabb is behind the plane.
// Returns 3 if the aabb straddles the plane.
int ClassifyCapsuleToPlane(const Plane& plane, const Capsule& capsule)
{
	Sphere myS1, myS2;
	myS1.m_Center = capsule.m_Segment.m_Start;
	myS1.m_Radius = capsule.m_Radius;
	myS2.m_Center = capsule.m_Segment.m_End;
	myS2.m_Radius = capsule.m_Radius;

	int check1 = ClassifySphereToPlane(plane, myS1);
	int check2 = ClassifySphereToPlane(plane, myS2);

	if (check1 == check2)
		return check1;
	else
		return 3;
}

// BuildFrustum
//
// Calculates the corner points and planes of the frustum based upon input values.
// Should call ComputePlane.
void BuildFrustum( Frustum& frustum, float fov, float nearDist, float farDist, float ratio, const matrix4f& camXform )
{
	vec3f nearCenter = camXform.axis_pos - camXform.axis_z * nearDist;
	vec3f farCenter = camXform.axis_pos - camXform.axis_z * farDist;

	float Hnear = 2 * tan(fov / 2) * nearDist;
	float Hfar = 2 * tan(fov / 2) * farDist;
	float Wnear = Hnear * ratio;
	float Wfar = Hfar * ratio;

	frustum.corners[FTL] = farCenter + camXform.axis_y * (Hfar*0.5) - camXform.axis_x * (Wfar*0.5);
	frustum.corners[FTR] = farCenter + camXform.axis_y * (Hfar*0.5) + camXform.axis_x * (Wfar*0.5);
	frustum.corners[FBL] = farCenter - camXform.axis_y * (Hfar*0.5) - camXform.axis_x * (Wfar*0.5);
	frustum.corners[FBR] = farCenter - camXform.axis_y * (Hfar*0.5) + camXform.axis_x * (Wfar*0.5);

	frustum.corners[NTL] = nearCenter + camXform.axis_y * (Hnear*0.5) - camXform.axis_x * (Wnear*0.5);
	frustum.corners[NTR] = nearCenter + camXform.axis_y * (Hnear*0.5) + camXform.axis_x * (Wnear*0.5);
	frustum.corners[NBL] = nearCenter - camXform.axis_y * (Hnear*0.5) - camXform.axis_x * (Wnear*0.5);
	frustum.corners[NBR] = nearCenter - camXform.axis_y * (Hnear*0.5) + camXform.axis_x * (Wnear*0.5);

	//check
	ComputePlane(frustum.planes[LEFT_PLANE], frustum.corners[NBL], frustum.corners[FBL], frustum.corners[FTL]);
	ComputePlane(frustum.planes[FAR_PLANE], frustum.corners[FTL], frustum.corners[FBL], frustum.corners[FBR]);
	ComputePlane(frustum.planes[RIGHT_PLANE], frustum.corners[FTR], frustum.corners[FBR], frustum.corners[NBR]);
	ComputePlane(frustum.planes[NEAR_PLANE], frustum.corners[NTR], frustum.corners[NBR], frustum.corners[NBL]);
	ComputePlane(frustum.planes[TOP_PLANE], frustum.corners[NTR], frustum.corners[NTL], frustum.corners[FTL]);
	ComputePlane(frustum.planes[BOTTOM_PLANE], frustum.corners[NBL], frustum.corners[NBR], frustum.corners[FBR]);
}

// FrustumToSphere
//
// Perform a Sphere-to-Frustum check. Returns true if the sphere is inside. False if not.
bool FrustumToSphere(const Frustum& frustum, const Sphere& sphere)
{
	for (int i = 0; i < 6; i++)
	{
		if (ClassifySphereToPlane(frustum.planes[i], sphere) == 2)
			return false;
	}
	return true;
}

// FrustumToAABB
//
// Perform a Aabb-to-Frustum check. Returns true if the aabb is inside. False if not.
bool FrustumToAABB(const Frustum& frustum, const AABB& aabb)
{
	for (int i = 0; i < 6; i++)
	{
		if (ClassifyAabbToPlane(frustum.planes[i], aabb) == 2)
			return false;
	}
	return true;
}

// FrustumToCapsule
//
// Perform a Capsule-to-Frustum check. Returns true if the Capsule is inside. False if not.
bool FrustumToCapsule(const Frustum& frustum, const Capsule& capsule)
{
	for (int i = 0; i < 6; i++)
	{
		if (ClassifyCapsuleToPlane(frustum.planes[i], capsule) == 2)
			return false;
	}
	return true;
}

// AABBtoAABB
//
// Returns true if the AABBs collide. False if not.
bool AABBtoAABB(const AABB& lhs, const AABB& rhs)
{
	if (lhs.max.x < rhs.min.x || lhs.min.x > rhs.max.x) return false;
	if (lhs.max.y < rhs.min.y || lhs.min.y > rhs.max.y) return false;
	if (lhs.max.z < rhs.min.z || lhs.min.z > rhs.max.z) return false;
	return true;
}

// SphereToSphere
//
// Returns true if the Spheres collide. False if not.
bool SphereToSphere(const Sphere& lhs, const Sphere& rhs)
{
	vec3f v = lhs.m_Center - rhs.m_Center;
	float check = dot_product(v, v);
	float myRadius = (lhs.m_Radius + rhs.m_Radius) * (lhs.m_Radius + rhs.m_Radius);

	if (check < myRadius)
		return true;
	else
		return false;
}

// SphereToAABB
//
// Returns true if the sphere collides with the AABB. False if not.
bool SphereToAABB(const Sphere& lhs, const AABB& rhs)
{
	vec3f myClosest = lhs.m_Center;

	for (int i = 0; i < 3; i++)
	{
		if (myClosest.v[i] < rhs.min.v[i])
			myClosest.v[i] = rhs.min.v[i];
		else if (myClosest.v[i] > rhs.max.v[i])
			myClosest.v[i] = rhs.max.v[i];
	}

	vec3f distanceV = lhs.m_Center - myClosest;

	float myDistance = dot_product(distanceV, distanceV); //d^2
	float radius = lhs.m_Radius * lhs.m_Radius;

	if (myDistance < radius)
		return true;
	else
		return false;
}

// CapsuleToSphere
//
// Returns true if the capsule collides with the sphere. False if not.
bool CapsuleToSphere(const Capsule& capsule, const Sphere& sphere)
{
	vec3f capToSphe = sphere.m_Center - capsule.m_Segment.m_Start;
	vec3f capLine = capsule.m_Segment.m_End - capsule.m_Segment.m_Start;
	float ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

	if (ratio < 0)
		ratio = 0;
	else if (ratio > 1)
		ratio = 1;

	vec3f closest = capsule.m_Segment.m_Start + capLine * ratio;

	Sphere myS;
	myS.m_Center = closest;
	myS.m_Radius = capsule.m_Radius;

	return SphereToSphere(sphere, myS);
}