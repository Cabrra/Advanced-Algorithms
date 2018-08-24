#ifndef ED2VERTEX_H
#define ED2VERTEX_H

#include "vec3.h"

struct ED2Vertex
{
	vec3f pos;
	vec3f norm;
	float u;
	float v;

	bool operator==(const ED2Vertex& vert)const
	{
		return (vert.pos.x == pos.x && vert.pos.y == pos.y && vert.pos.z == pos.z &&
			vert.norm.x == norm.x && vert.norm.y == norm.y && vert.norm.z == norm.z &&
			vert.u == u && vert.v == v);
	}
};

#endif