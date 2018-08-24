#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"
#include "extgl.h"

#include "Buggy.h"

#include <stdio.h>

EDMesh * CBuggy::m_Meshes = 0;

unsigned int CBuggy::m_uiMeshCount = 0;
unsigned int CBuggy::m_uiRefCount = 0;
unsigned int CBuggy::m_uiTexID = 0;

CBuggy::CBuggy(void)
{
	if( m_uiRefCount == 0 )
	{
		FILE* pFile;

		//fopen_s(&pFile, "buggymodel.bin", "rb");
		pFile = fopen( "buggymodel.bin", "rb" );

		if( pFile )
		{
			++m_uiRefCount;
			
			size_t numMeshes;
			fread( &numMeshes, sizeof( size_t ), 1, pFile );
			m_uiMeshCount = (unsigned int)numMeshes;

			m_Meshes = new EDMesh[numMeshes];

			for( unsigned int i = 0; i < numMeshes; ++i )
			{
				fread( m_Meshes[i].m_Transform.ma, sizeof( float ), 16, pFile );
				size_t numVerts;
				fread( &numVerts, sizeof( size_t ), 1, pFile );

				m_Meshes[i].m_Verts.resize( numVerts );
				m_Meshes[i].m_Norms.resize( numVerts );
				m_Meshes[i].m_UVs.resize( numVerts * 2 );

				fread( m_Meshes[i].m_Verts[0].v, sizeof( vec3f ), numVerts, pFile );
				fread( m_Meshes[i].m_Norms[0].v, sizeof( vec3f ), numVerts, pFile );
				fread( &m_Meshes[i].m_UVs[0], sizeof( float ), numVerts * 2, pFile );
			}

			fclose( pFile );

			m_Frames.resize( m_uiMeshCount );
			
			m_Frames[0].GetLocalMat() = m_Meshes[0].m_Transform;

			for( unsigned int i = 1; i < m_uiMeshCount; ++i )
			{
				m_Frames[i].GetLocalMat() = m_Meshes[i].m_Transform;
				m_Frames[i].SetParent( &m_Frames[0] );
				m_Frames[0].AddChild( &m_Frames[i] );
			}

			m_Frames[0].Update();
		}
	}
	else
	{
		++m_uiRefCount;

		m_Frames.resize( m_uiMeshCount );
		
		m_Frames[0].GetLocalMat() = m_Meshes[0].m_Transform;

		for( unsigned int i = 1; i < m_uiMeshCount; ++i )
		{
			m_Frames[i].GetLocalMat() = m_Meshes[i].m_Transform;
			m_Frames[i].SetParent( &m_Frames[0] );
			m_Frames[0].AddChild( &m_Frames[i] );
		}

		m_Frames[0].Update();
	}
}

CBuggy::~CBuggy()
{
	--m_uiRefCount;

	if( m_uiRefCount == 0 )
	{
		delete [] m_Meshes;
		m_Meshes = NULL;
		glDeleteTextures( 1, &m_uiTexID );
	}
}

void CBuggy::Render()
{
	for( unsigned int i = 0; i < m_uiMeshCount; ++i )
	{
		glPushMatrix();
			glMultMatrixf( m_Frames[i].GetWorldMat().ma );

			glTexCoordPointer( 2, GL_FLOAT, 0, &m_Meshes[i].m_UVs[0] );
			glNormalPointer( GL_FLOAT, 0, m_Meshes[i].m_Norms[0].v );
			glVertexPointer( 3, GL_FLOAT, 0, m_Meshes[i].m_Verts[0].v );

			glDrawArrays( GL_TRIANGLES, 0, (GLsizei)m_Meshes[i].m_Verts.size() );

		glPopMatrix();
	}
}