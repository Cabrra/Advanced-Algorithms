#include <windows.h>
#include "gl.h"

#include "EDCamera.h"

#include "EDDefault.h"

void EDCamera::SetProjectionPerspective(float fovy, unsigned int viewDimWidth, unsigned int viewDimHeight, float zNear, float zFar)
{
	float fAspect = float(viewDimWidth)/float(viewDimHeight);
	float f = 1.0f / tan(fovy/2.0f);

	m_uiViewDimWidth = viewDimWidth;
	m_uiViewDimHeight = viewDimHeight;

	m_fNear = zNear;
	m_fFar = zFar;
	m_fFov = fovy;

	m_ProjectionMatrix.axis_x.x = f / fAspect;
	m_ProjectionMatrix.axis_x.y = 0.0f;
	m_ProjectionMatrix.axis_x.z = 0.0f;
	m_ProjectionMatrix.pad_xw = 0.0f;

	m_ProjectionMatrix.axis_y.x = 0.0f;
	m_ProjectionMatrix.axis_y.y = f;
	m_ProjectionMatrix.axis_y.z = 0.0f;	
	m_ProjectionMatrix.pad_yw = 0.0f;

	m_ProjectionMatrix.axis_z.x = 0.0f;
	m_ProjectionMatrix.axis_z.y = 0.0f;
	m_ProjectionMatrix.axis_z.z = (zFar+zNear)/(zNear-zFar);
	m_ProjectionMatrix.pad_zw = -1.0f;

	m_ProjectionMatrix.axis_w.x = 0.0f;
	m_ProjectionMatrix.axis_w.y = 0.0f;
	m_ProjectionMatrix.axis_w.z = (2.0f*zFar*zNear)/(zNear-zFar);
	m_ProjectionMatrix.pad_ww = 0.0f;
}

void EDCamera::SetProjectionOrthographic(float left, float right, float bottom, float top, float zNear, float zFar)
{
	m_ProjectionMatrix.axis_x.x = 2.0f / (right - left);
	m_ProjectionMatrix.axis_x.y = 0.0f;
	m_ProjectionMatrix.axis_x.z = 0.0f;
	m_ProjectionMatrix.pad_xw = 0.0f;

	m_ProjectionMatrix.axis_y.x = 0.0f;
	m_ProjectionMatrix.axis_y.y = 2.0f / (top - bottom);
	m_ProjectionMatrix.axis_y.z = 0.0f;
	m_ProjectionMatrix.pad_yw = 0.0f;

	m_ProjectionMatrix.axis_z.x = 0.0f;
	m_ProjectionMatrix.axis_z.y = 0.0f;
	m_ProjectionMatrix.axis_z.z = -2.0f / (zFar - zNear);
	m_ProjectionMatrix.pad_zw = 0.0f;

	m_ProjectionMatrix.axis_w.x = -( (right+left)/(right-left) );
	m_ProjectionMatrix.axis_w.y = -( (top+bottom)/(top-bottom) );
	m_ProjectionMatrix.axis_w.z = -( (zFar+zNear)/(zFar-zNear) );
	m_ProjectionMatrix.pad_ww = 1.0f;
}

void EDCamera::Update(float fTime)
{
	SHORT KeyState = GetAsyncKeyState( VK_RBUTTON );

	if( (KeyState & 0x0001) != 0 )
		SetCursorPos( (GetViewWidth() / 2), (GetViewHeight() / 2) );
	else if( KeyState != 0 )
		if( this->GetFrame() != 0 )
		{
			POINT mousePos;
			GetCursorPos( &mousePos );
			SetCursorPos( (GetViewWidth() / 2), (GetViewHeight() / 2) );

			int x = GetViewWidth() / 2;
			int y = GetViewHeight() / 2;

			float mouseDiff[2] = { float(x - mousePos.x), float(mousePos.y - y) };

			EDMouseLook( GetFrame()->GetLocalMat(), mouseDiff, fTime ); 		
			
			if( GetAsyncKeyState( 'W' ) )
				GetFrame()->GetLocalMat().axis_pos += GetFrame()->GetLocalMat().axis_z * fTime;
			if( GetAsyncKeyState( 'S' ) )
				GetFrame()->GetLocalMat().axis_pos -= GetFrame()->GetLocalMat().axis_z * fTime;
			if( GetAsyncKeyState( 'A' ) )
				GetFrame()->GetLocalMat().axis_pos += GetFrame()->GetLocalMat().axis_x * fTime;
			if( GetAsyncKeyState( 'D' ) )
				GetFrame()->GetLocalMat().axis_pos -= GetFrame()->GetLocalMat().axis_x * fTime;

			GetFrame()->Update();
		}
}

void EDCamera::ApplyCameraTransform(void)
{
	if( this->GetFrame() != 0 )
	{
		matrix4f tempMat( this->GetFrame()->GetWorldMat() );
		tempMat.axis_z.negate();
		tempMat.axis_x.negate();

		matrix4f invCamMat;
		EDOrthoNormalInverse( invCamMat, tempMat );

		glMultMatrixf( invCamMat.ma );
	}
}

matrix4f &EDCamera::GetModelViewMatrix(matrix4f &matrix)
{
	if( this->GetFrame() != 0 )
	{
		matrix4f tempMat;

		tempMat = this->GetFrame()->GetWorldMat();
		tempMat.axis_z.negate();
		tempMat.axis_x.negate();

		EDOrthoNormalInverse( matrix, tempMat );
	}

	return matrix;
}