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
			while (!m_SoftAttachQueue.empty())
				m_SoftAttachQueue.pop();

			for( unsigned int i = 0; i < 120; ++i )
				m_SoftAttachQueue.push( EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat() );

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
			while (!m_SoftAttachQueue.empty())
				m_SoftAttachQueue.pop();

			for( unsigned int i = 0; i < 120; ++i )
				m_SoftAttachQueue.push( EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat() );
		}
	}

	switch( m_iCameraMode )
	{
		case MOUSE_LOOK:
			{
				glutSetWindowTitle("EDCamera - Mouse Look");

				if( GetAsyncKeyState( VK_RBUTTON ) )
				{
					MouseLook( m_CameraMat, fTime );

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
			}
			break;
		case HARD_ATTACH:
			{
				glutSetWindowTitle("EDCamera - Hard Attach");

				vec3f offset( 0.0f, 1.0f, -5.0f );

				HardAttach( m_CameraMat,  EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat(), offset );
			}
			break;
		case SOFT_ATTACH:
			{
				glutSetWindowTitle("EDCamera - Soft Attach");

				vec3f offset( 0.0f, 1.0f, -5.0f );

				SoftAttach( m_CameraMat, EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::GUN].GetWorldMat(), m_SoftAttachQueue, offset );
			}
			break;
		case LOOK_AT:
			{
				glutSetWindowTitle("EDCamera - Look-At");

				m_CameraMat.axis_pos = m_DefaultPos;
				
				LookAt( m_CameraMat,  EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::BODY].GetWorldMat().axis_pos );
			}
			break;
		case TURN_TO:
			{
				glutSetWindowTitle("EDCamera - Turn-To");

				m_CameraMat.axis_pos = m_DefaultPos;
				TurnTo( m_CameraMat,  EDApp::GetInstance().m_Buggy.m_Frames[CBuggy::BODY].GetWorldMat().axis_pos, fTime * 0.0375f );
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
	m_iCameraMode = LOOK_AT;

	m_CameraMat.make_translation( m_DefaultPos );
	m_CameraMat.rotate_x_pre( 0.7854f );
	SetCursorPos( 400, 300 );
}

EDCamera::~EDCamera(void)
{
}
