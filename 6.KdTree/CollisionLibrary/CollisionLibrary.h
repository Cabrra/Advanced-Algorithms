#pragma once

#include <math.h>
#include "../CapsuleSphere/vec3.h"
#include "../CapsuleSphere/matrix4.h"

struct Plane
{
	vec3f normal;
	float offset;
};

struct AABB
{
	vec3f min;
	vec3f max;
};

struct Frustum
{	
	Plane planes[6];
	vec3f corners[8];
};

struct Segment
{
	vec3f m_Start;
	vec3f m_End;
};

struct Sphere
{
	vec3f m_Center;
	float m_Radius;
};

struct Capsule
{
	Segment m_Segment;
	float m_Radius;
};

enum FrustumCorners{ FTL = 0, FBL, FBR, FTR, NTL, NTR, NBR, NBL };
enum FrustumPlanes{ NEAR_PLANE = 0, FAR_PLANE, LEFT_PLANE, RIGHT_PLANE, TOP_PLANE, BOTTOM_PLANE };

void ComputePlane(Plane &plane, const vec3f& pointA, const vec3f& pointB, const vec3f &pointC);

int ClassifyPointToPlane(const Plane& plane, const vec3f& point);

int ClassifySphereToPlane(const Plane& plane, const Sphere& sphere);

int ClassifyAabbToPlane(const Plane& plane, const AABB& aabb);

int ClassifyCapsuleToPlane(const Plane& plane, const Capsule& capsule);

void BuildFrustum( Frustum& frustum, float fov, float nearDist, float farDist, float ratio, const matrix4f& camXform );

bool FrustumToSphere(const Frustum& frustum, const Sphere& sphere);

bool FrustumToAABB(const Frustum& frustum, const AABB& aabb);

bool FrustumToCapsule(const Frustum& frustum, const Capsule& capsule);

bool AABBtoAABB(const AABB& lhs, const AABB& rhs);

bool SphereToSphere(const Sphere& lhs, const Sphere& rhs);

bool SphereToAABB(const Sphere& lhs, const AABB& rhs);

bool CapsuleToSphere(const Capsule& capsule, const Sphere& sphere);