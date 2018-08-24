#include "SceneObject.h"
#include "KdTreeNode.h"

const float SceneObject::MAX_OBJECT_SIZE = 4.0f;

void SceneObject::ConstrainToAABB(const AABB& aabb)
{
	// Adjust the center point of the sphere
	// as needed so that the sphere is fully contained
	// by the AABB. You may assume that the sphere
	// will always be able to fit fully inside the AABB.

	vec3f center = (aabb.max + aabb.min) / 2;
	
	for (int i = 0; i < 3; i++)
	{
		if (m_Bounds.m_Center.v[i] + m_Bounds.m_Radius < aabb.min.v[i])
			m_Bounds.m_Center.v[i] = aabb.min.v[i] + m_Bounds.m_Radius;
		else if (m_Bounds.m_Center.v[i] + m_Bounds.m_Radius > aabb.max.v[i])
			m_Bounds.m_Center.v[i] = aabb.max.v[i] - m_Bounds.m_Radius;
	}
}

void SceneObject::RemoveFromLeaves(void)
{
	// Remove the object from all currently overlapped leaves
	// and set all pointers to overlapped leaves to null.

	for (int i = 0; i < 8; i++)
	{
		if (m_OverlappedLeaves[i] != nullptr)
		{
			m_OverlappedLeaves[i]->GetOverlappingObjects().remove(this);
			m_OverlappedLeaves[i] = nullptr;
		}
	}
}

bool SceneObject::IsContained(void)
{
	// This function is completed for you.

	int outCount[3] = { 0, 0, 0 };
	bool inTree = false;

	for(unsigned int i = 0; i < 8; ++i)
	{
		if( m_OverlappedLeaves[i] == 0 )
			continue;

		inTree = true;

		const AABB& leafBounds = m_OverlappedLeaves[i]->GetBounds();

		for(unsigned int axis = 0; axis < 3; ++axis)
		{
			if( m_Bounds.m_Center.v[axis] + m_Bounds.m_Radius > leafBounds.max.v[axis] )
				outCount[axis] += 1;
			if( m_Bounds.m_Center.v[axis] - m_Bounds.m_Radius < leafBounds.min.v[axis] )
				outCount[axis] -= 1;
		}
	}

	return (inTree == true && outCount[0] == 0 && outCount[1] == 0 && outCount[2] == 0);
}