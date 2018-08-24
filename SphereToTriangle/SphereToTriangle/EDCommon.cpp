#include "EDCommon.h"
#include "EDDefault.h"


void OrthoNormalInverse( matrix4f &MatrixO, const matrix4f &MatrixA )
{
	// Replace this call with your own implementation of the Orthnormal Inverse algorithm
	EDOrthoNormalInverse( MatrixO, MatrixA );
}

void MouseLook( matrix4f &mat, float fTime )
{
	POINT mousePos;
	GetCursorPos( &mousePos );
	SetCursorPos( 400, 300 );

	float mouseDiff[2] = { float(400 - mousePos.x), float(mousePos.y - 300) };

	// Replace this call with your own implementation of the Mouse-Look algorithm
	EDMouseLook( mat, mouseDiff, fTime );
}

void LookAt( matrix4f &mat, const vec3f &target )
{
	// Replace this call with your own implementation of the Look-At algorithm
	EDLookAt( mat, target );
}

void TurnTo( matrix4f &mat, const vec3f &target, float fTime )
{
	// Replace this call with your own implementation of the Turn-To algorithm
	EDTurnTo( mat, target, fTime );
}	

void HardAttach( matrix4f &AttachMat, const matrix4f &AttachToMat, const vec3f &offset )
{
	// Replace this call with your own implementation of the Hard-Attach algorithm
	EDHardAttach( AttachMat, AttachToMat, offset );
}

void SoftAttach( matrix4f &AttachMat, const matrix4f &AttachToMat, queue< matrix4f > &Buffer, const vec3f &offset )
{
	// Replace this call with your own implementation of the Soft-Attach algorithm
	EDSoftAttach( AttachMat, AttachToMat, offset );
}