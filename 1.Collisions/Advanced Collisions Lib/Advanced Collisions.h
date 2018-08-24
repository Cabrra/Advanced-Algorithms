#ifndef ED_AC_LIB_H
#define ED_AC_LIB_H

#include "vec3.h"
#include "ED2BVH.h"
#include <math.h>

typedef ED2LeafMesh ED2Mesh;

// Macro to find the highest of two values
#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

// Macro to find the lowest of two values
#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

// Machine epsilon. Smallest value where guaranteed that: A + FLT_EPSILON != A
#ifndef FLT_EPSILON
#define FLT_EPSILON     1.192092896e-07F
#endif

// Maximum float value
#ifndef FLT_MAX
#define FLT_MAX			3.402823466e+38F
#endif

// Flag for specifying no collision
#ifndef AC_NO_COLLISION
#define AC_NO_COLLISION 0
#endif

// Flag for specifying collision
#ifndef AC_COLLISION
#define AC_COLLISION 1
#endif

// Flag for specifying collision with the ground
#ifndef AC_GROUND_COLLISION
#define AC_GROUND_COLLISION 3
#endif

// Flag for specifying maxiumum collisions (unused)
#ifndef AC_MAX_COLLISION
#define AC_MAX_COLLISION 4
#endif

// A small value used to try to avoid floating point precision limitations
#ifndef ED_EPSILON_DEFINED
#define ED_EPSILON_DEFINED 1
static const float ED_EPSILON = sqrt(FLT_EPSILON);
#endif

// A larger epsilon value
#ifndef ED_BIG_EPSILON
#define ED_BIG_EPSILON ED_EPSILON*100.0f
#endif

// Helper macro to determine if two floats have the same sign
#ifndef SameSign
#define SameSign(a,b) ( ((*(unsigned int*)&(a)) & 0x80000000) == ((*(unsigned int*)&(b)) & 0x80000000) )
#endif 

// IntersectRayTriangle
//
// In:
//		vert0 - First vertex of the triangle
//		vert1 - Second vertex of the triangle
//		vert2 - Third vertex of the triangle
//		norm - Normal of the triangle
//		start - Start of the ray
//		d - direction of the ray (normalized)
//
// Out:
//		t - Time of intersection, if any
//
// Return:
//		bool - True if intersection, false if not
//
// TODO:
//		If the ray starts behind the triangle or the dot product of the ray normal and tri normal is greater than ED_EPSILON, return false.
//		Implement the algorithm presented in "Intersecting Line to Triangle 2.ppt"
//		Assume that the vertices are already sorted properly.
//		 
bool IntersectRayTriangle( const vec3f &vert0, const vec3f &vert1, const vec3f &vert2, const vec3f &norm, const vec3f &start, const vec3f &d, float &t );

// IntersectRaySphere
//
// In:
//		p - start of the ray
//		d - direction of the ray (normalized)
//		center - center point of the sphere
//		radius - radius of the sphere
//
// Out:
//		t - Time of intersection, if any
//		q - point of intersection, if any
//
// Return:
//		bool - True if intersection, false if not
//
// TODO:
//		Implement the algorithm presented in "Advanced Ray to Sphere.ppt"
//		Adjust the algorithm so that the test stops and returns false if the ray points away from the sphere, regardless of ray start position.
//		This adjustment will make it so that a point moving away from or out of the sphere will not intersect.
bool IntersectRaySphere(const vec3f &p, const vec3f &d, const vec3f &center, float radius, float &t, vec3f &q);

