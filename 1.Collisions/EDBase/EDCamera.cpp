#include "EDCamera.h"
#include <windows.h>

#include "gl.h"
#include "glu.h"
#include "glut.h"

#include "EDCommon.h"

#include "EDApp.h"

#include "EDDefault.h"

void EDCamera::Update(float fTime)
{
	// Check if PageUp is pressed to switch camera modes
	if( GetAsyncKeyState( VK_PRIOR ) & 0x0001 )
	{
		--m_iCameraMode;

		if( m_iCameraMode == -1 )
			m_iCameraMode = MODE_COUNT - 1;
		else if( m_iCameraMode == SOFT_ATTACH )
		{
			while( m_SoftAttachQueue.empty() == false )
				m_SoftAttachQueue.pop();

			if( m_pTargetMat != NULL )
				for( unsigned int i = 0; i < 5; ++i )
					m_SoftAttachQueue.push( *m_pTargetMat );
		}
	}

	// Check if PageDown is pressed to switch camera modes
	if( GetAsyncKeyState( VK_NEXT ) & 0x0001 )
	{
		++m_iCameraMode;

		if( m_iCameraMode == MODE_COUNT )
			m_iCameraMode = 0;
		else if( m_iCameraMode == SOFT_ATTACH )
		{
			while( m_SoftAttachQueue.empty() == false )
				m_SoftAttachQueue.pop();

			if( m_pTargetMat != NULL )
				for( unsigned int i = 0; i < 5; ++i )
					m_SoftAttachQueue.push( *m_pTargetMat );
		}
	}

	switch( m_iCameraMode )
	{
		case MOUSE_LOOK:
			{
				glutSetWindowTitle("EDCamera - Mouse Look");

				static bool bResetMousePos = true;

				if( GetAsyncKeyState( VK_RBUTTON ) )
				{
					if( bResetMousePos == true )
					{
						SetCursorPos( 400, 300 );
						bResetMousePos = false;
					}
					else
						MouseLook( m_CameraMat, fTime );
				}
				else
					bResetMousePos = true;

				// Translate the camera matrix forward along it's Z-Axis
				if( GetAsyncKeyState( VK_UP ) )
				{
					m_CameraMat.axis_pos += m_CameraMat.axis_z * fTime;
				}

				// Translate the camera matrix backward along it's Z-Axis
				if( GetAsyncKeyState( VK_DOWN ) )
				{
					m_CameraMat.axis_pos -= m_CameraMat.axis_z * fTime;
				}

				// Translate the camera matrix left along it's X-Axis
				if( GetAsyncKeyState( VK_LEFT ) )
				{
					m_CameraMat.axis_pos += m_CameraMat.axis_x * fTime;
				}

				// Translate the camera matrix right along it's X-Axis
				if( GetAsyncKeyState( VK_RIGHT ) )
				{
					m_CameraMat.axis_pos -= m_CameraMat.axis_x * fTime;
				}
			}
			break;
		case HARD_ATTACH:
			{
				glutSetWindowTitle("EDCamera - Hard Attach");

				if( m_pTargetMat != NULL )
					HardAttach( m_CameraMat, *m_pTargetMat, m_OffsetVec );
			}
			break;
		case SOFT_ATTACH:
			{
				glutSetWindowTitle("EDCamera - Soft Attach");

				if( m_pTargetMat != NULL )
				{
					m_SoftAttachQueue.push( *m_pTargetMat );
					m_SoftAttachQueue.pop();

					HardAttach( m_CameraMat, m_SoftAttachQueue.front(), m_OffsetVec );
				}
			}
			break;
		case LOOK_AT:
			{
				glutSetWindowTitle("EDCamera - Look-At");

				m_CameraMat.axis_pos = m_DefaultPos;
				
				if( m_pTargetMat != NULL )
					LookAt( m_CameraMat, m_pTargetMat->axis_pos );
			}
			break;
		case TURN_TO:
			{
				glutSetWindowTitle("EDCamera - Turn-To");

				m_CameraMat.axis_pos = m_DefaultPos;

				if( m_pTargetMat != NULL )
					TurnTo( m_CameraMat, m_pTargetMat->axis_pos, fTime );
			}
			break;
		default:
			{
			}
			break;
	}
}

void EDCamera::ApplyCameraTransform(void)
{
	matrix4f tempCameraMat( m_CameraMat );
	tempCameraMat.axis_z.negate();
	tempCameraMat.axis_x.negate();

	matrix4f invCameraMat;
	invCameraMat.make_identity();
	OrthoNormalInverse( invCameraMat, tempCameraMat );

	glMultMatrixf( invCameraMat.ma );
}

EDCamera::EDCamera(void) : m_DefaultPos(0.0f, 5.0f, -5.0f)
{
	m_iCameraMode = HARD_ATTACH;
	m_CamDistance = -10.0f;
	m_pTargetMat = NULL;
	m_OffsetVec.make_zero();

	m_CameraMat.make_identity();
	m_CameraMat.rotate_y_pre( 0.7854f );
	m_CameraMat.rotate_x_pre( 0.7854f );
	
	m_CameraMat.translate_pre( 0.0f, 0.0f, m_CamDistance );

	SetCursorPos( 400, 300 );
}

EDCamera::~EDCamera(void)
{
}
