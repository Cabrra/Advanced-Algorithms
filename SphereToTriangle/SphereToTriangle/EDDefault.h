#ifndef _EDDEFAULT_H_
#define _EDDEFAULT_H_

#include "matrix4.h"

void EDLookAt( matrix4f &mat, const vec3f &target );

void EDHardAttach( matrix4f &AttachMat, const matrix4f &AttachToMat, const vec3f &offset );

void EDTurnTo( matrix4f &mat, const vec3f &target, float fTime );

void EDMouseLook( matrix4f &mat, const float mouseDiff[2], float fTime );

void EDSoftAttach( matrix4f &AttachMat, const matrix4f &AttachToMat, const vec3f &offset );

void EDOrthoNormalInverse( matrix4f &MatrixO, const matrix4f &MatrixA );

#endif