#include "..\Advanced Collisions Lib\Advanced Collisions.h"

// Flag for specifying collision with a surface from above
#ifndef AC_CEILING_COLLISION
#define AC_CEILING_COLLISION 5
#endif

// Clamp
//
// This function simply clamps a float to be in the range of {min, max} and is complete for you
float Clamp(float n, float min, float max);

// ClosestPtSegmentSegment
//
// This function is mostly taken from "Real-Time Collision Detection" and it is completed for you.
// Given the two line segments <p1, q1> and <p2, q2> it will find the two closest points on the segments and return
// the squared distance between then.
//
// c1 is the closest point on <p1, q1> and c2 is the closest point on <p2, q2>.
//
// In:
//		p1 - Start point on segment one
//		q1 - End point on segment one
//		p2 - Start point on segment two
//		q2 - End point on segment two
//
// Out:
//		s - The scalar distance (0 to 1) from p1 to the closest point along q1-p1
//		t - The scalar distance (0 to 1) from p2 to the closest point along q2-p2
//		c1 - The closest point on the first segment to the second segment
//		c2 - The closest point on the second segment to the first segment
//
// Return:
//		float - The squared distance between c1 and c2 (squared distance between the line segments)
float ClosestPtSegmentSegment( const vec3f &p1, const vec3f &q1, const vec3f &p2, const vec3f &q2, float &s, float &t, vec3f &c1, vec3f &c2 );

// ClosestPtSegmentTriangle
//
// In:
//		p - Start point on segment
//		q - End point on segment
//		a - First vertex on the triangle
//		b - Second vertex on the triangle
//		c - Thired vertex on the triangle
//		n - Normal of the triangle
//
// Out:
//		c1 - Closest point on the segment to the triangle
//		c2 - Closest point on the triangle to the segment
//
// Return:
//		float - The squared distance between the segment and the triangle (Squared distance between c1 and c2).
//
// TODO:
//		First determine if the segment intersects the triangle.
//			You may use IntersectRayTriangle for this. If you use q-p for the ray then t must be between 0.0 and 1.0 for an intersection.
//			If there is an intersection then the intersection point is the closest point on both the segment and triangle.
//				Set c1 and c2 to the intersection point and stop testing.
//
//		For each edge of the triangle...
//			Find the closest points on the segment and the edge.
//			Out of all the Segment/Edge pairs of closest points, find the pair that is closest together.
//			Set c1 and c2 to this pair of points.
//
//		Project the start point of the segment on to the plane of the triangle.
//			If this projected point is inside the triangle, test if start and projected point are closer together than c1 and c2.
//			If start and projected are closer together, set c1 and c2 appropriately.
//
//      Project the end point of the segment on to the plane of the triangle.
//			If this projected point is inside the triangle, test if end and projected point are closer together than c1 and c2.
//			If end and projected are closert together, set c1 and c2 appropriately.
//
float ClosestPtSegmentTriangle( const vec3f &p, const vec3f &q, const vec3f &a, const vec3f &b, const vec3f &c, const vec3f &n, vec3f &c1, vec3f &c2 );

// CapsuleToTriangle
//
// In:
//		p - Top point on segment inside capsule
//		q - End point on segment inside capsule
//		r - Radius of the capsule
//		a - First vertex on the triangle
//		b - Second vertex on the triangle
//		c - Thired vertex on the triangle
//		n - Normal of the triangle
//
// Out:
//		cp - Closest point on internal segment of capsule to the triangle
//		cq - Closest point on the triangle to the internal segment of the capsule
//
// Return:
//		bool - True if there is a collision, false if not
//
// TODO:
//		Use the internal segment of the capsule to find the closest points on the segment and the triangle.
//		Determine if the distance between these points is less than the radius of the capsule.
bool CapsuleToTriangle( const vec3f &p, const vec3f &q, float r, const vec3f &a, const vec3f &b, const vec3f &c, const vec3f &n, vec3f &cp, vec3f &cq );

// CapsuleToTrianglesReaction
//
// In:
//		p - Top point on segment inside capsule
//		q - End point on segment inside capsule
//		r - Radius of the capsule
//		meshList - List of meshes to test against
//	
// Out:
//		newP - New position for the top point on the segment inside capsule
//
// Return:
//		unsigned int - A combination of AC_COLLISION flags that describes the type of collision(s)
//
// TODO:
//		See the function body for a description of what to do.
unsigned int CapsuleToTrianglesReaction( vec3f p, vec3f q, float r,
										const std::list<const ED2LeafMesh *> &meshList, vec3f &newP );