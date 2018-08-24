#include "Advanced Collisions.h"

bool IntersectRayTriangle( const vec3f &vert0, const vec3f &vert1, const vec3f &vert2, const vec3f &norm, const vec3f &start, const vec3f &d, float &t )
{
	// TODO: Read the header file comments for this function!

	// TODO: Complete this function
	// Tip: Use the SameSign() macro

	// *Skip testing against backfacing triangles*
	//	If the ray starts behind the triangle plane OR the angle between ray direction and tri normal is greater than 90 degrees
	//		Stop testing

	vec3f v = start - vert0;
	float check = dot_product(v, norm);
	if ( check < 0 || dot_product(norm, d) > ED_EPSILON)
		return false;

	vec3f s0 = vert0 - start;
	vec3f s1 = vert1 - start;
	vec3f s2 = vert2 - start;

	vec3f n0, n1, n2;
	cross_product(n0, s2, s1);
	cross_product(n1, s0, s2);
	cross_product(n2, s1, s0);

	float r0 = dot_product(n0, d);
	float r1 = dot_product(n1, d);
	float r2 = dot_product(n2, d);

	float offset = dot_product(vert0, norm);

	if (0 == r0 && 0 == r1 && 0 == r2)
		return false;
	else if (SameSign(r0, r1) && SameSign(r0, r2))
		t = ((offset - dot_product(start, norm)) / dot_product(norm, d));
	else
		return false;

	return true;
}

bool IntersectRaySphere(const vec3f &p, const vec3f &d, const vec3f &center, float radius, float &t, vec3f &q)
{
	// TODO: Read the header file comments for this function!

	// TODO: Complete this function
	//		 BE SURE TO MODIFY THE ALGORITHM AS SPECIFIED IN THE HEADER FILE COMMENTS

	vec3f m = p - center;
	float check = dot_product(m, m);
	if (check < radius*radius || dot_product(d, m) > ED_EPSILON)
		return false;

	float b = dot_product(m, d);
	float c = dot_product(m, m) - radius * radius; // Squared distance from start of ray to sphere surface
	if (c > 0.0f && b > 0.0f) return false; // Ray starts outside and points away
	float discr = b*b - c;
	if (discr < 0.0f) return false; // Negative discriminant means ray missed
	t = -b - sqrt( discr );
	if (t < 0.0f) return false; // Ray starts inside sphere, clamp to 0
	q = p + d * t;

	return true;
}

bool IntersectRayCylinder(const vec3f &sa, const vec3f &n, const vec3f &p, const vec3f &q, float r, float &t)
{	
	// TODO: Read the header file comments for this function!

    vec3f d = q - p; // vector from first point on cylinder segment to the end point on cylinder segment
	vec3f m = sa - p; // vector from first point on cylinder segment to start point of ray

	// Values used to calculate coefficients of quadratic formula.
	// You do not necessarily have to use any of these directly for the rest of the algorithm.
	float dd = dot_product( d, d ); // dot product of d with d (squared magnitude of d)
	float nd = dot_product( n, d ); // dot product of ray normal (n) with d
	float mn = dot_product( m, n ); 
	float md = dot_product( m, d ); 
	float mm = dot_product( m, m ); 


	// TODO: Optimization by early out
	//		 If the ray starts outside the top or bottom planes and points away, there can be no intersection.
	//step 1
	vec3f m2 = sa - q;
	vec3f d2 = p - q;

	if ((dot_product(m, d2) > 0 && dot_product(n, d2) > 0) || (dot_product(m2, d) > 0  && dot_product(n, d) > 0))
		return false;

	// Coefficients for the quadratic formula
	float a = dd - nd * nd;
	float b = dd*mn - nd*md;
	float c = dd*(mm - r*r) - md*md;

	// If a is approximately 0.0 then the ray is parallel to the cylinder and can't intersect
	if( abs(a) < FLT_EPSILON )
		return false;

	// TODO: Find time of intersection, if any
	//		 Use the quadratic formula to solve for t. Reference "Advanced Ray to Sphere.ppt" for an example.
	//		 As with "Advanced Ray to Sphere", the 2s and 4 in the formula ( x = (-b - sqrt(b*b - 4ac)) / 2a )
	//		 are cancelled out, resulting in a simplified form.

	//step 2
	float discr = b*b - a * c;
	if (discr < 0.0f) return false; // Negative discriminant means ray missed
	t = (-b - sqrt(discr)) / a;
	if (t < 0.0f) return false; // Ray starts inside sphere, clamp to 0

	//step 3
	vec3f hitPoint = sa + n * t;
	vec3f hitM = hitPoint - p;
	vec3f hitM2 = hitPoint - q;

	if (dot_product(hitM, d2) > 0 || dot_product(hitM2, d) > 0 )
		return false;


	return true;
}

