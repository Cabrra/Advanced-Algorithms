#pragma once

#include "vec3.h"
#include <vector>
using namespace std;

// EDMesh
//
// Contains all the data for a collision mesh.
struct EDMesh
{
	// Vertex indices. 3 Per triangle.
	vector<unsigned int> m_VertIndices;
	// Vertices
	vector<vec3f> m_Vertices;
	// Centroids of all triangles
	vector<vec3f> m_Centroids;
	// Normals of all triangles
	vector<vec3f> m_TriNormals;
};

// TriangleSet
//
// Each leaf of the BVH will have a TriangleSet as its stored data.
// Actual data of the mesh is stored in EDMesh.
struct TriangleSet
{
	// Pointer to the EDMesh.
	const EDMesh* m_pMesh;
	// List of triangle indices.
	// Triangle indices map to every three vertex indices in the EDMesh.
	// Ex: If m_TriIndices[0] == 5, this triangle
	//		is composed of m_pMesh->m_VertIndices[15], m_pMesh->m_VertIndices[16], and m_pMesh->m_VertIndices[17]
	vector< unsigned int > m_TriIndices;
};