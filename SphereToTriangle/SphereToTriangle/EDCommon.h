#ifndef _EDCOMMON_H_
#define _EDCOMMON_H_

#include <windows.h>

#include <queue>
using namespace std;

#include "matrix4.h"

static vec3f worldX( 1.0f, 0.0f, 0.0f );
static vec3f worldY( 0.0f, 1.0f, 0.0f );
static vec3f worldZ( 0.0f, 0.0f, 1.0f );

// OrthoNormalInverse
//
// Fast inverse calculation of a 4x4 matrix that is orthogonal with normalized axes (orthonormal)
//
// See: Orthonormal Matrix Inverse.doc
//
// In:
//		const matrix4f &MatrixA - The orthonormal matrix to find the inverse of
// Out:
//		matrix4f &MatrixO - Where to store the result of the inverse
void OrthoNormalInverse( matrix4f &MatrixO, const matrix4f &MatrixA );

// MouseLook
// 
// Implementation of the Mouse Look Algorithm
//
// See: Matrix Behaviors.doc
//
// In:
//		matrix4f &mat - The matrix to rotate
//		float fTime - The time elapsed since the last frame
//
// Out:
//		matrix4f &mat - The rotated matrix
void MouseLook( matrix4f &mat, float fTime );

// LookAt
//
// Implementation of the Look At Algorithm
//
// See: Matrix Behaviors.doc
//
// In:
//		matrix4f &mat - The matrix to transform
//		const vec3f& target - The position to look at
//
// Out:
//		matrix4f &mat - The transformed matrix
void LookAt( matrix4f &mat, const vec3f &target );

// TurnTo
//
// Implementation of the Turn To Algorithm
//
// See: Matrix Behaviors.doc
//
// In:
//		matrix4f &mat - The matrix to transform
//		const vec3f &target - The position to turn to
//		float fTime - The time elapsed since the last frame
//		
// Out:
//		matrix4f &mat - The transformed matrix
void TurnTo( matrix4f &mat, const vec3f &target, float fTime );

// HardAttach
//
// Implementation of the Hard Attach Algorithm
//
// See: Matrix Bevahiors.doc
//
// In:
//		matrix4f &AttachMat - The matrix to attach
//		const matrix4f &AttachToMat - The matrix to attach to
//		const vec3f &offset - The object/local space (relative) vector to offset by
//
// Out:
//
//		matrix4f &AttachMat - The attached matrix
void HardAttach( matrix4f &AttachMat, const matrix4f &AttachToMat, const vec3f &offset );

// SoftAttach
//
// Implementation of the Soft Attach Algorithm
//
// See: Matrix Behaviors.doc
//
// In:
//		matrix4f &AttachMat - The matrix to attach
//		const matrix4f& AttachToMat - The matrix to enqueue
//		queue< matrix4f > &Buffer - The filled queue of matrices to attach to from
void SoftAttach( matrix4f &AttachMat, const matrix4f &AttachToMat, queue< matrix4f > &Buffer, const vec3f &offset );	

#endif