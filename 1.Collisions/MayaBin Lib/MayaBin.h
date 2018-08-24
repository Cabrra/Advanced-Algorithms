#include <fstream>
#include <vector>

#include "matrix4.h"

#ifndef MAYABIN_H
#define MAYABIN_H

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

struct Triangle
{
	unsigned int indices[3];
};

struct Vertex
{
	vec3f pos;
	vec3f norm;
	float u;
	float v;
};

struct Edge
{
	unsigned int indices[2];
	unsigned int tri;
	vec3f normal;
};

struct MayaMesh
{
	matrix4f m_Matrix;
	std::vector< Vertex > m_Verts;
	std::vector< Triangle > m_Tris;
	std::vector< Edge > m_Edges;
	std::vector< vec3f > m_TriNorms;

	std::vector< std::vector< unsigned int > > m_EdgeIndices;
	vec3f m_min;
	vec3f m_max;
};

class MayaBin
{
public:
	
	MayaBin(void){}
	virtual ~MayaBin(){}

	void Load( const char *pFileName, bool findEdges = true );

	std::vector< MayaMesh > m_Meshes;
};

void FindEdges(MayaMesh &mesh);

#endif