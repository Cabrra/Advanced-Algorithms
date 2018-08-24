#ifndef ED2AABB_H
#define ED2AABB_H

#include "vec3.h"

struct ED2AABB
{
	vec3f min;
	vec3f max;
};

bool ED2AABBIntersect(const ED2AABB &a, const ED2AABB &b);

#endif