bool IntersectRayCapsule(const vec3f &sa, const vec3f &n, const vec3f &p, const vec3f &q, float r, float &t)
{
	// TODO: Read the header file comments for this function!

	float fTime = FLT_MAX;
	t = FLT_MAX;
	bool bReturn = false;

	if (IntersectRayCylinder(sa, n, p, q, r, fTime) == true)
		bReturn = true;
	else
	{
		vec3f point;
		float mytime1, mytime2;
		mytime1 = mytime2 = FLT_MAX;
		bool myB1, myB2;
		myB1 = myB2 = false;

		if (IntersectRaySphere(sa, n, p, r, mytime1, point) == true)
			myB1 = true;
		if (IntersectRaySphere(sa, n, q, r, mytime2, point) == true)
			myB2 = true;

		bReturn = true; 

		if (myB1 == true && myB2 == true)
			fTime = min(mytime1, mytime2);
		else if (myB1 == true)
			fTime = mytime1;
		else if (myB2 == true)
			fTime = mytime2;
		else
			bReturn = false;
	}

	// TODO: Complete this function
	if (fTime < FLT_MAX && bReturn == true)
		t = fTime;
	return bReturn;
}

bool IntersectMovingSphereTriangle(const vec3f &vert0, const vec3f &vert1, const vec3f &vert2, const vec3f &norm, const vec3f &start, const vec3f &d, float r, float &t, vec3f &outNormal)
{
	// TODO: Read the header file comments for this function!

	bool bReturn = false;
	float fTime = FLT_MAX;
	t = FLT_MAX;

	vec3f verts[3] = { vert0, vert1, vert2 };

	// TODO: Complete this function	
	for (int i = 0; i < 3; i++)
	{
		verts[i] += norm * r;
	}
	//ray to triangle test
	if (IntersectRayTriangle(verts[0], verts[1], verts[2], norm, start, d, fTime) == true && fTime > 0.0f && fTime < 1.0f )
	{
		outNormal = norm;
		bReturn = true;
	}
	else
	{
		float mytime1, mytime2, mytime3;
		mytime1 = mytime2 = mytime3 = FLT_MAX;

		IntersectRayCapsule(start, d, vert0, vert1, r, mytime1);
		IntersectRayCapsule(start, d, vert1, vert2, r, mytime2);
		IntersectRayCapsule(start, d, vert2, vert0, r, mytime3);

		float myMin = min(mytime1, mytime2);
		fTime = min(myMin, mytime3);
		float length1, length2;

		if (fTime < FLT_MAX)
		{
			bReturn = true;
			vec3f hitPoint = start + d * fTime;
			vec3f capToSphe, capLine, closest;
			if (fTime == mytime1)
			{
				capToSphe = start - vert0;
				capLine = vert1 - vert0;
				float ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

				if (ratio < 0)
					ratio = 0;
				else if (ratio > 1)
					ratio = 1;
				closest = vert0 + capLine * ratio;

			}
			else if (fTime == mytime2)
			{
				capToSphe = start - vert1;
				capLine = vert2 - vert1;
				float ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

				if (ratio < 0)
					ratio = 0;
				else if (ratio > 1)
					ratio = 1;

				closest = vert1 + capLine * ratio;
			}
			else
			{
				capToSphe = start - vert2;
				capLine = vert0 - vert2;
				float ratio = dot_product(capToSphe, capLine) / dot_product(capLine, capLine);

				if (ratio < 0)
					ratio = 0;
				else if (ratio > 1)
					ratio = 1;

				closest = vert2 + capLine * ratio;
			}


			
			outNormal = (hitPoint - closest).normalize();
		}
	}
	if (fTime < FLT_MAX)
		t = fTime;
	return bReturn;
}

bool IntersectMovingSphereMesh( const vec3f &start, const vec3f &d, float r, const ED2Mesh* mesh, float &t, vec3f &outNormal )
{
	// TODO: Read the header file comments for this function!

	bool bCollision = false;
	t = FLT_MAX;
	float fTime = FLT_MAX;

	// TODO: Complete this function
	vec3f finalOut;

	size_t mySize = mesh->m_Triangles.size();
	for (size_t i = 0; i < mySize; i++)
	{
		unsigned int index0, index1, index2;

		index0 = mesh->m_Triangles[i].indices[0];
		index1 = mesh->m_Triangles[i].indices[1];
		index2 = mesh->m_Triangles[i].indices[2];

		if (index0 > index1)
			swap(index0, index1);
		if (index1 > index2)
			swap(index1, index2);
		if (index0 > index1)
			swap(index0, index1);

		float checkTime = FLT_MAX;
		vec3f checkNormal = vec3f(FLT_MAX, FLT_MAX, FLT_MAX);

		if (IntersectMovingSphereTriangle(mesh->m_Vertices[index0].pos, mesh->m_Vertices[index1].pos, mesh->m_Vertices[index2].pos, mesh->m_TriNorms[i], start, d, r, checkTime, checkNormal))
		{
			bCollision = true;
			if (checkTime < fTime)
			{
				fTime = checkTime;
				finalOut = checkNormal.normalize();
			}
		}

	}
	
	outNormal = finalOut;
	t = fTime;
	return bCollision;
}



