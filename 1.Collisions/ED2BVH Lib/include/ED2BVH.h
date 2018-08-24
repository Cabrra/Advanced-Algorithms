#ifndef ED2BVH_H
#define ED2BVH_H

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#ifndef FLT_MAX
#define FLT_MAX			3.402823466e+38F
#endif

#ifndef FLT_EPSILON
#define FLT_EPSILON		1.192092896e-07F
#endif

#include "ED2AABB.h"
#include "ED2Triangle.h"
#include "ED2Vertex.h"
#include "ED2Edge.h"
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <math.h>
#include <fstream>
#include <iostream>

using namespace std;

#ifndef ED_EPSILON_DEFINED
#define ED_EPSILON_DEFINED 1
const float ED_EPSILON = sqrt(FLT_EPSILON);
#endif

struct ED2MeshData
{
	unsigned int m_id;
	std::vector<ED2Vertex> m_Vertices;
	std::vector<vec3f> m_Centroids;
};

struct ED2LeafMesh
{
	unsigned int m_id;
	std::vector<ED2Triangle> m_Triangles;
	std::vector<ED2Vertex> m_Vertices;
	std::vector<vec3f> m_TriNorms;
	std::vector<ED2Edge> m_Edges;
};

struct ED2MeshPartCluster
{
	vec3f m_min;
	vec3f m_max;
	vec3f m_centMin;
	vec3f m_centMax;
	vec3f m_avgCent;

	// Key = index into mesh list, Value = list of triangle indices
	std::map<unsigned int, std::vector< unsigned int >> m_indexMap;
};

class ED2BVHNode
{
	friend class ED2BVH;
	friend void _traverse( ED2BVHNode *pCurrent, bool(*fp)(ED2BVHNode *pNode, void *pVoid), void *pV );
	friend ED2BVHNode *_loadSubTree( fstream &fileStream );

protected:
	ED2AABB m_AABB;

	ED2BVHNode *m_pParent;

	virtual void Build(const std::vector<ED2MeshData> &meshes) = 0;
	virtual void Build(const std::vector<ED2MeshData> &meshes, const ED2MeshPartCluster &cluster)
	{
		m_AABB.min = cluster.m_min;
		m_AABB.max = cluster.m_max;
	}

public:
	virtual bool IsLeaf(void) const { return false; }
	const ED2AABB &GetAABB(void) const { return m_AABB; }

	ED2BVHNode(void) : m_pParent(NULL) {}

	virtual ~ED2BVHNode(){}
};

class ED2BVHInternalNode : public ED2BVHNode
{
	friend class ED2BVH;
	friend void _traverse( ED2BVHNode *pCurrent, bool(*fp)(ED2BVHNode *pNode, void *pVoid), void *pV );
	friend ED2BVHNode *_loadSubTree( fstream &fileStream );

protected:
	
	ED2BVHNode *m_pLeft;
	ED2BVHNode *m_pRight;
	void Build(const std::vector<ED2MeshData> &meshes);

public:

	ED2BVHInternalNode(void) : m_pLeft(NULL), m_pRight(NULL) {}
	
	const ED2BVHNode *GetLeftChild(void) const { return m_pLeft; }
	const ED2BVHNode *GetRightChild(void) const { return m_pRight; }

	virtual ~ED2BVHInternalNode()
	{
		delete m_pLeft;
		delete m_pRight;
	}

};

class ED2BVHLeafNode : public ED2BVHNode
{
	friend class ED2BVH;
	friend void _traverse( ED2BVHNode *pCurrent, bool(*fp)(ED2BVHNode *pNode, void *pVoid), void *pV );
	friend ED2BVHNode *_loadSubTree( fstream &fileStream );

protected:
	std::vector< ED2LeafMesh > m_Meshes;
	void Build(const std::vector<ED2MeshData> &meshes);
	void Build(const std::vector<ED2MeshData> &meshes, const ED2MeshPartCluster &cluster);
public:
	bool IsLeaf(void) const { return true; }
	const std::vector< ED2LeafMesh > &GetMeshes(void) const{ return m_Meshes; }

	virtual ~ED2BVHLeafNode(){}
};

class ED2BVH
{
private:
	unsigned int m_nodeCount;
	unsigned int m_treeDepth;
	unsigned int m_leafSize;
	unsigned int m_leafCount;

	ED2BVHNode *m_pRoot;
	std::vector<ED2BVHLeafNode *> m_leafList;
	
	ED2BVH(void){};
	void BuildHierarchy( ED2BVHNode *pCurrent, const std::vector<ED2MeshData> &meshes );
	void BuildHierarchy( ED2BVHNode *pCurrent, const std::vector<ED2MeshData> &meshes, const ED2MeshPartCluster &cluster );

	friend void _traverse( ED2BVHNode *pCurrent, bool(*fp)(ED2BVHNode *pNode, void *pVoid), void *pV );

public:
	ED2BVH( const std::vector<ED2MeshData> &meshes, unsigned int leafSize, bool forceRecenter = false );
	ED2BVH( std::vector<ED2MeshData> &meshes, unsigned int leafSize, bool calcCentroids, bool forceRecenter );

	ED2BVH( const char *fileName );

	void Traverse( bool(*fp)(ED2BVHNode *pNode, void *pVoid), void *pV )
	{
		_traverse( m_pRoot, fp, pV );
	}

	void Serialize(const char* fileName);

	const std::vector<ED2BVHLeafNode *>& GetLeaves(void)const { return m_leafList; }

	virtual ~ED2BVH(){ delete m_pRoot; }
};
	
#endif