// IntersectRayCylinder
//
// In:
//		sa - start of the ray
//		n - direction of the ray (normalized)
//		p - First (base) point on the cylinder segment
//		q - Second (top) point on the cylinder segment
//		r - Radius of the cylinder
//		
// Out:
//		t - Time of intersection, if any
//
// Return:
//		bool - True if intersection, false if not
//
// TODO:
//		Optimization - If the ray starts outside the top or bottom planes and points away, there can be no intersection.
//
//		Use the quadratic formula to determine if and when the ray intersects the cylinder.
//      Components (a,b,c) for the quadratic formula are given in the function body.
//		As with ray to sphere, if the discriminant is less than zero then there is no intersection.
//		If the time of intersection is negative then return no intersection.
//		If the point of intersection is not between the top and bottom planes of the cylinder, return no intersection.
//
//		This test will only detect intersection with the visible section of the cylinder.
//		There is no intersection with the endcaps and no intersection with the backfacing surface.
//
//		For an in depth explanation of a similar algorithm, see 
//		"(5.3.7) Intersecting Ray or Segment Against Cylinder" in "Real-Time Collision Detection"
//		As presented in the book, the algorithm works with finite segments and not rays so it is not all 100% applicable.
//		(Meaning, if you copy from the book you will likely screw yourself)
bool IntersectRayCylinder(const vec3f &sa, const vec3f &n, const vec3f &p, const vec3f &q, float r, float &t);

// IntersectRayCapsule
//
//	In:
//		sa - start of the ray
//		n - direction of the ray (normalized)
//		p - First point on the capsule segment
//		q - Second point on the capsule segment
//		r - radius of the capsule
//
//	Out:
//		t - Time of intersection, if any
//
// Return:
//		bool - True if intersection, false if not
//
//	TODO:
//		Determine if/when the ray intersects the cylinder of the capsule.
//			If there is no intersection with the cylinder, test against the spherical endcaps of the capsule finding the earliest time of intersection.
bool IntersectRayCapsule(const vec3f &sa, const vec3f &n, const vec3f &p, const vec3f &q, float r, float &t);

// IntersectMovingSphereTriangle
//
//	In:
//		vert0 - First vertex of the triangle
//		vert1 - Second vertex of the triangle
//		vert2 - Third vertex of the triangle
//		norm - Normal of the triangle
//		start - Start point of the moving sphere
//		d - direction of the moving sphere (normalized)
//		r - radius of the sphere
//
//	Out:
//		t - Time of intersection, if any
//		outNormal - normal of the surface where the intersection occured, if any
//
// Return:
//		bool - True if intersection, false if not
//
//	TODO:
//		Offset the vertices of the triangle in the direction of the triangle normal by the sphere radius
//		and perform a ray to triangle test. Assume the verts are already properly sorted.
//		If there was an intersection, stop testing and return the triangle normal as outNormal.
//		Else, find the earliest time of intersection (if any) between the ray and the edge capsules of the triangle.
//		(Edge capsules are based off of the original non-offset verts)
//			If there is an edge capsule intersection, calculate the vector from the closest point on the edge to the point of intersection.
//			Normalize this vector and return it as outNormal.
bool IntersectMovingSphereTriangle( const vec3f &vert0, const vec3f &vert1, const vec3f &vert2, const vec3f &norm, const vec3f &start, const vec3f &d, float r, float &t, vec3f &outNormal );

// IntersectMovingSphereMesh
//
//	In:
//		start - Start point of the moving sphere
//		d - direction of the moving sphere (normalized)
//		r - radius of the sphere
//		mesh - pointer to the mesh to perform intersection against
//
//	Out:
//		t - Time of intersection, if any
//		outNormal - normal of the surface where the intersection occured, if any
//
// Return:
//		bool - True if intersection, false if not
//
//	TODO:
//		For each triangle...
//			Sort the indices from lowest to highest as described in "Intersecting Line to Triangle 2.ppt".
//				This sorting can be done in a handful of "if" statements. You are sorting a very small set of values, keep it simple!
//			Perform IntersectMovingSphereTriangle with each triangle, finding the earliest time of intersection.
//			Return the surface normal at the point of earliest intersection as outNormal.
bool IntersectMovingSphereMesh( const vec3f &start, const vec3f &d, float r, const ED2Mesh* mesh, float &t, vec3f &outNormal );

#endif