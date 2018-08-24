#ifndef _EDMESH_H_
#define _EDMESH_H_

#include <vector>
using namespace std;

#include "matrix4.h"

struct EDMesh
{
	vector< vec3f > m_Verts;
	vector< vec3f > m_Norms;
	vector< float > m_UVs;

	matrix4f m_Transform;
};

#endif