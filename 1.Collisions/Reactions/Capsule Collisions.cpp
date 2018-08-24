#include "Capsule Collisions.h"

float Clamp(float n, float min, float max)
{
	if( n < min ) return min;
	if( n > max ) return max;
	return n;
}

float ClosestPtSegmentSegment( const vec3f &p1, const vec3f &q1, const vec3f &p2, const vec3f &q2, float &s, float &t, vec3f &c1, vec3f &c2 )
{
	vec3f d1 = q1 - p1;
	vec3f d2 = q2 - p2;
	vec3f r = p1 - p2;
	float a = dot_product( d1, d1 );
	float e = dot_product( d2, d2 );
	float f = dot_product( d2, r );

	if( a <= ED_EPSILON && e <= ED_EPSILON )
	{
		s = t = 0.0f;
		c1 = p1; 
		c2 = p2;
		return dot_product( c1 - c2, c1 - c2 );
	}
	if( a <= ED_EPSILON )
	{
		s = 0.0f;
		t = f / e;
		t = Clamp( t, 0.0f, 1.0f );
	}
	else
	{
		float c = dot_product( d1, r );
		if( e <= ED_EPSILON )
		{
			t = 0.0f;
			s = Clamp( -c / a, 0.0f, 1.0f );
		}
		else
		{
			float b = dot_product( d1, d2 );
			float denom = a*e - b*b;
			
			if( denom != 0.0f )
			{
				s = Clamp( (b*f - c*e) / denom, 0.0f, 1.0f );
			}
			else
				s = 0.0f;

			t = (b*s + f) / e;

			if( t < 0.0f )
			{
				t = 0.0f;
				s = Clamp( -c / a, 0.0f, 1.0f );
			}
			else if( t > 1.0f )
			{
				t = 1.0f;
				s = Clamp( (b - c)/a, 0.0f, 1.0f );
			}
		}
	}

	c1 = p1 + d1 * s;
	c2 = p2 + d2 * t;
	return dot_product( c1 - c2, c1 - c2 );
}

float ClosestPtSegmentTriangle( const vec3f &p, const vec3f &q, const vec3f &a, const vec3f &b, const vec3f &c, const vec3f &n, vec3f &c1, vec3f &c2 )
{
	float squaredDistance = 0.0f;

	return squaredDistance;
}

bool CapsuleToTriangle( const vec3f &p, const vec3f &q, float r, const vec3f &a, const vec3f &b, const vec3f &c, const vec3f &n, vec3f &cp, vec3f &cq )
{
	return false;
}

unsigned int CapsuleToTrianglesReaction( vec3f p, vec3f q, float r,
										const std::list<const ED2LeafMesh *> &meshList, vec3f &newP )
{
	// For this function you will be iterating through a list of meshes, testing for collision between
	// a capsule and the triangles of the meshes, and applying collision reaction to push the capsule outside of the triangles
	//
	// This list of meshes was pre-culled from a BVH, so you are only testing against geometry that is near the capsule.

	// This unsigned int will be returned at the end of the function. It will hold a combination of flags
	// that describes the collision(s). For example, if there is a collision with the ground, the 
	// AC_GROUND_COLLISION flag will be enabled.
	unsigned int iResult = AC_NO_COLLISION;

	// Iterate through each mesh...
	std::list<const ED2LeafMesh *>::const_iterator meshIter = meshList.begin();
	for(; meshIter != meshList.end(); ++meshIter )
	{
		// Iterate through each triangle of each mesh...
		for(unsigned int i = 0; i < (*meshIter)->m_Triangles.size(); ++i)
		{
			// If there is a collision between the capsule and the current triangle...
			//	- Enable the AC_COLLISION flag in iResult
			//	- Calculate the surface normal at the point of contact on the triangle
			//		+ Get the vector from the closest point on the triangle to the closest point on the capsule segment
			//      + Get the magnitude of this vector (d)
			//		+ Normalize this vector.
			//	- if the y-component of the triangle normal is >= 0.707f (surface is flatter than 45 degrees)
			//		- Get the distance from the closest point on the capsule segment to q
			//			- if this distance is approximately 0, enable the AC_GROUND_COLLISION flag in iResult
			//	- if the y-component of the triangle normal is <= -0.707f (surface is pointed downwards)
			//		- Enable the AC_CEILING_COLLISION flag in iResult
			//	- Translate p and q by surface normal * (r - d + ED_EPSILON)
			//		- This will push the capsule out of the triangle
		}
	}
	
	// Set newP equal to p so that the new final position of the capsule will be caught
	newP = p;

	// Return iResult which describes the state(s) of the collisions
	return iResult;
}