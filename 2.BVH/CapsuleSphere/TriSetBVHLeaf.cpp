#include "TriSetBVHLeaf.h"
#include "BoundingVolume.h"

bool TriSetBVHLeaf::Splittable(void)
{
	// This function should return true if there is more than the maximum
	// number of triangles stored in this leaf.
	// To test the robustness of your implementation, this limit should be one triangle.

	if (m_Data.m_TriIndices.size() > 1)
		return true;

	return false;
}

BVHLeafNodeBase* TriSetBVHLeaf::Split(void)
{
	// Split along the triangle mean, as was demonstrated in lecture.
	// Use this spliting approach to divide the set of triangle indices
	// in this leaf. 
	
	vec3f centroCenter = vec3f(0.0f, 0.0f, 0.0f);

	size_t trigSize = m_Data.m_TriIndices.size();
	
	vec3f myMin, myMax;
	myMin = myMax = m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[0]];
	for (size_t i = 0; i < trigSize; i++)
	{
		//find the center centroid
		centroCenter += m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[i]];

		//find initial AABB bounds
		for (int k = 0; k < 3; k++)
		{
			if (m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[i]].v[k] < myMin.v[k])
				myMin.v[k] = m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[i]].v[k];
			if (m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[i]].v[k] > myMax.v[k])
				myMax.v[k] = m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[i]].v[k];
		}
	}

	centroCenter /= trigSize;

	//find largest axis
	int largestIndex;
	vec3f diagonal = myMax - myMin;

	if (diagonal.v[0] >= diagonal.v[1] && diagonal.v[0] >= diagonal.v[2])
		largestIndex = 0;
	else if (diagonal.v[1] >= diagonal.v[0] && diagonal.v[1] >= diagonal.v[2])
		largestIndex = 1;
	else if (diagonal.v[2] >= diagonal.v[0] && diagonal.v[2] >= diagonal.v[1])
		largestIndex = 2;

	//Set the current node's triangle indices list to the
	// indices on the lesser side of the split. Set a new node's triangle
	// indices list to the indices on the greater side of the split.

	//build two lists
	std::vector<unsigned int> lesserSide;
	std::vector<unsigned int> upperSide;

	for (size_t i = 0; i < trigSize; i++)
	{
		if (m_Data.m_pMesh->m_Centroids[m_Data.m_TriIndices[i]].v[largestIndex] >= centroCenter.v[largestIndex])
			upperSide.push_back(m_Data.m_TriIndices[i]);
		else
			lesserSide.push_back(m_Data.m_TriIndices[i]);
	}

	m_Data.m_TriIndices.clear();
	//NOT SURE
	m_Data.m_TriIndices = lesserSide;

	TriSetBVHLeaf* myNode = new TriSetBVHLeaf(GetBoundingVolume()->GetBVType());
	myNode->m_Data.m_pMesh = m_Data.m_pMesh;

	myNode->m_Data.m_TriIndices = upperSide;
	
	// This function should call Build for both nodes after the
	// triangle sets are determined.

	this->Build();
	myNode->Build();
	

	return myNode;
}

void TriSetBVHLeaf::Build(void)
{
	// Rebuild the bounds of this node based
	// on it's current triangle index set.
	// Use the triangle index set to access vertex
	// information from the mesh, and calculate
	// a new bounds based on those points.

	size_t trigSize = m_Data.m_TriIndices.size();

	vec3f myMin, myMax;
	myMin = vec3f(FLT_MAX, FLT_MAX, FLT_MAX);
	myMax = vec3f(-FLT_MAX, -FLT_MAX, -FLT_MAX);

	for (size_t i = 0; i < trigSize; i++)
	{
		//find verteces
		unsigned int myVec0 = m_Data.m_pMesh->m_VertIndices[(m_Data.m_TriIndices[i] * 3)];
		unsigned int myVec1 = m_Data.m_pMesh->m_VertIndices[(m_Data.m_TriIndices[i] * 3 + 1)];
		unsigned int myVec2 = m_Data.m_pMesh->m_VertIndices[(m_Data.m_TriIndices[i] * 3 + 2)];

		//find unique vertex and check each one to build min and max
		for (int k = 0; k < 3; k++)
		{
			if (m_Data.m_pMesh->m_Vertices[myVec0].v[k] < myMin.v[k])
				myMin.v[k] = m_Data.m_pMesh->m_Vertices[myVec0].v[k];

			if (m_Data.m_pMesh->m_Vertices[myVec1].v[k] < myMin.v[k])
				myMin.v[k] = m_Data.m_pMesh->m_Vertices[myVec1].v[k];

			if (m_Data.m_pMesh->m_Vertices[myVec2].v[k] < myMin.v[k])
				myMin.v[k] = m_Data.m_pMesh->m_Vertices[myVec2].v[k];

			if (m_Data.m_pMesh->m_Vertices[myVec0].v[k] > myMax.v[k])
				myMax.v[k] = m_Data.m_pMesh->m_Vertices[myVec0].v[k];

			if (m_Data.m_pMesh->m_Vertices[myVec1].v[k] > myMax.v[k])
				myMax.v[k] = m_Data.m_pMesh->m_Vertices[myVec1].v[k];

			if (m_Data.m_pMesh->m_Vertices[myVec2].v[k] > myMax.v[k])
				myMax.v[k] = m_Data.m_pMesh->m_Vertices[myVec2].v[k];
		}
	}

	AabbBV* myAABB = (AabbBV*) m_BoundingVolume;
	AABB& setAABB = myAABB->GetAabb();

	setAABB.max = myMax;
	setAABB.min = myMin;
}