#include "MayaBin.h"
#include <float.h>

void MayaBin::Load( const char *pFileName, bool findEdges)
{
	std::ifstream file;

	file.open( pFileName, std::ios_base::in | std::ios_base::binary );

	if( file.is_open() )
	{
		m_Meshes.clear();

		size_t count;
		file.read( (char *)&count, sizeof(size_t) );
		m_Meshes.resize( count );

		for( unsigned int i = 0; i < count; ++i )
		{
			MayaMesh &tempMesh = m_Meshes[i];

			tempMesh.m_min = vec3f( FLT_MAX, FLT_MAX, FLT_MAX );
			tempMesh.m_max = vec3f( -FLT_MAX, -FLT_MAX, -FLT_MAX );

			matrix4d tempMat;

			file.read( (char *)tempMat.ma, sizeof(double) * 16 );
			
			for( unsigned int j = 0; j < 16; ++j )
				tempMesh.m_Matrix.ma[j] = (float)tempMat.ma[j];

			size_t vertCount;

			file.read( (char *)&vertCount, sizeof(size_t) );
			
			tempMesh.m_Verts.resize( vertCount );
			
			file.read( (char *)&tempMesh.m_Verts[0], (std::streamsize)(sizeof(Vertex)*vertCount) );
			for( size_t i = 0; i < vertCount; ++i )
			{
				tempMesh.m_min.x = min( tempMesh.m_min.x, tempMesh.m_Verts[i].pos.x );
				tempMesh.m_min.y = min( tempMesh.m_min.y, tempMesh.m_Verts[i].pos.y );
				tempMesh.m_min.z = min( tempMesh.m_min.z, tempMesh.m_Verts[i].pos.z );

				tempMesh.m_max.x = max( tempMesh.m_max.x, tempMesh.m_Verts[i].pos.x );
				tempMesh.m_max.y = max( tempMesh.m_max.y, tempMesh.m_Verts[i].pos.y );
				tempMesh.m_max.z = max( tempMesh.m_max.z, tempMesh.m_Verts[i].pos.z );
			}



			file.read( (char *)&vertCount, sizeof(size_t) );

			tempMesh.m_Tris.resize( vertCount );

			file.read( (char *)&tempMesh.m_Tris[0], std::streamsize(sizeof(Triangle) * vertCount) );
		}

		for( unsigned int i = 0; i < m_Meshes.size(); ++i )
		{
			m_Meshes[i].m_TriNorms.resize( m_Meshes[i].m_Tris.size() );

			for( unsigned int j = 0; j < m_Meshes[i].m_Tris.size(); ++j )
			{
				const Triangle &currTri = m_Meshes[i].m_Tris[j];

				const vec3f &vert0 = m_Meshes[i].m_Verts[ currTri.indices[0] ].pos;
				const vec3f &vert1 = m_Meshes[i].m_Verts[ currTri.indices[1] ].pos;
				const vec3f &vert2 = m_Meshes[i].m_Verts[ currTri.indices[2] ].pos;
				
				cross_product( m_Meshes[i].m_TriNorms[j], vert1 - vert0, vert2 - vert1 );
				m_Meshes[i].m_TriNorms[j].normalize();
			}

			if( findEdges )
				FindEdges(m_Meshes[i]);
		}

		file.close();
	}
}

void FindEdges(MayaMesh &mesh)
{
	// For each mesh...
	std::vector< Edge > AllEdges;
	AllEdges.resize( mesh.m_Tris.size() * 3 );
	
	mesh.m_EdgeIndices.resize( mesh.m_Tris.size() );

	// For each triangle...
	for( unsigned int j = 0; j < mesh.m_Tris.size(); ++j )
	{
		// For each edge...
		for( unsigned int k = 0; k < 3; ++k )
		{
			AllEdges[ j*3 + k ].indices[0] = mesh.m_Tris[j].indices[k];
			AllEdges[ j*3 + k ].indices[1] = mesh.m_Tris[j].indices[(k+1)%3];
			AllEdges[ j*3 + k ].tri = j;
		}
	}

	for( unsigned int j = 0; j < AllEdges.size(); ++j )
	{
		bool bFoundCoEdge = false;
		for( unsigned int k = 0; k < AllEdges.size(); ++k )
		{
			if( k == j )
				continue;

			bool coEdge = false;
			if( (AllEdges[j].indices[0] == AllEdges[k].indices[0] && AllEdges[j].indices[1] == AllEdges[k].indices[1] ) ||
				(AllEdges[j].indices[0] == AllEdges[k].indices[1] && AllEdges[j].indices[1] == AllEdges[k].indices[0] ) )
				coEdge = true;

			if( coEdge )
			{
				bFoundCoEdge = true;

				if( k < j )
					continue;

				Triangle &triA = mesh.m_Tris[ AllEdges[j].tri ];
				Triangle &triB = mesh.m_Tris[ AllEdges[k].tri ];

				const vec3f &normA = mesh.m_TriNorms[ AllEdges[j].tri ];
				const vec3f &normB = mesh.m_TriNorms[ AllEdges[k].tri ];

				vec3f edgeA = mesh.m_Verts[ AllEdges[j].indices[1] ].pos - mesh.m_Verts[ AllEdges[j].indices[0] ].pos;

				vec3f perp;
				cross_product( perp, normA, edgeA );
				perp.normalize();

				if( dot_product( perp, normB ) < 0.0f )
				{
					AllEdges[j].normal = (normA + normB) * 0.5f;
					AllEdges[j].normal.normalize();
					mesh.m_Edges.push_back( AllEdges[j] );

					mesh.m_EdgeIndices[ j / 3 ].push_back( (const unsigned int)(mesh.m_Edges.size() - 1) );
					mesh.m_EdgeIndices[ k / 3 ].push_back( (const unsigned int)(mesh.m_Edges.size() - 1) );
				}
			}
		}

		if( bFoundCoEdge == false )
		{
			const vec3f &normA = mesh.m_TriNorms[ AllEdges[j].tri ];

			AllEdges[j].normal = normA; 
			mesh.m_Edges.push_back( AllEdges[j] );
			mesh.m_EdgeIndices[ j / 3 ].push_back( (const unsigned int)(mesh.m_Edges.size() - 1) );
		}
	}
}