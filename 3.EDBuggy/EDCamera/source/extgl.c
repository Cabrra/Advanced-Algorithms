/* This file has been generated automaticaly by extglgen */

/*
	extgl - OpenGL Extension Loading Library
	Copyright (c) 2004, Trenkwalder Markus
	All rights reserved. 
	
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions
	are met:
	
	- Redistributions of source code must retain the above copyright notice,
	  this list of conditions and the following disclaimer.
	  
	- Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.
	  
	- Neither the name of extgl's copyright owner nor the names
	  of its contributors may be used to endorse or promote products
	  derived from this software without specific prior written permission.
	  
	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
	A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
	OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
	SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
	TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
	PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
	LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
	NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
	
	Contact info:
	email: trenki2@gmx.net web: trenki.50free.org
*/

/* Some parts are */

/*
** License Applicability. Except to the extent portions of this file are
** made subject to an alternative license as permitted in the SGI Free
** Software License B, Version 1.1 (the "License"), the contents of this
** file are subject only to the provisions of the License. You may not use
** this file except in compliance with the License. You may obtain a copy
** of the License at Silicon Graphics, Inc., attn: Legal Services, 1600
** Amphitheatre Parkway, Mountain View, CA 94043-1351, or at:
** 
** http://oss.sgi.com/projects/FreeB
** 
** Note that, as provided in the License, the Software is distributed on an
** "AS IS" basis, with ALL EXPRESS AND IMPLIED WARRANTIES AND CONDITIONS
** DISCLAIMED, INCLUDING, WITHOUT LIMITATION, ANY IMPLIED WARRANTIES AND
** CONDITIONS OF MERCHANTABILITY, SATISFACTORY QUALITY, FITNESS FOR A
** PARTICULAR PURPOSE, AND NON-INFRINGEMENT.
** 
** Original Code. The Original Code is: OpenGL Sample Implementation,
** Version 1.2.1, released January 26, 2000, developed by Silicon Graphics,
** Inc. The Original Code is Copyright (c) 1991-2002 Silicon Graphics, Inc.
** Copyright in any portions created by third parties is as indicated
** elsewhere herein. All Rights Reserved.
** 
** Additional Notice Provisions: This software was created using the
** OpenGL(R) version 1.2.1 Sample Implementation published by SGI, but has
** not been independently verified as being compliant with the OpenGL(R)
** version 1.2.1 Specification.
*/	

#include "extgl.h"

#include <assert.h>

/* If you want to use SDL use the following */
/*
#include "SDL.h" 
#define _GetProcAddress SDL_GL_GetProcAddress 
*/

#define _GetProcAddress wglGetProcAddress

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


/* GL_VERSION_1_2 */
static void APIENTRY InitBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	PFNGLBLENDCOLORPROC proc;
	proc = (PFNGLBLENDCOLORPROC)_GetProcAddress("glBlendColor");
	assert(proc != NULL);
	glBlendColor = proc;
	glBlendColor(red, green, blue, alpha);
}

static void APIENTRY InitBlendEquation(GLenum mode)
{
	PFNGLBLENDEQUATIONPROC proc;
	proc = (PFNGLBLENDEQUATIONPROC)_GetProcAddress("glBlendEquation");
	assert(proc != NULL);
	glBlendEquation = proc;
	glBlendEquation(mode);
}

static void APIENTRY InitDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
	PFNGLDRAWRANGEELEMENTSPROC proc;
	proc = (PFNGLDRAWRANGEELEMENTSPROC)_GetProcAddress("glDrawRangeElements");
	assert(proc != NULL);
	glDrawRangeElements = proc;
	glDrawRangeElements(mode, start, end, count, type, indices);
}

static void APIENTRY InitColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
{
	PFNGLCOLORTABLEPROC proc;
	proc = (PFNGLCOLORTABLEPROC)_GetProcAddress("glColorTable");
	assert(proc != NULL);
	glColorTable = proc;
	glColorTable(target, internalformat, width, format, type, table);
}

static void APIENTRY InitColorTableParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLCOLORTABLEPARAMETERFVPROC proc;
	proc = (PFNGLCOLORTABLEPARAMETERFVPROC)_GetProcAddress("glColorTableParameterfv");
	assert(proc != NULL);
	glColorTableParameterfv = proc;
	glColorTableParameterfv(target, pname, params);
}

static void APIENTRY InitColorTableParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLCOLORTABLEPARAMETERIVPROC proc;
	proc = (PFNGLCOLORTABLEPARAMETERIVPROC)_GetProcAddress("glColorTableParameteriv");
	assert(proc != NULL);
	glColorTableParameteriv = proc;
	glColorTableParameteriv(target, pname, params);
}

static void APIENTRY InitCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYCOLORTABLEPROC proc;
	proc = (PFNGLCOPYCOLORTABLEPROC)_GetProcAddress("glCopyColorTable");
	assert(proc != NULL);
	glCopyColorTable = proc;
	glCopyColorTable(target, internalformat, x, y, width);
}

static void APIENTRY InitGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid *table)
{
	PFNGLGETCOLORTABLEPROC proc;
	proc = (PFNGLGETCOLORTABLEPROC)_GetProcAddress("glGetColorTable");
	assert(proc != NULL);
	glGetColorTable = proc;
	glGetColorTable(target, format, type, table);
}

static void APIENTRY InitGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETCOLORTABLEPARAMETERFVPROC proc;
	proc = (PFNGLGETCOLORTABLEPARAMETERFVPROC)_GetProcAddress("glGetColorTableParameterfv");
	assert(proc != NULL);
	glGetColorTableParameterfv = proc;
	glGetColorTableParameterfv(target, pname, params);
}

static void APIENTRY InitGetColorTableParameteriv(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETCOLORTABLEPARAMETERIVPROC proc;
	proc = (PFNGLGETCOLORTABLEPARAMETERIVPROC)_GetProcAddress("glGetColorTableParameteriv");
	assert(proc != NULL);
	glGetColorTableParameteriv = proc;
	glGetColorTableParameteriv(target, pname, params);
}

static void APIENTRY InitColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
{
	PFNGLCOLORSUBTABLEPROC proc;
	proc = (PFNGLCOLORSUBTABLEPROC)_GetProcAddress("glColorSubTable");
	assert(proc != NULL);
	glColorSubTable = proc;
	glColorSubTable(target, start, count, format, type, data);
}

static void APIENTRY InitCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYCOLORSUBTABLEPROC proc;
	proc = (PFNGLCOPYCOLORSUBTABLEPROC)_GetProcAddress("glCopyColorSubTable");
	assert(proc != NULL);
	glCopyColorSubTable = proc;
	glCopyColorSubTable(target, start, x, y, width);
}

static void APIENTRY InitConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
{
	PFNGLCONVOLUTIONFILTER1DPROC proc;
	proc = (PFNGLCONVOLUTIONFILTER1DPROC)_GetProcAddress("glConvolutionFilter1D");
	assert(proc != NULL);
	glConvolutionFilter1D = proc;
	glConvolutionFilter1D(target, internalformat, width, format, type, image);
}

static void APIENTRY InitConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
{
	PFNGLCONVOLUTIONFILTER2DPROC proc;
	proc = (PFNGLCONVOLUTIONFILTER2DPROC)_GetProcAddress("glConvolutionFilter2D");
	assert(proc != NULL);
	glConvolutionFilter2D = proc;
	glConvolutionFilter2D(target, internalformat, width, height, format, type, image);
}

static void APIENTRY InitConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
	PFNGLCONVOLUTIONPARAMETERFPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERFPROC)_GetProcAddress("glConvolutionParameterf");
	assert(proc != NULL);
	glConvolutionParameterf = proc;
	glConvolutionParameterf(target, pname, params);
}

static void APIENTRY InitConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLCONVOLUTIONPARAMETERFVPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERFVPROC)_GetProcAddress("glConvolutionParameterfv");
	assert(proc != NULL);
	glConvolutionParameterfv = proc;
	glConvolutionParameterfv(target, pname, params);
}

static void APIENTRY InitConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
	PFNGLCONVOLUTIONPARAMETERIPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERIPROC)_GetProcAddress("glConvolutionParameteri");
	assert(proc != NULL);
	glConvolutionParameteri = proc;
	glConvolutionParameteri(target, pname, params);
}

static void APIENTRY InitConvolutionParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLCONVOLUTIONPARAMETERIVPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERIVPROC)_GetProcAddress("glConvolutionParameteriv");
	assert(proc != NULL);
	glConvolutionParameteriv = proc;
	glConvolutionParameteriv(target, pname, params);
}

static void APIENTRY InitCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYCONVOLUTIONFILTER1DPROC proc;
	proc = (PFNGLCOPYCONVOLUTIONFILTER1DPROC)_GetProcAddress("glCopyConvolutionFilter1D");
	assert(proc != NULL);
	glCopyConvolutionFilter1D = proc;
	glCopyConvolutionFilter1D(target, internalformat, x, y, width);
}

static void APIENTRY InitCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	PFNGLCOPYCONVOLUTIONFILTER2DPROC proc;
	proc = (PFNGLCOPYCONVOLUTIONFILTER2DPROC)_GetProcAddress("glCopyConvolutionFilter2D");
	assert(proc != NULL);
	glCopyConvolutionFilter2D = proc;
	glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);
}

static void APIENTRY InitGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid *image)
{
	PFNGLGETCONVOLUTIONFILTERPROC proc;
	proc = (PFNGLGETCONVOLUTIONFILTERPROC)_GetProcAddress("glGetConvolutionFilter");
	assert(proc != NULL);
	glGetConvolutionFilter = proc;
	glGetConvolutionFilter(target, format, type, image);
}

static void APIENTRY InitGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETCONVOLUTIONPARAMETERFVPROC proc;
	proc = (PFNGLGETCONVOLUTIONPARAMETERFVPROC)_GetProcAddress("glGetConvolutionParameterfv");
	assert(proc != NULL);
	glGetConvolutionParameterfv = proc;
	glGetConvolutionParameterfv(target, pname, params);
}

static void APIENTRY InitGetConvolutionParameteriv(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETCONVOLUTIONPARAMETERIVPROC proc;
	proc = (PFNGLGETCONVOLUTIONPARAMETERIVPROC)_GetProcAddress("glGetConvolutionParameteriv");
	assert(proc != NULL);
	glGetConvolutionParameteriv = proc;
	glGetConvolutionParameteriv(target, pname, params);
}

static void APIENTRY InitGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
{
	PFNGLGETSEPARABLEFILTERPROC proc;
	proc = (PFNGLGETSEPARABLEFILTERPROC)_GetProcAddress("glGetSeparableFilter");
	assert(proc != NULL);
	glGetSeparableFilter = proc;
	glGetSeparableFilter(target, format, type, row, column, span);
}

static void APIENTRY InitSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
{
	PFNGLSEPARABLEFILTER2DPROC proc;
	proc = (PFNGLSEPARABLEFILTER2DPROC)_GetProcAddress("glSeparableFilter2D");
	assert(proc != NULL);
	glSeparableFilter2D = proc;
	glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);
}

static void APIENTRY InitGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	PFNGLGETHISTOGRAMPROC proc;
	proc = (PFNGLGETHISTOGRAMPROC)_GetProcAddress("glGetHistogram");
	assert(proc != NULL);
	glGetHistogram = proc;
	glGetHistogram(target, reset, format, type, values);
}

static void APIENTRY InitGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETHISTOGRAMPARAMETERFVPROC proc;
	proc = (PFNGLGETHISTOGRAMPARAMETERFVPROC)_GetProcAddress("glGetHistogramParameterfv");
	assert(proc != NULL);
	glGetHistogramParameterfv = proc;
	glGetHistogramParameterfv(target, pname, params);
}

static void APIENTRY InitGetHistogramParameteriv(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETHISTOGRAMPARAMETERIVPROC proc;
	proc = (PFNGLGETHISTOGRAMPARAMETERIVPROC)_GetProcAddress("glGetHistogramParameteriv");
	assert(proc != NULL);
	glGetHistogramParameteriv = proc;
	glGetHistogramParameteriv(target, pname, params);
}

static void APIENTRY InitGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	PFNGLGETMINMAXPROC proc;
	proc = (PFNGLGETMINMAXPROC)_GetProcAddress("glGetMinmax");
	assert(proc != NULL);
	glGetMinmax = proc;
	glGetMinmax(target, reset, format, type, values);
}

static void APIENTRY InitGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETMINMAXPARAMETERFVPROC proc;
	proc = (PFNGLGETMINMAXPARAMETERFVPROC)_GetProcAddress("glGetMinmaxParameterfv");
	assert(proc != NULL);
	glGetMinmaxParameterfv = proc;
	glGetMinmaxParameterfv(target, pname, params);
}

static void APIENTRY InitGetMinmaxParameteriv(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETMINMAXPARAMETERIVPROC proc;
	proc = (PFNGLGETMINMAXPARAMETERIVPROC)_GetProcAddress("glGetMinmaxParameteriv");
	assert(proc != NULL);
	glGetMinmaxParameteriv = proc;
	glGetMinmaxParameteriv(target, pname, params);
}

static void APIENTRY InitHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	PFNGLHISTOGRAMPROC proc;
	proc = (PFNGLHISTOGRAMPROC)_GetProcAddress("glHistogram");
	assert(proc != NULL);
	glHistogram = proc;
	glHistogram(target, width, internalformat, sink);
}

static void APIENTRY InitMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
	PFNGLMINMAXPROC proc;
	proc = (PFNGLMINMAXPROC)_GetProcAddress("glMinmax");
	assert(proc != NULL);
	glMinmax = proc;
	glMinmax(target, internalformat, sink);
}

static void APIENTRY InitResetHistogram(GLenum target)
{
	PFNGLRESETHISTOGRAMPROC proc;
	proc = (PFNGLRESETHISTOGRAMPROC)_GetProcAddress("glResetHistogram");
	assert(proc != NULL);
	glResetHistogram = proc;
	glResetHistogram(target);
}

static void APIENTRY InitResetMinmax(GLenum target)
{
	PFNGLRESETMINMAXPROC proc;
	proc = (PFNGLRESETMINMAXPROC)_GetProcAddress("glResetMinmax");
	assert(proc != NULL);
	glResetMinmax = proc;
	glResetMinmax(target);
}

static void APIENTRY InitTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXIMAGE3DPROC proc;
	proc = (PFNGLTEXIMAGE3DPROC)_GetProcAddress("glTexImage3D");
	assert(proc != NULL);
	glTexImage3D = proc;
	glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

static void APIENTRY InitTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXSUBIMAGE3DPROC proc;
	proc = (PFNGLTEXSUBIMAGE3DPROC)_GetProcAddress("glTexSubImage3D");
	assert(proc != NULL);
	glTexSubImage3D = proc;
	glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

static void APIENTRY InitCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	PFNGLCOPYTEXSUBIMAGE3DPROC proc;
	proc = (PFNGLCOPYTEXSUBIMAGE3DPROC)_GetProcAddress("glCopyTexSubImage3D");
	assert(proc != NULL);
	glCopyTexSubImage3D = proc;
	glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}


/* GL_VERSION_1_3 */
static void APIENTRY InitActiveTexture(GLenum texture)
{
	PFNGLACTIVETEXTUREPROC proc;
	proc = (PFNGLACTIVETEXTUREPROC)_GetProcAddress("glActiveTexture");
	assert(proc != NULL);
	glActiveTexture = proc;
	glActiveTexture(texture);
}

static void APIENTRY InitClientActiveTexture(GLenum texture)
{
	PFNGLCLIENTACTIVETEXTUREPROC proc;
	proc = (PFNGLCLIENTACTIVETEXTUREPROC)_GetProcAddress("glClientActiveTexture");
	assert(proc != NULL);
	glClientActiveTexture = proc;
	glClientActiveTexture(texture);
}

static void APIENTRY InitMultiTexCoord1d(GLenum target, GLdouble s)
{
	PFNGLMULTITEXCOORD1DPROC proc;
	proc = (PFNGLMULTITEXCOORD1DPROC)_GetProcAddress("glMultiTexCoord1d");
	assert(proc != NULL);
	glMultiTexCoord1d = proc;
	glMultiTexCoord1d(target, s);
}

static void APIENTRY InitMultiTexCoord1dv(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD1DVPROC proc;
	proc = (PFNGLMULTITEXCOORD1DVPROC)_GetProcAddress("glMultiTexCoord1dv");
	assert(proc != NULL);
	glMultiTexCoord1dv = proc;
	glMultiTexCoord1dv(target, v);
}

static void APIENTRY InitMultiTexCoord1f(GLenum target, GLfloat s)
{
	PFNGLMULTITEXCOORD1FPROC proc;
	proc = (PFNGLMULTITEXCOORD1FPROC)_GetProcAddress("glMultiTexCoord1f");
	assert(proc != NULL);
	glMultiTexCoord1f = proc;
	glMultiTexCoord1f(target, s);
}

static void APIENTRY InitMultiTexCoord1fv(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD1FVPROC proc;
	proc = (PFNGLMULTITEXCOORD1FVPROC)_GetProcAddress("glMultiTexCoord1fv");
	assert(proc != NULL);
	glMultiTexCoord1fv = proc;
	glMultiTexCoord1fv(target, v);
}

static void APIENTRY InitMultiTexCoord1i(GLenum target, GLint s)
{
	PFNGLMULTITEXCOORD1IPROC proc;
	proc = (PFNGLMULTITEXCOORD1IPROC)_GetProcAddress("glMultiTexCoord1i");
	assert(proc != NULL);
	glMultiTexCoord1i = proc;
	glMultiTexCoord1i(target, s);
}

static void APIENTRY InitMultiTexCoord1iv(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD1IVPROC proc;
	proc = (PFNGLMULTITEXCOORD1IVPROC)_GetProcAddress("glMultiTexCoord1iv");
	assert(proc != NULL);
	glMultiTexCoord1iv = proc;
	glMultiTexCoord1iv(target, v);
}

static void APIENTRY InitMultiTexCoord1s(GLenum target, GLshort s)
{
	PFNGLMULTITEXCOORD1SPROC proc;
	proc = (PFNGLMULTITEXCOORD1SPROC)_GetProcAddress("glMultiTexCoord1s");
	assert(proc != NULL);
	glMultiTexCoord1s = proc;
	glMultiTexCoord1s(target, s);
}

static void APIENTRY InitMultiTexCoord1sv(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD1SVPROC proc;
	proc = (PFNGLMULTITEXCOORD1SVPROC)_GetProcAddress("glMultiTexCoord1sv");
	assert(proc != NULL);
	glMultiTexCoord1sv = proc;
	glMultiTexCoord1sv(target, v);
}

static void APIENTRY InitMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
	PFNGLMULTITEXCOORD2DPROC proc;
	proc = (PFNGLMULTITEXCOORD2DPROC)_GetProcAddress("glMultiTexCoord2d");
	assert(proc != NULL);
	glMultiTexCoord2d = proc;
	glMultiTexCoord2d(target, s, t);
}

static void APIENTRY InitMultiTexCoord2dv(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD2DVPROC proc;
	proc = (PFNGLMULTITEXCOORD2DVPROC)_GetProcAddress("glMultiTexCoord2dv");
	assert(proc != NULL);
	glMultiTexCoord2dv = proc;
	glMultiTexCoord2dv(target, v);
}

static void APIENTRY InitMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
	PFNGLMULTITEXCOORD2FPROC proc;
	proc = (PFNGLMULTITEXCOORD2FPROC)_GetProcAddress("glMultiTexCoord2f");
	assert(proc != NULL);
	glMultiTexCoord2f = proc;
	glMultiTexCoord2f(target, s, t);
}

static void APIENTRY InitMultiTexCoord2fv(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD2FVPROC proc;
	proc = (PFNGLMULTITEXCOORD2FVPROC)_GetProcAddress("glMultiTexCoord2fv");
	assert(proc != NULL);
	glMultiTexCoord2fv = proc;
	glMultiTexCoord2fv(target, v);
}

static void APIENTRY InitMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
	PFNGLMULTITEXCOORD2IPROC proc;
	proc = (PFNGLMULTITEXCOORD2IPROC)_GetProcAddress("glMultiTexCoord2i");
	assert(proc != NULL);
	glMultiTexCoord2i = proc;
	glMultiTexCoord2i(target, s, t);
}

static void APIENTRY InitMultiTexCoord2iv(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD2IVPROC proc;
	proc = (PFNGLMULTITEXCOORD2IVPROC)_GetProcAddress("glMultiTexCoord2iv");
	assert(proc != NULL);
	glMultiTexCoord2iv = proc;
	glMultiTexCoord2iv(target, v);
}

static void APIENTRY InitMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
	PFNGLMULTITEXCOORD2SPROC proc;
	proc = (PFNGLMULTITEXCOORD2SPROC)_GetProcAddress("glMultiTexCoord2s");
	assert(proc != NULL);
	glMultiTexCoord2s = proc;
	glMultiTexCoord2s(target, s, t);
}

static void APIENTRY InitMultiTexCoord2sv(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD2SVPROC proc;
	proc = (PFNGLMULTITEXCOORD2SVPROC)_GetProcAddress("glMultiTexCoord2sv");
	assert(proc != NULL);
	glMultiTexCoord2sv = proc;
	glMultiTexCoord2sv(target, v);
}

static void APIENTRY InitMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	PFNGLMULTITEXCOORD3DPROC proc;
	proc = (PFNGLMULTITEXCOORD3DPROC)_GetProcAddress("glMultiTexCoord3d");
	assert(proc != NULL);
	glMultiTexCoord3d = proc;
	glMultiTexCoord3d(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3dv(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD3DVPROC proc;
	proc = (PFNGLMULTITEXCOORD3DVPROC)_GetProcAddress("glMultiTexCoord3dv");
	assert(proc != NULL);
	glMultiTexCoord3dv = proc;
	glMultiTexCoord3dv(target, v);
}

static void APIENTRY InitMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	PFNGLMULTITEXCOORD3FPROC proc;
	proc = (PFNGLMULTITEXCOORD3FPROC)_GetProcAddress("glMultiTexCoord3f");
	assert(proc != NULL);
	glMultiTexCoord3f = proc;
	glMultiTexCoord3f(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3fv(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD3FVPROC proc;
	proc = (PFNGLMULTITEXCOORD3FVPROC)_GetProcAddress("glMultiTexCoord3fv");
	assert(proc != NULL);
	glMultiTexCoord3fv = proc;
	glMultiTexCoord3fv(target, v);
}

static void APIENTRY InitMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
	PFNGLMULTITEXCOORD3IPROC proc;
	proc = (PFNGLMULTITEXCOORD3IPROC)_GetProcAddress("glMultiTexCoord3i");
	assert(proc != NULL);
	glMultiTexCoord3i = proc;
	glMultiTexCoord3i(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3iv(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD3IVPROC proc;
	proc = (PFNGLMULTITEXCOORD3IVPROC)_GetProcAddress("glMultiTexCoord3iv");
	assert(proc != NULL);
	glMultiTexCoord3iv = proc;
	glMultiTexCoord3iv(target, v);
}

static void APIENTRY InitMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
	PFNGLMULTITEXCOORD3SPROC proc;
	proc = (PFNGLMULTITEXCOORD3SPROC)_GetProcAddress("glMultiTexCoord3s");
	assert(proc != NULL);
	glMultiTexCoord3s = proc;
	glMultiTexCoord3s(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3sv(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD3SVPROC proc;
	proc = (PFNGLMULTITEXCOORD3SVPROC)_GetProcAddress("glMultiTexCoord3sv");
	assert(proc != NULL);
	glMultiTexCoord3sv = proc;
	glMultiTexCoord3sv(target, v);
}

static void APIENTRY InitMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	PFNGLMULTITEXCOORD4DPROC proc;
	proc = (PFNGLMULTITEXCOORD4DPROC)_GetProcAddress("glMultiTexCoord4d");
	assert(proc != NULL);
	glMultiTexCoord4d = proc;
	glMultiTexCoord4d(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4dv(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD4DVPROC proc;
	proc = (PFNGLMULTITEXCOORD4DVPROC)_GetProcAddress("glMultiTexCoord4dv");
	assert(proc != NULL);
	glMultiTexCoord4dv = proc;
	glMultiTexCoord4dv(target, v);
}

static void APIENTRY InitMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	PFNGLMULTITEXCOORD4FPROC proc;
	proc = (PFNGLMULTITEXCOORD4FPROC)_GetProcAddress("glMultiTexCoord4f");
	assert(proc != NULL);
	glMultiTexCoord4f = proc;
	glMultiTexCoord4f(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4fv(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD4FVPROC proc;
	proc = (PFNGLMULTITEXCOORD4FVPROC)_GetProcAddress("glMultiTexCoord4fv");
	assert(proc != NULL);
	glMultiTexCoord4fv = proc;
	glMultiTexCoord4fv(target, v);
}

static void APIENTRY InitMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	PFNGLMULTITEXCOORD4IPROC proc;
	proc = (PFNGLMULTITEXCOORD4IPROC)_GetProcAddress("glMultiTexCoord4i");
	assert(proc != NULL);
	glMultiTexCoord4i = proc;
	glMultiTexCoord4i(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4iv(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD4IVPROC proc;
	proc = (PFNGLMULTITEXCOORD4IVPROC)_GetProcAddress("glMultiTexCoord4iv");
	assert(proc != NULL);
	glMultiTexCoord4iv = proc;
	glMultiTexCoord4iv(target, v);
}

static void APIENTRY InitMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	PFNGLMULTITEXCOORD4SPROC proc;
	proc = (PFNGLMULTITEXCOORD4SPROC)_GetProcAddress("glMultiTexCoord4s");
	assert(proc != NULL);
	glMultiTexCoord4s = proc;
	glMultiTexCoord4s(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4sv(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD4SVPROC proc;
	proc = (PFNGLMULTITEXCOORD4SVPROC)_GetProcAddress("glMultiTexCoord4sv");
	assert(proc != NULL);
	glMultiTexCoord4sv = proc;
	glMultiTexCoord4sv(target, v);
}

static void APIENTRY InitLoadTransposeMatrixf(const GLfloat *m)
{
	PFNGLLOADTRANSPOSEMATRIXFPROC proc;
	proc = (PFNGLLOADTRANSPOSEMATRIXFPROC)_GetProcAddress("glLoadTransposeMatrixf");
	assert(proc != NULL);
	glLoadTransposeMatrixf = proc;
	glLoadTransposeMatrixf(m);
}

static void APIENTRY InitLoadTransposeMatrixd(const GLdouble *m)
{
	PFNGLLOADTRANSPOSEMATRIXDPROC proc;
	proc = (PFNGLLOADTRANSPOSEMATRIXDPROC)_GetProcAddress("glLoadTransposeMatrixd");
	assert(proc != NULL);
	glLoadTransposeMatrixd = proc;
	glLoadTransposeMatrixd(m);
}

static void APIENTRY InitMultTransposeMatrixf(const GLfloat *m)
{
	PFNGLMULTTRANSPOSEMATRIXFPROC proc;
	proc = (PFNGLMULTTRANSPOSEMATRIXFPROC)_GetProcAddress("glMultTransposeMatrixf");
	assert(proc != NULL);
	glMultTransposeMatrixf = proc;
	glMultTransposeMatrixf(m);
}

static void APIENTRY InitMultTransposeMatrixd(const GLdouble *m)
{
	PFNGLMULTTRANSPOSEMATRIXDPROC proc;
	proc = (PFNGLMULTTRANSPOSEMATRIXDPROC)_GetProcAddress("glMultTransposeMatrixd");
	assert(proc != NULL);
	glMultTransposeMatrixd = proc;
	glMultTransposeMatrixd(m);
}

static void APIENTRY InitSampleCoverage(GLclampf value, GLboolean invert)
{
	PFNGLSAMPLECOVERAGEPROC proc;
	proc = (PFNGLSAMPLECOVERAGEPROC)_GetProcAddress("glSampleCoverage");
	assert(proc != NULL);
	glSampleCoverage = proc;
	glSampleCoverage(value, invert);
}

static void APIENTRY InitCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXIMAGE3DPROC proc;
	proc = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)_GetProcAddress("glCompressedTexImage3D");
	assert(proc != NULL);
	glCompressedTexImage3D = proc;
	glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

static void APIENTRY InitCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXIMAGE2DPROC proc;
	proc = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)_GetProcAddress("glCompressedTexImage2D");
	assert(proc != NULL);
	glCompressedTexImage2D = proc;
	glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

static void APIENTRY InitCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXIMAGE1DPROC proc;
	proc = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)_GetProcAddress("glCompressedTexImage1D");
	assert(proc != NULL);
	glCompressedTexImage1D = proc;
	glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

static void APIENTRY InitCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC proc;
	proc = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)_GetProcAddress("glCompressedTexSubImage3D");
	assert(proc != NULL);
	glCompressedTexSubImage3D = proc;
	glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

static void APIENTRY InitCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC proc;
	proc = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)_GetProcAddress("glCompressedTexSubImage2D");
	assert(proc != NULL);
	glCompressedTexSubImage2D = proc;
	glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

static void APIENTRY InitCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC proc;
	proc = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)_GetProcAddress("glCompressedTexSubImage1D");
	assert(proc != NULL);
	glCompressedTexSubImage1D = proc;
	glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

static void APIENTRY InitGetCompressedTexImage(GLenum target, GLint level, GLvoid *img)
{
	PFNGLGETCOMPRESSEDTEXIMAGEPROC proc;
	proc = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)_GetProcAddress("glGetCompressedTexImage");
	assert(proc != NULL);
	glGetCompressedTexImage = proc;
	glGetCompressedTexImage(target, level, img);
}


/* GL_VERSION_1_4 */
static void APIENTRY InitBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	PFNGLBLENDFUNCSEPARATEPROC proc;
	proc = (PFNGLBLENDFUNCSEPARATEPROC)_GetProcAddress("glBlendFuncSeparate");
	assert(proc != NULL);
	glBlendFuncSeparate = proc;
	glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

static void APIENTRY InitFogCoordf(GLfloat coord)
{
	PFNGLFOGCOORDFPROC proc;
	proc = (PFNGLFOGCOORDFPROC)_GetProcAddress("glFogCoordf");
	assert(proc != NULL);
	glFogCoordf = proc;
	glFogCoordf(coord);
}

static void APIENTRY InitFogCoordfv(const GLfloat *coord)
{
	PFNGLFOGCOORDFVPROC proc;
	proc = (PFNGLFOGCOORDFVPROC)_GetProcAddress("glFogCoordfv");
	assert(proc != NULL);
	glFogCoordfv = proc;
	glFogCoordfv(coord);
}

static void APIENTRY InitFogCoordd(GLdouble coord)
{
	PFNGLFOGCOORDDPROC proc;
	proc = (PFNGLFOGCOORDDPROC)_GetProcAddress("glFogCoordd");
	assert(proc != NULL);
	glFogCoordd = proc;
	glFogCoordd(coord);
}

static void APIENTRY InitFogCoorddv(const GLdouble *coord)
{
	PFNGLFOGCOORDDVPROC proc;
	proc = (PFNGLFOGCOORDDVPROC)_GetProcAddress("glFogCoorddv");
	assert(proc != NULL);
	glFogCoorddv = proc;
	glFogCoorddv(coord);
}

static void APIENTRY InitFogCoordPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLFOGCOORDPOINTERPROC proc;
	proc = (PFNGLFOGCOORDPOINTERPROC)_GetProcAddress("glFogCoordPointer");
	assert(proc != NULL);
	glFogCoordPointer = proc;
	glFogCoordPointer(type, stride, pointer);
}

static void APIENTRY InitMultiDrawArrays(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount)
{
	PFNGLMULTIDRAWARRAYSPROC proc;
	proc = (PFNGLMULTIDRAWARRAYSPROC)_GetProcAddress("glMultiDrawArrays");
	assert(proc != NULL);
	glMultiDrawArrays = proc;
	glMultiDrawArrays(mode, first, count, primcount);
}

static void APIENTRY InitMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
{
	PFNGLMULTIDRAWELEMENTSPROC proc;
	proc = (PFNGLMULTIDRAWELEMENTSPROC)_GetProcAddress("glMultiDrawElements");
	assert(proc != NULL);
	glMultiDrawElements = proc;
	glMultiDrawElements(mode, count, type, indices, primcount);
}

static void APIENTRY InitPointParameterf(GLenum pname, GLfloat param)
{
	PFNGLPOINTPARAMETERFPROC proc;
	proc = (PFNGLPOINTPARAMETERFPROC)_GetProcAddress("glPointParameterf");
	assert(proc != NULL);
	glPointParameterf = proc;
	glPointParameterf(pname, param);
}

static void APIENTRY InitPointParameterfv(GLenum pname, const GLfloat *params)
{
	PFNGLPOINTPARAMETERFVPROC proc;
	proc = (PFNGLPOINTPARAMETERFVPROC)_GetProcAddress("glPointParameterfv");
	assert(proc != NULL);
	glPointParameterfv = proc;
	glPointParameterfv(pname, params);
}

static void APIENTRY InitPointParameteri(GLenum pname, GLint param)
{
	PFNGLPOINTPARAMETERIPROC proc;
	proc = (PFNGLPOINTPARAMETERIPROC)_GetProcAddress("glPointParameteri");
	assert(proc != NULL);
	glPointParameteri = proc;
	glPointParameteri(pname, param);
}

static void APIENTRY InitPointParameteriv(GLenum pname, const GLint *params)
{
	PFNGLPOINTPARAMETERIVPROC proc;
	proc = (PFNGLPOINTPARAMETERIVPROC)_GetProcAddress("glPointParameteriv");
	assert(proc != NULL);
	glPointParameteriv = proc;
	glPointParameteriv(pname, params);
}

static void APIENTRY InitSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	PFNGLSECONDARYCOLOR3BPROC proc;
	proc = (PFNGLSECONDARYCOLOR3BPROC)_GetProcAddress("glSecondaryColor3b");
	assert(proc != NULL);
	glSecondaryColor3b = proc;
	glSecondaryColor3b(red, green, blue);
}

static void APIENTRY InitSecondaryColor3bv(const GLbyte *v)
{
	PFNGLSECONDARYCOLOR3BVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3BVPROC)_GetProcAddress("glSecondaryColor3bv");
	assert(proc != NULL);
	glSecondaryColor3bv = proc;
	glSecondaryColor3bv(v);
}

static void APIENTRY InitSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	PFNGLSECONDARYCOLOR3DPROC proc;
	proc = (PFNGLSECONDARYCOLOR3DPROC)_GetProcAddress("glSecondaryColor3d");
	assert(proc != NULL);
	glSecondaryColor3d = proc;
	glSecondaryColor3d(red, green, blue);
}

static void APIENTRY InitSecondaryColor3dv(const GLdouble *v)
{
	PFNGLSECONDARYCOLOR3DVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3DVPROC)_GetProcAddress("glSecondaryColor3dv");
	assert(proc != NULL);
	glSecondaryColor3dv = proc;
	glSecondaryColor3dv(v);
}

static void APIENTRY InitSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	PFNGLSECONDARYCOLOR3FPROC proc;
	proc = (PFNGLSECONDARYCOLOR3FPROC)_GetProcAddress("glSecondaryColor3f");
	assert(proc != NULL);
	glSecondaryColor3f = proc;
	glSecondaryColor3f(red, green, blue);
}

static void APIENTRY InitSecondaryColor3fv(const GLfloat *v)
{
	PFNGLSECONDARYCOLOR3FVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3FVPROC)_GetProcAddress("glSecondaryColor3fv");
	assert(proc != NULL);
	glSecondaryColor3fv = proc;
	glSecondaryColor3fv(v);
}

static void APIENTRY InitSecondaryColor3i(GLint red, GLint green, GLint blue)
{
	PFNGLSECONDARYCOLOR3IPROC proc;
	proc = (PFNGLSECONDARYCOLOR3IPROC)_GetProcAddress("glSecondaryColor3i");
	assert(proc != NULL);
	glSecondaryColor3i = proc;
	glSecondaryColor3i(red, green, blue);
}

static void APIENTRY InitSecondaryColor3iv(const GLint *v)
{
	PFNGLSECONDARYCOLOR3IVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3IVPROC)_GetProcAddress("glSecondaryColor3iv");
	assert(proc != NULL);
	glSecondaryColor3iv = proc;
	glSecondaryColor3iv(v);
}

static void APIENTRY InitSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
	PFNGLSECONDARYCOLOR3SPROC proc;
	proc = (PFNGLSECONDARYCOLOR3SPROC)_GetProcAddress("glSecondaryColor3s");
	assert(proc != NULL);
	glSecondaryColor3s = proc;
	glSecondaryColor3s(red, green, blue);
}

static void APIENTRY InitSecondaryColor3sv(const GLshort *v)
{
	PFNGLSECONDARYCOLOR3SVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3SVPROC)_GetProcAddress("glSecondaryColor3sv");
	assert(proc != NULL);
	glSecondaryColor3sv = proc;
	glSecondaryColor3sv(v);
}

static void APIENTRY InitSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	PFNGLSECONDARYCOLOR3UBPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UBPROC)_GetProcAddress("glSecondaryColor3ub");
	assert(proc != NULL);
	glSecondaryColor3ub = proc;
	glSecondaryColor3ub(red, green, blue);
}

static void APIENTRY InitSecondaryColor3ubv(const GLubyte *v)
{
	PFNGLSECONDARYCOLOR3UBVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UBVPROC)_GetProcAddress("glSecondaryColor3ubv");
	assert(proc != NULL);
	glSecondaryColor3ubv = proc;
	glSecondaryColor3ubv(v);
}

static void APIENTRY InitSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
	PFNGLSECONDARYCOLOR3UIPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UIPROC)_GetProcAddress("glSecondaryColor3ui");
	assert(proc != NULL);
	glSecondaryColor3ui = proc;
	glSecondaryColor3ui(red, green, blue);
}

static void APIENTRY InitSecondaryColor3uiv(const GLuint *v)
{
	PFNGLSECONDARYCOLOR3UIVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UIVPROC)_GetProcAddress("glSecondaryColor3uiv");
	assert(proc != NULL);
	glSecondaryColor3uiv = proc;
	glSecondaryColor3uiv(v);
}

static void APIENTRY InitSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
	PFNGLSECONDARYCOLOR3USPROC proc;
	proc = (PFNGLSECONDARYCOLOR3USPROC)_GetProcAddress("glSecondaryColor3us");
	assert(proc != NULL);
	glSecondaryColor3us = proc;
	glSecondaryColor3us(red, green, blue);
}

static void APIENTRY InitSecondaryColor3usv(const GLushort *v)
{
	PFNGLSECONDARYCOLOR3USVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3USVPROC)_GetProcAddress("glSecondaryColor3usv");
	assert(proc != NULL);
	glSecondaryColor3usv = proc;
	glSecondaryColor3usv(v);
}

static void APIENTRY InitSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLSECONDARYCOLORPOINTERPROC proc;
	proc = (PFNGLSECONDARYCOLORPOINTERPROC)_GetProcAddress("glSecondaryColorPointer");
	assert(proc != NULL);
	glSecondaryColorPointer = proc;
	glSecondaryColorPointer(size, type, stride, pointer);
}

static void APIENTRY InitWindowPos2d(GLdouble x, GLdouble y)
{
	PFNGLWINDOWPOS2DPROC proc;
	proc = (PFNGLWINDOWPOS2DPROC)_GetProcAddress("glWindowPos2d");
	assert(proc != NULL);
	glWindowPos2d = proc;
	glWindowPos2d(x, y);
}

static void APIENTRY InitWindowPos2dv(const GLdouble *v)
{
	PFNGLWINDOWPOS2DVPROC proc;
	proc = (PFNGLWINDOWPOS2DVPROC)_GetProcAddress("glWindowPos2dv");
	assert(proc != NULL);
	glWindowPos2dv = proc;
	glWindowPos2dv(v);
}

static void APIENTRY InitWindowPos2f(GLfloat x, GLfloat y)
{
	PFNGLWINDOWPOS2FPROC proc;
	proc = (PFNGLWINDOWPOS2FPROC)_GetProcAddress("glWindowPos2f");
	assert(proc != NULL);
	glWindowPos2f = proc;
	glWindowPos2f(x, y);
}

static void APIENTRY InitWindowPos2fv(const GLfloat *v)
{
	PFNGLWINDOWPOS2FVPROC proc;
	proc = (PFNGLWINDOWPOS2FVPROC)_GetProcAddress("glWindowPos2fv");
	assert(proc != NULL);
	glWindowPos2fv = proc;
	glWindowPos2fv(v);
}

static void APIENTRY InitWindowPos2i(GLint x, GLint y)
{
	PFNGLWINDOWPOS2IPROC proc;
	proc = (PFNGLWINDOWPOS2IPROC)_GetProcAddress("glWindowPos2i");
	assert(proc != NULL);
	glWindowPos2i = proc;
	glWindowPos2i(x, y);
}

static void APIENTRY InitWindowPos2iv(const GLint *v)
{
	PFNGLWINDOWPOS2IVPROC proc;
	proc = (PFNGLWINDOWPOS2IVPROC)_GetProcAddress("glWindowPos2iv");
	assert(proc != NULL);
	glWindowPos2iv = proc;
	glWindowPos2iv(v);
}

static void APIENTRY InitWindowPos2s(GLshort x, GLshort y)
{
	PFNGLWINDOWPOS2SPROC proc;
	proc = (PFNGLWINDOWPOS2SPROC)_GetProcAddress("glWindowPos2s");
	assert(proc != NULL);
	glWindowPos2s = proc;
	glWindowPos2s(x, y);
}

static void APIENTRY InitWindowPos2sv(const GLshort *v)
{
	PFNGLWINDOWPOS2SVPROC proc;
	proc = (PFNGLWINDOWPOS2SVPROC)_GetProcAddress("glWindowPos2sv");
	assert(proc != NULL);
	glWindowPos2sv = proc;
	glWindowPos2sv(v);
}

static void APIENTRY InitWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLWINDOWPOS3DPROC proc;
	proc = (PFNGLWINDOWPOS3DPROC)_GetProcAddress("glWindowPos3d");
	assert(proc != NULL);
	glWindowPos3d = proc;
	glWindowPos3d(x, y, z);
}

static void APIENTRY InitWindowPos3dv(const GLdouble *v)
{
	PFNGLWINDOWPOS3DVPROC proc;
	proc = (PFNGLWINDOWPOS3DVPROC)_GetProcAddress("glWindowPos3dv");
	assert(proc != NULL);
	glWindowPos3dv = proc;
	glWindowPos3dv(v);
}

static void APIENTRY InitWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLWINDOWPOS3FPROC proc;
	proc = (PFNGLWINDOWPOS3FPROC)_GetProcAddress("glWindowPos3f");
	assert(proc != NULL);
	glWindowPos3f = proc;
	glWindowPos3f(x, y, z);
}

static void APIENTRY InitWindowPos3fv(const GLfloat *v)
{
	PFNGLWINDOWPOS3FVPROC proc;
	proc = (PFNGLWINDOWPOS3FVPROC)_GetProcAddress("glWindowPos3fv");
	assert(proc != NULL);
	glWindowPos3fv = proc;
	glWindowPos3fv(v);
}

static void APIENTRY InitWindowPos3i(GLint x, GLint y, GLint z)
{
	PFNGLWINDOWPOS3IPROC proc;
	proc = (PFNGLWINDOWPOS3IPROC)_GetProcAddress("glWindowPos3i");
	assert(proc != NULL);
	glWindowPos3i = proc;
	glWindowPos3i(x, y, z);
}

static void APIENTRY InitWindowPos3iv(const GLint *v)
{
	PFNGLWINDOWPOS3IVPROC proc;
	proc = (PFNGLWINDOWPOS3IVPROC)_GetProcAddress("glWindowPos3iv");
	assert(proc != NULL);
	glWindowPos3iv = proc;
	glWindowPos3iv(v);
}

static void APIENTRY InitWindowPos3s(GLshort x, GLshort y, GLshort z)
{
	PFNGLWINDOWPOS3SPROC proc;
	proc = (PFNGLWINDOWPOS3SPROC)_GetProcAddress("glWindowPos3s");
	assert(proc != NULL);
	glWindowPos3s = proc;
	glWindowPos3s(x, y, z);
}

static void APIENTRY InitWindowPos3sv(const GLshort *v)
{
	PFNGLWINDOWPOS3SVPROC proc;
	proc = (PFNGLWINDOWPOS3SVPROC)_GetProcAddress("glWindowPos3sv");
	assert(proc != NULL);
	glWindowPos3sv = proc;
	glWindowPos3sv(v);
}


/* GL_VERSION_1_5 */
static void APIENTRY InitGenQueries(GLsizei n, GLuint *ids)
{
	PFNGLGENQUERIESPROC proc;
	proc = (PFNGLGENQUERIESPROC)_GetProcAddress("glGenQueries");
	assert(proc != NULL);
	glGenQueries = proc;
	glGenQueries(n, ids);
}

static void APIENTRY InitDeleteQueries(GLsizei n, const GLuint *ids)
{
	PFNGLDELETEQUERIESPROC proc;
	proc = (PFNGLDELETEQUERIESPROC)_GetProcAddress("glDeleteQueries");
	assert(proc != NULL);
	glDeleteQueries = proc;
	glDeleteQueries(n, ids);
}

static GLboolean APIENTRY InitIsQuery(GLuint id)
{
	PFNGLISQUERYPROC proc;
	proc = (PFNGLISQUERYPROC)_GetProcAddress("glIsQuery");
	assert(proc != NULL);
	glIsQuery = proc;
	return glIsQuery(id);
}

static void APIENTRY InitBeginQuery(GLenum target, GLuint id)
{
	PFNGLBEGINQUERYPROC proc;
	proc = (PFNGLBEGINQUERYPROC)_GetProcAddress("glBeginQuery");
	assert(proc != NULL);
	glBeginQuery = proc;
	glBeginQuery(target, id);
}

static void APIENTRY InitEndQuery(GLenum target)
{
	PFNGLENDQUERYPROC proc;
	proc = (PFNGLENDQUERYPROC)_GetProcAddress("glEndQuery");
	assert(proc != NULL);
	glEndQuery = proc;
	glEndQuery(target);
}

static void APIENTRY InitGetQueryiv(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETQUERYIVPROC proc;
	proc = (PFNGLGETQUERYIVPROC)_GetProcAddress("glGetQueryiv");
	assert(proc != NULL);
	glGetQueryiv = proc;
	glGetQueryiv(target, pname, params);
}

static void APIENTRY InitGetQueryObjectiv(GLuint id, GLenum pname, GLint *params)
{
	PFNGLGETQUERYOBJECTIVPROC proc;
	proc = (PFNGLGETQUERYOBJECTIVPROC)_GetProcAddress("glGetQueryObjectiv");
	assert(proc != NULL);
	glGetQueryObjectiv = proc;
	glGetQueryObjectiv(id, pname, params);
}

static void APIENTRY InitGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
	PFNGLGETQUERYOBJECTUIVPROC proc;
	proc = (PFNGLGETQUERYOBJECTUIVPROC)_GetProcAddress("glGetQueryObjectuiv");
	assert(proc != NULL);
	glGetQueryObjectuiv = proc;
	glGetQueryObjectuiv(id, pname, params);
}

static void APIENTRY InitBindBuffer(GLenum target, GLuint buffer)
{
	PFNGLBINDBUFFERPROC proc;
	proc = (PFNGLBINDBUFFERPROC)_GetProcAddress("glBindBuffer");
	assert(proc != NULL);
	glBindBuffer = proc;
	glBindBuffer(target, buffer);
}

static void APIENTRY InitDeleteBuffers(GLsizei n, const GLuint *buffers)
{
	PFNGLDELETEBUFFERSPROC proc;
	proc = (PFNGLDELETEBUFFERSPROC)_GetProcAddress("glDeleteBuffers");
	assert(proc != NULL);
	glDeleteBuffers = proc;
	glDeleteBuffers(n, buffers);
}

static void APIENTRY InitGenBuffers(GLsizei n, GLuint *buffers)
{
	PFNGLGENBUFFERSPROC proc;
	proc = (PFNGLGENBUFFERSPROC)_GetProcAddress("glGenBuffers");
	assert(proc != NULL);
	glGenBuffers = proc;
	glGenBuffers(n, buffers);
}

static GLboolean APIENTRY InitIsBuffer(GLuint buffer)
{
	PFNGLISBUFFERPROC proc;
	proc = (PFNGLISBUFFERPROC)_GetProcAddress("glIsBuffer");
	assert(proc != NULL);
	glIsBuffer = proc;
	return glIsBuffer(buffer);
}

static void APIENTRY InitBufferData(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
{
	PFNGLBUFFERDATAPROC proc;
	proc = (PFNGLBUFFERDATAPROC)_GetProcAddress("glBufferData");
	assert(proc != NULL);
	glBufferData = proc;
	glBufferData(target, size, data, usage);
}

static void APIENTRY InitBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
{
	PFNGLBUFFERSUBDATAPROC proc;
	proc = (PFNGLBUFFERSUBDATAPROC)_GetProcAddress("glBufferSubData");
	assert(proc != NULL);
	glBufferSubData = proc;
	glBufferSubData(target, offset, size, data);
}

static void APIENTRY InitGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data)
{
	PFNGLGETBUFFERSUBDATAPROC proc;
	proc = (PFNGLGETBUFFERSUBDATAPROC)_GetProcAddress("glGetBufferSubData");
	assert(proc != NULL);
	glGetBufferSubData = proc;
	glGetBufferSubData(target, offset, size, data);
}

static GLvoid* APIENTRY InitMapBuffer(GLenum target, GLenum access)
{
	PFNGLMAPBUFFERPROC proc;
	proc = (PFNGLMAPBUFFERPROC)_GetProcAddress("glMapBuffer");
	assert(proc != NULL);
	glMapBuffer = proc;
	return glMapBuffer(target, access);
}

static GLboolean APIENTRY InitUnmapBuffer(GLenum target)
{
	PFNGLUNMAPBUFFERPROC proc;
	proc = (PFNGLUNMAPBUFFERPROC)_GetProcAddress("glUnmapBuffer");
	assert(proc != NULL);
	glUnmapBuffer = proc;
	return glUnmapBuffer(target);
}

static void APIENTRY InitGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETBUFFERPARAMETERIVPROC proc;
	proc = (PFNGLGETBUFFERPARAMETERIVPROC)_GetProcAddress("glGetBufferParameteriv");
	assert(proc != NULL);
	glGetBufferParameteriv = proc;
	glGetBufferParameteriv(target, pname, params);
}

static void APIENTRY InitGetBufferPointerv(GLenum target, GLenum pname, GLvoid* *params)
{
	PFNGLGETBUFFERPOINTERVPROC proc;
	proc = (PFNGLGETBUFFERPOINTERVPROC)_GetProcAddress("glGetBufferPointerv");
	assert(proc != NULL);
	glGetBufferPointerv = proc;
	glGetBufferPointerv(target, pname, params);
}


/* GL_VERSION_2_0 */
static void APIENTRY InitBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
	PFNGLBLENDEQUATIONSEPARATEPROC proc;
	proc = (PFNGLBLENDEQUATIONSEPARATEPROC)_GetProcAddress("glBlendEquationSeparate");
	assert(proc != NULL);
	glBlendEquationSeparate = proc;
	glBlendEquationSeparate(modeRGB, modeAlpha);
}

static void APIENTRY InitDrawBuffers(GLsizei n, const GLenum *bufs)
{
	PFNGLDRAWBUFFERSPROC proc;
	proc = (PFNGLDRAWBUFFERSPROC)_GetProcAddress("glDrawBuffers");
	assert(proc != NULL);
	glDrawBuffers = proc;
	glDrawBuffers(n, bufs);
}

static void APIENTRY InitStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	PFNGLSTENCILOPSEPARATEPROC proc;
	proc = (PFNGLSTENCILOPSEPARATEPROC)_GetProcAddress("glStencilOpSeparate");
	assert(proc != NULL);
	glStencilOpSeparate = proc;
	glStencilOpSeparate(face, sfail, dpfail, dppass);
}

static void APIENTRY InitStencilFuncSeparate(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
	PFNGLSTENCILFUNCSEPARATEPROC proc;
	proc = (PFNGLSTENCILFUNCSEPARATEPROC)_GetProcAddress("glStencilFuncSeparate");
	assert(proc != NULL);
	glStencilFuncSeparate = proc;
	glStencilFuncSeparate(frontfunc, backfunc, ref, mask);
}

static void APIENTRY InitStencilMaskSeparate(GLenum face, GLuint mask)
{
	PFNGLSTENCILMASKSEPARATEPROC proc;
	proc = (PFNGLSTENCILMASKSEPARATEPROC)_GetProcAddress("glStencilMaskSeparate");
	assert(proc != NULL);
	glStencilMaskSeparate = proc;
	glStencilMaskSeparate(face, mask);
}

static void APIENTRY InitAttachShader(GLuint program, GLuint shader)
{
	PFNGLATTACHSHADERPROC proc;
	proc = (PFNGLATTACHSHADERPROC)_GetProcAddress("glAttachShader");
	assert(proc != NULL);
	glAttachShader = proc;
	glAttachShader(program, shader);
}

static void APIENTRY InitBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
{
	PFNGLBINDATTRIBLOCATIONPROC proc;
	proc = (PFNGLBINDATTRIBLOCATIONPROC)_GetProcAddress("glBindAttribLocation");
	assert(proc != NULL);
	glBindAttribLocation = proc;
	glBindAttribLocation(program, index, name);
}

static void APIENTRY InitCompileShader(GLuint shader)
{
	PFNGLCOMPILESHADERPROC proc;
	proc = (PFNGLCOMPILESHADERPROC)_GetProcAddress("glCompileShader");
	assert(proc != NULL);
	glCompileShader = proc;
	glCompileShader(shader);
}

static GLuint APIENTRY InitCreateProgram(void)
{
	PFNGLCREATEPROGRAMPROC proc;
	proc = (PFNGLCREATEPROGRAMPROC)_GetProcAddress("glCreateProgram");
	assert(proc != NULL);
	glCreateProgram = proc;
	return glCreateProgram();
}

static GLuint APIENTRY InitCreateShader(GLenum type)
{
	PFNGLCREATESHADERPROC proc;
	proc = (PFNGLCREATESHADERPROC)_GetProcAddress("glCreateShader");
	assert(proc != NULL);
	glCreateShader = proc;
	return glCreateShader(type);
}

static void APIENTRY InitDeleteProgram(GLuint program)
{
	PFNGLDELETEPROGRAMPROC proc;
	proc = (PFNGLDELETEPROGRAMPROC)_GetProcAddress("glDeleteProgram");
	assert(proc != NULL);
	glDeleteProgram = proc;
	glDeleteProgram(program);
}

static void APIENTRY InitDeleteShader(GLuint shader)
{
	PFNGLDELETESHADERPROC proc;
	proc = (PFNGLDELETESHADERPROC)_GetProcAddress("glDeleteShader");
	assert(proc != NULL);
	glDeleteShader = proc;
	glDeleteShader(shader);
}

static void APIENTRY InitDetachShader(GLuint program, GLuint shader)
{
	PFNGLDETACHSHADERPROC proc;
	proc = (PFNGLDETACHSHADERPROC)_GetProcAddress("glDetachShader");
	assert(proc != NULL);
	glDetachShader = proc;
	glDetachShader(program, shader);
}

static void APIENTRY InitDisableVertexAttribArray(GLuint index)
{
	PFNGLDISABLEVERTEXATTRIBARRAYPROC proc;
	proc = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)_GetProcAddress("glDisableVertexAttribArray");
	assert(proc != NULL);
	glDisableVertexAttribArray = proc;
	glDisableVertexAttribArray(index);
}

static void APIENTRY InitEnableVertexAttribArray(GLuint index)
{
	PFNGLENABLEVERTEXATTRIBARRAYPROC proc;
	proc = (PFNGLENABLEVERTEXATTRIBARRAYPROC)_GetProcAddress("glEnableVertexAttribArray");
	assert(proc != NULL);
	glEnableVertexAttribArray = proc;
	glEnableVertexAttribArray(index);
}

static void APIENTRY InitGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
	PFNGLGETACTIVEATTRIBPROC proc;
	proc = (PFNGLGETACTIVEATTRIBPROC)_GetProcAddress("glGetActiveAttrib");
	assert(proc != NULL);
	glGetActiveAttrib = proc;
	glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}

static void APIENTRY InitGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
	PFNGLGETACTIVEUNIFORMPROC proc;
	proc = (PFNGLGETACTIVEUNIFORMPROC)_GetProcAddress("glGetActiveUniform");
	assert(proc != NULL);
	glGetActiveUniform = proc;
	glGetActiveUniform(program, index, bufSize, length, size, type, name);
}

static void APIENTRY InitGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj)
{
	PFNGLGETATTACHEDSHADERSPROC proc;
	proc = (PFNGLGETATTACHEDSHADERSPROC)_GetProcAddress("glGetAttachedShaders");
	assert(proc != NULL);
	glGetAttachedShaders = proc;
	glGetAttachedShaders(program, maxCount, count, obj);
}

static GLint APIENTRY InitGetAttribLocation(GLuint program, const GLchar *name)
{
	PFNGLGETATTRIBLOCATIONPROC proc;
	proc = (PFNGLGETATTRIBLOCATIONPROC)_GetProcAddress("glGetAttribLocation");
	assert(proc != NULL);
	glGetAttribLocation = proc;
	return glGetAttribLocation(program, name);
}

static void APIENTRY InitGetProgramiv(GLuint program, GLenum pname, GLint *params)
{
	PFNGLGETPROGRAMIVPROC proc;
	proc = (PFNGLGETPROGRAMIVPROC)_GetProcAddress("glGetProgramiv");
	assert(proc != NULL);
	glGetProgramiv = proc;
	glGetProgramiv(program, pname, params);
}

static void APIENTRY InitGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
	PFNGLGETPROGRAMINFOLOGPROC proc;
	proc = (PFNGLGETPROGRAMINFOLOGPROC)_GetProcAddress("glGetProgramInfoLog");
	assert(proc != NULL);
	glGetProgramInfoLog = proc;
	glGetProgramInfoLog(program, bufSize, length, infoLog);
}

static void APIENTRY InitGetShaderiv(GLuint shader, GLenum pname, GLint *params)
{
	PFNGLGETSHADERIVPROC proc;
	proc = (PFNGLGETSHADERIVPROC)_GetProcAddress("glGetShaderiv");
	assert(proc != NULL);
	glGetShaderiv = proc;
	glGetShaderiv(shader, pname, params);
}

static void APIENTRY InitGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
	PFNGLGETSHADERINFOLOGPROC proc;
	proc = (PFNGLGETSHADERINFOLOGPROC)_GetProcAddress("glGetShaderInfoLog");
	assert(proc != NULL);
	glGetShaderInfoLog = proc;
	glGetShaderInfoLog(shader, bufSize, length, infoLog);
}

static void APIENTRY InitGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
{
	PFNGLGETSHADERSOURCEPROC proc;
	proc = (PFNGLGETSHADERSOURCEPROC)_GetProcAddress("glGetShaderSource");
	assert(proc != NULL);
	glGetShaderSource = proc;
	glGetShaderSource(shader, bufSize, length, source);
}

static GLint APIENTRY InitGetUniformLocation(GLuint program, const GLchar *name)
{
	PFNGLGETUNIFORMLOCATIONPROC proc;
	proc = (PFNGLGETUNIFORMLOCATIONPROC)_GetProcAddress("glGetUniformLocation");
	assert(proc != NULL);
	glGetUniformLocation = proc;
	return glGetUniformLocation(program, name);
}

static void APIENTRY InitGetUniformfv(GLuint program, GLint location, GLfloat *params)
{
	PFNGLGETUNIFORMFVPROC proc;
	proc = (PFNGLGETUNIFORMFVPROC)_GetProcAddress("glGetUniformfv");
	assert(proc != NULL);
	glGetUniformfv = proc;
	glGetUniformfv(program, location, params);
}

static void APIENTRY InitGetUniformiv(GLuint program, GLint location, GLint *params)
{
	PFNGLGETUNIFORMIVPROC proc;
	proc = (PFNGLGETUNIFORMIVPROC)_GetProcAddress("glGetUniformiv");
	assert(proc != NULL);
	glGetUniformiv = proc;
	glGetUniformiv(program, location, params);
}

static void APIENTRY InitGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params)
{
	PFNGLGETVERTEXATTRIBDVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBDVPROC)_GetProcAddress("glGetVertexAttribdv");
	assert(proc != NULL);
	glGetVertexAttribdv = proc;
	glGetVertexAttribdv(index, pname, params);
}

static void APIENTRY InitGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
{
	PFNGLGETVERTEXATTRIBFVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBFVPROC)_GetProcAddress("glGetVertexAttribfv");
	assert(proc != NULL);
	glGetVertexAttribfv = proc;
	glGetVertexAttribfv(index, pname, params);
}

static void APIENTRY InitGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
{
	PFNGLGETVERTEXATTRIBIVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBIVPROC)_GetProcAddress("glGetVertexAttribiv");
	assert(proc != NULL);
	glGetVertexAttribiv = proc;
	glGetVertexAttribiv(index, pname, params);
}

static void APIENTRY InitGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid* *pointer)
{
	PFNGLGETVERTEXATTRIBPOINTERVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBPOINTERVPROC)_GetProcAddress("glGetVertexAttribPointerv");
	assert(proc != NULL);
	glGetVertexAttribPointerv = proc;
	glGetVertexAttribPointerv(index, pname, pointer);
}

static GLboolean APIENTRY InitIsProgram(GLuint program)
{
	PFNGLISPROGRAMPROC proc;
	proc = (PFNGLISPROGRAMPROC)_GetProcAddress("glIsProgram");
	assert(proc != NULL);
	glIsProgram = proc;
	return glIsProgram(program);
}

static GLboolean APIENTRY InitIsShader(GLuint shader)
{
	PFNGLISSHADERPROC proc;
	proc = (PFNGLISSHADERPROC)_GetProcAddress("glIsShader");
	assert(proc != NULL);
	glIsShader = proc;
	return glIsShader(shader);
}

static void APIENTRY InitLinkProgram(GLuint program)
{
	PFNGLLINKPROGRAMPROC proc;
	proc = (PFNGLLINKPROGRAMPROC)_GetProcAddress("glLinkProgram");
	assert(proc != NULL);
	glLinkProgram = proc;
	glLinkProgram(program);
}

static void APIENTRY InitShaderSource(GLuint shader, GLsizei count, const GLchar* *string, const GLint *length)
{
	PFNGLSHADERSOURCEPROC proc;
	proc = (PFNGLSHADERSOURCEPROC)_GetProcAddress("glShaderSource");
	assert(proc != NULL);
	glShaderSource = proc;
	glShaderSource(shader, count, string, length);
}

static void APIENTRY InitUseProgram(GLuint program)
{
	PFNGLUSEPROGRAMPROC proc;
	proc = (PFNGLUSEPROGRAMPROC)_GetProcAddress("glUseProgram");
	assert(proc != NULL);
	glUseProgram = proc;
	glUseProgram(program);
}

static void APIENTRY InitUniform1f(GLint location, GLfloat v0)
{
	PFNGLUNIFORM1FPROC proc;
	proc = (PFNGLUNIFORM1FPROC)_GetProcAddress("glUniform1f");
	assert(proc != NULL);
	glUniform1f = proc;
	glUniform1f(location, v0);
}

static void APIENTRY InitUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
	PFNGLUNIFORM2FPROC proc;
	proc = (PFNGLUNIFORM2FPROC)_GetProcAddress("glUniform2f");
	assert(proc != NULL);
	glUniform2f = proc;
	glUniform2f(location, v0, v1);
}

static void APIENTRY InitUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	PFNGLUNIFORM3FPROC proc;
	proc = (PFNGLUNIFORM3FPROC)_GetProcAddress("glUniform3f");
	assert(proc != NULL);
	glUniform3f = proc;
	glUniform3f(location, v0, v1, v2);
}

static void APIENTRY InitUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	PFNGLUNIFORM4FPROC proc;
	proc = (PFNGLUNIFORM4FPROC)_GetProcAddress("glUniform4f");
	assert(proc != NULL);
	glUniform4f = proc;
	glUniform4f(location, v0, v1, v2, v3);
}

static void APIENTRY InitUniform1i(GLint location, GLint v0)
{
	PFNGLUNIFORM1IPROC proc;
	proc = (PFNGLUNIFORM1IPROC)_GetProcAddress("glUniform1i");
	assert(proc != NULL);
	glUniform1i = proc;
	glUniform1i(location, v0);
}

static void APIENTRY InitUniform2i(GLint location, GLint v0, GLint v1)
{
	PFNGLUNIFORM2IPROC proc;
	proc = (PFNGLUNIFORM2IPROC)_GetProcAddress("glUniform2i");
	assert(proc != NULL);
	glUniform2i = proc;
	glUniform2i(location, v0, v1);
}

static void APIENTRY InitUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
	PFNGLUNIFORM3IPROC proc;
	proc = (PFNGLUNIFORM3IPROC)_GetProcAddress("glUniform3i");
	assert(proc != NULL);
	glUniform3i = proc;
	glUniform3i(location, v0, v1, v2);
}

static void APIENTRY InitUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	PFNGLUNIFORM4IPROC proc;
	proc = (PFNGLUNIFORM4IPROC)_GetProcAddress("glUniform4i");
	assert(proc != NULL);
	glUniform4i = proc;
	glUniform4i(location, v0, v1, v2, v3);
}

static void APIENTRY InitUniform1fv(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM1FVPROC proc;
	proc = (PFNGLUNIFORM1FVPROC)_GetProcAddress("glUniform1fv");
	assert(proc != NULL);
	glUniform1fv = proc;
	glUniform1fv(location, count, value);
}

static void APIENTRY InitUniform2fv(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM2FVPROC proc;
	proc = (PFNGLUNIFORM2FVPROC)_GetProcAddress("glUniform2fv");
	assert(proc != NULL);
	glUniform2fv = proc;
	glUniform2fv(location, count, value);
}

static void APIENTRY InitUniform3fv(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM3FVPROC proc;
	proc = (PFNGLUNIFORM3FVPROC)_GetProcAddress("glUniform3fv");
	assert(proc != NULL);
	glUniform3fv = proc;
	glUniform3fv(location, count, value);
}

static void APIENTRY InitUniform4fv(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM4FVPROC proc;
	proc = (PFNGLUNIFORM4FVPROC)_GetProcAddress("glUniform4fv");
	assert(proc != NULL);
	glUniform4fv = proc;
	glUniform4fv(location, count, value);
}

static void APIENTRY InitUniform1iv(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM1IVPROC proc;
	proc = (PFNGLUNIFORM1IVPROC)_GetProcAddress("glUniform1iv");
	assert(proc != NULL);
	glUniform1iv = proc;
	glUniform1iv(location, count, value);
}

static void APIENTRY InitUniform2iv(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM2IVPROC proc;
	proc = (PFNGLUNIFORM2IVPROC)_GetProcAddress("glUniform2iv");
	assert(proc != NULL);
	glUniform2iv = proc;
	glUniform2iv(location, count, value);
}

static void APIENTRY InitUniform3iv(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM3IVPROC proc;
	proc = (PFNGLUNIFORM3IVPROC)_GetProcAddress("glUniform3iv");
	assert(proc != NULL);
	glUniform3iv = proc;
	glUniform3iv(location, count, value);
}

static void APIENTRY InitUniform4iv(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM4IVPROC proc;
	proc = (PFNGLUNIFORM4IVPROC)_GetProcAddress("glUniform4iv");
	assert(proc != NULL);
	glUniform4iv = proc;
	glUniform4iv(location, count, value);
}

static void APIENTRY InitUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	PFNGLUNIFORMMATRIX2FVPROC proc;
	proc = (PFNGLUNIFORMMATRIX2FVPROC)_GetProcAddress("glUniformMatrix2fv");
	assert(proc != NULL);
	glUniformMatrix2fv = proc;
	glUniformMatrix2fv(location, count, transpose, value);
}

static void APIENTRY InitUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	PFNGLUNIFORMMATRIX3FVPROC proc;
	proc = (PFNGLUNIFORMMATRIX3FVPROC)_GetProcAddress("glUniformMatrix3fv");
	assert(proc != NULL);
	glUniformMatrix3fv = proc;
	glUniformMatrix3fv(location, count, transpose, value);
}

static void APIENTRY InitUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	PFNGLUNIFORMMATRIX4FVPROC proc;
	proc = (PFNGLUNIFORMMATRIX4FVPROC)_GetProcAddress("glUniformMatrix4fv");
	assert(proc != NULL);
	glUniformMatrix4fv = proc;
	glUniformMatrix4fv(location, count, transpose, value);
}

static void APIENTRY InitValidateProgram(GLuint program)
{
	PFNGLVALIDATEPROGRAMPROC proc;
	proc = (PFNGLVALIDATEPROGRAMPROC)_GetProcAddress("glValidateProgram");
	assert(proc != NULL);
	glValidateProgram = proc;
	glValidateProgram(program);
}

static void APIENTRY InitVertexAttrib1d(GLuint index, GLdouble x)
{
	PFNGLVERTEXATTRIB1DPROC proc;
	proc = (PFNGLVERTEXATTRIB1DPROC)_GetProcAddress("glVertexAttrib1d");
	assert(proc != NULL);
	glVertexAttrib1d = proc;
	glVertexAttrib1d(index, x);
}

static void APIENTRY InitVertexAttrib1dv(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB1DVPROC proc;
	proc = (PFNGLVERTEXATTRIB1DVPROC)_GetProcAddress("glVertexAttrib1dv");
	assert(proc != NULL);
	glVertexAttrib1dv = proc;
	glVertexAttrib1dv(index, v);
}

static void APIENTRY InitVertexAttrib1f(GLuint index, GLfloat x)
{
	PFNGLVERTEXATTRIB1FPROC proc;
	proc = (PFNGLVERTEXATTRIB1FPROC)_GetProcAddress("glVertexAttrib1f");
	assert(proc != NULL);
	glVertexAttrib1f = proc;
	glVertexAttrib1f(index, x);
}

static void APIENTRY InitVertexAttrib1fv(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB1FVPROC proc;
	proc = (PFNGLVERTEXATTRIB1FVPROC)_GetProcAddress("glVertexAttrib1fv");
	assert(proc != NULL);
	glVertexAttrib1fv = proc;
	glVertexAttrib1fv(index, v);
}

static void APIENTRY InitVertexAttrib1s(GLuint index, GLshort x)
{
	PFNGLVERTEXATTRIB1SPROC proc;
	proc = (PFNGLVERTEXATTRIB1SPROC)_GetProcAddress("glVertexAttrib1s");
	assert(proc != NULL);
	glVertexAttrib1s = proc;
	glVertexAttrib1s(index, x);
}

static void APIENTRY InitVertexAttrib1sv(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB1SVPROC proc;
	proc = (PFNGLVERTEXATTRIB1SVPROC)_GetProcAddress("glVertexAttrib1sv");
	assert(proc != NULL);
	glVertexAttrib1sv = proc;
	glVertexAttrib1sv(index, v);
}

static void APIENTRY InitVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
	PFNGLVERTEXATTRIB2DPROC proc;
	proc = (PFNGLVERTEXATTRIB2DPROC)_GetProcAddress("glVertexAttrib2d");
	assert(proc != NULL);
	glVertexAttrib2d = proc;
	glVertexAttrib2d(index, x, y);
}

static void APIENTRY InitVertexAttrib2dv(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB2DVPROC proc;
	proc = (PFNGLVERTEXATTRIB2DVPROC)_GetProcAddress("glVertexAttrib2dv");
	assert(proc != NULL);
	glVertexAttrib2dv = proc;
	glVertexAttrib2dv(index, v);
}

static void APIENTRY InitVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
	PFNGLVERTEXATTRIB2FPROC proc;
	proc = (PFNGLVERTEXATTRIB2FPROC)_GetProcAddress("glVertexAttrib2f");
	assert(proc != NULL);
	glVertexAttrib2f = proc;
	glVertexAttrib2f(index, x, y);
}

static void APIENTRY InitVertexAttrib2fv(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB2FVPROC proc;
	proc = (PFNGLVERTEXATTRIB2FVPROC)_GetProcAddress("glVertexAttrib2fv");
	assert(proc != NULL);
	glVertexAttrib2fv = proc;
	glVertexAttrib2fv(index, v);
}

static void APIENTRY InitVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
	PFNGLVERTEXATTRIB2SPROC proc;
	proc = (PFNGLVERTEXATTRIB2SPROC)_GetProcAddress("glVertexAttrib2s");
	assert(proc != NULL);
	glVertexAttrib2s = proc;
	glVertexAttrib2s(index, x, y);
}

static void APIENTRY InitVertexAttrib2sv(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB2SVPROC proc;
	proc = (PFNGLVERTEXATTRIB2SVPROC)_GetProcAddress("glVertexAttrib2sv");
	assert(proc != NULL);
	glVertexAttrib2sv = proc;
	glVertexAttrib2sv(index, v);
}

static void APIENTRY InitVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLVERTEXATTRIB3DPROC proc;
	proc = (PFNGLVERTEXATTRIB3DPROC)_GetProcAddress("glVertexAttrib3d");
	assert(proc != NULL);
	glVertexAttrib3d = proc;
	glVertexAttrib3d(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3dv(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB3DVPROC proc;
	proc = (PFNGLVERTEXATTRIB3DVPROC)_GetProcAddress("glVertexAttrib3dv");
	assert(proc != NULL);
	glVertexAttrib3dv = proc;
	glVertexAttrib3dv(index, v);
}

static void APIENTRY InitVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLVERTEXATTRIB3FPROC proc;
	proc = (PFNGLVERTEXATTRIB3FPROC)_GetProcAddress("glVertexAttrib3f");
	assert(proc != NULL);
	glVertexAttrib3f = proc;
	glVertexAttrib3f(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3fv(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB3FVPROC proc;
	proc = (PFNGLVERTEXATTRIB3FVPROC)_GetProcAddress("glVertexAttrib3fv");
	assert(proc != NULL);
	glVertexAttrib3fv = proc;
	glVertexAttrib3fv(index, v);
}

static void APIENTRY InitVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
	PFNGLVERTEXATTRIB3SPROC proc;
	proc = (PFNGLVERTEXATTRIB3SPROC)_GetProcAddress("glVertexAttrib3s");
	assert(proc != NULL);
	glVertexAttrib3s = proc;
	glVertexAttrib3s(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3sv(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB3SVPROC proc;
	proc = (PFNGLVERTEXATTRIB3SVPROC)_GetProcAddress("glVertexAttrib3sv");
	assert(proc != NULL);
	glVertexAttrib3sv = proc;
	glVertexAttrib3sv(index, v);
}

static void APIENTRY InitVertexAttrib4Nbv(GLuint index, const GLbyte *v)
{
	PFNGLVERTEXATTRIB4NBVPROC proc;
	proc = (PFNGLVERTEXATTRIB4NBVPROC)_GetProcAddress("glVertexAttrib4Nbv");
	assert(proc != NULL);
	glVertexAttrib4Nbv = proc;
	glVertexAttrib4Nbv(index, v);
}

static void APIENTRY InitVertexAttrib4Niv(GLuint index, const GLint *v)
{
	PFNGLVERTEXATTRIB4NIVPROC proc;
	proc = (PFNGLVERTEXATTRIB4NIVPROC)_GetProcAddress("glVertexAttrib4Niv");
	assert(proc != NULL);
	glVertexAttrib4Niv = proc;
	glVertexAttrib4Niv(index, v);
}

static void APIENTRY InitVertexAttrib4Nsv(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB4NSVPROC proc;
	proc = (PFNGLVERTEXATTRIB4NSVPROC)_GetProcAddress("glVertexAttrib4Nsv");
	assert(proc != NULL);
	glVertexAttrib4Nsv = proc;
	glVertexAttrib4Nsv(index, v);
}

static void APIENTRY InitVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	PFNGLVERTEXATTRIB4NUBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUBPROC)_GetProcAddress("glVertexAttrib4Nub");
	assert(proc != NULL);
	glVertexAttrib4Nub = proc;
	glVertexAttrib4Nub(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4Nubv(GLuint index, const GLubyte *v)
{
	PFNGLVERTEXATTRIB4NUBVPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUBVPROC)_GetProcAddress("glVertexAttrib4Nubv");
	assert(proc != NULL);
	glVertexAttrib4Nubv = proc;
	glVertexAttrib4Nubv(index, v);
}

static void APIENTRY InitVertexAttrib4Nuiv(GLuint index, const GLuint *v)
{
	PFNGLVERTEXATTRIB4NUIVPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUIVPROC)_GetProcAddress("glVertexAttrib4Nuiv");
	assert(proc != NULL);
	glVertexAttrib4Nuiv = proc;
	glVertexAttrib4Nuiv(index, v);
}

static void APIENTRY InitVertexAttrib4Nusv(GLuint index, const GLushort *v)
{
	PFNGLVERTEXATTRIB4NUSVPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUSVPROC)_GetProcAddress("glVertexAttrib4Nusv");
	assert(proc != NULL);
	glVertexAttrib4Nusv = proc;
	glVertexAttrib4Nusv(index, v);
}

static void APIENTRY InitVertexAttrib4bv(GLuint index, const GLbyte *v)
{
	PFNGLVERTEXATTRIB4BVPROC proc;
	proc = (PFNGLVERTEXATTRIB4BVPROC)_GetProcAddress("glVertexAttrib4bv");
	assert(proc != NULL);
	glVertexAttrib4bv = proc;
	glVertexAttrib4bv(index, v);
}

static void APIENTRY InitVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLVERTEXATTRIB4DPROC proc;
	proc = (PFNGLVERTEXATTRIB4DPROC)_GetProcAddress("glVertexAttrib4d");
	assert(proc != NULL);
	glVertexAttrib4d = proc;
	glVertexAttrib4d(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4dv(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB4DVPROC proc;
	proc = (PFNGLVERTEXATTRIB4DVPROC)_GetProcAddress("glVertexAttrib4dv");
	assert(proc != NULL);
	glVertexAttrib4dv = proc;
	glVertexAttrib4dv(index, v);
}

static void APIENTRY InitVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLVERTEXATTRIB4FPROC proc;
	proc = (PFNGLVERTEXATTRIB4FPROC)_GetProcAddress("glVertexAttrib4f");
	assert(proc != NULL);
	glVertexAttrib4f = proc;
	glVertexAttrib4f(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4fv(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB4FVPROC proc;
	proc = (PFNGLVERTEXATTRIB4FVPROC)_GetProcAddress("glVertexAttrib4fv");
	assert(proc != NULL);
	glVertexAttrib4fv = proc;
	glVertexAttrib4fv(index, v);
}

static void APIENTRY InitVertexAttrib4iv(GLuint index, const GLint *v)
{
	PFNGLVERTEXATTRIB4IVPROC proc;
	proc = (PFNGLVERTEXATTRIB4IVPROC)_GetProcAddress("glVertexAttrib4iv");
	assert(proc != NULL);
	glVertexAttrib4iv = proc;
	glVertexAttrib4iv(index, v);
}

static void APIENTRY InitVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	PFNGLVERTEXATTRIB4SPROC proc;
	proc = (PFNGLVERTEXATTRIB4SPROC)_GetProcAddress("glVertexAttrib4s");
	assert(proc != NULL);
	glVertexAttrib4s = proc;
	glVertexAttrib4s(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4sv(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB4SVPROC proc;
	proc = (PFNGLVERTEXATTRIB4SVPROC)_GetProcAddress("glVertexAttrib4sv");
	assert(proc != NULL);
	glVertexAttrib4sv = proc;
	glVertexAttrib4sv(index, v);
}

static void APIENTRY InitVertexAttrib4ubv(GLuint index, const GLubyte *v)
{
	PFNGLVERTEXATTRIB4UBVPROC proc;
	proc = (PFNGLVERTEXATTRIB4UBVPROC)_GetProcAddress("glVertexAttrib4ubv");
	assert(proc != NULL);
	glVertexAttrib4ubv = proc;
	glVertexAttrib4ubv(index, v);
}

static void APIENTRY InitVertexAttrib4uiv(GLuint index, const GLuint *v)
{
	PFNGLVERTEXATTRIB4UIVPROC proc;
	proc = (PFNGLVERTEXATTRIB4UIVPROC)_GetProcAddress("glVertexAttrib4uiv");
	assert(proc != NULL);
	glVertexAttrib4uiv = proc;
	glVertexAttrib4uiv(index, v);
}

static void APIENTRY InitVertexAttrib4usv(GLuint index, const GLushort *v)
{
	PFNGLVERTEXATTRIB4USVPROC proc;
	proc = (PFNGLVERTEXATTRIB4USVPROC)_GetProcAddress("glVertexAttrib4usv");
	assert(proc != NULL);
	glVertexAttrib4usv = proc;
	glVertexAttrib4usv(index, v);
}

static void APIENTRY InitVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
	PFNGLVERTEXATTRIBPOINTERPROC proc;
	proc = (PFNGLVERTEXATTRIBPOINTERPROC)_GetProcAddress("glVertexAttribPointer");
	assert(proc != NULL);
	glVertexAttribPointer = proc;
	glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}


/* GL_ARB_multitexture */
static void APIENTRY InitActiveTextureARB(GLenum texture)
{
	PFNGLACTIVETEXTUREARBPROC proc;
	proc = (PFNGLACTIVETEXTUREARBPROC)_GetProcAddress("glActiveTextureARB");
	assert(proc != NULL);
	glActiveTextureARB = proc;
	glActiveTextureARB(texture);
}

static void APIENTRY InitClientActiveTextureARB(GLenum texture)
{
	PFNGLCLIENTACTIVETEXTUREARBPROC proc;
	proc = (PFNGLCLIENTACTIVETEXTUREARBPROC)_GetProcAddress("glClientActiveTextureARB");
	assert(proc != NULL);
	glClientActiveTextureARB = proc;
	glClientActiveTextureARB(texture);
}

static void APIENTRY InitMultiTexCoord1dARB(GLenum target, GLdouble s)
{
	PFNGLMULTITEXCOORD1DARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1DARBPROC)_GetProcAddress("glMultiTexCoord1dARB");
	assert(proc != NULL);
	glMultiTexCoord1dARB = proc;
	glMultiTexCoord1dARB(target, s);
}

static void APIENTRY InitMultiTexCoord1dvARB(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD1DVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1DVARBPROC)_GetProcAddress("glMultiTexCoord1dvARB");
	assert(proc != NULL);
	glMultiTexCoord1dvARB = proc;
	glMultiTexCoord1dvARB(target, v);
}

static void APIENTRY InitMultiTexCoord1fARB(GLenum target, GLfloat s)
{
	PFNGLMULTITEXCOORD1FARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1FARBPROC)_GetProcAddress("glMultiTexCoord1fARB");
	assert(proc != NULL);
	glMultiTexCoord1fARB = proc;
	glMultiTexCoord1fARB(target, s);
}

static void APIENTRY InitMultiTexCoord1fvARB(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD1FVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1FVARBPROC)_GetProcAddress("glMultiTexCoord1fvARB");
	assert(proc != NULL);
	glMultiTexCoord1fvARB = proc;
	glMultiTexCoord1fvARB(target, v);
}

static void APIENTRY InitMultiTexCoord1iARB(GLenum target, GLint s)
{
	PFNGLMULTITEXCOORD1IARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1IARBPROC)_GetProcAddress("glMultiTexCoord1iARB");
	assert(proc != NULL);
	glMultiTexCoord1iARB = proc;
	glMultiTexCoord1iARB(target, s);
}

static void APIENTRY InitMultiTexCoord1ivARB(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD1IVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1IVARBPROC)_GetProcAddress("glMultiTexCoord1ivARB");
	assert(proc != NULL);
	glMultiTexCoord1ivARB = proc;
	glMultiTexCoord1ivARB(target, v);
}

static void APIENTRY InitMultiTexCoord1sARB(GLenum target, GLshort s)
{
	PFNGLMULTITEXCOORD1SARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1SARBPROC)_GetProcAddress("glMultiTexCoord1sARB");
	assert(proc != NULL);
	glMultiTexCoord1sARB = proc;
	glMultiTexCoord1sARB(target, s);
}

static void APIENTRY InitMultiTexCoord1svARB(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD1SVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD1SVARBPROC)_GetProcAddress("glMultiTexCoord1svARB");
	assert(proc != NULL);
	glMultiTexCoord1svARB = proc;
	glMultiTexCoord1svARB(target, v);
}

static void APIENTRY InitMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
	PFNGLMULTITEXCOORD2DARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2DARBPROC)_GetProcAddress("glMultiTexCoord2dARB");
	assert(proc != NULL);
	glMultiTexCoord2dARB = proc;
	glMultiTexCoord2dARB(target, s, t);
}

static void APIENTRY InitMultiTexCoord2dvARB(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD2DVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2DVARBPROC)_GetProcAddress("glMultiTexCoord2dvARB");
	assert(proc != NULL);
	glMultiTexCoord2dvARB = proc;
	glMultiTexCoord2dvARB(target, v);
}

static void APIENTRY InitMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
	PFNGLMULTITEXCOORD2FARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2FARBPROC)_GetProcAddress("glMultiTexCoord2fARB");
	assert(proc != NULL);
	glMultiTexCoord2fARB = proc;
	glMultiTexCoord2fARB(target, s, t);
}

static void APIENTRY InitMultiTexCoord2fvARB(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD2FVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2FVARBPROC)_GetProcAddress("glMultiTexCoord2fvARB");
	assert(proc != NULL);
	glMultiTexCoord2fvARB = proc;
	glMultiTexCoord2fvARB(target, v);
}

static void APIENTRY InitMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
	PFNGLMULTITEXCOORD2IARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2IARBPROC)_GetProcAddress("glMultiTexCoord2iARB");
	assert(proc != NULL);
	glMultiTexCoord2iARB = proc;
	glMultiTexCoord2iARB(target, s, t);
}

static void APIENTRY InitMultiTexCoord2ivARB(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD2IVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2IVARBPROC)_GetProcAddress("glMultiTexCoord2ivARB");
	assert(proc != NULL);
	glMultiTexCoord2ivARB = proc;
	glMultiTexCoord2ivARB(target, v);
}

static void APIENTRY InitMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
	PFNGLMULTITEXCOORD2SARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2SARBPROC)_GetProcAddress("glMultiTexCoord2sARB");
	assert(proc != NULL);
	glMultiTexCoord2sARB = proc;
	glMultiTexCoord2sARB(target, s, t);
}

static void APIENTRY InitMultiTexCoord2svARB(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD2SVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD2SVARBPROC)_GetProcAddress("glMultiTexCoord2svARB");
	assert(proc != NULL);
	glMultiTexCoord2svARB = proc;
	glMultiTexCoord2svARB(target, v);
}

static void APIENTRY InitMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	PFNGLMULTITEXCOORD3DARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3DARBPROC)_GetProcAddress("glMultiTexCoord3dARB");
	assert(proc != NULL);
	glMultiTexCoord3dARB = proc;
	glMultiTexCoord3dARB(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3dvARB(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD3DVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3DVARBPROC)_GetProcAddress("glMultiTexCoord3dvARB");
	assert(proc != NULL);
	glMultiTexCoord3dvARB = proc;
	glMultiTexCoord3dvARB(target, v);
}

static void APIENTRY InitMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	PFNGLMULTITEXCOORD3FARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3FARBPROC)_GetProcAddress("glMultiTexCoord3fARB");
	assert(proc != NULL);
	glMultiTexCoord3fARB = proc;
	glMultiTexCoord3fARB(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3fvARB(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD3FVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3FVARBPROC)_GetProcAddress("glMultiTexCoord3fvARB");
	assert(proc != NULL);
	glMultiTexCoord3fvARB = proc;
	glMultiTexCoord3fvARB(target, v);
}

static void APIENTRY InitMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
	PFNGLMULTITEXCOORD3IARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3IARBPROC)_GetProcAddress("glMultiTexCoord3iARB");
	assert(proc != NULL);
	glMultiTexCoord3iARB = proc;
	glMultiTexCoord3iARB(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3ivARB(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD3IVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3IVARBPROC)_GetProcAddress("glMultiTexCoord3ivARB");
	assert(proc != NULL);
	glMultiTexCoord3ivARB = proc;
	glMultiTexCoord3ivARB(target, v);
}

static void APIENTRY InitMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
	PFNGLMULTITEXCOORD3SARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3SARBPROC)_GetProcAddress("glMultiTexCoord3sARB");
	assert(proc != NULL);
	glMultiTexCoord3sARB = proc;
	glMultiTexCoord3sARB(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3svARB(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD3SVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD3SVARBPROC)_GetProcAddress("glMultiTexCoord3svARB");
	assert(proc != NULL);
	glMultiTexCoord3svARB = proc;
	glMultiTexCoord3svARB(target, v);
}

static void APIENTRY InitMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	PFNGLMULTITEXCOORD4DARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4DARBPROC)_GetProcAddress("glMultiTexCoord4dARB");
	assert(proc != NULL);
	glMultiTexCoord4dARB = proc;
	glMultiTexCoord4dARB(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4dvARB(GLenum target, const GLdouble *v)
{
	PFNGLMULTITEXCOORD4DVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4DVARBPROC)_GetProcAddress("glMultiTexCoord4dvARB");
	assert(proc != NULL);
	glMultiTexCoord4dvARB = proc;
	glMultiTexCoord4dvARB(target, v);
}

static void APIENTRY InitMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	PFNGLMULTITEXCOORD4FARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4FARBPROC)_GetProcAddress("glMultiTexCoord4fARB");
	assert(proc != NULL);
	glMultiTexCoord4fARB = proc;
	glMultiTexCoord4fARB(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4fvARB(GLenum target, const GLfloat *v)
{
	PFNGLMULTITEXCOORD4FVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4FVARBPROC)_GetProcAddress("glMultiTexCoord4fvARB");
	assert(proc != NULL);
	glMultiTexCoord4fvARB = proc;
	glMultiTexCoord4fvARB(target, v);
}

static void APIENTRY InitMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	PFNGLMULTITEXCOORD4IARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4IARBPROC)_GetProcAddress("glMultiTexCoord4iARB");
	assert(proc != NULL);
	glMultiTexCoord4iARB = proc;
	glMultiTexCoord4iARB(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4ivARB(GLenum target, const GLint *v)
{
	PFNGLMULTITEXCOORD4IVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4IVARBPROC)_GetProcAddress("glMultiTexCoord4ivARB");
	assert(proc != NULL);
	glMultiTexCoord4ivARB = proc;
	glMultiTexCoord4ivARB(target, v);
}

static void APIENTRY InitMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	PFNGLMULTITEXCOORD4SARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4SARBPROC)_GetProcAddress("glMultiTexCoord4sARB");
	assert(proc != NULL);
	glMultiTexCoord4sARB = proc;
	glMultiTexCoord4sARB(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4svARB(GLenum target, const GLshort *v)
{
	PFNGLMULTITEXCOORD4SVARBPROC proc;
	proc = (PFNGLMULTITEXCOORD4SVARBPROC)_GetProcAddress("glMultiTexCoord4svARB");
	assert(proc != NULL);
	glMultiTexCoord4svARB = proc;
	glMultiTexCoord4svARB(target, v);
}


/* GL_ARB_transpose_matrix */
static void APIENTRY InitLoadTransposeMatrixfARB(const GLfloat *m)
{
	PFNGLLOADTRANSPOSEMATRIXFARBPROC proc;
	proc = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)_GetProcAddress("glLoadTransposeMatrixfARB");
	assert(proc != NULL);
	glLoadTransposeMatrixfARB = proc;
	glLoadTransposeMatrixfARB(m);
}

static void APIENTRY InitLoadTransposeMatrixdARB(const GLdouble *m)
{
	PFNGLLOADTRANSPOSEMATRIXDARBPROC proc;
	proc = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)_GetProcAddress("glLoadTransposeMatrixdARB");
	assert(proc != NULL);
	glLoadTransposeMatrixdARB = proc;
	glLoadTransposeMatrixdARB(m);
}

static void APIENTRY InitMultTransposeMatrixfARB(const GLfloat *m)
{
	PFNGLMULTTRANSPOSEMATRIXFARBPROC proc;
	proc = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)_GetProcAddress("glMultTransposeMatrixfARB");
	assert(proc != NULL);
	glMultTransposeMatrixfARB = proc;
	glMultTransposeMatrixfARB(m);
}

static void APIENTRY InitMultTransposeMatrixdARB(const GLdouble *m)
{
	PFNGLMULTTRANSPOSEMATRIXDARBPROC proc;
	proc = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)_GetProcAddress("glMultTransposeMatrixdARB");
	assert(proc != NULL);
	glMultTransposeMatrixdARB = proc;
	glMultTransposeMatrixdARB(m);
}


/* GL_ARB_multisample */
static void APIENTRY InitSampleCoverageARB(GLclampf value, GLboolean invert)
{
	PFNGLSAMPLECOVERAGEARBPROC proc;
	proc = (PFNGLSAMPLECOVERAGEARBPROC)_GetProcAddress("glSampleCoverageARB");
	assert(proc != NULL);
	glSampleCoverageARB = proc;
	glSampleCoverageARB(value, invert);
}


/* GL_ARB_texture_env_add */

/* GL_ARB_texture_cube_map */

/* GL_ARB_texture_compression */
static void APIENTRY InitCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXIMAGE3DARBPROC proc;
	proc = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)_GetProcAddress("glCompressedTexImage3DARB");
	assert(proc != NULL);
	glCompressedTexImage3DARB = proc;
	glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

static void APIENTRY InitCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXIMAGE2DARBPROC proc;
	proc = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)_GetProcAddress("glCompressedTexImage2DARB");
	assert(proc != NULL);
	glCompressedTexImage2DARB = proc;
	glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

static void APIENTRY InitCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXIMAGE1DARBPROC proc;
	proc = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)_GetProcAddress("glCompressedTexImage1DARB");
	assert(proc != NULL);
	glCompressedTexImage1DARB = proc;
	glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

static void APIENTRY InitCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC proc;
	proc = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)_GetProcAddress("glCompressedTexSubImage3DARB");
	assert(proc != NULL);
	glCompressedTexSubImage3DARB = proc;
	glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

static void APIENTRY InitCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC proc;
	proc = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)_GetProcAddress("glCompressedTexSubImage2DARB");
	assert(proc != NULL);
	glCompressedTexSubImage2DARB = proc;
	glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

static void APIENTRY InitCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC proc;
	proc = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)_GetProcAddress("glCompressedTexSubImage1DARB");
	assert(proc != NULL);
	glCompressedTexSubImage1DARB = proc;
	glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

static void APIENTRY InitGetCompressedTexImageARB(GLenum target, GLint level, GLvoid *img)
{
	PFNGLGETCOMPRESSEDTEXIMAGEARBPROC proc;
	proc = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)_GetProcAddress("glGetCompressedTexImageARB");
	assert(proc != NULL);
	glGetCompressedTexImageARB = proc;
	glGetCompressedTexImageARB(target, level, img);
}


/* GL_ARB_texture_border_clamp */

/* GL_ARB_point_parameters */
static void APIENTRY InitPointParameterfARB(GLenum pname, GLfloat param)
{
	PFNGLPOINTPARAMETERFARBPROC proc;
	proc = (PFNGLPOINTPARAMETERFARBPROC)_GetProcAddress("glPointParameterfARB");
	assert(proc != NULL);
	glPointParameterfARB = proc;
	glPointParameterfARB(pname, param);
}

static void APIENTRY InitPointParameterfvARB(GLenum pname, const GLfloat *params)
{
	PFNGLPOINTPARAMETERFVARBPROC proc;
	proc = (PFNGLPOINTPARAMETERFVARBPROC)_GetProcAddress("glPointParameterfvARB");
	assert(proc != NULL);
	glPointParameterfvARB = proc;
	glPointParameterfvARB(pname, params);
}


/* GL_ARB_vertex_blend */
static void APIENTRY InitWeightbvARB(GLint size, const GLbyte *weights)
{
	PFNGLWEIGHTBVARBPROC proc;
	proc = (PFNGLWEIGHTBVARBPROC)_GetProcAddress("glWeightbvARB");
	assert(proc != NULL);
	glWeightbvARB = proc;
	glWeightbvARB(size, weights);
}

static void APIENTRY InitWeightsvARB(GLint size, const GLshort *weights)
{
	PFNGLWEIGHTSVARBPROC proc;
	proc = (PFNGLWEIGHTSVARBPROC)_GetProcAddress("glWeightsvARB");
	assert(proc != NULL);
	glWeightsvARB = proc;
	glWeightsvARB(size, weights);
}

static void APIENTRY InitWeightivARB(GLint size, const GLint *weights)
{
	PFNGLWEIGHTIVARBPROC proc;
	proc = (PFNGLWEIGHTIVARBPROC)_GetProcAddress("glWeightivARB");
	assert(proc != NULL);
	glWeightivARB = proc;
	glWeightivARB(size, weights);
}

static void APIENTRY InitWeightfvARB(GLint size, const GLfloat *weights)
{
	PFNGLWEIGHTFVARBPROC proc;
	proc = (PFNGLWEIGHTFVARBPROC)_GetProcAddress("glWeightfvARB");
	assert(proc != NULL);
	glWeightfvARB = proc;
	glWeightfvARB(size, weights);
}

static void APIENTRY InitWeightdvARB(GLint size, const GLdouble *weights)
{
	PFNGLWEIGHTDVARBPROC proc;
	proc = (PFNGLWEIGHTDVARBPROC)_GetProcAddress("glWeightdvARB");
	assert(proc != NULL);
	glWeightdvARB = proc;
	glWeightdvARB(size, weights);
}

static void APIENTRY InitWeightubvARB(GLint size, const GLubyte *weights)
{
	PFNGLWEIGHTUBVARBPROC proc;
	proc = (PFNGLWEIGHTUBVARBPROC)_GetProcAddress("glWeightubvARB");
	assert(proc != NULL);
	glWeightubvARB = proc;
	glWeightubvARB(size, weights);
}

static void APIENTRY InitWeightusvARB(GLint size, const GLushort *weights)
{
	PFNGLWEIGHTUSVARBPROC proc;
	proc = (PFNGLWEIGHTUSVARBPROC)_GetProcAddress("glWeightusvARB");
	assert(proc != NULL);
	glWeightusvARB = proc;
	glWeightusvARB(size, weights);
}

static void APIENTRY InitWeightuivARB(GLint size, const GLuint *weights)
{
	PFNGLWEIGHTUIVARBPROC proc;
	proc = (PFNGLWEIGHTUIVARBPROC)_GetProcAddress("glWeightuivARB");
	assert(proc != NULL);
	glWeightuivARB = proc;
	glWeightuivARB(size, weights);
}

static void APIENTRY InitWeightPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLWEIGHTPOINTERARBPROC proc;
	proc = (PFNGLWEIGHTPOINTERARBPROC)_GetProcAddress("glWeightPointerARB");
	assert(proc != NULL);
	glWeightPointerARB = proc;
	glWeightPointerARB(size, type, stride, pointer);
}

static void APIENTRY InitVertexBlendARB(GLint count)
{
	PFNGLVERTEXBLENDARBPROC proc;
	proc = (PFNGLVERTEXBLENDARBPROC)_GetProcAddress("glVertexBlendARB");
	assert(proc != NULL);
	glVertexBlendARB = proc;
	glVertexBlendARB(count);
}


/* GL_ARB_matrix_palette */
static void APIENTRY InitCurrentPaletteMatrixARB(GLint index)
{
	PFNGLCURRENTPALETTEMATRIXARBPROC proc;
	proc = (PFNGLCURRENTPALETTEMATRIXARBPROC)_GetProcAddress("glCurrentPaletteMatrixARB");
	assert(proc != NULL);
	glCurrentPaletteMatrixARB = proc;
	glCurrentPaletteMatrixARB(index);
}

static void APIENTRY InitMatrixIndexubvARB(GLint size, const GLubyte *indices)
{
	PFNGLMATRIXINDEXUBVARBPROC proc;
	proc = (PFNGLMATRIXINDEXUBVARBPROC)_GetProcAddress("glMatrixIndexubvARB");
	assert(proc != NULL);
	glMatrixIndexubvARB = proc;
	glMatrixIndexubvARB(size, indices);
}

static void APIENTRY InitMatrixIndexusvARB(GLint size, const GLushort *indices)
{
	PFNGLMATRIXINDEXUSVARBPROC proc;
	proc = (PFNGLMATRIXINDEXUSVARBPROC)_GetProcAddress("glMatrixIndexusvARB");
	assert(proc != NULL);
	glMatrixIndexusvARB = proc;
	glMatrixIndexusvARB(size, indices);
}

static void APIENTRY InitMatrixIndexuivARB(GLint size, const GLuint *indices)
{
	PFNGLMATRIXINDEXUIVARBPROC proc;
	proc = (PFNGLMATRIXINDEXUIVARBPROC)_GetProcAddress("glMatrixIndexuivARB");
	assert(proc != NULL);
	glMatrixIndexuivARB = proc;
	glMatrixIndexuivARB(size, indices);
}

static void APIENTRY InitMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLMATRIXINDEXPOINTERARBPROC proc;
	proc = (PFNGLMATRIXINDEXPOINTERARBPROC)_GetProcAddress("glMatrixIndexPointerARB");
	assert(proc != NULL);
	glMatrixIndexPointerARB = proc;
	glMatrixIndexPointerARB(size, type, stride, pointer);
}


/* GL_ARB_texture_env_combine */

/* GL_ARB_texture_env_crossbar */

/* GL_ARB_texture_env_dot3 */

/* GL_ARB_texture_mirrored_repeat */

/* GL_ARB_depth_texture */

/* GL_ARB_shadow */

/* GL_ARB_shadow_ambient */

/* GL_ARB_window_pos */
static void APIENTRY InitWindowPos2dARB(GLdouble x, GLdouble y)
{
	PFNGLWINDOWPOS2DARBPROC proc;
	proc = (PFNGLWINDOWPOS2DARBPROC)_GetProcAddress("glWindowPos2dARB");
	assert(proc != NULL);
	glWindowPos2dARB = proc;
	glWindowPos2dARB(x, y);
}

static void APIENTRY InitWindowPos2dvARB(const GLdouble *v)
{
	PFNGLWINDOWPOS2DVARBPROC proc;
	proc = (PFNGLWINDOWPOS2DVARBPROC)_GetProcAddress("glWindowPos2dvARB");
	assert(proc != NULL);
	glWindowPos2dvARB = proc;
	glWindowPos2dvARB(v);
}

static void APIENTRY InitWindowPos2fARB(GLfloat x, GLfloat y)
{
	PFNGLWINDOWPOS2FARBPROC proc;
	proc = (PFNGLWINDOWPOS2FARBPROC)_GetProcAddress("glWindowPos2fARB");
	assert(proc != NULL);
	glWindowPos2fARB = proc;
	glWindowPos2fARB(x, y);
}

static void APIENTRY InitWindowPos2fvARB(const GLfloat *v)
{
	PFNGLWINDOWPOS2FVARBPROC proc;
	proc = (PFNGLWINDOWPOS2FVARBPROC)_GetProcAddress("glWindowPos2fvARB");
	assert(proc != NULL);
	glWindowPos2fvARB = proc;
	glWindowPos2fvARB(v);
}

static void APIENTRY InitWindowPos2iARB(GLint x, GLint y)
{
	PFNGLWINDOWPOS2IARBPROC proc;
	proc = (PFNGLWINDOWPOS2IARBPROC)_GetProcAddress("glWindowPos2iARB");
	assert(proc != NULL);
	glWindowPos2iARB = proc;
	glWindowPos2iARB(x, y);
}

static void APIENTRY InitWindowPos2ivARB(const GLint *v)
{
	PFNGLWINDOWPOS2IVARBPROC proc;
	proc = (PFNGLWINDOWPOS2IVARBPROC)_GetProcAddress("glWindowPos2ivARB");
	assert(proc != NULL);
	glWindowPos2ivARB = proc;
	glWindowPos2ivARB(v);
}

static void APIENTRY InitWindowPos2sARB(GLshort x, GLshort y)
{
	PFNGLWINDOWPOS2SARBPROC proc;
	proc = (PFNGLWINDOWPOS2SARBPROC)_GetProcAddress("glWindowPos2sARB");
	assert(proc != NULL);
	glWindowPos2sARB = proc;
	glWindowPos2sARB(x, y);
}

static void APIENTRY InitWindowPos2svARB(const GLshort *v)
{
	PFNGLWINDOWPOS2SVARBPROC proc;
	proc = (PFNGLWINDOWPOS2SVARBPROC)_GetProcAddress("glWindowPos2svARB");
	assert(proc != NULL);
	glWindowPos2svARB = proc;
	glWindowPos2svARB(v);
}

static void APIENTRY InitWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLWINDOWPOS3DARBPROC proc;
	proc = (PFNGLWINDOWPOS3DARBPROC)_GetProcAddress("glWindowPos3dARB");
	assert(proc != NULL);
	glWindowPos3dARB = proc;
	glWindowPos3dARB(x, y, z);
}

static void APIENTRY InitWindowPos3dvARB(const GLdouble *v)
{
	PFNGLWINDOWPOS3DVARBPROC proc;
	proc = (PFNGLWINDOWPOS3DVARBPROC)_GetProcAddress("glWindowPos3dvARB");
	assert(proc != NULL);
	glWindowPos3dvARB = proc;
	glWindowPos3dvARB(v);
}

static void APIENTRY InitWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLWINDOWPOS3FARBPROC proc;
	proc = (PFNGLWINDOWPOS3FARBPROC)_GetProcAddress("glWindowPos3fARB");
	assert(proc != NULL);
	glWindowPos3fARB = proc;
	glWindowPos3fARB(x, y, z);
}

static void APIENTRY InitWindowPos3fvARB(const GLfloat *v)
{
	PFNGLWINDOWPOS3FVARBPROC proc;
	proc = (PFNGLWINDOWPOS3FVARBPROC)_GetProcAddress("glWindowPos3fvARB");
	assert(proc != NULL);
	glWindowPos3fvARB = proc;
	glWindowPos3fvARB(v);
}

static void APIENTRY InitWindowPos3iARB(GLint x, GLint y, GLint z)
{
	PFNGLWINDOWPOS3IARBPROC proc;
	proc = (PFNGLWINDOWPOS3IARBPROC)_GetProcAddress("glWindowPos3iARB");
	assert(proc != NULL);
	glWindowPos3iARB = proc;
	glWindowPos3iARB(x, y, z);
}

static void APIENTRY InitWindowPos3ivARB(const GLint *v)
{
	PFNGLWINDOWPOS3IVARBPROC proc;
	proc = (PFNGLWINDOWPOS3IVARBPROC)_GetProcAddress("glWindowPos3ivARB");
	assert(proc != NULL);
	glWindowPos3ivARB = proc;
	glWindowPos3ivARB(v);
}

static void APIENTRY InitWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
	PFNGLWINDOWPOS3SARBPROC proc;
	proc = (PFNGLWINDOWPOS3SARBPROC)_GetProcAddress("glWindowPos3sARB");
	assert(proc != NULL);
	glWindowPos3sARB = proc;
	glWindowPos3sARB(x, y, z);
}

static void APIENTRY InitWindowPos3svARB(const GLshort *v)
{
	PFNGLWINDOWPOS3SVARBPROC proc;
	proc = (PFNGLWINDOWPOS3SVARBPROC)_GetProcAddress("glWindowPos3svARB");
	assert(proc != NULL);
	glWindowPos3svARB = proc;
	glWindowPos3svARB(v);
}


/* GL_ARB_vertex_program */
static void APIENTRY InitVertexAttrib1dARB(GLuint index, GLdouble x)
{
	PFNGLVERTEXATTRIB1DARBPROC proc;
	proc = (PFNGLVERTEXATTRIB1DARBPROC)_GetProcAddress("glVertexAttrib1dARB");
	assert(proc != NULL);
	glVertexAttrib1dARB = proc;
	glVertexAttrib1dARB(index, x);
}

static void APIENTRY InitVertexAttrib1dvARB(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB1DVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB1DVARBPROC)_GetProcAddress("glVertexAttrib1dvARB");
	assert(proc != NULL);
	glVertexAttrib1dvARB = proc;
	glVertexAttrib1dvARB(index, v);
}

static void APIENTRY InitVertexAttrib1fARB(GLuint index, GLfloat x)
{
	PFNGLVERTEXATTRIB1FARBPROC proc;
	proc = (PFNGLVERTEXATTRIB1FARBPROC)_GetProcAddress("glVertexAttrib1fARB");
	assert(proc != NULL);
	glVertexAttrib1fARB = proc;
	glVertexAttrib1fARB(index, x);
}

static void APIENTRY InitVertexAttrib1fvARB(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB1FVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB1FVARBPROC)_GetProcAddress("glVertexAttrib1fvARB");
	assert(proc != NULL);
	glVertexAttrib1fvARB = proc;
	glVertexAttrib1fvARB(index, v);
}

static void APIENTRY InitVertexAttrib1sARB(GLuint index, GLshort x)
{
	PFNGLVERTEXATTRIB1SARBPROC proc;
	proc = (PFNGLVERTEXATTRIB1SARBPROC)_GetProcAddress("glVertexAttrib1sARB");
	assert(proc != NULL);
	glVertexAttrib1sARB = proc;
	glVertexAttrib1sARB(index, x);
}

static void APIENTRY InitVertexAttrib1svARB(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB1SVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB1SVARBPROC)_GetProcAddress("glVertexAttrib1svARB");
	assert(proc != NULL);
	glVertexAttrib1svARB = proc;
	glVertexAttrib1svARB(index, v);
}

static void APIENTRY InitVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
	PFNGLVERTEXATTRIB2DARBPROC proc;
	proc = (PFNGLVERTEXATTRIB2DARBPROC)_GetProcAddress("glVertexAttrib2dARB");
	assert(proc != NULL);
	glVertexAttrib2dARB = proc;
	glVertexAttrib2dARB(index, x, y);
}

static void APIENTRY InitVertexAttrib2dvARB(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB2DVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB2DVARBPROC)_GetProcAddress("glVertexAttrib2dvARB");
	assert(proc != NULL);
	glVertexAttrib2dvARB = proc;
	glVertexAttrib2dvARB(index, v);
}

static void APIENTRY InitVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
	PFNGLVERTEXATTRIB2FARBPROC proc;
	proc = (PFNGLVERTEXATTRIB2FARBPROC)_GetProcAddress("glVertexAttrib2fARB");
	assert(proc != NULL);
	glVertexAttrib2fARB = proc;
	glVertexAttrib2fARB(index, x, y);
}

static void APIENTRY InitVertexAttrib2fvARB(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB2FVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB2FVARBPROC)_GetProcAddress("glVertexAttrib2fvARB");
	assert(proc != NULL);
	glVertexAttrib2fvARB = proc;
	glVertexAttrib2fvARB(index, v);
}

static void APIENTRY InitVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
	PFNGLVERTEXATTRIB2SARBPROC proc;
	proc = (PFNGLVERTEXATTRIB2SARBPROC)_GetProcAddress("glVertexAttrib2sARB");
	assert(proc != NULL);
	glVertexAttrib2sARB = proc;
	glVertexAttrib2sARB(index, x, y);
}

static void APIENTRY InitVertexAttrib2svARB(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB2SVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB2SVARBPROC)_GetProcAddress("glVertexAttrib2svARB");
	assert(proc != NULL);
	glVertexAttrib2svARB = proc;
	glVertexAttrib2svARB(index, v);
}

static void APIENTRY InitVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLVERTEXATTRIB3DARBPROC proc;
	proc = (PFNGLVERTEXATTRIB3DARBPROC)_GetProcAddress("glVertexAttrib3dARB");
	assert(proc != NULL);
	glVertexAttrib3dARB = proc;
	glVertexAttrib3dARB(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3dvARB(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB3DVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB3DVARBPROC)_GetProcAddress("glVertexAttrib3dvARB");
	assert(proc != NULL);
	glVertexAttrib3dvARB = proc;
	glVertexAttrib3dvARB(index, v);
}

static void APIENTRY InitVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLVERTEXATTRIB3FARBPROC proc;
	proc = (PFNGLVERTEXATTRIB3FARBPROC)_GetProcAddress("glVertexAttrib3fARB");
	assert(proc != NULL);
	glVertexAttrib3fARB = proc;
	glVertexAttrib3fARB(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3fvARB(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB3FVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB3FVARBPROC)_GetProcAddress("glVertexAttrib3fvARB");
	assert(proc != NULL);
	glVertexAttrib3fvARB = proc;
	glVertexAttrib3fvARB(index, v);
}

static void APIENTRY InitVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
	PFNGLVERTEXATTRIB3SARBPROC proc;
	proc = (PFNGLVERTEXATTRIB3SARBPROC)_GetProcAddress("glVertexAttrib3sARB");
	assert(proc != NULL);
	glVertexAttrib3sARB = proc;
	glVertexAttrib3sARB(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3svARB(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB3SVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB3SVARBPROC)_GetProcAddress("glVertexAttrib3svARB");
	assert(proc != NULL);
	glVertexAttrib3svARB = proc;
	glVertexAttrib3svARB(index, v);
}

static void APIENTRY InitVertexAttrib4NbvARB(GLuint index, const GLbyte *v)
{
	PFNGLVERTEXATTRIB4NBVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NBVARBPROC)_GetProcAddress("glVertexAttrib4NbvARB");
	assert(proc != NULL);
	glVertexAttrib4NbvARB = proc;
	glVertexAttrib4NbvARB(index, v);
}

static void APIENTRY InitVertexAttrib4NivARB(GLuint index, const GLint *v)
{
	PFNGLVERTEXATTRIB4NIVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NIVARBPROC)_GetProcAddress("glVertexAttrib4NivARB");
	assert(proc != NULL);
	glVertexAttrib4NivARB = proc;
	glVertexAttrib4NivARB(index, v);
}

static void APIENTRY InitVertexAttrib4NsvARB(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB4NSVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NSVARBPROC)_GetProcAddress("glVertexAttrib4NsvARB");
	assert(proc != NULL);
	glVertexAttrib4NsvARB = proc;
	glVertexAttrib4NsvARB(index, v);
}

static void APIENTRY InitVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	PFNGLVERTEXATTRIB4NUBARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUBARBPROC)_GetProcAddress("glVertexAttrib4NubARB");
	assert(proc != NULL);
	glVertexAttrib4NubARB = proc;
	glVertexAttrib4NubARB(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4NubvARB(GLuint index, const GLubyte *v)
{
	PFNGLVERTEXATTRIB4NUBVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUBVARBPROC)_GetProcAddress("glVertexAttrib4NubvARB");
	assert(proc != NULL);
	glVertexAttrib4NubvARB = proc;
	glVertexAttrib4NubvARB(index, v);
}

static void APIENTRY InitVertexAttrib4NuivARB(GLuint index, const GLuint *v)
{
	PFNGLVERTEXATTRIB4NUIVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUIVARBPROC)_GetProcAddress("glVertexAttrib4NuivARB");
	assert(proc != NULL);
	glVertexAttrib4NuivARB = proc;
	glVertexAttrib4NuivARB(index, v);
}

static void APIENTRY InitVertexAttrib4NusvARB(GLuint index, const GLushort *v)
{
	PFNGLVERTEXATTRIB4NUSVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4NUSVARBPROC)_GetProcAddress("glVertexAttrib4NusvARB");
	assert(proc != NULL);
	glVertexAttrib4NusvARB = proc;
	glVertexAttrib4NusvARB(index, v);
}

static void APIENTRY InitVertexAttrib4bvARB(GLuint index, const GLbyte *v)
{
	PFNGLVERTEXATTRIB4BVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4BVARBPROC)_GetProcAddress("glVertexAttrib4bvARB");
	assert(proc != NULL);
	glVertexAttrib4bvARB = proc;
	glVertexAttrib4bvARB(index, v);
}

static void APIENTRY InitVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLVERTEXATTRIB4DARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4DARBPROC)_GetProcAddress("glVertexAttrib4dARB");
	assert(proc != NULL);
	glVertexAttrib4dARB = proc;
	glVertexAttrib4dARB(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4dvARB(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB4DVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4DVARBPROC)_GetProcAddress("glVertexAttrib4dvARB");
	assert(proc != NULL);
	glVertexAttrib4dvARB = proc;
	glVertexAttrib4dvARB(index, v);
}

static void APIENTRY InitVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLVERTEXATTRIB4FARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4FARBPROC)_GetProcAddress("glVertexAttrib4fARB");
	assert(proc != NULL);
	glVertexAttrib4fARB = proc;
	glVertexAttrib4fARB(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4fvARB(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB4FVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4FVARBPROC)_GetProcAddress("glVertexAttrib4fvARB");
	assert(proc != NULL);
	glVertexAttrib4fvARB = proc;
	glVertexAttrib4fvARB(index, v);
}

static void APIENTRY InitVertexAttrib4ivARB(GLuint index, const GLint *v)
{
	PFNGLVERTEXATTRIB4IVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4IVARBPROC)_GetProcAddress("glVertexAttrib4ivARB");
	assert(proc != NULL);
	glVertexAttrib4ivARB = proc;
	glVertexAttrib4ivARB(index, v);
}

static void APIENTRY InitVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	PFNGLVERTEXATTRIB4SARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4SARBPROC)_GetProcAddress("glVertexAttrib4sARB");
	assert(proc != NULL);
	glVertexAttrib4sARB = proc;
	glVertexAttrib4sARB(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4svARB(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB4SVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4SVARBPROC)_GetProcAddress("glVertexAttrib4svARB");
	assert(proc != NULL);
	glVertexAttrib4svARB = proc;
	glVertexAttrib4svARB(index, v);
}

static void APIENTRY InitVertexAttrib4ubvARB(GLuint index, const GLubyte *v)
{
	PFNGLVERTEXATTRIB4UBVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4UBVARBPROC)_GetProcAddress("glVertexAttrib4ubvARB");
	assert(proc != NULL);
	glVertexAttrib4ubvARB = proc;
	glVertexAttrib4ubvARB(index, v);
}

static void APIENTRY InitVertexAttrib4uivARB(GLuint index, const GLuint *v)
{
	PFNGLVERTEXATTRIB4UIVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4UIVARBPROC)_GetProcAddress("glVertexAttrib4uivARB");
	assert(proc != NULL);
	glVertexAttrib4uivARB = proc;
	glVertexAttrib4uivARB(index, v);
}

static void APIENTRY InitVertexAttrib4usvARB(GLuint index, const GLushort *v)
{
	PFNGLVERTEXATTRIB4USVARBPROC proc;
	proc = (PFNGLVERTEXATTRIB4USVARBPROC)_GetProcAddress("glVertexAttrib4usvARB");
	assert(proc != NULL);
	glVertexAttrib4usvARB = proc;
	glVertexAttrib4usvARB(index, v);
}

static void APIENTRY InitVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
	PFNGLVERTEXATTRIBPOINTERARBPROC proc;
	proc = (PFNGLVERTEXATTRIBPOINTERARBPROC)_GetProcAddress("glVertexAttribPointerARB");
	assert(proc != NULL);
	glVertexAttribPointerARB = proc;
	glVertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

static void APIENTRY InitEnableVertexAttribArrayARB(GLuint index)
{
	PFNGLENABLEVERTEXATTRIBARRAYARBPROC proc;
	proc = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)_GetProcAddress("glEnableVertexAttribArrayARB");
	assert(proc != NULL);
	glEnableVertexAttribArrayARB = proc;
	glEnableVertexAttribArrayARB(index);
}

static void APIENTRY InitDisableVertexAttribArrayARB(GLuint index)
{
	PFNGLDISABLEVERTEXATTRIBARRAYARBPROC proc;
	proc = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)_GetProcAddress("glDisableVertexAttribArrayARB");
	assert(proc != NULL);
	glDisableVertexAttribArrayARB = proc;
	glDisableVertexAttribArrayARB(index);
}

static void APIENTRY InitProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string)
{
	PFNGLPROGRAMSTRINGARBPROC proc;
	proc = (PFNGLPROGRAMSTRINGARBPROC)_GetProcAddress("glProgramStringARB");
	assert(proc != NULL);
	glProgramStringARB = proc;
	glProgramStringARB(target, format, len, string);
}

static void APIENTRY InitBindProgramARB(GLenum target, GLuint program)
{
	PFNGLBINDPROGRAMARBPROC proc;
	proc = (PFNGLBINDPROGRAMARBPROC)_GetProcAddress("glBindProgramARB");
	assert(proc != NULL);
	glBindProgramARB = proc;
	glBindProgramARB(target, program);
}

static void APIENTRY InitDeleteProgramsARB(GLsizei n, const GLuint *programs)
{
	PFNGLDELETEPROGRAMSARBPROC proc;
	proc = (PFNGLDELETEPROGRAMSARBPROC)_GetProcAddress("glDeleteProgramsARB");
	assert(proc != NULL);
	glDeleteProgramsARB = proc;
	glDeleteProgramsARB(n, programs);
}

static void APIENTRY InitGenProgramsARB(GLsizei n, GLuint *programs)
{
	PFNGLGENPROGRAMSARBPROC proc;
	proc = (PFNGLGENPROGRAMSARBPROC)_GetProcAddress("glGenProgramsARB");
	assert(proc != NULL);
	glGenProgramsARB = proc;
	glGenProgramsARB(n, programs);
}

static void APIENTRY InitProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLPROGRAMENVPARAMETER4DARBPROC proc;
	proc = (PFNGLPROGRAMENVPARAMETER4DARBPROC)_GetProcAddress("glProgramEnvParameter4dARB");
	assert(proc != NULL);
	glProgramEnvParameter4dARB = proc;
	glProgramEnvParameter4dARB(target, index, x, y, z, w);
}

static void APIENTRY InitProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params)
{
	PFNGLPROGRAMENVPARAMETER4DVARBPROC proc;
	proc = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)_GetProcAddress("glProgramEnvParameter4dvARB");
	assert(proc != NULL);
	glProgramEnvParameter4dvARB = proc;
	glProgramEnvParameter4dvARB(target, index, params);
}

static void APIENTRY InitProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLPROGRAMENVPARAMETER4FARBPROC proc;
	proc = (PFNGLPROGRAMENVPARAMETER4FARBPROC)_GetProcAddress("glProgramEnvParameter4fARB");
	assert(proc != NULL);
	glProgramEnvParameter4fARB = proc;
	glProgramEnvParameter4fARB(target, index, x, y, z, w);
}

static void APIENTRY InitProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
{
	PFNGLPROGRAMENVPARAMETER4FVARBPROC proc;
	proc = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)_GetProcAddress("glProgramEnvParameter4fvARB");
	assert(proc != NULL);
	glProgramEnvParameter4fvARB = proc;
	glProgramEnvParameter4fvARB(target, index, params);
}

static void APIENTRY InitProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLPROGRAMLOCALPARAMETER4DARBPROC proc;
	proc = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)_GetProcAddress("glProgramLocalParameter4dARB");
	assert(proc != NULL);
	glProgramLocalParameter4dARB = proc;
	glProgramLocalParameter4dARB(target, index, x, y, z, w);
}

static void APIENTRY InitProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params)
{
	PFNGLPROGRAMLOCALPARAMETER4DVARBPROC proc;
	proc = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)_GetProcAddress("glProgramLocalParameter4dvARB");
	assert(proc != NULL);
	glProgramLocalParameter4dvARB = proc;
	glProgramLocalParameter4dvARB(target, index, params);
}

static void APIENTRY InitProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLPROGRAMLOCALPARAMETER4FARBPROC proc;
	proc = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)_GetProcAddress("glProgramLocalParameter4fARB");
	assert(proc != NULL);
	glProgramLocalParameter4fARB = proc;
	glProgramLocalParameter4fARB(target, index, x, y, z, w);
}

static void APIENTRY InitProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
{
	PFNGLPROGRAMLOCALPARAMETER4FVARBPROC proc;
	proc = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)_GetProcAddress("glProgramLocalParameter4fvARB");
	assert(proc != NULL);
	glProgramLocalParameter4fvARB = proc;
	glProgramLocalParameter4fvARB(target, index, params);
}

static void APIENTRY InitGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params)
{
	PFNGLGETPROGRAMENVPARAMETERDVARBPROC proc;
	proc = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)_GetProcAddress("glGetProgramEnvParameterdvARB");
	assert(proc != NULL);
	glGetProgramEnvParameterdvARB = proc;
	glGetProgramEnvParameterdvARB(target, index, params);
}

static void APIENTRY InitGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params)
{
	PFNGLGETPROGRAMENVPARAMETERFVARBPROC proc;
	proc = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)_GetProcAddress("glGetProgramEnvParameterfvARB");
	assert(proc != NULL);
	glGetProgramEnvParameterfvARB = proc;
	glGetProgramEnvParameterfvARB(target, index, params);
}

static void APIENTRY InitGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params)
{
	PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC proc;
	proc = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)_GetProcAddress("glGetProgramLocalParameterdvARB");
	assert(proc != NULL);
	glGetProgramLocalParameterdvARB = proc;
	glGetProgramLocalParameterdvARB(target, index, params);
}

static void APIENTRY InitGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params)
{
	PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC proc;
	proc = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)_GetProcAddress("glGetProgramLocalParameterfvARB");
	assert(proc != NULL);
	glGetProgramLocalParameterfvARB = proc;
	glGetProgramLocalParameterfvARB(target, index, params);
}

static void APIENTRY InitGetProgramivARB(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETPROGRAMIVARBPROC proc;
	proc = (PFNGLGETPROGRAMIVARBPROC)_GetProcAddress("glGetProgramivARB");
	assert(proc != NULL);
	glGetProgramivARB = proc;
	glGetProgramivARB(target, pname, params);
}

static void APIENTRY InitGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string)
{
	PFNGLGETPROGRAMSTRINGARBPROC proc;
	proc = (PFNGLGETPROGRAMSTRINGARBPROC)_GetProcAddress("glGetProgramStringARB");
	assert(proc != NULL);
	glGetProgramStringARB = proc;
	glGetProgramStringARB(target, pname, string);
}

static void APIENTRY InitGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params)
{
	PFNGLGETVERTEXATTRIBDVARBPROC proc;
	proc = (PFNGLGETVERTEXATTRIBDVARBPROC)_GetProcAddress("glGetVertexAttribdvARB");
	assert(proc != NULL);
	glGetVertexAttribdvARB = proc;
	glGetVertexAttribdvARB(index, pname, params);
}

static void APIENTRY InitGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params)
{
	PFNGLGETVERTEXATTRIBFVARBPROC proc;
	proc = (PFNGLGETVERTEXATTRIBFVARBPROC)_GetProcAddress("glGetVertexAttribfvARB");
	assert(proc != NULL);
	glGetVertexAttribfvARB = proc;
	glGetVertexAttribfvARB(index, pname, params);
}

static void APIENTRY InitGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params)
{
	PFNGLGETVERTEXATTRIBIVARBPROC proc;
	proc = (PFNGLGETVERTEXATTRIBIVARBPROC)_GetProcAddress("glGetVertexAttribivARB");
	assert(proc != NULL);
	glGetVertexAttribivARB = proc;
	glGetVertexAttribivARB(index, pname, params);
}

static void APIENTRY InitGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid* *pointer)
{
	PFNGLGETVERTEXATTRIBPOINTERVARBPROC proc;
	proc = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)_GetProcAddress("glGetVertexAttribPointervARB");
	assert(proc != NULL);
	glGetVertexAttribPointervARB = proc;
	glGetVertexAttribPointervARB(index, pname, pointer);
}

static GLboolean APIENTRY InitIsProgramARB(GLuint program)
{
	PFNGLISPROGRAMARBPROC proc;
	proc = (PFNGLISPROGRAMARBPROC)_GetProcAddress("glIsProgramARB");
	assert(proc != NULL);
	glIsProgramARB = proc;
	return glIsProgramARB(program);
}


/* GL_ARB_fragment_program */

/* GL_ARB_vertex_buffer_object */
static void APIENTRY InitBindBufferARB(GLenum target, GLuint buffer)
{
	PFNGLBINDBUFFERARBPROC proc;
	proc = (PFNGLBINDBUFFERARBPROC)_GetProcAddress("glBindBufferARB");
	assert(proc != NULL);
	glBindBufferARB = proc;
	glBindBufferARB(target, buffer);
}

static void APIENTRY InitDeleteBuffersARB(GLsizei n, const GLuint *buffers)
{
	PFNGLDELETEBUFFERSARBPROC proc;
	proc = (PFNGLDELETEBUFFERSARBPROC)_GetProcAddress("glDeleteBuffersARB");
	assert(proc != NULL);
	glDeleteBuffersARB = proc;
	glDeleteBuffersARB(n, buffers);
}

static void APIENTRY InitGenBuffersARB(GLsizei n, GLuint *buffers)
{
	PFNGLGENBUFFERSARBPROC proc;
	proc = (PFNGLGENBUFFERSARBPROC)_GetProcAddress("glGenBuffersARB");
	assert(proc != NULL);
	glGenBuffersARB = proc;
	glGenBuffersARB(n, buffers);
}

static GLboolean APIENTRY InitIsBufferARB(GLuint buffer)
{
	PFNGLISBUFFERARBPROC proc;
	proc = (PFNGLISBUFFERARBPROC)_GetProcAddress("glIsBufferARB");
	assert(proc != NULL);
	glIsBufferARB = proc;
	return glIsBufferARB(buffer);
}

static void APIENTRY InitBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
{
	PFNGLBUFFERDATAARBPROC proc;
	proc = (PFNGLBUFFERDATAARBPROC)_GetProcAddress("glBufferDataARB");
	assert(proc != NULL);
	glBufferDataARB = proc;
	glBufferDataARB(target, size, data, usage);
}

static void APIENTRY InitBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
{
	PFNGLBUFFERSUBDATAARBPROC proc;
	proc = (PFNGLBUFFERSUBDATAARBPROC)_GetProcAddress("glBufferSubDataARB");
	assert(proc != NULL);
	glBufferSubDataARB = proc;
	glBufferSubDataARB(target, offset, size, data);
}

static void APIENTRY InitGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data)
{
	PFNGLGETBUFFERSUBDATAARBPROC proc;
	proc = (PFNGLGETBUFFERSUBDATAARBPROC)_GetProcAddress("glGetBufferSubDataARB");
	assert(proc != NULL);
	glGetBufferSubDataARB = proc;
	glGetBufferSubDataARB(target, offset, size, data);
}

static GLvoid* APIENTRY InitMapBufferARB(GLenum target, GLenum access)
{
	PFNGLMAPBUFFERARBPROC proc;
	proc = (PFNGLMAPBUFFERARBPROC)_GetProcAddress("glMapBufferARB");
	assert(proc != NULL);
	glMapBufferARB = proc;
	return glMapBufferARB(target, access);
}

static GLboolean APIENTRY InitUnmapBufferARB(GLenum target)
{
	PFNGLUNMAPBUFFERARBPROC proc;
	proc = (PFNGLUNMAPBUFFERARBPROC)_GetProcAddress("glUnmapBufferARB");
	assert(proc != NULL);
	glUnmapBufferARB = proc;
	return glUnmapBufferARB(target);
}

static void APIENTRY InitGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETBUFFERPARAMETERIVARBPROC proc;
	proc = (PFNGLGETBUFFERPARAMETERIVARBPROC)_GetProcAddress("glGetBufferParameterivARB");
	assert(proc != NULL);
	glGetBufferParameterivARB = proc;
	glGetBufferParameterivARB(target, pname, params);
}

static void APIENTRY InitGetBufferPointervARB(GLenum target, GLenum pname, GLvoid* *params)
{
	PFNGLGETBUFFERPOINTERVARBPROC proc;
	proc = (PFNGLGETBUFFERPOINTERVARBPROC)_GetProcAddress("glGetBufferPointervARB");
	assert(proc != NULL);
	glGetBufferPointervARB = proc;
	glGetBufferPointervARB(target, pname, params);
}


/* GL_ARB_occlusion_query */
static void APIENTRY InitGenQueriesARB(GLsizei n, GLuint *ids)
{
	PFNGLGENQUERIESARBPROC proc;
	proc = (PFNGLGENQUERIESARBPROC)_GetProcAddress("glGenQueriesARB");
	assert(proc != NULL);
	glGenQueriesARB = proc;
	glGenQueriesARB(n, ids);
}

static void APIENTRY InitDeleteQueriesARB(GLsizei n, const GLuint *ids)
{
	PFNGLDELETEQUERIESARBPROC proc;
	proc = (PFNGLDELETEQUERIESARBPROC)_GetProcAddress("glDeleteQueriesARB");
	assert(proc != NULL);
	glDeleteQueriesARB = proc;
	glDeleteQueriesARB(n, ids);
}

static GLboolean APIENTRY InitIsQueryARB(GLuint id)
{
	PFNGLISQUERYARBPROC proc;
	proc = (PFNGLISQUERYARBPROC)_GetProcAddress("glIsQueryARB");
	assert(proc != NULL);
	glIsQueryARB = proc;
	return glIsQueryARB(id);
}

static void APIENTRY InitBeginQueryARB(GLenum target, GLuint id)
{
	PFNGLBEGINQUERYARBPROC proc;
	proc = (PFNGLBEGINQUERYARBPROC)_GetProcAddress("glBeginQueryARB");
	assert(proc != NULL);
	glBeginQueryARB = proc;
	glBeginQueryARB(target, id);
}

static void APIENTRY InitEndQueryARB(GLenum target)
{
	PFNGLENDQUERYARBPROC proc;
	proc = (PFNGLENDQUERYARBPROC)_GetProcAddress("glEndQueryARB");
	assert(proc != NULL);
	glEndQueryARB = proc;
	glEndQueryARB(target);
}

static void APIENTRY InitGetQueryivARB(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETQUERYIVARBPROC proc;
	proc = (PFNGLGETQUERYIVARBPROC)_GetProcAddress("glGetQueryivARB");
	assert(proc != NULL);
	glGetQueryivARB = proc;
	glGetQueryivARB(target, pname, params);
}

static void APIENTRY InitGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params)
{
	PFNGLGETQUERYOBJECTIVARBPROC proc;
	proc = (PFNGLGETQUERYOBJECTIVARBPROC)_GetProcAddress("glGetQueryObjectivARB");
	assert(proc != NULL);
	glGetQueryObjectivARB = proc;
	glGetQueryObjectivARB(id, pname, params);
}

static void APIENTRY InitGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params)
{
	PFNGLGETQUERYOBJECTUIVARBPROC proc;
	proc = (PFNGLGETQUERYOBJECTUIVARBPROC)_GetProcAddress("glGetQueryObjectuivARB");
	assert(proc != NULL);
	glGetQueryObjectuivARB = proc;
	glGetQueryObjectuivARB(id, pname, params);
}


/* GL_ARB_shader_objects */
static void APIENTRY InitDeleteObjectARB(GLhandleARB obj)
{
	PFNGLDELETEOBJECTARBPROC proc;
	proc = (PFNGLDELETEOBJECTARBPROC)_GetProcAddress("glDeleteObjectARB");
	assert(proc != NULL);
	glDeleteObjectARB = proc;
	glDeleteObjectARB(obj);
}

static GLhandleARB APIENTRY InitGetHandleARB(GLenum pname)
{
	PFNGLGETHANDLEARBPROC proc;
	proc = (PFNGLGETHANDLEARBPROC)_GetProcAddress("glGetHandleARB");
	assert(proc != NULL);
	glGetHandleARB = proc;
	return glGetHandleARB(pname);
}

static void APIENTRY InitDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
	PFNGLDETACHOBJECTARBPROC proc;
	proc = (PFNGLDETACHOBJECTARBPROC)_GetProcAddress("glDetachObjectARB");
	assert(proc != NULL);
	glDetachObjectARB = proc;
	glDetachObjectARB(containerObj, attachedObj);
}

static GLhandleARB APIENTRY InitCreateShaderObjectARB(GLenum shaderType)
{
	PFNGLCREATESHADEROBJECTARBPROC proc;
	proc = (PFNGLCREATESHADEROBJECTARBPROC)_GetProcAddress("glCreateShaderObjectARB");
	assert(proc != NULL);
	glCreateShaderObjectARB = proc;
	return glCreateShaderObjectARB(shaderType);
}

static void APIENTRY InitShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length)
{
	PFNGLSHADERSOURCEARBPROC proc;
	proc = (PFNGLSHADERSOURCEARBPROC)_GetProcAddress("glShaderSourceARB");
	assert(proc != NULL);
	glShaderSourceARB = proc;
	glShaderSourceARB(shaderObj, count, string, length);
}

static void APIENTRY InitCompileShaderARB(GLhandleARB shaderObj)
{
	PFNGLCOMPILESHADERARBPROC proc;
	proc = (PFNGLCOMPILESHADERARBPROC)_GetProcAddress("glCompileShaderARB");
	assert(proc != NULL);
	glCompileShaderARB = proc;
	glCompileShaderARB(shaderObj);
}

static GLhandleARB APIENTRY InitCreateProgramObjectARB(void)
{
	PFNGLCREATEPROGRAMOBJECTARBPROC proc;
	proc = (PFNGLCREATEPROGRAMOBJECTARBPROC)_GetProcAddress("glCreateProgramObjectARB");
	assert(proc != NULL);
	glCreateProgramObjectARB = proc;
	return glCreateProgramObjectARB();
}

static void APIENTRY InitAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
	PFNGLATTACHOBJECTARBPROC proc;
	proc = (PFNGLATTACHOBJECTARBPROC)_GetProcAddress("glAttachObjectARB");
	assert(proc != NULL);
	glAttachObjectARB = proc;
	glAttachObjectARB(containerObj, obj);
}

static void APIENTRY InitLinkProgramARB(GLhandleARB programObj)
{
	PFNGLLINKPROGRAMARBPROC proc;
	proc = (PFNGLLINKPROGRAMARBPROC)_GetProcAddress("glLinkProgramARB");
	assert(proc != NULL);
	glLinkProgramARB = proc;
	glLinkProgramARB(programObj);
}

static void APIENTRY InitUseProgramObjectARB(GLhandleARB programObj)
{
	PFNGLUSEPROGRAMOBJECTARBPROC proc;
	proc = (PFNGLUSEPROGRAMOBJECTARBPROC)_GetProcAddress("glUseProgramObjectARB");
	assert(proc != NULL);
	glUseProgramObjectARB = proc;
	glUseProgramObjectARB(programObj);
}

static void APIENTRY InitValidateProgramARB(GLhandleARB programObj)
{
	PFNGLVALIDATEPROGRAMARBPROC proc;
	proc = (PFNGLVALIDATEPROGRAMARBPROC)_GetProcAddress("glValidateProgramARB");
	assert(proc != NULL);
	glValidateProgramARB = proc;
	glValidateProgramARB(programObj);
}

static void APIENTRY InitUniform1fARB(GLint location, GLfloat v0)
{
	PFNGLUNIFORM1FARBPROC proc;
	proc = (PFNGLUNIFORM1FARBPROC)_GetProcAddress("glUniform1fARB");
	assert(proc != NULL);
	glUniform1fARB = proc;
	glUniform1fARB(location, v0);
}

static void APIENTRY InitUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
	PFNGLUNIFORM2FARBPROC proc;
	proc = (PFNGLUNIFORM2FARBPROC)_GetProcAddress("glUniform2fARB");
	assert(proc != NULL);
	glUniform2fARB = proc;
	glUniform2fARB(location, v0, v1);
}

static void APIENTRY InitUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	PFNGLUNIFORM3FARBPROC proc;
	proc = (PFNGLUNIFORM3FARBPROC)_GetProcAddress("glUniform3fARB");
	assert(proc != NULL);
	glUniform3fARB = proc;
	glUniform3fARB(location, v0, v1, v2);
}

static void APIENTRY InitUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	PFNGLUNIFORM4FARBPROC proc;
	proc = (PFNGLUNIFORM4FARBPROC)_GetProcAddress("glUniform4fARB");
	assert(proc != NULL);
	glUniform4fARB = proc;
	glUniform4fARB(location, v0, v1, v2, v3);
}

static void APIENTRY InitUniform1iARB(GLint location, GLint v0)
{
	PFNGLUNIFORM1IARBPROC proc;
	proc = (PFNGLUNIFORM1IARBPROC)_GetProcAddress("glUniform1iARB");
	assert(proc != NULL);
	glUniform1iARB = proc;
	glUniform1iARB(location, v0);
}

static void APIENTRY InitUniform2iARB(GLint location, GLint v0, GLint v1)
{
	PFNGLUNIFORM2IARBPROC proc;
	proc = (PFNGLUNIFORM2IARBPROC)_GetProcAddress("glUniform2iARB");
	assert(proc != NULL);
	glUniform2iARB = proc;
	glUniform2iARB(location, v0, v1);
}

static void APIENTRY InitUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
	PFNGLUNIFORM3IARBPROC proc;
	proc = (PFNGLUNIFORM3IARBPROC)_GetProcAddress("glUniform3iARB");
	assert(proc != NULL);
	glUniform3iARB = proc;
	glUniform3iARB(location, v0, v1, v2);
}

static void APIENTRY InitUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	PFNGLUNIFORM4IARBPROC proc;
	proc = (PFNGLUNIFORM4IARBPROC)_GetProcAddress("glUniform4iARB");
	assert(proc != NULL);
	glUniform4iARB = proc;
	glUniform4iARB(location, v0, v1, v2, v3);
}

static void APIENTRY InitUniform1fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM1FVARBPROC proc;
	proc = (PFNGLUNIFORM1FVARBPROC)_GetProcAddress("glUniform1fvARB");
	assert(proc != NULL);
	glUniform1fvARB = proc;
	glUniform1fvARB(location, count, value);
}

static void APIENTRY InitUniform2fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM2FVARBPROC proc;
	proc = (PFNGLUNIFORM2FVARBPROC)_GetProcAddress("glUniform2fvARB");
	assert(proc != NULL);
	glUniform2fvARB = proc;
	glUniform2fvARB(location, count, value);
}

static void APIENTRY InitUniform3fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM3FVARBPROC proc;
	proc = (PFNGLUNIFORM3FVARBPROC)_GetProcAddress("glUniform3fvARB");
	assert(proc != NULL);
	glUniform3fvARB = proc;
	glUniform3fvARB(location, count, value);
}

static void APIENTRY InitUniform4fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	PFNGLUNIFORM4FVARBPROC proc;
	proc = (PFNGLUNIFORM4FVARBPROC)_GetProcAddress("glUniform4fvARB");
	assert(proc != NULL);
	glUniform4fvARB = proc;
	glUniform4fvARB(location, count, value);
}

static void APIENTRY InitUniform1ivARB(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM1IVARBPROC proc;
	proc = (PFNGLUNIFORM1IVARBPROC)_GetProcAddress("glUniform1ivARB");
	assert(proc != NULL);
	glUniform1ivARB = proc;
	glUniform1ivARB(location, count, value);
}

static void APIENTRY InitUniform2ivARB(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM2IVARBPROC proc;
	proc = (PFNGLUNIFORM2IVARBPROC)_GetProcAddress("glUniform2ivARB");
	assert(proc != NULL);
	glUniform2ivARB = proc;
	glUniform2ivARB(location, count, value);
}

static void APIENTRY InitUniform3ivARB(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM3IVARBPROC proc;
	proc = (PFNGLUNIFORM3IVARBPROC)_GetProcAddress("glUniform3ivARB");
	assert(proc != NULL);
	glUniform3ivARB = proc;
	glUniform3ivARB(location, count, value);
}

static void APIENTRY InitUniform4ivARB(GLint location, GLsizei count, const GLint *value)
{
	PFNGLUNIFORM4IVARBPROC proc;
	proc = (PFNGLUNIFORM4IVARBPROC)_GetProcAddress("glUniform4ivARB");
	assert(proc != NULL);
	glUniform4ivARB = proc;
	glUniform4ivARB(location, count, value);
}

static void APIENTRY InitUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	PFNGLUNIFORMMATRIX2FVARBPROC proc;
	proc = (PFNGLUNIFORMMATRIX2FVARBPROC)_GetProcAddress("glUniformMatrix2fvARB");
	assert(proc != NULL);
	glUniformMatrix2fvARB = proc;
	glUniformMatrix2fvARB(location, count, transpose, value);
}

static void APIENTRY InitUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	PFNGLUNIFORMMATRIX3FVARBPROC proc;
	proc = (PFNGLUNIFORMMATRIX3FVARBPROC)_GetProcAddress("glUniformMatrix3fvARB");
	assert(proc != NULL);
	glUniformMatrix3fvARB = proc;
	glUniformMatrix3fvARB(location, count, transpose, value);
}

static void APIENTRY InitUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	PFNGLUNIFORMMATRIX4FVARBPROC proc;
	proc = (PFNGLUNIFORMMATRIX4FVARBPROC)_GetProcAddress("glUniformMatrix4fvARB");
	assert(proc != NULL);
	glUniformMatrix4fvARB = proc;
	glUniformMatrix4fvARB(location, count, transpose, value);
}

static void APIENTRY InitGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params)
{
	PFNGLGETOBJECTPARAMETERFVARBPROC proc;
	proc = (PFNGLGETOBJECTPARAMETERFVARBPROC)_GetProcAddress("glGetObjectParameterfvARB");
	assert(proc != NULL);
	glGetObjectParameterfvARB = proc;
	glGetObjectParameterfvARB(obj, pname, params);
}

static void APIENTRY InitGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params)
{
	PFNGLGETOBJECTPARAMETERIVARBPROC proc;
	proc = (PFNGLGETOBJECTPARAMETERIVARBPROC)_GetProcAddress("glGetObjectParameterivARB");
	assert(proc != NULL);
	glGetObjectParameterivARB = proc;
	glGetObjectParameterivARB(obj, pname, params);
}

static void APIENTRY InitGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog)
{
	PFNGLGETINFOLOGARBPROC proc;
	proc = (PFNGLGETINFOLOGARBPROC)_GetProcAddress("glGetInfoLogARB");
	assert(proc != NULL);
	glGetInfoLogARB = proc;
	glGetInfoLogARB(obj, maxLength, length, infoLog);
}

static void APIENTRY InitGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj)
{
	PFNGLGETATTACHEDOBJECTSARBPROC proc;
	proc = (PFNGLGETATTACHEDOBJECTSARBPROC)_GetProcAddress("glGetAttachedObjectsARB");
	assert(proc != NULL);
	glGetAttachedObjectsARB = proc;
	glGetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

static GLint APIENTRY InitGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name)
{
	PFNGLGETUNIFORMLOCATIONARBPROC proc;
	proc = (PFNGLGETUNIFORMLOCATIONARBPROC)_GetProcAddress("glGetUniformLocationARB");
	assert(proc != NULL);
	glGetUniformLocationARB = proc;
	return glGetUniformLocationARB(programObj, name);
}

static void APIENTRY InitGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
{
	PFNGLGETACTIVEUNIFORMARBPROC proc;
	proc = (PFNGLGETACTIVEUNIFORMARBPROC)_GetProcAddress("glGetActiveUniformARB");
	assert(proc != NULL);
	glGetActiveUniformARB = proc;
	glGetActiveUniformARB(programObj, index, maxLength, length, size, type, name);
}

static void APIENTRY InitGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params)
{
	PFNGLGETUNIFORMFVARBPROC proc;
	proc = (PFNGLGETUNIFORMFVARBPROC)_GetProcAddress("glGetUniformfvARB");
	assert(proc != NULL);
	glGetUniformfvARB = proc;
	glGetUniformfvARB(programObj, location, params);
}

static void APIENTRY InitGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params)
{
	PFNGLGETUNIFORMIVARBPROC proc;
	proc = (PFNGLGETUNIFORMIVARBPROC)_GetProcAddress("glGetUniformivARB");
	assert(proc != NULL);
	glGetUniformivARB = proc;
	glGetUniformivARB(programObj, location, params);
}

static void APIENTRY InitGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source)
{
	PFNGLGETSHADERSOURCEARBPROC proc;
	proc = (PFNGLGETSHADERSOURCEARBPROC)_GetProcAddress("glGetShaderSourceARB");
	assert(proc != NULL);
	glGetShaderSourceARB = proc;
	glGetShaderSourceARB(obj, maxLength, length, source);
}


/* GL_ARB_vertex_shader */
static void APIENTRY InitBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name)
{
	PFNGLBINDATTRIBLOCATIONARBPROC proc;
	proc = (PFNGLBINDATTRIBLOCATIONARBPROC)_GetProcAddress("glBindAttribLocationARB");
	assert(proc != NULL);
	glBindAttribLocationARB = proc;
	glBindAttribLocationARB(programObj, index, name);
}

static void APIENTRY InitGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
{
	PFNGLGETACTIVEATTRIBARBPROC proc;
	proc = (PFNGLGETACTIVEATTRIBARBPROC)_GetProcAddress("glGetActiveAttribARB");
	assert(proc != NULL);
	glGetActiveAttribARB = proc;
	glGetActiveAttribARB(programObj, index, maxLength, length, size, type, name);
}

static GLint APIENTRY InitGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name)
{
	PFNGLGETATTRIBLOCATIONARBPROC proc;
	proc = (PFNGLGETATTRIBLOCATIONARBPROC)_GetProcAddress("glGetAttribLocationARB");
	assert(proc != NULL);
	glGetAttribLocationARB = proc;
	return glGetAttribLocationARB(programObj, name);
}


/* GL_ARB_fragment_shader */

/* GL_ARB_shading_language_100 */

/* GL_ARB_texture_non_power_of_two */

/* GL_ARB_point_sprite */

/* GL_ARB_fragment_program_shadow */

/* GL_ARB_draw_buffers */
static void APIENTRY InitDrawBuffersARB(GLsizei n, const GLenum *bufs)
{
	PFNGLDRAWBUFFERSARBPROC proc;
	proc = (PFNGLDRAWBUFFERSARBPROC)_GetProcAddress("glDrawBuffersARB");
	assert(proc != NULL);
	glDrawBuffersARB = proc;
	glDrawBuffersARB(n, bufs);
}


/* GL_ARB_texture_rectangle */

/* GL_ARB_color_buffer_float */
static void APIENTRY InitClampColorARB(GLenum target, GLenum clamp)
{
	PFNGLCLAMPCOLORARBPROC proc;
	proc = (PFNGLCLAMPCOLORARBPROC)_GetProcAddress("glClampColorARB");
	assert(proc != NULL);
	glClampColorARB = proc;
	glClampColorARB(target, clamp);
}


/* GL_ARB_half_float_pixel */

/* GL_ARB_texture_float */

/* GL_ARB_pixel_buffer_object */

/* GL_EXT_abgr */

/* GL_EXT_blend_color */
static void APIENTRY InitBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	PFNGLBLENDCOLOREXTPROC proc;
	proc = (PFNGLBLENDCOLOREXTPROC)_GetProcAddress("glBlendColorEXT");
	assert(proc != NULL);
	glBlendColorEXT = proc;
	glBlendColorEXT(red, green, blue, alpha);
}


/* GL_EXT_polygon_offset */
static void APIENTRY InitPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
	PFNGLPOLYGONOFFSETEXTPROC proc;
	proc = (PFNGLPOLYGONOFFSETEXTPROC)_GetProcAddress("glPolygonOffsetEXT");
	assert(proc != NULL);
	glPolygonOffsetEXT = proc;
	glPolygonOffsetEXT(factor, bias);
}


/* GL_EXT_texture */

/* GL_EXT_texture3D */
static void APIENTRY InitTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXIMAGE3DEXTPROC proc;
	proc = (PFNGLTEXIMAGE3DEXTPROC)_GetProcAddress("glTexImage3DEXT");
	assert(proc != NULL);
	glTexImage3DEXT = proc;
	glTexImage3DEXT(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

static void APIENTRY InitTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXSUBIMAGE3DEXTPROC proc;
	proc = (PFNGLTEXSUBIMAGE3DEXTPROC)_GetProcAddress("glTexSubImage3DEXT");
	assert(proc != NULL);
	glTexSubImage3DEXT = proc;
	glTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}


/* GL_SGIS_texture_filter4 */
static void APIENTRY InitGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat *weights)
{
	PFNGLGETTEXFILTERFUNCSGISPROC proc;
	proc = (PFNGLGETTEXFILTERFUNCSGISPROC)_GetProcAddress("glGetTexFilterFuncSGIS");
	assert(proc != NULL);
	glGetTexFilterFuncSGIS = proc;
	glGetTexFilterFuncSGIS(target, filter, weights);
}

static void APIENTRY InitTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat *weights)
{
	PFNGLTEXFILTERFUNCSGISPROC proc;
	proc = (PFNGLTEXFILTERFUNCSGISPROC)_GetProcAddress("glTexFilterFuncSGIS");
	assert(proc != NULL);
	glTexFilterFuncSGIS = proc;
	glTexFilterFuncSGIS(target, filter, n, weights);
}


/* GL_EXT_subtexture */
static void APIENTRY InitTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXSUBIMAGE1DEXTPROC proc;
	proc = (PFNGLTEXSUBIMAGE1DEXTPROC)_GetProcAddress("glTexSubImage1DEXT");
	assert(proc != NULL);
	glTexSubImage1DEXT = proc;
	glTexSubImage1DEXT(target, level, xoffset, width, format, type, pixels);
}

static void APIENTRY InitTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXSUBIMAGE2DEXTPROC proc;
	proc = (PFNGLTEXSUBIMAGE2DEXTPROC)_GetProcAddress("glTexSubImage2DEXT");
	assert(proc != NULL);
	glTexSubImage2DEXT = proc;
	glTexSubImage2DEXT(target, level, xoffset, yoffset, width, height, format, type, pixels);
}


/* GL_EXT_copy_texture */
static void APIENTRY InitCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	PFNGLCOPYTEXIMAGE1DEXTPROC proc;
	proc = (PFNGLCOPYTEXIMAGE1DEXTPROC)_GetProcAddress("glCopyTexImage1DEXT");
	assert(proc != NULL);
	glCopyTexImage1DEXT = proc;
	glCopyTexImage1DEXT(target, level, internalformat, x, y, width, border);
}

static void APIENTRY InitCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	PFNGLCOPYTEXIMAGE2DEXTPROC proc;
	proc = (PFNGLCOPYTEXIMAGE2DEXTPROC)_GetProcAddress("glCopyTexImage2DEXT");
	assert(proc != NULL);
	glCopyTexImage2DEXT = proc;
	glCopyTexImage2DEXT(target, level, internalformat, x, y, width, height, border);
}

static void APIENTRY InitCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYTEXSUBIMAGE1DEXTPROC proc;
	proc = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)_GetProcAddress("glCopyTexSubImage1DEXT");
	assert(proc != NULL);
	glCopyTexSubImage1DEXT = proc;
	glCopyTexSubImage1DEXT(target, level, xoffset, x, y, width);
}

static void APIENTRY InitCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	PFNGLCOPYTEXSUBIMAGE2DEXTPROC proc;
	proc = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)_GetProcAddress("glCopyTexSubImage2DEXT");
	assert(proc != NULL);
	glCopyTexSubImage2DEXT = proc;
	glCopyTexSubImage2DEXT(target, level, xoffset, yoffset, x, y, width, height);
}

static void APIENTRY InitCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	PFNGLCOPYTEXSUBIMAGE3DEXTPROC proc;
	proc = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)_GetProcAddress("glCopyTexSubImage3DEXT");
	assert(proc != NULL);
	glCopyTexSubImage3DEXT = proc;
	glCopyTexSubImage3DEXT(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}


/* GL_EXT_histogram */
static void APIENTRY InitGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	PFNGLGETHISTOGRAMEXTPROC proc;
	proc = (PFNGLGETHISTOGRAMEXTPROC)_GetProcAddress("glGetHistogramEXT");
	assert(proc != NULL);
	glGetHistogramEXT = proc;
	glGetHistogramEXT(target, reset, format, type, values);
}

static void APIENTRY InitGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETHISTOGRAMPARAMETERFVEXTPROC proc;
	proc = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)_GetProcAddress("glGetHistogramParameterfvEXT");
	assert(proc != NULL);
	glGetHistogramParameterfvEXT = proc;
	glGetHistogramParameterfvEXT(target, pname, params);
}

static void APIENTRY InitGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETHISTOGRAMPARAMETERIVEXTPROC proc;
	proc = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)_GetProcAddress("glGetHistogramParameterivEXT");
	assert(proc != NULL);
	glGetHistogramParameterivEXT = proc;
	glGetHistogramParameterivEXT(target, pname, params);
}

static void APIENTRY InitGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	PFNGLGETMINMAXEXTPROC proc;
	proc = (PFNGLGETMINMAXEXTPROC)_GetProcAddress("glGetMinmaxEXT");
	assert(proc != NULL);
	glGetMinmaxEXT = proc;
	glGetMinmaxEXT(target, reset, format, type, values);
}

static void APIENTRY InitGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETMINMAXPARAMETERFVEXTPROC proc;
	proc = (PFNGLGETMINMAXPARAMETERFVEXTPROC)_GetProcAddress("glGetMinmaxParameterfvEXT");
	assert(proc != NULL);
	glGetMinmaxParameterfvEXT = proc;
	glGetMinmaxParameterfvEXT(target, pname, params);
}

static void APIENTRY InitGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETMINMAXPARAMETERIVEXTPROC proc;
	proc = (PFNGLGETMINMAXPARAMETERIVEXTPROC)_GetProcAddress("glGetMinmaxParameterivEXT");
	assert(proc != NULL);
	glGetMinmaxParameterivEXT = proc;
	glGetMinmaxParameterivEXT(target, pname, params);
}

static void APIENTRY InitHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	PFNGLHISTOGRAMEXTPROC proc;
	proc = (PFNGLHISTOGRAMEXTPROC)_GetProcAddress("glHistogramEXT");
	assert(proc != NULL);
	glHistogramEXT = proc;
	glHistogramEXT(target, width, internalformat, sink);
}

static void APIENTRY InitMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
	PFNGLMINMAXEXTPROC proc;
	proc = (PFNGLMINMAXEXTPROC)_GetProcAddress("glMinmaxEXT");
	assert(proc != NULL);
	glMinmaxEXT = proc;
	glMinmaxEXT(target, internalformat, sink);
}

static void APIENTRY InitResetHistogramEXT(GLenum target)
{
	PFNGLRESETHISTOGRAMEXTPROC proc;
	proc = (PFNGLRESETHISTOGRAMEXTPROC)_GetProcAddress("glResetHistogramEXT");
	assert(proc != NULL);
	glResetHistogramEXT = proc;
	glResetHistogramEXT(target);
}

static void APIENTRY InitResetMinmaxEXT(GLenum target)
{
	PFNGLRESETMINMAXEXTPROC proc;
	proc = (PFNGLRESETMINMAXEXTPROC)_GetProcAddress("glResetMinmaxEXT");
	assert(proc != NULL);
	glResetMinmaxEXT = proc;
	glResetMinmaxEXT(target);
}


/* GL_EXT_convolution */
static void APIENTRY InitConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
{
	PFNGLCONVOLUTIONFILTER1DEXTPROC proc;
	proc = (PFNGLCONVOLUTIONFILTER1DEXTPROC)_GetProcAddress("glConvolutionFilter1DEXT");
	assert(proc != NULL);
	glConvolutionFilter1DEXT = proc;
	glConvolutionFilter1DEXT(target, internalformat, width, format, type, image);
}

static void APIENTRY InitConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
{
	PFNGLCONVOLUTIONFILTER2DEXTPROC proc;
	proc = (PFNGLCONVOLUTIONFILTER2DEXTPROC)_GetProcAddress("glConvolutionFilter2DEXT");
	assert(proc != NULL);
	glConvolutionFilter2DEXT = proc;
	glConvolutionFilter2DEXT(target, internalformat, width, height, format, type, image);
}

static void APIENTRY InitConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
	PFNGLCONVOLUTIONPARAMETERFEXTPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)_GetProcAddress("glConvolutionParameterfEXT");
	assert(proc != NULL);
	glConvolutionParameterfEXT = proc;
	glConvolutionParameterfEXT(target, pname, params);
}

static void APIENTRY InitConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLCONVOLUTIONPARAMETERFVEXTPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)_GetProcAddress("glConvolutionParameterfvEXT");
	assert(proc != NULL);
	glConvolutionParameterfvEXT = proc;
	glConvolutionParameterfvEXT(target, pname, params);
}

static void APIENTRY InitConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
	PFNGLCONVOLUTIONPARAMETERIEXTPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)_GetProcAddress("glConvolutionParameteriEXT");
	assert(proc != NULL);
	glConvolutionParameteriEXT = proc;
	glConvolutionParameteriEXT(target, pname, params);
}

static void APIENTRY InitConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLCONVOLUTIONPARAMETERIVEXTPROC proc;
	proc = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)_GetProcAddress("glConvolutionParameterivEXT");
	assert(proc != NULL);
	glConvolutionParameterivEXT = proc;
	glConvolutionParameterivEXT(target, pname, params);
}

static void APIENTRY InitCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC proc;
	proc = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)_GetProcAddress("glCopyConvolutionFilter1DEXT");
	assert(proc != NULL);
	glCopyConvolutionFilter1DEXT = proc;
	glCopyConvolutionFilter1DEXT(target, internalformat, x, y, width);
}

static void APIENTRY InitCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC proc;
	proc = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)_GetProcAddress("glCopyConvolutionFilter2DEXT");
	assert(proc != NULL);
	glCopyConvolutionFilter2DEXT = proc;
	glCopyConvolutionFilter2DEXT(target, internalformat, x, y, width, height);
}

static void APIENTRY InitGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid *image)
{
	PFNGLGETCONVOLUTIONFILTEREXTPROC proc;
	proc = (PFNGLGETCONVOLUTIONFILTEREXTPROC)_GetProcAddress("glGetConvolutionFilterEXT");
	assert(proc != NULL);
	glGetConvolutionFilterEXT = proc;
	glGetConvolutionFilterEXT(target, format, type, image);
}

static void APIENTRY InitGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC proc;
	proc = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)_GetProcAddress("glGetConvolutionParameterfvEXT");
	assert(proc != NULL);
	glGetConvolutionParameterfvEXT = proc;
	glGetConvolutionParameterfvEXT(target, pname, params);
}

static void APIENTRY InitGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC proc;
	proc = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)_GetProcAddress("glGetConvolutionParameterivEXT");
	assert(proc != NULL);
	glGetConvolutionParameterivEXT = proc;
	glGetConvolutionParameterivEXT(target, pname, params);
}

static void APIENTRY InitGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
{
	PFNGLGETSEPARABLEFILTEREXTPROC proc;
	proc = (PFNGLGETSEPARABLEFILTEREXTPROC)_GetProcAddress("glGetSeparableFilterEXT");
	assert(proc != NULL);
	glGetSeparableFilterEXT = proc;
	glGetSeparableFilterEXT(target, format, type, row, column, span);
}

static void APIENTRY InitSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
{
	PFNGLSEPARABLEFILTER2DEXTPROC proc;
	proc = (PFNGLSEPARABLEFILTER2DEXTPROC)_GetProcAddress("glSeparableFilter2DEXT");
	assert(proc != NULL);
	glSeparableFilter2DEXT = proc;
	glSeparableFilter2DEXT(target, internalformat, width, height, format, type, row, column);
}


/* GL_EXT_color_matrix */

/* GL_SGI_color_table */
static void APIENTRY InitColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
{
	PFNGLCOLORTABLESGIPROC proc;
	proc = (PFNGLCOLORTABLESGIPROC)_GetProcAddress("glColorTableSGI");
	assert(proc != NULL);
	glColorTableSGI = proc;
	glColorTableSGI(target, internalformat, width, format, type, table);
}

static void APIENTRY InitColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLCOLORTABLEPARAMETERFVSGIPROC proc;
	proc = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)_GetProcAddress("glColorTableParameterfvSGI");
	assert(proc != NULL);
	glColorTableParameterfvSGI = proc;
	glColorTableParameterfvSGI(target, pname, params);
}

static void APIENTRY InitColorTableParameterivSGI(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLCOLORTABLEPARAMETERIVSGIPROC proc;
	proc = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)_GetProcAddress("glColorTableParameterivSGI");
	assert(proc != NULL);
	glColorTableParameterivSGI = proc;
	glColorTableParameterivSGI(target, pname, params);
}

static void APIENTRY InitCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYCOLORTABLESGIPROC proc;
	proc = (PFNGLCOPYCOLORTABLESGIPROC)_GetProcAddress("glCopyColorTableSGI");
	assert(proc != NULL);
	glCopyColorTableSGI = proc;
	glCopyColorTableSGI(target, internalformat, x, y, width);
}

static void APIENTRY InitGetColorTableSGI(GLenum target, GLenum format, GLenum type, GLvoid *table)
{
	PFNGLGETCOLORTABLESGIPROC proc;
	proc = (PFNGLGETCOLORTABLESGIPROC)_GetProcAddress("glGetColorTableSGI");
	assert(proc != NULL);
	glGetColorTableSGI = proc;
	glGetColorTableSGI(target, format, type, table);
}

static void APIENTRY InitGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETCOLORTABLEPARAMETERFVSGIPROC proc;
	proc = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)_GetProcAddress("glGetColorTableParameterfvSGI");
	assert(proc != NULL);
	glGetColorTableParameterfvSGI = proc;
	glGetColorTableParameterfvSGI(target, pname, params);
}

static void APIENTRY InitGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETCOLORTABLEPARAMETERIVSGIPROC proc;
	proc = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)_GetProcAddress("glGetColorTableParameterivSGI");
	assert(proc != NULL);
	glGetColorTableParameterivSGI = proc;
	glGetColorTableParameterivSGI(target, pname, params);
}


/* GL_SGIX_pixel_texture */
static void APIENTRY InitPixelTexGenSGIX(GLenum mode)
{
	PFNGLPIXELTEXGENSGIXPROC proc;
	proc = (PFNGLPIXELTEXGENSGIXPROC)_GetProcAddress("glPixelTexGenSGIX");
	assert(proc != NULL);
	glPixelTexGenSGIX = proc;
	glPixelTexGenSGIX(mode);
}


/* GL_SGIS_pixel_texture */
static void APIENTRY InitPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
	PFNGLPIXELTEXGENPARAMETERISGISPROC proc;
	proc = (PFNGLPIXELTEXGENPARAMETERISGISPROC)_GetProcAddress("glPixelTexGenParameteriSGIS");
	assert(proc != NULL);
	glPixelTexGenParameteriSGIS = proc;
	glPixelTexGenParameteriSGIS(pname, param);
}

static void APIENTRY InitPixelTexGenParameterivSGIS(GLenum pname, const GLint *params)
{
	PFNGLPIXELTEXGENPARAMETERIVSGISPROC proc;
	proc = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)_GetProcAddress("glPixelTexGenParameterivSGIS");
	assert(proc != NULL);
	glPixelTexGenParameterivSGIS = proc;
	glPixelTexGenParameterivSGIS(pname, params);
}

static void APIENTRY InitPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
	PFNGLPIXELTEXGENPARAMETERFSGISPROC proc;
	proc = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)_GetProcAddress("glPixelTexGenParameterfSGIS");
	assert(proc != NULL);
	glPixelTexGenParameterfSGIS = proc;
	glPixelTexGenParameterfSGIS(pname, param);
}

static void APIENTRY InitPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat *params)
{
	PFNGLPIXELTEXGENPARAMETERFVSGISPROC proc;
	proc = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)_GetProcAddress("glPixelTexGenParameterfvSGIS");
	assert(proc != NULL);
	glPixelTexGenParameterfvSGIS = proc;
	glPixelTexGenParameterfvSGIS(pname, params);
}

static void APIENTRY InitGetPixelTexGenParameterivSGIS(GLenum pname, GLint *params)
{
	PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC proc;
	proc = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)_GetProcAddress("glGetPixelTexGenParameterivSGIS");
	assert(proc != NULL);
	glGetPixelTexGenParameterivSGIS = proc;
	glGetPixelTexGenParameterivSGIS(pname, params);
}

static void APIENTRY InitGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat *params)
{
	PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC proc;
	proc = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)_GetProcAddress("glGetPixelTexGenParameterfvSGIS");
	assert(proc != NULL);
	glGetPixelTexGenParameterfvSGIS = proc;
	glGetPixelTexGenParameterfvSGIS(pname, params);
}


/* GL_SGIS_texture4D */
static void APIENTRY InitTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXIMAGE4DSGISPROC proc;
	proc = (PFNGLTEXIMAGE4DSGISPROC)_GetProcAddress("glTexImage4DSGIS");
	assert(proc != NULL);
	glTexImage4DSGIS = proc;
	glTexImage4DSGIS(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

static void APIENTRY InitTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels)
{
	PFNGLTEXSUBIMAGE4DSGISPROC proc;
	proc = (PFNGLTEXSUBIMAGE4DSGISPROC)_GetProcAddress("glTexSubImage4DSGIS");
	assert(proc != NULL);
	glTexSubImage4DSGIS = proc;
	glTexSubImage4DSGIS(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}


/* GL_SGI_texture_color_table */

/* GL_EXT_cmyka */

/* GL_EXT_texture_object */
static GLboolean APIENTRY InitAreTexturesResidentEXT(GLsizei n, const GLuint *textures, GLboolean *residences)
{
	PFNGLARETEXTURESRESIDENTEXTPROC proc;
	proc = (PFNGLARETEXTURESRESIDENTEXTPROC)_GetProcAddress("glAreTexturesResidentEXT");
	assert(proc != NULL);
	glAreTexturesResidentEXT = proc;
	return glAreTexturesResidentEXT(n, textures, residences);
}

static void APIENTRY InitBindTextureEXT(GLenum target, GLuint texture)
{
	PFNGLBINDTEXTUREEXTPROC proc;
	proc = (PFNGLBINDTEXTUREEXTPROC)_GetProcAddress("glBindTextureEXT");
	assert(proc != NULL);
	glBindTextureEXT = proc;
	glBindTextureEXT(target, texture);
}

static void APIENTRY InitDeleteTexturesEXT(GLsizei n, const GLuint *textures)
{
	PFNGLDELETETEXTURESEXTPROC proc;
	proc = (PFNGLDELETETEXTURESEXTPROC)_GetProcAddress("glDeleteTexturesEXT");
	assert(proc != NULL);
	glDeleteTexturesEXT = proc;
	glDeleteTexturesEXT(n, textures);
}

static void APIENTRY InitGenTexturesEXT(GLsizei n, GLuint *textures)
{
	PFNGLGENTEXTURESEXTPROC proc;
	proc = (PFNGLGENTEXTURESEXTPROC)_GetProcAddress("glGenTexturesEXT");
	assert(proc != NULL);
	glGenTexturesEXT = proc;
	glGenTexturesEXT(n, textures);
}

static GLboolean APIENTRY InitIsTextureEXT(GLuint texture)
{
	PFNGLISTEXTUREEXTPROC proc;
	proc = (PFNGLISTEXTUREEXTPROC)_GetProcAddress("glIsTextureEXT");
	assert(proc != NULL);
	glIsTextureEXT = proc;
	return glIsTextureEXT(texture);
}

static void APIENTRY InitPrioritizeTexturesEXT(GLsizei n, const GLuint *textures, const GLclampf *priorities)
{
	PFNGLPRIORITIZETEXTURESEXTPROC proc;
	proc = (PFNGLPRIORITIZETEXTURESEXTPROC)_GetProcAddress("glPrioritizeTexturesEXT");
	assert(proc != NULL);
	glPrioritizeTexturesEXT = proc;
	glPrioritizeTexturesEXT(n, textures, priorities);
}


/* GL_SGIS_detail_texture */
static void APIENTRY InitDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points)
{
	PFNGLDETAILTEXFUNCSGISPROC proc;
	proc = (PFNGLDETAILTEXFUNCSGISPROC)_GetProcAddress("glDetailTexFuncSGIS");
	assert(proc != NULL);
	glDetailTexFuncSGIS = proc;
	glDetailTexFuncSGIS(target, n, points);
}

static void APIENTRY InitGetDetailTexFuncSGIS(GLenum target, GLfloat *points)
{
	PFNGLGETDETAILTEXFUNCSGISPROC proc;
	proc = (PFNGLGETDETAILTEXFUNCSGISPROC)_GetProcAddress("glGetDetailTexFuncSGIS");
	assert(proc != NULL);
	glGetDetailTexFuncSGIS = proc;
	glGetDetailTexFuncSGIS(target, points);
}


/* GL_SGIS_sharpen_texture */
static void APIENTRY InitSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points)
{
	PFNGLSHARPENTEXFUNCSGISPROC proc;
	proc = (PFNGLSHARPENTEXFUNCSGISPROC)_GetProcAddress("glSharpenTexFuncSGIS");
	assert(proc != NULL);
	glSharpenTexFuncSGIS = proc;
	glSharpenTexFuncSGIS(target, n, points);
}

static void APIENTRY InitGetSharpenTexFuncSGIS(GLenum target, GLfloat *points)
{
	PFNGLGETSHARPENTEXFUNCSGISPROC proc;
	proc = (PFNGLGETSHARPENTEXFUNCSGISPROC)_GetProcAddress("glGetSharpenTexFuncSGIS");
	assert(proc != NULL);
	glGetSharpenTexFuncSGIS = proc;
	glGetSharpenTexFuncSGIS(target, points);
}


/* GL_EXT_packed_pixels */

/* GL_SGIS_texture_lod */

/* GL_SGIS_multisample */
static void APIENTRY InitSampleMaskSGIS(GLclampf value, GLboolean invert)
{
	PFNGLSAMPLEMASKSGISPROC proc;
	proc = (PFNGLSAMPLEMASKSGISPROC)_GetProcAddress("glSampleMaskSGIS");
	assert(proc != NULL);
	glSampleMaskSGIS = proc;
	glSampleMaskSGIS(value, invert);
}

static void APIENTRY InitSamplePatternSGIS(GLenum pattern)
{
	PFNGLSAMPLEPATTERNSGISPROC proc;
	proc = (PFNGLSAMPLEPATTERNSGISPROC)_GetProcAddress("glSamplePatternSGIS");
	assert(proc != NULL);
	glSamplePatternSGIS = proc;
	glSamplePatternSGIS(pattern);
}


/* GL_EXT_rescale_normal */

/* GL_EXT_vertex_array */
static void APIENTRY InitArrayElementEXT(GLint i)
{
	PFNGLARRAYELEMENTEXTPROC proc;
	proc = (PFNGLARRAYELEMENTEXTPROC)_GetProcAddress("glArrayElementEXT");
	assert(proc != NULL);
	glArrayElementEXT = proc;
	glArrayElementEXT(i);
}

static void APIENTRY InitColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	PFNGLCOLORPOINTEREXTPROC proc;
	proc = (PFNGLCOLORPOINTEREXTPROC)_GetProcAddress("glColorPointerEXT");
	assert(proc != NULL);
	glColorPointerEXT = proc;
	glColorPointerEXT(size, type, stride, count, pointer);
}

static void APIENTRY InitDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
	PFNGLDRAWARRAYSEXTPROC proc;
	proc = (PFNGLDRAWARRAYSEXTPROC)_GetProcAddress("glDrawArraysEXT");
	assert(proc != NULL);
	glDrawArraysEXT = proc;
	glDrawArraysEXT(mode, first, count);
}

static void APIENTRY InitEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean *pointer)
{
	PFNGLEDGEFLAGPOINTEREXTPROC proc;
	proc = (PFNGLEDGEFLAGPOINTEREXTPROC)_GetProcAddress("glEdgeFlagPointerEXT");
	assert(proc != NULL);
	glEdgeFlagPointerEXT = proc;
	glEdgeFlagPointerEXT(stride, count, pointer);
}

static void APIENTRY InitGetPointervEXT(GLenum pname, GLvoid* *params)
{
	PFNGLGETPOINTERVEXTPROC proc;
	proc = (PFNGLGETPOINTERVEXTPROC)_GetProcAddress("glGetPointervEXT");
	assert(proc != NULL);
	glGetPointervEXT = proc;
	glGetPointervEXT(pname, params);
}

static void APIENTRY InitIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	PFNGLINDEXPOINTEREXTPROC proc;
	proc = (PFNGLINDEXPOINTEREXTPROC)_GetProcAddress("glIndexPointerEXT");
	assert(proc != NULL);
	glIndexPointerEXT = proc;
	glIndexPointerEXT(type, stride, count, pointer);
}

static void APIENTRY InitNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	PFNGLNORMALPOINTEREXTPROC proc;
	proc = (PFNGLNORMALPOINTEREXTPROC)_GetProcAddress("glNormalPointerEXT");
	assert(proc != NULL);
	glNormalPointerEXT = proc;
	glNormalPointerEXT(type, stride, count, pointer);
}

static void APIENTRY InitTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	PFNGLTEXCOORDPOINTEREXTPROC proc;
	proc = (PFNGLTEXCOORDPOINTEREXTPROC)_GetProcAddress("glTexCoordPointerEXT");
	assert(proc != NULL);
	glTexCoordPointerEXT = proc;
	glTexCoordPointerEXT(size, type, stride, count, pointer);
}

static void APIENTRY InitVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	PFNGLVERTEXPOINTEREXTPROC proc;
	proc = (PFNGLVERTEXPOINTEREXTPROC)_GetProcAddress("glVertexPointerEXT");
	assert(proc != NULL);
	glVertexPointerEXT = proc;
	glVertexPointerEXT(size, type, stride, count, pointer);
}


/* GL_EXT_misc_attribute */

/* GL_SGIS_generate_mipmap */

/* GL_SGIX_clipmap */

/* GL_SGIX_shadow */

/* GL_SGIS_texture_edge_clamp */

/* GL_SGIS_texture_border_clamp */

/* GL_EXT_blend_minmax */
static void APIENTRY InitBlendEquationEXT(GLenum mode)
{
	PFNGLBLENDEQUATIONEXTPROC proc;
	proc = (PFNGLBLENDEQUATIONEXTPROC)_GetProcAddress("glBlendEquationEXT");
	assert(proc != NULL);
	glBlendEquationEXT = proc;
	glBlendEquationEXT(mode);
}


/* GL_EXT_blend_subtract */

/* GL_EXT_blend_logic_op */

/* GL_SGIX_interlace */

/* GL_SGIX_pixel_tiles */

/* GL_SGIX_texture_select */

/* GL_SGIX_sprite */
static void APIENTRY InitSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
	PFNGLSPRITEPARAMETERFSGIXPROC proc;
	proc = (PFNGLSPRITEPARAMETERFSGIXPROC)_GetProcAddress("glSpriteParameterfSGIX");
	assert(proc != NULL);
	glSpriteParameterfSGIX = proc;
	glSpriteParameterfSGIX(pname, param);
}

static void APIENTRY InitSpriteParameterfvSGIX(GLenum pname, const GLfloat *params)
{
	PFNGLSPRITEPARAMETERFVSGIXPROC proc;
	proc = (PFNGLSPRITEPARAMETERFVSGIXPROC)_GetProcAddress("glSpriteParameterfvSGIX");
	assert(proc != NULL);
	glSpriteParameterfvSGIX = proc;
	glSpriteParameterfvSGIX(pname, params);
}

static void APIENTRY InitSpriteParameteriSGIX(GLenum pname, GLint param)
{
	PFNGLSPRITEPARAMETERISGIXPROC proc;
	proc = (PFNGLSPRITEPARAMETERISGIXPROC)_GetProcAddress("glSpriteParameteriSGIX");
	assert(proc != NULL);
	glSpriteParameteriSGIX = proc;
	glSpriteParameteriSGIX(pname, param);
}

static void APIENTRY InitSpriteParameterivSGIX(GLenum pname, const GLint *params)
{
	PFNGLSPRITEPARAMETERIVSGIXPROC proc;
	proc = (PFNGLSPRITEPARAMETERIVSGIXPROC)_GetProcAddress("glSpriteParameterivSGIX");
	assert(proc != NULL);
	glSpriteParameterivSGIX = proc;
	glSpriteParameterivSGIX(pname, params);
}


/* GL_SGIX_texture_multi_buffer */

/* GL_EXT_point_parameters */
static void APIENTRY InitPointParameterfEXT(GLenum pname, GLfloat param)
{
	PFNGLPOINTPARAMETERFEXTPROC proc;
	proc = (PFNGLPOINTPARAMETERFEXTPROC)_GetProcAddress("glPointParameterfEXT");
	assert(proc != NULL);
	glPointParameterfEXT = proc;
	glPointParameterfEXT(pname, param);
}

static void APIENTRY InitPointParameterfvEXT(GLenum pname, const GLfloat *params)
{
	PFNGLPOINTPARAMETERFVEXTPROC proc;
	proc = (PFNGLPOINTPARAMETERFVEXTPROC)_GetProcAddress("glPointParameterfvEXT");
	assert(proc != NULL);
	glPointParameterfvEXT = proc;
	glPointParameterfvEXT(pname, params);
}


/* GL_SGIS_point_parameters */
static void APIENTRY InitPointParameterfSGIS(GLenum pname, GLfloat param)
{
	PFNGLPOINTPARAMETERFSGISPROC proc;
	proc = (PFNGLPOINTPARAMETERFSGISPROC)_GetProcAddress("glPointParameterfSGIS");
	assert(proc != NULL);
	glPointParameterfSGIS = proc;
	glPointParameterfSGIS(pname, param);
}

static void APIENTRY InitPointParameterfvSGIS(GLenum pname, const GLfloat *params)
{
	PFNGLPOINTPARAMETERFVSGISPROC proc;
	proc = (PFNGLPOINTPARAMETERFVSGISPROC)_GetProcAddress("glPointParameterfvSGIS");
	assert(proc != NULL);
	glPointParameterfvSGIS = proc;
	glPointParameterfvSGIS(pname, params);
}


/* GL_SGIX_instruments */
static GLint APIENTRY InitGetInstrumentsSGIX(void)
{
	PFNGLGETINSTRUMENTSSGIXPROC proc;
	proc = (PFNGLGETINSTRUMENTSSGIXPROC)_GetProcAddress("glGetInstrumentsSGIX");
	assert(proc != NULL);
	glGetInstrumentsSGIX = proc;
	return glGetInstrumentsSGIX();
}

static void APIENTRY InitInstrumentsBufferSGIX(GLsizei size, GLint *buffer)
{
	PFNGLINSTRUMENTSBUFFERSGIXPROC proc;
	proc = (PFNGLINSTRUMENTSBUFFERSGIXPROC)_GetProcAddress("glInstrumentsBufferSGIX");
	assert(proc != NULL);
	glInstrumentsBufferSGIX = proc;
	glInstrumentsBufferSGIX(size, buffer);
}

static GLint APIENTRY InitPollInstrumentsSGIX(GLint *marker_p)
{
	PFNGLPOLLINSTRUMENTSSGIXPROC proc;
	proc = (PFNGLPOLLINSTRUMENTSSGIXPROC)_GetProcAddress("glPollInstrumentsSGIX");
	assert(proc != NULL);
	glPollInstrumentsSGIX = proc;
	return glPollInstrumentsSGIX(marker_p);
}

static void APIENTRY InitReadInstrumentsSGIX(GLint marker)
{
	PFNGLREADINSTRUMENTSSGIXPROC proc;
	proc = (PFNGLREADINSTRUMENTSSGIXPROC)_GetProcAddress("glReadInstrumentsSGIX");
	assert(proc != NULL);
	glReadInstrumentsSGIX = proc;
	glReadInstrumentsSGIX(marker);
}

static void APIENTRY InitStartInstrumentsSGIX(void)
{
	PFNGLSTARTINSTRUMENTSSGIXPROC proc;
	proc = (PFNGLSTARTINSTRUMENTSSGIXPROC)_GetProcAddress("glStartInstrumentsSGIX");
	assert(proc != NULL);
	glStartInstrumentsSGIX = proc;
	glStartInstrumentsSGIX();
}

static void APIENTRY InitStopInstrumentsSGIX(GLint marker)
{
	PFNGLSTOPINSTRUMENTSSGIXPROC proc;
	proc = (PFNGLSTOPINSTRUMENTSSGIXPROC)_GetProcAddress("glStopInstrumentsSGIX");
	assert(proc != NULL);
	glStopInstrumentsSGIX = proc;
	glStopInstrumentsSGIX(marker);
}


/* GL_SGIX_texture_scale_bias */

/* GL_SGIX_framezoom */
static void APIENTRY InitFrameZoomSGIX(GLint factor)
{
	PFNGLFRAMEZOOMSGIXPROC proc;
	proc = (PFNGLFRAMEZOOMSGIXPROC)_GetProcAddress("glFrameZoomSGIX");
	assert(proc != NULL);
	glFrameZoomSGIX = proc;
	glFrameZoomSGIX(factor);
}


/* GL_SGIX_tag_sample_buffer */
static void APIENTRY InitTagSampleBufferSGIX(void)
{
	PFNGLTAGSAMPLEBUFFERSGIXPROC proc;
	proc = (PFNGLTAGSAMPLEBUFFERSGIXPROC)_GetProcAddress("glTagSampleBufferSGIX");
	assert(proc != NULL);
	glTagSampleBufferSGIX = proc;
	glTagSampleBufferSGIX();
}


/* GL_SGIX_polynomial_ffd */
static void APIENTRY InitDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points)
{
	PFNGLDEFORMATIONMAP3DSGIXPROC proc;
	proc = (PFNGLDEFORMATIONMAP3DSGIXPROC)_GetProcAddress("glDeformationMap3dSGIX");
	assert(proc != NULL);
	glDeformationMap3dSGIX = proc;
	glDeformationMap3dSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

static void APIENTRY InitDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points)
{
	PFNGLDEFORMATIONMAP3FSGIXPROC proc;
	proc = (PFNGLDEFORMATIONMAP3FSGIXPROC)_GetProcAddress("glDeformationMap3fSGIX");
	assert(proc != NULL);
	glDeformationMap3fSGIX = proc;
	glDeformationMap3fSGIX(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

static void APIENTRY InitDeformSGIX(GLbitfield mask)
{
	PFNGLDEFORMSGIXPROC proc;
	proc = (PFNGLDEFORMSGIXPROC)_GetProcAddress("glDeformSGIX");
	assert(proc != NULL);
	glDeformSGIX = proc;
	glDeformSGIX(mask);
}

static void APIENTRY InitLoadIdentityDeformationMapSGIX(GLbitfield mask)
{
	PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC proc;
	proc = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)_GetProcAddress("glLoadIdentityDeformationMapSGIX");
	assert(proc != NULL);
	glLoadIdentityDeformationMapSGIX = proc;
	glLoadIdentityDeformationMapSGIX(mask);
}


/* GL_SGIX_reference_plane */
static void APIENTRY InitReferencePlaneSGIX(const GLdouble *equation)
{
	PFNGLREFERENCEPLANESGIXPROC proc;
	proc = (PFNGLREFERENCEPLANESGIXPROC)_GetProcAddress("glReferencePlaneSGIX");
	assert(proc != NULL);
	glReferencePlaneSGIX = proc;
	glReferencePlaneSGIX(equation);
}


/* GL_SGIX_flush_raster */
static void APIENTRY InitFlushRasterSGIX(void)
{
	PFNGLFLUSHRASTERSGIXPROC proc;
	proc = (PFNGLFLUSHRASTERSGIXPROC)_GetProcAddress("glFlushRasterSGIX");
	assert(proc != NULL);
	glFlushRasterSGIX = proc;
	glFlushRasterSGIX();
}


/* GL_SGIX_depth_texture */

/* GL_SGIS_fog_function */
static void APIENTRY InitFogFuncSGIS(GLsizei n, const GLfloat *points)
{
	PFNGLFOGFUNCSGISPROC proc;
	proc = (PFNGLFOGFUNCSGISPROC)_GetProcAddress("glFogFuncSGIS");
	assert(proc != NULL);
	glFogFuncSGIS = proc;
	glFogFuncSGIS(n, points);
}

static void APIENTRY InitGetFogFuncSGIS(GLfloat *points)
{
	PFNGLGETFOGFUNCSGISPROC proc;
	proc = (PFNGLGETFOGFUNCSGISPROC)_GetProcAddress("glGetFogFuncSGIS");
	assert(proc != NULL);
	glGetFogFuncSGIS = proc;
	glGetFogFuncSGIS(points);
}


/* GL_SGIX_fog_offset */

/* GL_HP_image_transform */
static void APIENTRY InitImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
	PFNGLIMAGETRANSFORMPARAMETERIHPPROC proc;
	proc = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)_GetProcAddress("glImageTransformParameteriHP");
	assert(proc != NULL);
	glImageTransformParameteriHP = proc;
	glImageTransformParameteriHP(target, pname, param);
}

static void APIENTRY InitImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
	PFNGLIMAGETRANSFORMPARAMETERFHPPROC proc;
	proc = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)_GetProcAddress("glImageTransformParameterfHP");
	assert(proc != NULL);
	glImageTransformParameterfHP = proc;
	glImageTransformParameterfHP(target, pname, param);
}

static void APIENTRY InitImageTransformParameterivHP(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLIMAGETRANSFORMPARAMETERIVHPPROC proc;
	proc = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)_GetProcAddress("glImageTransformParameterivHP");
	assert(proc != NULL);
	glImageTransformParameterivHP = proc;
	glImageTransformParameterivHP(target, pname, params);
}

static void APIENTRY InitImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLIMAGETRANSFORMPARAMETERFVHPPROC proc;
	proc = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)_GetProcAddress("glImageTransformParameterfvHP");
	assert(proc != NULL);
	glImageTransformParameterfvHP = proc;
	glImageTransformParameterfvHP(target, pname, params);
}

static void APIENTRY InitGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC proc;
	proc = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)_GetProcAddress("glGetImageTransformParameterivHP");
	assert(proc != NULL);
	glGetImageTransformParameterivHP = proc;
	glGetImageTransformParameterivHP(target, pname, params);
}

static void APIENTRY InitGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC proc;
	proc = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)_GetProcAddress("glGetImageTransformParameterfvHP");
	assert(proc != NULL);
	glGetImageTransformParameterfvHP = proc;
	glGetImageTransformParameterfvHP(target, pname, params);
}


/* GL_HP_convolution_border_modes */

/* GL_SGIX_texture_add_env */

/* GL_EXT_color_subtable */
static void APIENTRY InitColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
{
	PFNGLCOLORSUBTABLEEXTPROC proc;
	proc = (PFNGLCOLORSUBTABLEEXTPROC)_GetProcAddress("glColorSubTableEXT");
	assert(proc != NULL);
	glColorSubTableEXT = proc;
	glColorSubTableEXT(target, start, count, format, type, data);
}

static void APIENTRY InitCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	PFNGLCOPYCOLORSUBTABLEEXTPROC proc;
	proc = (PFNGLCOPYCOLORSUBTABLEEXTPROC)_GetProcAddress("glCopyColorSubTableEXT");
	assert(proc != NULL);
	glCopyColorSubTableEXT = proc;
	glCopyColorSubTableEXT(target, start, x, y, width);
}


/* GL_PGI_vertex_hints */

/* GL_PGI_misc_hints */
static void APIENTRY InitHintPGI(GLenum target, GLint mode)
{
	PFNGLHINTPGIPROC proc;
	proc = (PFNGLHINTPGIPROC)_GetProcAddress("glHintPGI");
	assert(proc != NULL);
	glHintPGI = proc;
	glHintPGI(target, mode);
}


/* GL_EXT_paletted_texture */
static void APIENTRY InitColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
{
	PFNGLCOLORTABLEEXTPROC proc;
	proc = (PFNGLCOLORTABLEEXTPROC)_GetProcAddress("glColorTableEXT");
	assert(proc != NULL);
	glColorTableEXT = proc;
	glColorTableEXT(target, internalFormat, width, format, type, table);
}

static void APIENTRY InitGetColorTableEXT(GLenum target, GLenum format, GLenum type, GLvoid *data)
{
	PFNGLGETCOLORTABLEEXTPROC proc;
	proc = (PFNGLGETCOLORTABLEEXTPROC)_GetProcAddress("glGetColorTableEXT");
	assert(proc != NULL);
	glGetColorTableEXT = proc;
	glGetColorTableEXT(target, format, type, data);
}

static void APIENTRY InitGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETCOLORTABLEPARAMETERIVEXTPROC proc;
	proc = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)_GetProcAddress("glGetColorTableParameterivEXT");
	assert(proc != NULL);
	glGetColorTableParameterivEXT = proc;
	glGetColorTableParameterivEXT(target, pname, params);
}

static void APIENTRY InitGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETCOLORTABLEPARAMETERFVEXTPROC proc;
	proc = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)_GetProcAddress("glGetColorTableParameterfvEXT");
	assert(proc != NULL);
	glGetColorTableParameterfvEXT = proc;
	glGetColorTableParameterfvEXT(target, pname, params);
}


/* GL_EXT_clip_volume_hint */

/* GL_SGIX_list_priority */
static void APIENTRY InitGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat *params)
{
	PFNGLGETLISTPARAMETERFVSGIXPROC proc;
	proc = (PFNGLGETLISTPARAMETERFVSGIXPROC)_GetProcAddress("glGetListParameterfvSGIX");
	assert(proc != NULL);
	glGetListParameterfvSGIX = proc;
	glGetListParameterfvSGIX(list, pname, params);
}

static void APIENTRY InitGetListParameterivSGIX(GLuint list, GLenum pname, GLint *params)
{
	PFNGLGETLISTPARAMETERIVSGIXPROC proc;
	proc = (PFNGLGETLISTPARAMETERIVSGIXPROC)_GetProcAddress("glGetListParameterivSGIX");
	assert(proc != NULL);
	glGetListParameterivSGIX = proc;
	glGetListParameterivSGIX(list, pname, params);
}

static void APIENTRY InitListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
	PFNGLLISTPARAMETERFSGIXPROC proc;
	proc = (PFNGLLISTPARAMETERFSGIXPROC)_GetProcAddress("glListParameterfSGIX");
	assert(proc != NULL);
	glListParameterfSGIX = proc;
	glListParameterfSGIX(list, pname, param);
}

static void APIENTRY InitListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat *params)
{
	PFNGLLISTPARAMETERFVSGIXPROC proc;
	proc = (PFNGLLISTPARAMETERFVSGIXPROC)_GetProcAddress("glListParameterfvSGIX");
	assert(proc != NULL);
	glListParameterfvSGIX = proc;
	glListParameterfvSGIX(list, pname, params);
}

static void APIENTRY InitListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
	PFNGLLISTPARAMETERISGIXPROC proc;
	proc = (PFNGLLISTPARAMETERISGIXPROC)_GetProcAddress("glListParameteriSGIX");
	assert(proc != NULL);
	glListParameteriSGIX = proc;
	glListParameteriSGIX(list, pname, param);
}

static void APIENTRY InitListParameterivSGIX(GLuint list, GLenum pname, const GLint *params)
{
	PFNGLLISTPARAMETERIVSGIXPROC proc;
	proc = (PFNGLLISTPARAMETERIVSGIXPROC)_GetProcAddress("glListParameterivSGIX");
	assert(proc != NULL);
	glListParameterivSGIX = proc;
	glListParameterivSGIX(list, pname, params);
}


/* GL_SGIX_ir_instrument1 */

/* GL_SGIX_calligraphic_fragment */

/* GL_SGIX_texture_lod_bias */

/* GL_SGIX_shadow_ambient */

/* GL_EXT_index_texture */

/* GL_EXT_index_material */
static void APIENTRY InitIndexMaterialEXT(GLenum face, GLenum mode)
{
	PFNGLINDEXMATERIALEXTPROC proc;
	proc = (PFNGLINDEXMATERIALEXTPROC)_GetProcAddress("glIndexMaterialEXT");
	assert(proc != NULL);
	glIndexMaterialEXT = proc;
	glIndexMaterialEXT(face, mode);
}


/* GL_EXT_index_func */
static void APIENTRY InitIndexFuncEXT(GLenum func, GLclampf ref)
{
	PFNGLINDEXFUNCEXTPROC proc;
	proc = (PFNGLINDEXFUNCEXTPROC)_GetProcAddress("glIndexFuncEXT");
	assert(proc != NULL);
	glIndexFuncEXT = proc;
	glIndexFuncEXT(func, ref);
}


/* GL_EXT_index_array_formats */

/* GL_EXT_compiled_vertex_array */
static void APIENTRY InitLockArraysEXT(GLint first, GLsizei count)
{
	PFNGLLOCKARRAYSEXTPROC proc;
	proc = (PFNGLLOCKARRAYSEXTPROC)_GetProcAddress("glLockArraysEXT");
	assert(proc != NULL);
	glLockArraysEXT = proc;
	glLockArraysEXT(first, count);
}

static void APIENTRY InitUnlockArraysEXT(void)
{
	PFNGLUNLOCKARRAYSEXTPROC proc;
	proc = (PFNGLUNLOCKARRAYSEXTPROC)_GetProcAddress("glUnlockArraysEXT");
	assert(proc != NULL);
	glUnlockArraysEXT = proc;
	glUnlockArraysEXT();
}


/* GL_EXT_cull_vertex */
static void APIENTRY InitCullParameterdvEXT(GLenum pname, GLdouble *params)
{
	PFNGLCULLPARAMETERDVEXTPROC proc;
	proc = (PFNGLCULLPARAMETERDVEXTPROC)_GetProcAddress("glCullParameterdvEXT");
	assert(proc != NULL);
	glCullParameterdvEXT = proc;
	glCullParameterdvEXT(pname, params);
}

static void APIENTRY InitCullParameterfvEXT(GLenum pname, GLfloat *params)
{
	PFNGLCULLPARAMETERFVEXTPROC proc;
	proc = (PFNGLCULLPARAMETERFVEXTPROC)_GetProcAddress("glCullParameterfvEXT");
	assert(proc != NULL);
	glCullParameterfvEXT = proc;
	glCullParameterfvEXT(pname, params);
}


/* GL_SGIX_ycrcb */

/* GL_SGIX_fragment_lighting */
static void APIENTRY InitFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
	PFNGLFRAGMENTCOLORMATERIALSGIXPROC proc;
	proc = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)_GetProcAddress("glFragmentColorMaterialSGIX");
	assert(proc != NULL);
	glFragmentColorMaterialSGIX = proc;
	glFragmentColorMaterialSGIX(face, mode);
}

static void APIENTRY InitFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
	PFNGLFRAGMENTLIGHTFSGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTFSGIXPROC)_GetProcAddress("glFragmentLightfSGIX");
	assert(proc != NULL);
	glFragmentLightfSGIX = proc;
	glFragmentLightfSGIX(light, pname, param);
}

static void APIENTRY InitFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat *params)
{
	PFNGLFRAGMENTLIGHTFVSGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTFVSGIXPROC)_GetProcAddress("glFragmentLightfvSGIX");
	assert(proc != NULL);
	glFragmentLightfvSGIX = proc;
	glFragmentLightfvSGIX(light, pname, params);
}

static void APIENTRY InitFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
	PFNGLFRAGMENTLIGHTISGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTISGIXPROC)_GetProcAddress("glFragmentLightiSGIX");
	assert(proc != NULL);
	glFragmentLightiSGIX = proc;
	glFragmentLightiSGIX(light, pname, param);
}

static void APIENTRY InitFragmentLightivSGIX(GLenum light, GLenum pname, const GLint *params)
{
	PFNGLFRAGMENTLIGHTIVSGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTIVSGIXPROC)_GetProcAddress("glFragmentLightivSGIX");
	assert(proc != NULL);
	glFragmentLightivSGIX = proc;
	glFragmentLightivSGIX(light, pname, params);
}

static void APIENTRY InitFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
	PFNGLFRAGMENTLIGHTMODELFSGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)_GetProcAddress("glFragmentLightModelfSGIX");
	assert(proc != NULL);
	glFragmentLightModelfSGIX = proc;
	glFragmentLightModelfSGIX(pname, param);
}

static void APIENTRY InitFragmentLightModelfvSGIX(GLenum pname, const GLfloat *params)
{
	PFNGLFRAGMENTLIGHTMODELFVSGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)_GetProcAddress("glFragmentLightModelfvSGIX");
	assert(proc != NULL);
	glFragmentLightModelfvSGIX = proc;
	glFragmentLightModelfvSGIX(pname, params);
}

static void APIENTRY InitFragmentLightModeliSGIX(GLenum pname, GLint param)
{
	PFNGLFRAGMENTLIGHTMODELISGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)_GetProcAddress("glFragmentLightModeliSGIX");
	assert(proc != NULL);
	glFragmentLightModeliSGIX = proc;
	glFragmentLightModeliSGIX(pname, param);
}

static void APIENTRY InitFragmentLightModelivSGIX(GLenum pname, const GLint *params)
{
	PFNGLFRAGMENTLIGHTMODELIVSGIXPROC proc;
	proc = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)_GetProcAddress("glFragmentLightModelivSGIX");
	assert(proc != NULL);
	glFragmentLightModelivSGIX = proc;
	glFragmentLightModelivSGIX(pname, params);
}

static void APIENTRY InitFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
	PFNGLFRAGMENTMATERIALFSGIXPROC proc;
	proc = (PFNGLFRAGMENTMATERIALFSGIXPROC)_GetProcAddress("glFragmentMaterialfSGIX");
	assert(proc != NULL);
	glFragmentMaterialfSGIX = proc;
	glFragmentMaterialfSGIX(face, pname, param);
}

static void APIENTRY InitFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat *params)
{
	PFNGLFRAGMENTMATERIALFVSGIXPROC proc;
	proc = (PFNGLFRAGMENTMATERIALFVSGIXPROC)_GetProcAddress("glFragmentMaterialfvSGIX");
	assert(proc != NULL);
	glFragmentMaterialfvSGIX = proc;
	glFragmentMaterialfvSGIX(face, pname, params);
}

static void APIENTRY InitFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
	PFNGLFRAGMENTMATERIALISGIXPROC proc;
	proc = (PFNGLFRAGMENTMATERIALISGIXPROC)_GetProcAddress("glFragmentMaterialiSGIX");
	assert(proc != NULL);
	glFragmentMaterialiSGIX = proc;
	glFragmentMaterialiSGIX(face, pname, param);
}

static void APIENTRY InitFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint *params)
{
	PFNGLFRAGMENTMATERIALIVSGIXPROC proc;
	proc = (PFNGLFRAGMENTMATERIALIVSGIXPROC)_GetProcAddress("glFragmentMaterialivSGIX");
	assert(proc != NULL);
	glFragmentMaterialivSGIX = proc;
	glFragmentMaterialivSGIX(face, pname, params);
}

static void APIENTRY InitGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat *params)
{
	PFNGLGETFRAGMENTLIGHTFVSGIXPROC proc;
	proc = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)_GetProcAddress("glGetFragmentLightfvSGIX");
	assert(proc != NULL);
	glGetFragmentLightfvSGIX = proc;
	glGetFragmentLightfvSGIX(light, pname, params);
}

static void APIENTRY InitGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint *params)
{
	PFNGLGETFRAGMENTLIGHTIVSGIXPROC proc;
	proc = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)_GetProcAddress("glGetFragmentLightivSGIX");
	assert(proc != NULL);
	glGetFragmentLightivSGIX = proc;
	glGetFragmentLightivSGIX(light, pname, params);
}

static void APIENTRY InitGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat *params)
{
	PFNGLGETFRAGMENTMATERIALFVSGIXPROC proc;
	proc = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)_GetProcAddress("glGetFragmentMaterialfvSGIX");
	assert(proc != NULL);
	glGetFragmentMaterialfvSGIX = proc;
	glGetFragmentMaterialfvSGIX(face, pname, params);
}

static void APIENTRY InitGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint *params)
{
	PFNGLGETFRAGMENTMATERIALIVSGIXPROC proc;
	proc = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)_GetProcAddress("glGetFragmentMaterialivSGIX");
	assert(proc != NULL);
	glGetFragmentMaterialivSGIX = proc;
	glGetFragmentMaterialivSGIX(face, pname, params);
}

static void APIENTRY InitLightEnviSGIX(GLenum pname, GLint param)
{
	PFNGLLIGHTENVISGIXPROC proc;
	proc = (PFNGLLIGHTENVISGIXPROC)_GetProcAddress("glLightEnviSGIX");
	assert(proc != NULL);
	glLightEnviSGIX = proc;
	glLightEnviSGIX(pname, param);
}


/* GL_IBM_rasterpos_clip */

/* GL_HP_texture_lighting */

/* GL_EXT_draw_range_elements */
static void APIENTRY InitDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
	PFNGLDRAWRANGEELEMENTSEXTPROC proc;
	proc = (PFNGLDRAWRANGEELEMENTSEXTPROC)_GetProcAddress("glDrawRangeElementsEXT");
	assert(proc != NULL);
	glDrawRangeElementsEXT = proc;
	glDrawRangeElementsEXT(mode, start, end, count, type, indices);
}


/* GL_WIN_phong_shading */

/* GL_WIN_specular_fog */

/* GL_EXT_light_texture */
static void APIENTRY InitApplyTextureEXT(GLenum mode)
{
	PFNGLAPPLYTEXTUREEXTPROC proc;
	proc = (PFNGLAPPLYTEXTUREEXTPROC)_GetProcAddress("glApplyTextureEXT");
	assert(proc != NULL);
	glApplyTextureEXT = proc;
	glApplyTextureEXT(mode);
}

static void APIENTRY InitTextureLightEXT(GLenum pname)
{
	PFNGLTEXTURELIGHTEXTPROC proc;
	proc = (PFNGLTEXTURELIGHTEXTPROC)_GetProcAddress("glTextureLightEXT");
	assert(proc != NULL);
	glTextureLightEXT = proc;
	glTextureLightEXT(pname);
}

static void APIENTRY InitTextureMaterialEXT(GLenum face, GLenum mode)
{
	PFNGLTEXTUREMATERIALEXTPROC proc;
	proc = (PFNGLTEXTUREMATERIALEXTPROC)_GetProcAddress("glTextureMaterialEXT");
	assert(proc != NULL);
	glTextureMaterialEXT = proc;
	glTextureMaterialEXT(face, mode);
}


/* GL_SGIX_blend_alpha_minmax */

/* GL_EXT_bgra */

/* GL_SGIX_async */
static void APIENTRY InitAsyncMarkerSGIX(GLuint marker)
{
	PFNGLASYNCMARKERSGIXPROC proc;
	proc = (PFNGLASYNCMARKERSGIXPROC)_GetProcAddress("glAsyncMarkerSGIX");
	assert(proc != NULL);
	glAsyncMarkerSGIX = proc;
	glAsyncMarkerSGIX(marker);
}

static GLint APIENTRY InitFinishAsyncSGIX(GLuint *markerp)
{
	PFNGLFINISHASYNCSGIXPROC proc;
	proc = (PFNGLFINISHASYNCSGIXPROC)_GetProcAddress("glFinishAsyncSGIX");
	assert(proc != NULL);
	glFinishAsyncSGIX = proc;
	return glFinishAsyncSGIX(markerp);
}

static GLint APIENTRY InitPollAsyncSGIX(GLuint *markerp)
{
	PFNGLPOLLASYNCSGIXPROC proc;
	proc = (PFNGLPOLLASYNCSGIXPROC)_GetProcAddress("glPollAsyncSGIX");
	assert(proc != NULL);
	glPollAsyncSGIX = proc;
	return glPollAsyncSGIX(markerp);
}

static GLuint APIENTRY InitGenAsyncMarkersSGIX(GLsizei range)
{
	PFNGLGENASYNCMARKERSSGIXPROC proc;
	proc = (PFNGLGENASYNCMARKERSSGIXPROC)_GetProcAddress("glGenAsyncMarkersSGIX");
	assert(proc != NULL);
	glGenAsyncMarkersSGIX = proc;
	return glGenAsyncMarkersSGIX(range);
}

static void APIENTRY InitDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
	PFNGLDELETEASYNCMARKERSSGIXPROC proc;
	proc = (PFNGLDELETEASYNCMARKERSSGIXPROC)_GetProcAddress("glDeleteAsyncMarkersSGIX");
	assert(proc != NULL);
	glDeleteAsyncMarkersSGIX = proc;
	glDeleteAsyncMarkersSGIX(marker, range);
}

static GLboolean APIENTRY InitIsAsyncMarkerSGIX(GLuint marker)
{
	PFNGLISASYNCMARKERSGIXPROC proc;
	proc = (PFNGLISASYNCMARKERSGIXPROC)_GetProcAddress("glIsAsyncMarkerSGIX");
	assert(proc != NULL);
	glIsAsyncMarkerSGIX = proc;
	return glIsAsyncMarkerSGIX(marker);
}


/* GL_SGIX_async_pixel */

/* GL_SGIX_async_histogram */

/* GL_INTEL_parallel_arrays */
static void APIENTRY InitVertexPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
{
	PFNGLVERTEXPOINTERVINTELPROC proc;
	proc = (PFNGLVERTEXPOINTERVINTELPROC)_GetProcAddress("glVertexPointervINTEL");
	assert(proc != NULL);
	glVertexPointervINTEL = proc;
	glVertexPointervINTEL(size, type, pointer);
}

static void APIENTRY InitNormalPointervINTEL(GLenum type, const GLvoid* *pointer)
{
	PFNGLNORMALPOINTERVINTELPROC proc;
	proc = (PFNGLNORMALPOINTERVINTELPROC)_GetProcAddress("glNormalPointervINTEL");
	assert(proc != NULL);
	glNormalPointervINTEL = proc;
	glNormalPointervINTEL(type, pointer);
}

static void APIENTRY InitColorPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
{
	PFNGLCOLORPOINTERVINTELPROC proc;
	proc = (PFNGLCOLORPOINTERVINTELPROC)_GetProcAddress("glColorPointervINTEL");
	assert(proc != NULL);
	glColorPointervINTEL = proc;
	glColorPointervINTEL(size, type, pointer);
}

static void APIENTRY InitTexCoordPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
{
	PFNGLTEXCOORDPOINTERVINTELPROC proc;
	proc = (PFNGLTEXCOORDPOINTERVINTELPROC)_GetProcAddress("glTexCoordPointervINTEL");
	assert(proc != NULL);
	glTexCoordPointervINTEL = proc;
	glTexCoordPointervINTEL(size, type, pointer);
}


/* GL_HP_occlusion_test */

/* GL_EXT_pixel_transform */
static void APIENTRY InitPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
	PFNGLPIXELTRANSFORMPARAMETERIEXTPROC proc;
	proc = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)_GetProcAddress("glPixelTransformParameteriEXT");
	assert(proc != NULL);
	glPixelTransformParameteriEXT = proc;
	glPixelTransformParameteriEXT(target, pname, param);
}

static void APIENTRY InitPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
	PFNGLPIXELTRANSFORMPARAMETERFEXTPROC proc;
	proc = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)_GetProcAddress("glPixelTransformParameterfEXT");
	assert(proc != NULL);
	glPixelTransformParameterfEXT = proc;
	glPixelTransformParameterfEXT(target, pname, param);
}

static void APIENTRY InitPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC proc;
	proc = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)_GetProcAddress("glPixelTransformParameterivEXT");
	assert(proc != NULL);
	glPixelTransformParameterivEXT = proc;
	glPixelTransformParameterivEXT(target, pname, params);
}

static void APIENTRY InitPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC proc;
	proc = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)_GetProcAddress("glPixelTransformParameterfvEXT");
	assert(proc != NULL);
	glPixelTransformParameterfvEXT = proc;
	glPixelTransformParameterfvEXT(target, pname, params);
}


/* GL_EXT_pixel_transform_color_table */

/* GL_EXT_shared_texture_palette */

/* GL_EXT_separate_specular_color */

/* GL_EXT_secondary_color */
static void APIENTRY InitSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
	PFNGLSECONDARYCOLOR3BEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3BEXTPROC)_GetProcAddress("glSecondaryColor3bEXT");
	assert(proc != NULL);
	glSecondaryColor3bEXT = proc;
	glSecondaryColor3bEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3bvEXT(const GLbyte *v)
{
	PFNGLSECONDARYCOLOR3BVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3BVEXTPROC)_GetProcAddress("glSecondaryColor3bvEXT");
	assert(proc != NULL);
	glSecondaryColor3bvEXT = proc;
	glSecondaryColor3bvEXT(v);
}

static void APIENTRY InitSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
	PFNGLSECONDARYCOLOR3DEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3DEXTPROC)_GetProcAddress("glSecondaryColor3dEXT");
	assert(proc != NULL);
	glSecondaryColor3dEXT = proc;
	glSecondaryColor3dEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3dvEXT(const GLdouble *v)
{
	PFNGLSECONDARYCOLOR3DVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3DVEXTPROC)_GetProcAddress("glSecondaryColor3dvEXT");
	assert(proc != NULL);
	glSecondaryColor3dvEXT = proc;
	glSecondaryColor3dvEXT(v);
}

static void APIENTRY InitSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
	PFNGLSECONDARYCOLOR3FEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3FEXTPROC)_GetProcAddress("glSecondaryColor3fEXT");
	assert(proc != NULL);
	glSecondaryColor3fEXT = proc;
	glSecondaryColor3fEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3fvEXT(const GLfloat *v)
{
	PFNGLSECONDARYCOLOR3FVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3FVEXTPROC)_GetProcAddress("glSecondaryColor3fvEXT");
	assert(proc != NULL);
	glSecondaryColor3fvEXT = proc;
	glSecondaryColor3fvEXT(v);
}

static void APIENTRY InitSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
	PFNGLSECONDARYCOLOR3IEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3IEXTPROC)_GetProcAddress("glSecondaryColor3iEXT");
	assert(proc != NULL);
	glSecondaryColor3iEXT = proc;
	glSecondaryColor3iEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3ivEXT(const GLint *v)
{
	PFNGLSECONDARYCOLOR3IVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3IVEXTPROC)_GetProcAddress("glSecondaryColor3ivEXT");
	assert(proc != NULL);
	glSecondaryColor3ivEXT = proc;
	glSecondaryColor3ivEXT(v);
}

static void APIENTRY InitSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
	PFNGLSECONDARYCOLOR3SEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3SEXTPROC)_GetProcAddress("glSecondaryColor3sEXT");
	assert(proc != NULL);
	glSecondaryColor3sEXT = proc;
	glSecondaryColor3sEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3svEXT(const GLshort *v)
{
	PFNGLSECONDARYCOLOR3SVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3SVEXTPROC)_GetProcAddress("glSecondaryColor3svEXT");
	assert(proc != NULL);
	glSecondaryColor3svEXT = proc;
	glSecondaryColor3svEXT(v);
}

static void APIENTRY InitSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
	PFNGLSECONDARYCOLOR3UBEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UBEXTPROC)_GetProcAddress("glSecondaryColor3ubEXT");
	assert(proc != NULL);
	glSecondaryColor3ubEXT = proc;
	glSecondaryColor3ubEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3ubvEXT(const GLubyte *v)
{
	PFNGLSECONDARYCOLOR3UBVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UBVEXTPROC)_GetProcAddress("glSecondaryColor3ubvEXT");
	assert(proc != NULL);
	glSecondaryColor3ubvEXT = proc;
	glSecondaryColor3ubvEXT(v);
}

static void APIENTRY InitSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
	PFNGLSECONDARYCOLOR3UIEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UIEXTPROC)_GetProcAddress("glSecondaryColor3uiEXT");
	assert(proc != NULL);
	glSecondaryColor3uiEXT = proc;
	glSecondaryColor3uiEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3uivEXT(const GLuint *v)
{
	PFNGLSECONDARYCOLOR3UIVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3UIVEXTPROC)_GetProcAddress("glSecondaryColor3uivEXT");
	assert(proc != NULL);
	glSecondaryColor3uivEXT = proc;
	glSecondaryColor3uivEXT(v);
}

static void APIENTRY InitSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
	PFNGLSECONDARYCOLOR3USEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3USEXTPROC)_GetProcAddress("glSecondaryColor3usEXT");
	assert(proc != NULL);
	glSecondaryColor3usEXT = proc;
	glSecondaryColor3usEXT(red, green, blue);
}

static void APIENTRY InitSecondaryColor3usvEXT(const GLushort *v)
{
	PFNGLSECONDARYCOLOR3USVEXTPROC proc;
	proc = (PFNGLSECONDARYCOLOR3USVEXTPROC)_GetProcAddress("glSecondaryColor3usvEXT");
	assert(proc != NULL);
	glSecondaryColor3usvEXT = proc;
	glSecondaryColor3usvEXT(v);
}

static void APIENTRY InitSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLSECONDARYCOLORPOINTEREXTPROC proc;
	proc = (PFNGLSECONDARYCOLORPOINTEREXTPROC)_GetProcAddress("glSecondaryColorPointerEXT");
	assert(proc != NULL);
	glSecondaryColorPointerEXT = proc;
	glSecondaryColorPointerEXT(size, type, stride, pointer);
}


/* GL_EXT_texture_perturb_normal */
static void APIENTRY InitTextureNormalEXT(GLenum mode)
{
	PFNGLTEXTURENORMALEXTPROC proc;
	proc = (PFNGLTEXTURENORMALEXTPROC)_GetProcAddress("glTextureNormalEXT");
	assert(proc != NULL);
	glTextureNormalEXT = proc;
	glTextureNormalEXT(mode);
}


/* GL_EXT_multi_draw_arrays */
static void APIENTRY InitMultiDrawArraysEXT(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount)
{
	PFNGLMULTIDRAWARRAYSEXTPROC proc;
	proc = (PFNGLMULTIDRAWARRAYSEXTPROC)_GetProcAddress("glMultiDrawArraysEXT");
	assert(proc != NULL);
	glMultiDrawArraysEXT = proc;
	glMultiDrawArraysEXT(mode, first, count, primcount);
}

static void APIENTRY InitMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
{
	PFNGLMULTIDRAWELEMENTSEXTPROC proc;
	proc = (PFNGLMULTIDRAWELEMENTSEXTPROC)_GetProcAddress("glMultiDrawElementsEXT");
	assert(proc != NULL);
	glMultiDrawElementsEXT = proc;
	glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}


/* GL_EXT_fog_coord */
static void APIENTRY InitFogCoordfEXT(GLfloat coord)
{
	PFNGLFOGCOORDFEXTPROC proc;
	proc = (PFNGLFOGCOORDFEXTPROC)_GetProcAddress("glFogCoordfEXT");
	assert(proc != NULL);
	glFogCoordfEXT = proc;
	glFogCoordfEXT(coord);
}

static void APIENTRY InitFogCoordfvEXT(const GLfloat *coord)
{
	PFNGLFOGCOORDFVEXTPROC proc;
	proc = (PFNGLFOGCOORDFVEXTPROC)_GetProcAddress("glFogCoordfvEXT");
	assert(proc != NULL);
	glFogCoordfvEXT = proc;
	glFogCoordfvEXT(coord);
}

static void APIENTRY InitFogCoorddEXT(GLdouble coord)
{
	PFNGLFOGCOORDDEXTPROC proc;
	proc = (PFNGLFOGCOORDDEXTPROC)_GetProcAddress("glFogCoorddEXT");
	assert(proc != NULL);
	glFogCoorddEXT = proc;
	glFogCoorddEXT(coord);
}

static void APIENTRY InitFogCoorddvEXT(const GLdouble *coord)
{
	PFNGLFOGCOORDDVEXTPROC proc;
	proc = (PFNGLFOGCOORDDVEXTPROC)_GetProcAddress("glFogCoorddvEXT");
	assert(proc != NULL);
	glFogCoorddvEXT = proc;
	glFogCoorddvEXT(coord);
}

static void APIENTRY InitFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLFOGCOORDPOINTEREXTPROC proc;
	proc = (PFNGLFOGCOORDPOINTEREXTPROC)_GetProcAddress("glFogCoordPointerEXT");
	assert(proc != NULL);
	glFogCoordPointerEXT = proc;
	glFogCoordPointerEXT(type, stride, pointer);
}


/* GL_REND_screen_coordinates */

/* GL_EXT_coordinate_frame */
static void APIENTRY InitTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
	PFNGLTANGENT3BEXTPROC proc;
	proc = (PFNGLTANGENT3BEXTPROC)_GetProcAddress("glTangent3bEXT");
	assert(proc != NULL);
	glTangent3bEXT = proc;
	glTangent3bEXT(tx, ty, tz);
}

static void APIENTRY InitTangent3bvEXT(const GLbyte *v)
{
	PFNGLTANGENT3BVEXTPROC proc;
	proc = (PFNGLTANGENT3BVEXTPROC)_GetProcAddress("glTangent3bvEXT");
	assert(proc != NULL);
	glTangent3bvEXT = proc;
	glTangent3bvEXT(v);
}

static void APIENTRY InitTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
	PFNGLTANGENT3DEXTPROC proc;
	proc = (PFNGLTANGENT3DEXTPROC)_GetProcAddress("glTangent3dEXT");
	assert(proc != NULL);
	glTangent3dEXT = proc;
	glTangent3dEXT(tx, ty, tz);
}

static void APIENTRY InitTangent3dvEXT(const GLdouble *v)
{
	PFNGLTANGENT3DVEXTPROC proc;
	proc = (PFNGLTANGENT3DVEXTPROC)_GetProcAddress("glTangent3dvEXT");
	assert(proc != NULL);
	glTangent3dvEXT = proc;
	glTangent3dvEXT(v);
}

static void APIENTRY InitTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
	PFNGLTANGENT3FEXTPROC proc;
	proc = (PFNGLTANGENT3FEXTPROC)_GetProcAddress("glTangent3fEXT");
	assert(proc != NULL);
	glTangent3fEXT = proc;
	glTangent3fEXT(tx, ty, tz);
}

static void APIENTRY InitTangent3fvEXT(const GLfloat *v)
{
	PFNGLTANGENT3FVEXTPROC proc;
	proc = (PFNGLTANGENT3FVEXTPROC)_GetProcAddress("glTangent3fvEXT");
	assert(proc != NULL);
	glTangent3fvEXT = proc;
	glTangent3fvEXT(v);
}

static void APIENTRY InitTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
	PFNGLTANGENT3IEXTPROC proc;
	proc = (PFNGLTANGENT3IEXTPROC)_GetProcAddress("glTangent3iEXT");
	assert(proc != NULL);
	glTangent3iEXT = proc;
	glTangent3iEXT(tx, ty, tz);
}

static void APIENTRY InitTangent3ivEXT(const GLint *v)
{
	PFNGLTANGENT3IVEXTPROC proc;
	proc = (PFNGLTANGENT3IVEXTPROC)_GetProcAddress("glTangent3ivEXT");
	assert(proc != NULL);
	glTangent3ivEXT = proc;
	glTangent3ivEXT(v);
}

static void APIENTRY InitTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
	PFNGLTANGENT3SEXTPROC proc;
	proc = (PFNGLTANGENT3SEXTPROC)_GetProcAddress("glTangent3sEXT");
	assert(proc != NULL);
	glTangent3sEXT = proc;
	glTangent3sEXT(tx, ty, tz);
}

static void APIENTRY InitTangent3svEXT(const GLshort *v)
{
	PFNGLTANGENT3SVEXTPROC proc;
	proc = (PFNGLTANGENT3SVEXTPROC)_GetProcAddress("glTangent3svEXT");
	assert(proc != NULL);
	glTangent3svEXT = proc;
	glTangent3svEXT(v);
}

static void APIENTRY InitBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
	PFNGLBINORMAL3BEXTPROC proc;
	proc = (PFNGLBINORMAL3BEXTPROC)_GetProcAddress("glBinormal3bEXT");
	assert(proc != NULL);
	glBinormal3bEXT = proc;
	glBinormal3bEXT(bx, by, bz);
}

static void APIENTRY InitBinormal3bvEXT(const GLbyte *v)
{
	PFNGLBINORMAL3BVEXTPROC proc;
	proc = (PFNGLBINORMAL3BVEXTPROC)_GetProcAddress("glBinormal3bvEXT");
	assert(proc != NULL);
	glBinormal3bvEXT = proc;
	glBinormal3bvEXT(v);
}

static void APIENTRY InitBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
	PFNGLBINORMAL3DEXTPROC proc;
	proc = (PFNGLBINORMAL3DEXTPROC)_GetProcAddress("glBinormal3dEXT");
	assert(proc != NULL);
	glBinormal3dEXT = proc;
	glBinormal3dEXT(bx, by, bz);
}

static void APIENTRY InitBinormal3dvEXT(const GLdouble *v)
{
	PFNGLBINORMAL3DVEXTPROC proc;
	proc = (PFNGLBINORMAL3DVEXTPROC)_GetProcAddress("glBinormal3dvEXT");
	assert(proc != NULL);
	glBinormal3dvEXT = proc;
	glBinormal3dvEXT(v);
}

static void APIENTRY InitBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
	PFNGLBINORMAL3FEXTPROC proc;
	proc = (PFNGLBINORMAL3FEXTPROC)_GetProcAddress("glBinormal3fEXT");
	assert(proc != NULL);
	glBinormal3fEXT = proc;
	glBinormal3fEXT(bx, by, bz);
}

static void APIENTRY InitBinormal3fvEXT(const GLfloat *v)
{
	PFNGLBINORMAL3FVEXTPROC proc;
	proc = (PFNGLBINORMAL3FVEXTPROC)_GetProcAddress("glBinormal3fvEXT");
	assert(proc != NULL);
	glBinormal3fvEXT = proc;
	glBinormal3fvEXT(v);
}

static void APIENTRY InitBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
	PFNGLBINORMAL3IEXTPROC proc;
	proc = (PFNGLBINORMAL3IEXTPROC)_GetProcAddress("glBinormal3iEXT");
	assert(proc != NULL);
	glBinormal3iEXT = proc;
	glBinormal3iEXT(bx, by, bz);
}

static void APIENTRY InitBinormal3ivEXT(const GLint *v)
{
	PFNGLBINORMAL3IVEXTPROC proc;
	proc = (PFNGLBINORMAL3IVEXTPROC)_GetProcAddress("glBinormal3ivEXT");
	assert(proc != NULL);
	glBinormal3ivEXT = proc;
	glBinormal3ivEXT(v);
}

static void APIENTRY InitBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
	PFNGLBINORMAL3SEXTPROC proc;
	proc = (PFNGLBINORMAL3SEXTPROC)_GetProcAddress("glBinormal3sEXT");
	assert(proc != NULL);
	glBinormal3sEXT = proc;
	glBinormal3sEXT(bx, by, bz);
}

static void APIENTRY InitBinormal3svEXT(const GLshort *v)
{
	PFNGLBINORMAL3SVEXTPROC proc;
	proc = (PFNGLBINORMAL3SVEXTPROC)_GetProcAddress("glBinormal3svEXT");
	assert(proc != NULL);
	glBinormal3svEXT = proc;
	glBinormal3svEXT(v);
}

static void APIENTRY InitTangentPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLTANGENTPOINTEREXTPROC proc;
	proc = (PFNGLTANGENTPOINTEREXTPROC)_GetProcAddress("glTangentPointerEXT");
	assert(proc != NULL);
	glTangentPointerEXT = proc;
	glTangentPointerEXT(type, stride, pointer);
}

static void APIENTRY InitBinormalPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLBINORMALPOINTEREXTPROC proc;
	proc = (PFNGLBINORMALPOINTEREXTPROC)_GetProcAddress("glBinormalPointerEXT");
	assert(proc != NULL);
	glBinormalPointerEXT = proc;
	glBinormalPointerEXT(type, stride, pointer);
}


/* GL_EXT_texture_env_combine */

/* GL_APPLE_specular_vector */

/* GL_APPLE_transform_hint */

/* GL_SGIX_fog_scale */

/* GL_SUNX_constant_data */
static void APIENTRY InitFinishTextureSUNX(void)
{
	PFNGLFINISHTEXTURESUNXPROC proc;
	proc = (PFNGLFINISHTEXTURESUNXPROC)_GetProcAddress("glFinishTextureSUNX");
	assert(proc != NULL);
	glFinishTextureSUNX = proc;
	glFinishTextureSUNX();
}


/* GL_SUN_global_alpha */
static void APIENTRY InitGlobalAlphaFactorbSUN(GLbyte factor)
{
	PFNGLGLOBALALPHAFACTORBSUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORBSUNPROC)_GetProcAddress("glGlobalAlphaFactorbSUN");
	assert(proc != NULL);
	glGlobalAlphaFactorbSUN = proc;
	glGlobalAlphaFactorbSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactorsSUN(GLshort factor)
{
	PFNGLGLOBALALPHAFACTORSSUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORSSUNPROC)_GetProcAddress("glGlobalAlphaFactorsSUN");
	assert(proc != NULL);
	glGlobalAlphaFactorsSUN = proc;
	glGlobalAlphaFactorsSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactoriSUN(GLint factor)
{
	PFNGLGLOBALALPHAFACTORISUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORISUNPROC)_GetProcAddress("glGlobalAlphaFactoriSUN");
	assert(proc != NULL);
	glGlobalAlphaFactoriSUN = proc;
	glGlobalAlphaFactoriSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactorfSUN(GLfloat factor)
{
	PFNGLGLOBALALPHAFACTORFSUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORFSUNPROC)_GetProcAddress("glGlobalAlphaFactorfSUN");
	assert(proc != NULL);
	glGlobalAlphaFactorfSUN = proc;
	glGlobalAlphaFactorfSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactordSUN(GLdouble factor)
{
	PFNGLGLOBALALPHAFACTORDSUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORDSUNPROC)_GetProcAddress("glGlobalAlphaFactordSUN");
	assert(proc != NULL);
	glGlobalAlphaFactordSUN = proc;
	glGlobalAlphaFactordSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactorubSUN(GLubyte factor)
{
	PFNGLGLOBALALPHAFACTORUBSUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORUBSUNPROC)_GetProcAddress("glGlobalAlphaFactorubSUN");
	assert(proc != NULL);
	glGlobalAlphaFactorubSUN = proc;
	glGlobalAlphaFactorubSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactorusSUN(GLushort factor)
{
	PFNGLGLOBALALPHAFACTORUSSUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORUSSUNPROC)_GetProcAddress("glGlobalAlphaFactorusSUN");
	assert(proc != NULL);
	glGlobalAlphaFactorusSUN = proc;
	glGlobalAlphaFactorusSUN(factor);
}

static void APIENTRY InitGlobalAlphaFactoruiSUN(GLuint factor)
{
	PFNGLGLOBALALPHAFACTORUISUNPROC proc;
	proc = (PFNGLGLOBALALPHAFACTORUISUNPROC)_GetProcAddress("glGlobalAlphaFactoruiSUN");
	assert(proc != NULL);
	glGlobalAlphaFactoruiSUN = proc;
	glGlobalAlphaFactoruiSUN(factor);
}


/* GL_SUN_triangle_list */
static void APIENTRY InitReplacementCodeuiSUN(GLuint code)
{
	PFNGLREPLACEMENTCODEUISUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUISUNPROC)_GetProcAddress("glReplacementCodeuiSUN");
	assert(proc != NULL);
	glReplacementCodeuiSUN = proc;
	glReplacementCodeuiSUN(code);
}

static void APIENTRY InitReplacementCodeusSUN(GLushort code)
{
	PFNGLREPLACEMENTCODEUSSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUSSUNPROC)_GetProcAddress("glReplacementCodeusSUN");
	assert(proc != NULL);
	glReplacementCodeusSUN = proc;
	glReplacementCodeusSUN(code);
}

static void APIENTRY InitReplacementCodeubSUN(GLubyte code)
{
	PFNGLREPLACEMENTCODEUBSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUBSUNPROC)_GetProcAddress("glReplacementCodeubSUN");
	assert(proc != NULL);
	glReplacementCodeubSUN = proc;
	glReplacementCodeubSUN(code);
}

static void APIENTRY InitReplacementCodeuivSUN(const GLuint *code)
{
	PFNGLREPLACEMENTCODEUIVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUIVSUNPROC)_GetProcAddress("glReplacementCodeuivSUN");
	assert(proc != NULL);
	glReplacementCodeuivSUN = proc;
	glReplacementCodeuivSUN(code);
}

static void APIENTRY InitReplacementCodeusvSUN(const GLushort *code)
{
	PFNGLREPLACEMENTCODEUSVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUSVSUNPROC)_GetProcAddress("glReplacementCodeusvSUN");
	assert(proc != NULL);
	glReplacementCodeusvSUN = proc;
	glReplacementCodeusvSUN(code);
}

static void APIENTRY InitReplacementCodeubvSUN(const GLubyte *code)
{
	PFNGLREPLACEMENTCODEUBVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUBVSUNPROC)_GetProcAddress("glReplacementCodeubvSUN");
	assert(proc != NULL);
	glReplacementCodeubvSUN = proc;
	glReplacementCodeubvSUN(code);
}

static void APIENTRY InitReplacementCodePointerSUN(GLenum type, GLsizei stride, const GLvoid* *pointer)
{
	PFNGLREPLACEMENTCODEPOINTERSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)_GetProcAddress("glReplacementCodePointerSUN");
	assert(proc != NULL);
	glReplacementCodePointerSUN = proc;
	glReplacementCodePointerSUN(type, stride, pointer);
}


/* GL_SUN_vertex */
static void APIENTRY InitColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
	PFNGLCOLOR4UBVERTEX2FSUNPROC proc;
	proc = (PFNGLCOLOR4UBVERTEX2FSUNPROC)_GetProcAddress("glColor4ubVertex2fSUN");
	assert(proc != NULL);
	glColor4ubVertex2fSUN = proc;
	glColor4ubVertex2fSUN(r, g, b, a, x, y);
}

static void APIENTRY InitColor4ubVertex2fvSUN(const GLubyte *c, const GLfloat *v)
{
	PFNGLCOLOR4UBVERTEX2FVSUNPROC proc;
	proc = (PFNGLCOLOR4UBVERTEX2FVSUNPROC)_GetProcAddress("glColor4ubVertex2fvSUN");
	assert(proc != NULL);
	glColor4ubVertex2fvSUN = proc;
	glColor4ubVertex2fvSUN(c, v);
}

static void APIENTRY InitColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLCOLOR4UBVERTEX3FSUNPROC proc;
	proc = (PFNGLCOLOR4UBVERTEX3FSUNPROC)_GetProcAddress("glColor4ubVertex3fSUN");
	assert(proc != NULL);
	glColor4ubVertex3fSUN = proc;
	glColor4ubVertex3fSUN(r, g, b, a, x, y, z);
}

static void APIENTRY InitColor4ubVertex3fvSUN(const GLubyte *c, const GLfloat *v)
{
	PFNGLCOLOR4UBVERTEX3FVSUNPROC proc;
	proc = (PFNGLCOLOR4UBVERTEX3FVSUNPROC)_GetProcAddress("glColor4ubVertex3fvSUN");
	assert(proc != NULL);
	glColor4ubVertex3fvSUN = proc;
	glColor4ubVertex3fvSUN(c, v);
}

static void APIENTRY InitColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLCOLOR3FVERTEX3FSUNPROC proc;
	proc = (PFNGLCOLOR3FVERTEX3FSUNPROC)_GetProcAddress("glColor3fVertex3fSUN");
	assert(proc != NULL);
	glColor3fVertex3fSUN = proc;
	glColor3fVertex3fSUN(r, g, b, x, y, z);
}

static void APIENTRY InitColor3fVertex3fvSUN(const GLfloat *c, const GLfloat *v)
{
	PFNGLCOLOR3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLCOLOR3FVERTEX3FVSUNPROC)_GetProcAddress("glColor3fVertex3fvSUN");
	assert(proc != NULL);
	glColor3fVertex3fvSUN = proc;
	glColor3fVertex3fvSUN(c, v);
}

static void APIENTRY InitNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glNormal3fVertex3fSUN");
	assert(proc != NULL);
	glNormal3fVertex3fSUN = proc;
	glNormal3fVertex3fSUN(nx, ny, nz, x, y, z);
}

static void APIENTRY InitNormal3fVertex3fvSUN(const GLfloat *n, const GLfloat *v)
{
	PFNGLNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glNormal3fVertex3fvSUN = proc;
	glNormal3fVertex3fvSUN(n, v);
}

static void APIENTRY InitColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glColor4fNormal3fVertex3fSUN");
	assert(proc != NULL);
	glColor4fNormal3fVertex3fSUN = proc;
	glColor4fNormal3fVertex3fSUN(r, g, b, a, nx, ny, nz, x, y, z);
}

static void APIENTRY InitColor4fNormal3fVertex3fvSUN(const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glColor4fNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glColor4fNormal3fVertex3fvSUN = proc;
	glColor4fNormal3fVertex3fvSUN(c, n, v);
}

static void APIENTRY InitTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLTEXCOORD2FVERTEX3FSUNPROC proc;
	proc = (PFNGLTEXCOORD2FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fVertex3fSUN");
	assert(proc != NULL);
	glTexCoord2fVertex3fSUN = proc;
	glTexCoord2fVertex3fSUN(s, t, x, y, z);
}

static void APIENTRY InitTexCoord2fVertex3fvSUN(const GLfloat *tc, const GLfloat *v)
{
	PFNGLTEXCOORD2FVERTEX3FVSUNPROC proc;
	proc = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fVertex3fvSUN");
	assert(proc != NULL);
	glTexCoord2fVertex3fvSUN = proc;
	glTexCoord2fVertex3fvSUN(tc, v);
}

static void APIENTRY InitTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLTEXCOORD4FVERTEX4FSUNPROC proc;
	proc = (PFNGLTEXCOORD4FVERTEX4FSUNPROC)_GetProcAddress("glTexCoord4fVertex4fSUN");
	assert(proc != NULL);
	glTexCoord4fVertex4fSUN = proc;
	glTexCoord4fVertex4fSUN(s, t, p, q, x, y, z, w);
}

static void APIENTRY InitTexCoord4fVertex4fvSUN(const GLfloat *tc, const GLfloat *v)
{
	PFNGLTEXCOORD4FVERTEX4FVSUNPROC proc;
	proc = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC)_GetProcAddress("glTexCoord4fVertex4fvSUN");
	assert(proc != NULL);
	glTexCoord4fVertex4fvSUN = proc;
	glTexCoord4fVertex4fvSUN(tc, v);
}

static void APIENTRY InitTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC proc;
	proc = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
	assert(proc != NULL);
	glTexCoord2fColor4ubVertex3fSUN = proc;
	glTexCoord2fColor4ubVertex3fSUN(s, t, r, g, b, a, x, y, z);
}

static void APIENTRY InitTexCoord2fColor4ubVertex3fvSUN(const GLfloat *tc, const GLubyte *c, const GLfloat *v)
{
	PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC proc;
	proc = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
	assert(proc != NULL);
	glTexCoord2fColor4ubVertex3fvSUN = proc;
	glTexCoord2fColor4ubVertex3fvSUN(tc, c, v);
}

static void APIENTRY InitTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC proc;
	proc = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fColor3fVertex3fSUN");
	assert(proc != NULL);
	glTexCoord2fColor3fVertex3fSUN = proc;
	glTexCoord2fColor3fVertex3fSUN(s, t, r, g, b, x, y, z);
}

static void APIENTRY InitTexCoord2fColor3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *v)
{
	PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
	assert(proc != NULL);
	glTexCoord2fColor3fVertex3fvSUN = proc;
	glTexCoord2fColor3fVertex3fvSUN(tc, c, v);
}

static void APIENTRY InitTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
	assert(proc != NULL);
	glTexCoord2fNormal3fVertex3fSUN = proc;
	glTexCoord2fNormal3fVertex3fSUN(s, t, nx, ny, nz, x, y, z);
}

static void APIENTRY InitTexCoord2fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *n, const GLfloat *v)
{
	PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glTexCoord2fNormal3fVertex3fvSUN = proc;
	glTexCoord2fNormal3fVertex3fvSUN(tc, n, v);
}

static void APIENTRY InitTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
	assert(proc != NULL);
	glTexCoord2fColor4fNormal3fVertex3fSUN = proc;
	glTexCoord2fColor4fNormal3fVertex3fSUN(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

static void APIENTRY InitTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glTexCoord2fColor4fNormal3fVertex3fvSUN = proc;
	glTexCoord2fColor4fNormal3fVertex3fvSUN(tc, c, n, v);
}

static void APIENTRY InitTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC proc;
	proc = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)_GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
	assert(proc != NULL);
	glTexCoord4fColor4fNormal3fVertex4fSUN = proc;
	glTexCoord4fColor4fNormal3fVertex4fSUN(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

static void APIENTRY InitTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC proc;
	proc = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)_GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
	assert(proc != NULL);
	glTexCoord4fColor4fNormal3fVertex4fvSUN = proc;
	glTexCoord4fColor4fNormal3fVertex4fvSUN(tc, c, n, v);
}

static void APIENTRY InitReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiVertex3fSUN = proc;
	glReplacementCodeuiVertex3fSUN(rc, x, y, z);
}

static void APIENTRY InitReplacementCodeuiVertex3fvSUN(const GLuint *rc, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiVertex3fvSUN = proc;
	glReplacementCodeuiVertex3fvSUN(rc, v);
}

static void APIENTRY InitReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiColor4ubVertex3fSUN = proc;
	glReplacementCodeuiColor4ubVertex3fSUN(rc, r, g, b, a, x, y, z);
}

static void APIENTRY InitReplacementCodeuiColor4ubVertex3fvSUN(const GLuint *rc, const GLubyte *c, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiColor4ubVertex3fvSUN = proc;
	glReplacementCodeuiColor4ubVertex3fvSUN(rc, c, v);
}

static void APIENTRY InitReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiColor3fVertex3fSUN = proc;
	glReplacementCodeuiColor3fVertex3fSUN(rc, r, g, b, x, y, z);
}

static void APIENTRY InitReplacementCodeuiColor3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiColor3fVertex3fvSUN = proc;
	glReplacementCodeuiColor3fVertex3fvSUN(rc, c, v);
}

static void APIENTRY InitReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiNormal3fVertex3fSUN = proc;
	glReplacementCodeuiNormal3fVertex3fSUN(rc, nx, ny, nz, x, y, z);
}

static void APIENTRY InitReplacementCodeuiNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *n, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiNormal3fVertex3fvSUN = proc;
	glReplacementCodeuiNormal3fVertex3fvSUN(rc, n, v);
}

static void APIENTRY InitReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiColor4fNormal3fVertex3fSUN = proc;
	glReplacementCodeuiColor4fNormal3fVertex3fSUN(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

static void APIENTRY InitReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiColor4fNormal3fVertex3fvSUN = proc;
	glReplacementCodeuiColor4fNormal3fVertex3fvSUN(rc, c, n, v);
}

static void APIENTRY InitReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiTexCoord2fVertex3fSUN = proc;
	glReplacementCodeuiTexCoord2fVertex3fSUN(rc, s, t, x, y, z);
}

static void APIENTRY InitReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiTexCoord2fVertex3fvSUN = proc;
	glReplacementCodeuiTexCoord2fVertex3fvSUN(rc, tc, v);
}

static void APIENTRY InitReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = proc;
	glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(rc, s, t, nx, ny, nz, x, y, z);
}

static void APIENTRY InitReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = proc;
	glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(rc, tc, n, v);
}

static void APIENTRY InitReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
	assert(proc != NULL);
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = proc;
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

static void APIENTRY InitReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC proc;
	proc = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
	assert(proc != NULL);
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = proc;
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(rc, tc, c, n, v);
}


/* GL_EXT_blend_func_separate */
static void APIENTRY InitBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	PFNGLBLENDFUNCSEPARATEEXTPROC proc;
	proc = (PFNGLBLENDFUNCSEPARATEEXTPROC)_GetProcAddress("glBlendFuncSeparateEXT");
	assert(proc != NULL);
	glBlendFuncSeparateEXT = proc;
	glBlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}


/* GL_INGR_blend_func_separate */
static void APIENTRY InitBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	PFNGLBLENDFUNCSEPARATEINGRPROC proc;
	proc = (PFNGLBLENDFUNCSEPARATEINGRPROC)_GetProcAddress("glBlendFuncSeparateINGR");
	assert(proc != NULL);
	glBlendFuncSeparateINGR = proc;
	glBlendFuncSeparateINGR(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}


/* GL_INGR_color_clamp */

/* GL_INGR_interlace_read */

/* GL_EXT_stencil_wrap */

/* GL_EXT_422_pixels */

/* GL_NV_texgen_reflection */

/* GL_SUN_convolution_border_modes */

/* GL_EXT_texture_env_add */

/* GL_EXT_texture_lod_bias */

/* GL_EXT_texture_filter_anisotropic */

/* GL_EXT_vertex_weighting */
static void APIENTRY InitVertexWeightfEXT(GLfloat weight)
{
	PFNGLVERTEXWEIGHTFEXTPROC proc;
	proc = (PFNGLVERTEXWEIGHTFEXTPROC)_GetProcAddress("glVertexWeightfEXT");
	assert(proc != NULL);
	glVertexWeightfEXT = proc;
	glVertexWeightfEXT(weight);
}

static void APIENTRY InitVertexWeightfvEXT(const GLfloat *weight)
{
	PFNGLVERTEXWEIGHTFVEXTPROC proc;
	proc = (PFNGLVERTEXWEIGHTFVEXTPROC)_GetProcAddress("glVertexWeightfvEXT");
	assert(proc != NULL);
	glVertexWeightfvEXT = proc;
	glVertexWeightfvEXT(weight);
}

static void APIENTRY InitVertexWeightPointerEXT(GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLVERTEXWEIGHTPOINTEREXTPROC proc;
	proc = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)_GetProcAddress("glVertexWeightPointerEXT");
	assert(proc != NULL);
	glVertexWeightPointerEXT = proc;
	glVertexWeightPointerEXT(size, type, stride, pointer);
}


/* GL_NV_light_max_exponent */

/* GL_NV_vertex_array_range */
static void APIENTRY InitFlushVertexArrayRangeNV(void)
{
	PFNGLFLUSHVERTEXARRAYRANGENVPROC proc;
	proc = (PFNGLFLUSHVERTEXARRAYRANGENVPROC)_GetProcAddress("glFlushVertexArrayRangeNV");
	assert(proc != NULL);
	glFlushVertexArrayRangeNV = proc;
	glFlushVertexArrayRangeNV();
}

static void APIENTRY InitVertexArrayRangeNV(GLsizei length, const GLvoid *pointer)
{
	PFNGLVERTEXARRAYRANGENVPROC proc;
	proc = (PFNGLVERTEXARRAYRANGENVPROC)_GetProcAddress("glVertexArrayRangeNV");
	assert(proc != NULL);
	glVertexArrayRangeNV = proc;
	glVertexArrayRangeNV(length, pointer);
}


/* GL_NV_register_combiners */
static void APIENTRY InitCombinerParameterfvNV(GLenum pname, const GLfloat *params)
{
	PFNGLCOMBINERPARAMETERFVNVPROC proc;
	proc = (PFNGLCOMBINERPARAMETERFVNVPROC)_GetProcAddress("glCombinerParameterfvNV");
	assert(proc != NULL);
	glCombinerParameterfvNV = proc;
	glCombinerParameterfvNV(pname, params);
}

static void APIENTRY InitCombinerParameterfNV(GLenum pname, GLfloat param)
{
	PFNGLCOMBINERPARAMETERFNVPROC proc;
	proc = (PFNGLCOMBINERPARAMETERFNVPROC)_GetProcAddress("glCombinerParameterfNV");
	assert(proc != NULL);
	glCombinerParameterfNV = proc;
	glCombinerParameterfNV(pname, param);
}

static void APIENTRY InitCombinerParameterivNV(GLenum pname, const GLint *params)
{
	PFNGLCOMBINERPARAMETERIVNVPROC proc;
	proc = (PFNGLCOMBINERPARAMETERIVNVPROC)_GetProcAddress("glCombinerParameterivNV");
	assert(proc != NULL);
	glCombinerParameterivNV = proc;
	glCombinerParameterivNV(pname, params);
}

static void APIENTRY InitCombinerParameteriNV(GLenum pname, GLint param)
{
	PFNGLCOMBINERPARAMETERINVPROC proc;
	proc = (PFNGLCOMBINERPARAMETERINVPROC)_GetProcAddress("glCombinerParameteriNV");
	assert(proc != NULL);
	glCombinerParameteriNV = proc;
	glCombinerParameteriNV(pname, param);
}

static void APIENTRY InitCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	PFNGLCOMBINERINPUTNVPROC proc;
	proc = (PFNGLCOMBINERINPUTNVPROC)_GetProcAddress("glCombinerInputNV");
	assert(proc != NULL);
	glCombinerInputNV = proc;
	glCombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

static void APIENTRY InitCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
	PFNGLCOMBINEROUTPUTNVPROC proc;
	proc = (PFNGLCOMBINEROUTPUTNVPROC)_GetProcAddress("glCombinerOutputNV");
	assert(proc != NULL);
	glCombinerOutputNV = proc;
	glCombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

static void APIENTRY InitFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	PFNGLFINALCOMBINERINPUTNVPROC proc;
	proc = (PFNGLFINALCOMBINERINPUTNVPROC)_GetProcAddress("glFinalCombinerInputNV");
	assert(proc != NULL);
	glFinalCombinerInputNV = proc;
	glFinalCombinerInputNV(variable, input, mapping, componentUsage);
}

static void APIENTRY InitGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params)
{
	PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC proc;
	proc = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)_GetProcAddress("glGetCombinerInputParameterfvNV");
	assert(proc != NULL);
	glGetCombinerInputParameterfvNV = proc;
	glGetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

static void APIENTRY InitGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params)
{
	PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC proc;
	proc = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)_GetProcAddress("glGetCombinerInputParameterivNV");
	assert(proc != NULL);
	glGetCombinerInputParameterivNV = proc;
	glGetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

static void APIENTRY InitGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat *params)
{
	PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC proc;
	proc = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)_GetProcAddress("glGetCombinerOutputParameterfvNV");
	assert(proc != NULL);
	glGetCombinerOutputParameterfvNV = proc;
	glGetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

static void APIENTRY InitGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint *params)
{
	PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC proc;
	proc = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)_GetProcAddress("glGetCombinerOutputParameterivNV");
	assert(proc != NULL);
	glGetCombinerOutputParameterivNV = proc;
	glGetCombinerOutputParameterivNV(stage, portion, pname, params);
}

static void APIENTRY InitGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat *params)
{
	PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC proc;
	proc = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)_GetProcAddress("glGetFinalCombinerInputParameterfvNV");
	assert(proc != NULL);
	glGetFinalCombinerInputParameterfvNV = proc;
	glGetFinalCombinerInputParameterfvNV(variable, pname, params);
}

static void APIENTRY InitGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint *params)
{
	PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC proc;
	proc = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)_GetProcAddress("glGetFinalCombinerInputParameterivNV");
	assert(proc != NULL);
	glGetFinalCombinerInputParameterivNV = proc;
	glGetFinalCombinerInputParameterivNV(variable, pname, params);
}


/* GL_NV_fog_distance */

/* GL_NV_texgen_emboss */

/* GL_NV_blend_square */

/* GL_NV_texture_env_combine4 */

/* GL_MESA_resize_buffers */
static void APIENTRY InitResizeBuffersMESA(void)
{
	PFNGLRESIZEBUFFERSMESAPROC proc;
	proc = (PFNGLRESIZEBUFFERSMESAPROC)_GetProcAddress("glResizeBuffersMESA");
	assert(proc != NULL);
	glResizeBuffersMESA = proc;
	glResizeBuffersMESA();
}


/* GL_MESA_window_pos */
static void APIENTRY InitWindowPos2dMESA(GLdouble x, GLdouble y)
{
	PFNGLWINDOWPOS2DMESAPROC proc;
	proc = (PFNGLWINDOWPOS2DMESAPROC)_GetProcAddress("glWindowPos2dMESA");
	assert(proc != NULL);
	glWindowPos2dMESA = proc;
	glWindowPos2dMESA(x, y);
}

static void APIENTRY InitWindowPos2dvMESA(const GLdouble *v)
{
	PFNGLWINDOWPOS2DVMESAPROC proc;
	proc = (PFNGLWINDOWPOS2DVMESAPROC)_GetProcAddress("glWindowPos2dvMESA");
	assert(proc != NULL);
	glWindowPos2dvMESA = proc;
	glWindowPos2dvMESA(v);
}

static void APIENTRY InitWindowPos2fMESA(GLfloat x, GLfloat y)
{
	PFNGLWINDOWPOS2FMESAPROC proc;
	proc = (PFNGLWINDOWPOS2FMESAPROC)_GetProcAddress("glWindowPos2fMESA");
	assert(proc != NULL);
	glWindowPos2fMESA = proc;
	glWindowPos2fMESA(x, y);
}

static void APIENTRY InitWindowPos2fvMESA(const GLfloat *v)
{
	PFNGLWINDOWPOS2FVMESAPROC proc;
	proc = (PFNGLWINDOWPOS2FVMESAPROC)_GetProcAddress("glWindowPos2fvMESA");
	assert(proc != NULL);
	glWindowPos2fvMESA = proc;
	glWindowPos2fvMESA(v);
}

static void APIENTRY InitWindowPos2iMESA(GLint x, GLint y)
{
	PFNGLWINDOWPOS2IMESAPROC proc;
	proc = (PFNGLWINDOWPOS2IMESAPROC)_GetProcAddress("glWindowPos2iMESA");
	assert(proc != NULL);
	glWindowPos2iMESA = proc;
	glWindowPos2iMESA(x, y);
}

static void APIENTRY InitWindowPos2ivMESA(const GLint *v)
{
	PFNGLWINDOWPOS2IVMESAPROC proc;
	proc = (PFNGLWINDOWPOS2IVMESAPROC)_GetProcAddress("glWindowPos2ivMESA");
	assert(proc != NULL);
	glWindowPos2ivMESA = proc;
	glWindowPos2ivMESA(v);
}

static void APIENTRY InitWindowPos2sMESA(GLshort x, GLshort y)
{
	PFNGLWINDOWPOS2SMESAPROC proc;
	proc = (PFNGLWINDOWPOS2SMESAPROC)_GetProcAddress("glWindowPos2sMESA");
	assert(proc != NULL);
	glWindowPos2sMESA = proc;
	glWindowPos2sMESA(x, y);
}

static void APIENTRY InitWindowPos2svMESA(const GLshort *v)
{
	PFNGLWINDOWPOS2SVMESAPROC proc;
	proc = (PFNGLWINDOWPOS2SVMESAPROC)_GetProcAddress("glWindowPos2svMESA");
	assert(proc != NULL);
	glWindowPos2svMESA = proc;
	glWindowPos2svMESA(v);
}

static void APIENTRY InitWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLWINDOWPOS3DMESAPROC proc;
	proc = (PFNGLWINDOWPOS3DMESAPROC)_GetProcAddress("glWindowPos3dMESA");
	assert(proc != NULL);
	glWindowPos3dMESA = proc;
	glWindowPos3dMESA(x, y, z);
}

static void APIENTRY InitWindowPos3dvMESA(const GLdouble *v)
{
	PFNGLWINDOWPOS3DVMESAPROC proc;
	proc = (PFNGLWINDOWPOS3DVMESAPROC)_GetProcAddress("glWindowPos3dvMESA");
	assert(proc != NULL);
	glWindowPos3dvMESA = proc;
	glWindowPos3dvMESA(v);
}

static void APIENTRY InitWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLWINDOWPOS3FMESAPROC proc;
	proc = (PFNGLWINDOWPOS3FMESAPROC)_GetProcAddress("glWindowPos3fMESA");
	assert(proc != NULL);
	glWindowPos3fMESA = proc;
	glWindowPos3fMESA(x, y, z);
}

static void APIENTRY InitWindowPos3fvMESA(const GLfloat *v)
{
	PFNGLWINDOWPOS3FVMESAPROC proc;
	proc = (PFNGLWINDOWPOS3FVMESAPROC)_GetProcAddress("glWindowPos3fvMESA");
	assert(proc != NULL);
	glWindowPos3fvMESA = proc;
	glWindowPos3fvMESA(v);
}

static void APIENTRY InitWindowPos3iMESA(GLint x, GLint y, GLint z)
{
	PFNGLWINDOWPOS3IMESAPROC proc;
	proc = (PFNGLWINDOWPOS3IMESAPROC)_GetProcAddress("glWindowPos3iMESA");
	assert(proc != NULL);
	glWindowPos3iMESA = proc;
	glWindowPos3iMESA(x, y, z);
}

static void APIENTRY InitWindowPos3ivMESA(const GLint *v)
{
	PFNGLWINDOWPOS3IVMESAPROC proc;
	proc = (PFNGLWINDOWPOS3IVMESAPROC)_GetProcAddress("glWindowPos3ivMESA");
	assert(proc != NULL);
	glWindowPos3ivMESA = proc;
	glWindowPos3ivMESA(v);
}

static void APIENTRY InitWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
	PFNGLWINDOWPOS3SMESAPROC proc;
	proc = (PFNGLWINDOWPOS3SMESAPROC)_GetProcAddress("glWindowPos3sMESA");
	assert(proc != NULL);
	glWindowPos3sMESA = proc;
	glWindowPos3sMESA(x, y, z);
}

static void APIENTRY InitWindowPos3svMESA(const GLshort *v)
{
	PFNGLWINDOWPOS3SVMESAPROC proc;
	proc = (PFNGLWINDOWPOS3SVMESAPROC)_GetProcAddress("glWindowPos3svMESA");
	assert(proc != NULL);
	glWindowPos3svMESA = proc;
	glWindowPos3svMESA(v);
}

static void APIENTRY InitWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLWINDOWPOS4DMESAPROC proc;
	proc = (PFNGLWINDOWPOS4DMESAPROC)_GetProcAddress("glWindowPos4dMESA");
	assert(proc != NULL);
	glWindowPos4dMESA = proc;
	glWindowPos4dMESA(x, y, z, w);
}

static void APIENTRY InitWindowPos4dvMESA(const GLdouble *v)
{
	PFNGLWINDOWPOS4DVMESAPROC proc;
	proc = (PFNGLWINDOWPOS4DVMESAPROC)_GetProcAddress("glWindowPos4dvMESA");
	assert(proc != NULL);
	glWindowPos4dvMESA = proc;
	glWindowPos4dvMESA(v);
}

static void APIENTRY InitWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLWINDOWPOS4FMESAPROC proc;
	proc = (PFNGLWINDOWPOS4FMESAPROC)_GetProcAddress("glWindowPos4fMESA");
	assert(proc != NULL);
	glWindowPos4fMESA = proc;
	glWindowPos4fMESA(x, y, z, w);
}

static void APIENTRY InitWindowPos4fvMESA(const GLfloat *v)
{
	PFNGLWINDOWPOS4FVMESAPROC proc;
	proc = (PFNGLWINDOWPOS4FVMESAPROC)_GetProcAddress("glWindowPos4fvMESA");
	assert(proc != NULL);
	glWindowPos4fvMESA = proc;
	glWindowPos4fvMESA(v);
}

static void APIENTRY InitWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
	PFNGLWINDOWPOS4IMESAPROC proc;
	proc = (PFNGLWINDOWPOS4IMESAPROC)_GetProcAddress("glWindowPos4iMESA");
	assert(proc != NULL);
	glWindowPos4iMESA = proc;
	glWindowPos4iMESA(x, y, z, w);
}

static void APIENTRY InitWindowPos4ivMESA(const GLint *v)
{
	PFNGLWINDOWPOS4IVMESAPROC proc;
	proc = (PFNGLWINDOWPOS4IVMESAPROC)_GetProcAddress("glWindowPos4ivMESA");
	assert(proc != NULL);
	glWindowPos4ivMESA = proc;
	glWindowPos4ivMESA(v);
}

static void APIENTRY InitWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
	PFNGLWINDOWPOS4SMESAPROC proc;
	proc = (PFNGLWINDOWPOS4SMESAPROC)_GetProcAddress("glWindowPos4sMESA");
	assert(proc != NULL);
	glWindowPos4sMESA = proc;
	glWindowPos4sMESA(x, y, z, w);
}

static void APIENTRY InitWindowPos4svMESA(const GLshort *v)
{
	PFNGLWINDOWPOS4SVMESAPROC proc;
	proc = (PFNGLWINDOWPOS4SVMESAPROC)_GetProcAddress("glWindowPos4svMESA");
	assert(proc != NULL);
	glWindowPos4svMESA = proc;
	glWindowPos4svMESA(v);
}


/* GL_IBM_cull_vertex */

/* GL_IBM_multimode_draw_arrays */
static void APIENTRY InitMultiModeDrawArraysIBM(const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride)
{
	PFNGLMULTIMODEDRAWARRAYSIBMPROC proc;
	proc = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)_GetProcAddress("glMultiModeDrawArraysIBM");
	assert(proc != NULL);
	glMultiModeDrawArraysIBM = proc;
	glMultiModeDrawArraysIBM(mode, first, count, primcount, modestride);
}

static void APIENTRY InitMultiModeDrawElementsIBM(const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride)
{
	PFNGLMULTIMODEDRAWELEMENTSIBMPROC proc;
	proc = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)_GetProcAddress("glMultiModeDrawElementsIBM");
	assert(proc != NULL);
	glMultiModeDrawElementsIBM = proc;
	glMultiModeDrawElementsIBM(mode, count, type, indices, primcount, modestride);
}


/* GL_IBM_vertex_array_lists */
static void APIENTRY InitColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLCOLORPOINTERLISTIBMPROC proc;
	proc = (PFNGLCOLORPOINTERLISTIBMPROC)_GetProcAddress("glColorPointerListIBM");
	assert(proc != NULL);
	glColorPointerListIBM = proc;
	glColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

static void APIENTRY InitSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLSECONDARYCOLORPOINTERLISTIBMPROC proc;
	proc = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)_GetProcAddress("glSecondaryColorPointerListIBM");
	assert(proc != NULL);
	glSecondaryColorPointerListIBM = proc;
	glSecondaryColorPointerListIBM(size, type, stride, pointer, ptrstride);
}

static void APIENTRY InitEdgeFlagPointerListIBM(GLint stride, const GLboolean* *pointer, GLint ptrstride)
{
	PFNGLEDGEFLAGPOINTERLISTIBMPROC proc;
	proc = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)_GetProcAddress("glEdgeFlagPointerListIBM");
	assert(proc != NULL);
	glEdgeFlagPointerListIBM = proc;
	glEdgeFlagPointerListIBM(stride, pointer, ptrstride);
}

static void APIENTRY InitFogCoordPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLFOGCOORDPOINTERLISTIBMPROC proc;
	proc = (PFNGLFOGCOORDPOINTERLISTIBMPROC)_GetProcAddress("glFogCoordPointerListIBM");
	assert(proc != NULL);
	glFogCoordPointerListIBM = proc;
	glFogCoordPointerListIBM(type, stride, pointer, ptrstride);
}

static void APIENTRY InitIndexPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLINDEXPOINTERLISTIBMPROC proc;
	proc = (PFNGLINDEXPOINTERLISTIBMPROC)_GetProcAddress("glIndexPointerListIBM");
	assert(proc != NULL);
	glIndexPointerListIBM = proc;
	glIndexPointerListIBM(type, stride, pointer, ptrstride);
}

static void APIENTRY InitNormalPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLNORMALPOINTERLISTIBMPROC proc;
	proc = (PFNGLNORMALPOINTERLISTIBMPROC)_GetProcAddress("glNormalPointerListIBM");
	assert(proc != NULL);
	glNormalPointerListIBM = proc;
	glNormalPointerListIBM(type, stride, pointer, ptrstride);
}

static void APIENTRY InitTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLTEXCOORDPOINTERLISTIBMPROC proc;
	proc = (PFNGLTEXCOORDPOINTERLISTIBMPROC)_GetProcAddress("glTexCoordPointerListIBM");
	assert(proc != NULL);
	glTexCoordPointerListIBM = proc;
	glTexCoordPointerListIBM(size, type, stride, pointer, ptrstride);
}

static void APIENTRY InitVertexPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	PFNGLVERTEXPOINTERLISTIBMPROC proc;
	proc = (PFNGLVERTEXPOINTERLISTIBMPROC)_GetProcAddress("glVertexPointerListIBM");
	assert(proc != NULL);
	glVertexPointerListIBM = proc;
	glVertexPointerListIBM(size, type, stride, pointer, ptrstride);
}


/* GL_SGIX_subsample */

/* GL_SGIX_ycrcba */

/* GL_SGIX_ycrcb_subsample */

/* GL_SGIX_depth_pass_instrument */

/* GL_3DFX_texture_compression_FXT1 */

/* GL_3DFX_multisample */

/* GL_3DFX_tbuffer */
static void APIENTRY InitTbufferMask3DFX(GLuint mask)
{
	PFNGLTBUFFERMASK3DFXPROC proc;
	proc = (PFNGLTBUFFERMASK3DFXPROC)_GetProcAddress("glTbufferMask3DFX");
	assert(proc != NULL);
	glTbufferMask3DFX = proc;
	glTbufferMask3DFX(mask);
}


/* GL_EXT_multisample */
static void APIENTRY InitSampleMaskEXT(GLclampf value, GLboolean invert)
{
	PFNGLSAMPLEMASKEXTPROC proc;
	proc = (PFNGLSAMPLEMASKEXTPROC)_GetProcAddress("glSampleMaskEXT");
	assert(proc != NULL);
	glSampleMaskEXT = proc;
	glSampleMaskEXT(value, invert);
}

static void APIENTRY InitSamplePatternEXT(GLenum pattern)
{
	PFNGLSAMPLEPATTERNEXTPROC proc;
	proc = (PFNGLSAMPLEPATTERNEXTPROC)_GetProcAddress("glSamplePatternEXT");
	assert(proc != NULL);
	glSamplePatternEXT = proc;
	glSamplePatternEXT(pattern);
}


/* GL_SGIX_vertex_preclip */

/* GL_SGIX_convolution_accuracy */

/* GL_SGIX_resample */

/* GL_SGIS_point_line_texgen */

/* GL_SGIS_texture_color_mask */
static void APIENTRY InitTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	PFNGLTEXTURECOLORMASKSGISPROC proc;
	proc = (PFNGLTEXTURECOLORMASKSGISPROC)_GetProcAddress("glTextureColorMaskSGIS");
	assert(proc != NULL);
	glTextureColorMaskSGIS = proc;
	glTextureColorMaskSGIS(red, green, blue, alpha);
}


/* GL_SGIX_igloo_interface */
static void APIENTRY InitIglooInterfaceSGIX(GLenum pname, const GLvoid *params)
{
	PFNGLIGLOOINTERFACESGIXPROC proc;
	proc = (PFNGLIGLOOINTERFACESGIXPROC)_GetProcAddress("glIglooInterfaceSGIX");
	assert(proc != NULL);
	glIglooInterfaceSGIX = proc;
	glIglooInterfaceSGIX(pname, params);
}


/* GL_EXT_texture_env_dot3 */

/* GL_ATI_texture_mirror_once */

/* GL_NV_fence */
static void APIENTRY InitDeleteFencesNV(GLsizei n, const GLuint *fences)
{
	PFNGLDELETEFENCESNVPROC proc;
	proc = (PFNGLDELETEFENCESNVPROC)_GetProcAddress("glDeleteFencesNV");
	assert(proc != NULL);
	glDeleteFencesNV = proc;
	glDeleteFencesNV(n, fences);
}

static void APIENTRY InitGenFencesNV(GLsizei n, GLuint *fences)
{
	PFNGLGENFENCESNVPROC proc;
	proc = (PFNGLGENFENCESNVPROC)_GetProcAddress("glGenFencesNV");
	assert(proc != NULL);
	glGenFencesNV = proc;
	glGenFencesNV(n, fences);
}

static GLboolean APIENTRY InitIsFenceNV(GLuint fence)
{
	PFNGLISFENCENVPROC proc;
	proc = (PFNGLISFENCENVPROC)_GetProcAddress("glIsFenceNV");
	assert(proc != NULL);
	glIsFenceNV = proc;
	return glIsFenceNV(fence);
}

static GLboolean APIENTRY InitTestFenceNV(GLuint fence)
{
	PFNGLTESTFENCENVPROC proc;
	proc = (PFNGLTESTFENCENVPROC)_GetProcAddress("glTestFenceNV");
	assert(proc != NULL);
	glTestFenceNV = proc;
	return glTestFenceNV(fence);
}

static void APIENTRY InitGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
{
	PFNGLGETFENCEIVNVPROC proc;
	proc = (PFNGLGETFENCEIVNVPROC)_GetProcAddress("glGetFenceivNV");
	assert(proc != NULL);
	glGetFenceivNV = proc;
	glGetFenceivNV(fence, pname, params);
}

static void APIENTRY InitFinishFenceNV(GLuint fence)
{
	PFNGLFINISHFENCENVPROC proc;
	proc = (PFNGLFINISHFENCENVPROC)_GetProcAddress("glFinishFenceNV");
	assert(proc != NULL);
	glFinishFenceNV = proc;
	glFinishFenceNV(fence);
}

static void APIENTRY InitSetFenceNV(GLuint fence, GLenum condition)
{
	PFNGLSETFENCENVPROC proc;
	proc = (PFNGLSETFENCENVPROC)_GetProcAddress("glSetFenceNV");
	assert(proc != NULL);
	glSetFenceNV = proc;
	glSetFenceNV(fence, condition);
}


/* GL_NV_evaluators */
static void APIENTRY InitMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points)
{
	PFNGLMAPCONTROLPOINTSNVPROC proc;
	proc = (PFNGLMAPCONTROLPOINTSNVPROC)_GetProcAddress("glMapControlPointsNV");
	assert(proc != NULL);
	glMapControlPointsNV = proc;
	glMapControlPointsNV(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

static void APIENTRY InitMapParameterivNV(GLenum target, GLenum pname, const GLint *params)
{
	PFNGLMAPPARAMETERIVNVPROC proc;
	proc = (PFNGLMAPPARAMETERIVNVPROC)_GetProcAddress("glMapParameterivNV");
	assert(proc != NULL);
	glMapParameterivNV = proc;
	glMapParameterivNV(target, pname, params);
}

static void APIENTRY InitMapParameterfvNV(GLenum target, GLenum pname, const GLfloat *params)
{
	PFNGLMAPPARAMETERFVNVPROC proc;
	proc = (PFNGLMAPPARAMETERFVNVPROC)_GetProcAddress("glMapParameterfvNV");
	assert(proc != NULL);
	glMapParameterfvNV = proc;
	glMapParameterfvNV(target, pname, params);
}

static void APIENTRY InitGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points)
{
	PFNGLGETMAPCONTROLPOINTSNVPROC proc;
	proc = (PFNGLGETMAPCONTROLPOINTSNVPROC)_GetProcAddress("glGetMapControlPointsNV");
	assert(proc != NULL);
	glGetMapControlPointsNV = proc;
	glGetMapControlPointsNV(target, index, type, ustride, vstride, packed, points);
}

static void APIENTRY InitGetMapParameterivNV(GLenum target, GLenum pname, GLint *params)
{
	PFNGLGETMAPPARAMETERIVNVPROC proc;
	proc = (PFNGLGETMAPPARAMETERIVNVPROC)_GetProcAddress("glGetMapParameterivNV");
	assert(proc != NULL);
	glGetMapParameterivNV = proc;
	glGetMapParameterivNV(target, pname, params);
}

static void APIENTRY InitGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat *params)
{
	PFNGLGETMAPPARAMETERFVNVPROC proc;
	proc = (PFNGLGETMAPPARAMETERFVNVPROC)_GetProcAddress("glGetMapParameterfvNV");
	assert(proc != NULL);
	glGetMapParameterfvNV = proc;
	glGetMapParameterfvNV(target, pname, params);
}

static void APIENTRY InitGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint *params)
{
	PFNGLGETMAPATTRIBPARAMETERIVNVPROC proc;
	proc = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)_GetProcAddress("glGetMapAttribParameterivNV");
	assert(proc != NULL);
	glGetMapAttribParameterivNV = proc;
	glGetMapAttribParameterivNV(target, index, pname, params);
}

static void APIENTRY InitGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params)
{
	PFNGLGETMAPATTRIBPARAMETERFVNVPROC proc;
	proc = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)_GetProcAddress("glGetMapAttribParameterfvNV");
	assert(proc != NULL);
	glGetMapAttribParameterfvNV = proc;
	glGetMapAttribParameterfvNV(target, index, pname, params);
}

static void APIENTRY InitEvalMapsNV(GLenum target, GLenum mode)
{
	PFNGLEVALMAPSNVPROC proc;
	proc = (PFNGLEVALMAPSNVPROC)_GetProcAddress("glEvalMapsNV");
	assert(proc != NULL);
	glEvalMapsNV = proc;
	glEvalMapsNV(target, mode);
}


/* GL_NV_packed_depth_stencil */

/* GL_NV_register_combiners2 */
static void APIENTRY InitCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat *params)
{
	PFNGLCOMBINERSTAGEPARAMETERFVNVPROC proc;
	proc = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)_GetProcAddress("glCombinerStageParameterfvNV");
	assert(proc != NULL);
	glCombinerStageParameterfvNV = proc;
	glCombinerStageParameterfvNV(stage, pname, params);
}

static void APIENTRY InitGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat *params)
{
	PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC proc;
	proc = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)_GetProcAddress("glGetCombinerStageParameterfvNV");
	assert(proc != NULL);
	glGetCombinerStageParameterfvNV = proc;
	glGetCombinerStageParameterfvNV(stage, pname, params);
}


/* GL_NV_texture_compression_vtc */

/* GL_NV_texture_rectangle */

/* GL_NV_texture_shader */

/* GL_NV_texture_shader2 */

/* GL_NV_vertex_array_range2 */

/* GL_NV_vertex_program */
static GLboolean APIENTRY InitAreProgramsResidentNV(GLsizei n, const GLuint *programs, GLboolean *residences)
{
	PFNGLAREPROGRAMSRESIDENTNVPROC proc;
	proc = (PFNGLAREPROGRAMSRESIDENTNVPROC)_GetProcAddress("glAreProgramsResidentNV");
	assert(proc != NULL);
	glAreProgramsResidentNV = proc;
	return glAreProgramsResidentNV(n, programs, residences);
}

static void APIENTRY InitBindProgramNV(GLenum target, GLuint id)
{
	PFNGLBINDPROGRAMNVPROC proc;
	proc = (PFNGLBINDPROGRAMNVPROC)_GetProcAddress("glBindProgramNV");
	assert(proc != NULL);
	glBindProgramNV = proc;
	glBindProgramNV(target, id);
}

static void APIENTRY InitDeleteProgramsNV(GLsizei n, const GLuint *programs)
{
	PFNGLDELETEPROGRAMSNVPROC proc;
	proc = (PFNGLDELETEPROGRAMSNVPROC)_GetProcAddress("glDeleteProgramsNV");
	assert(proc != NULL);
	glDeleteProgramsNV = proc;
	glDeleteProgramsNV(n, programs);
}

static void APIENTRY InitExecuteProgramNV(GLenum target, GLuint id, const GLfloat *params)
{
	PFNGLEXECUTEPROGRAMNVPROC proc;
	proc = (PFNGLEXECUTEPROGRAMNVPROC)_GetProcAddress("glExecuteProgramNV");
	assert(proc != NULL);
	glExecuteProgramNV = proc;
	glExecuteProgramNV(target, id, params);
}

static void APIENTRY InitGenProgramsNV(GLsizei n, GLuint *programs)
{
	PFNGLGENPROGRAMSNVPROC proc;
	proc = (PFNGLGENPROGRAMSNVPROC)_GetProcAddress("glGenProgramsNV");
	assert(proc != NULL);
	glGenProgramsNV = proc;
	glGenProgramsNV(n, programs);
}

static void APIENTRY InitGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble *params)
{
	PFNGLGETPROGRAMPARAMETERDVNVPROC proc;
	proc = (PFNGLGETPROGRAMPARAMETERDVNVPROC)_GetProcAddress("glGetProgramParameterdvNV");
	assert(proc != NULL);
	glGetProgramParameterdvNV = proc;
	glGetProgramParameterdvNV(target, index, pname, params);
}

static void APIENTRY InitGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params)
{
	PFNGLGETPROGRAMPARAMETERFVNVPROC proc;
	proc = (PFNGLGETPROGRAMPARAMETERFVNVPROC)_GetProcAddress("glGetProgramParameterfvNV");
	assert(proc != NULL);
	glGetProgramParameterfvNV = proc;
	glGetProgramParameterfvNV(target, index, pname, params);
}

static void APIENTRY InitGetProgramivNV(GLuint id, GLenum pname, GLint *params)
{
	PFNGLGETPROGRAMIVNVPROC proc;
	proc = (PFNGLGETPROGRAMIVNVPROC)_GetProcAddress("glGetProgramivNV");
	assert(proc != NULL);
	glGetProgramivNV = proc;
	glGetProgramivNV(id, pname, params);
}

static void APIENTRY InitGetProgramStringNV(GLuint id, GLenum pname, GLubyte *program)
{
	PFNGLGETPROGRAMSTRINGNVPROC proc;
	proc = (PFNGLGETPROGRAMSTRINGNVPROC)_GetProcAddress("glGetProgramStringNV");
	assert(proc != NULL);
	glGetProgramStringNV = proc;
	glGetProgramStringNV(id, pname, program);
}

static void APIENTRY InitGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint *params)
{
	PFNGLGETTRACKMATRIXIVNVPROC proc;
	proc = (PFNGLGETTRACKMATRIXIVNVPROC)_GetProcAddress("glGetTrackMatrixivNV");
	assert(proc != NULL);
	glGetTrackMatrixivNV = proc;
	glGetTrackMatrixivNV(target, address, pname, params);
}

static void APIENTRY InitGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble *params)
{
	PFNGLGETVERTEXATTRIBDVNVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBDVNVPROC)_GetProcAddress("glGetVertexAttribdvNV");
	assert(proc != NULL);
	glGetVertexAttribdvNV = proc;
	glGetVertexAttribdvNV(index, pname, params);
}

static void APIENTRY InitGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat *params)
{
	PFNGLGETVERTEXATTRIBFVNVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBFVNVPROC)_GetProcAddress("glGetVertexAttribfvNV");
	assert(proc != NULL);
	glGetVertexAttribfvNV = proc;
	glGetVertexAttribfvNV(index, pname, params);
}

static void APIENTRY InitGetVertexAttribivNV(GLuint index, GLenum pname, GLint *params)
{
	PFNGLGETVERTEXATTRIBIVNVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBIVNVPROC)_GetProcAddress("glGetVertexAttribivNV");
	assert(proc != NULL);
	glGetVertexAttribivNV = proc;
	glGetVertexAttribivNV(index, pname, params);
}

static void APIENTRY InitGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid* *pointer)
{
	PFNGLGETVERTEXATTRIBPOINTERVNVPROC proc;
	proc = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)_GetProcAddress("glGetVertexAttribPointervNV");
	assert(proc != NULL);
	glGetVertexAttribPointervNV = proc;
	glGetVertexAttribPointervNV(index, pname, pointer);
}

static GLboolean APIENTRY InitIsProgramNV(GLuint id)
{
	PFNGLISPROGRAMNVPROC proc;
	proc = (PFNGLISPROGRAMNVPROC)_GetProcAddress("glIsProgramNV");
	assert(proc != NULL);
	glIsProgramNV = proc;
	return glIsProgramNV(id);
}

static void APIENTRY InitLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte *program)
{
	PFNGLLOADPROGRAMNVPROC proc;
	proc = (PFNGLLOADPROGRAMNVPROC)_GetProcAddress("glLoadProgramNV");
	assert(proc != NULL);
	glLoadProgramNV = proc;
	glLoadProgramNV(target, id, len, program);
}

static void APIENTRY InitProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLPROGRAMPARAMETER4DNVPROC proc;
	proc = (PFNGLPROGRAMPARAMETER4DNVPROC)_GetProcAddress("glProgramParameter4dNV");
	assert(proc != NULL);
	glProgramParameter4dNV = proc;
	glProgramParameter4dNV(target, index, x, y, z, w);
}

static void APIENTRY InitProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble *v)
{
	PFNGLPROGRAMPARAMETER4DVNVPROC proc;
	proc = (PFNGLPROGRAMPARAMETER4DVNVPROC)_GetProcAddress("glProgramParameter4dvNV");
	assert(proc != NULL);
	glProgramParameter4dvNV = proc;
	glProgramParameter4dvNV(target, index, v);
}

static void APIENTRY InitProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLPROGRAMPARAMETER4FNVPROC proc;
	proc = (PFNGLPROGRAMPARAMETER4FNVPROC)_GetProcAddress("glProgramParameter4fNV");
	assert(proc != NULL);
	glProgramParameter4fNV = proc;
	glProgramParameter4fNV(target, index, x, y, z, w);
}

static void APIENTRY InitProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat *v)
{
	PFNGLPROGRAMPARAMETER4FVNVPROC proc;
	proc = (PFNGLPROGRAMPARAMETER4FVNVPROC)_GetProcAddress("glProgramParameter4fvNV");
	assert(proc != NULL);
	glProgramParameter4fvNV = proc;
	glProgramParameter4fvNV(target, index, v);
}

static void APIENTRY InitProgramParameters4dvNV(GLenum target, GLuint index, GLuint count, const GLdouble *v)
{
	PFNGLPROGRAMPARAMETERS4DVNVPROC proc;
	proc = (PFNGLPROGRAMPARAMETERS4DVNVPROC)_GetProcAddress("glProgramParameters4dvNV");
	assert(proc != NULL);
	glProgramParameters4dvNV = proc;
	glProgramParameters4dvNV(target, index, count, v);
}

static void APIENTRY InitProgramParameters4fvNV(GLenum target, GLuint index, GLuint count, const GLfloat *v)
{
	PFNGLPROGRAMPARAMETERS4FVNVPROC proc;
	proc = (PFNGLPROGRAMPARAMETERS4FVNVPROC)_GetProcAddress("glProgramParameters4fvNV");
	assert(proc != NULL);
	glProgramParameters4fvNV = proc;
	glProgramParameters4fvNV(target, index, count, v);
}

static void APIENTRY InitRequestResidentProgramsNV(GLsizei n, const GLuint *programs)
{
	PFNGLREQUESTRESIDENTPROGRAMSNVPROC proc;
	proc = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)_GetProcAddress("glRequestResidentProgramsNV");
	assert(proc != NULL);
	glRequestResidentProgramsNV = proc;
	glRequestResidentProgramsNV(n, programs);
}

static void APIENTRY InitTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
	PFNGLTRACKMATRIXNVPROC proc;
	proc = (PFNGLTRACKMATRIXNVPROC)_GetProcAddress("glTrackMatrixNV");
	assert(proc != NULL);
	glTrackMatrixNV = proc;
	glTrackMatrixNV(target, address, matrix, transform);
}

static void APIENTRY InitVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	PFNGLVERTEXATTRIBPOINTERNVPROC proc;
	proc = (PFNGLVERTEXATTRIBPOINTERNVPROC)_GetProcAddress("glVertexAttribPointerNV");
	assert(proc != NULL);
	glVertexAttribPointerNV = proc;
	glVertexAttribPointerNV(index, fsize, type, stride, pointer);
}

static void APIENTRY InitVertexAttrib1dNV(GLuint index, GLdouble x)
{
	PFNGLVERTEXATTRIB1DNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1DNVPROC)_GetProcAddress("glVertexAttrib1dNV");
	assert(proc != NULL);
	glVertexAttrib1dNV = proc;
	glVertexAttrib1dNV(index, x);
}

static void APIENTRY InitVertexAttrib1dvNV(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB1DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1DVNVPROC)_GetProcAddress("glVertexAttrib1dvNV");
	assert(proc != NULL);
	glVertexAttrib1dvNV = proc;
	glVertexAttrib1dvNV(index, v);
}

static void APIENTRY InitVertexAttrib1fNV(GLuint index, GLfloat x)
{
	PFNGLVERTEXATTRIB1FNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1FNVPROC)_GetProcAddress("glVertexAttrib1fNV");
	assert(proc != NULL);
	glVertexAttrib1fNV = proc;
	glVertexAttrib1fNV(index, x);
}

static void APIENTRY InitVertexAttrib1fvNV(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB1FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1FVNVPROC)_GetProcAddress("glVertexAttrib1fvNV");
	assert(proc != NULL);
	glVertexAttrib1fvNV = proc;
	glVertexAttrib1fvNV(index, v);
}

static void APIENTRY InitVertexAttrib1sNV(GLuint index, GLshort x)
{
	PFNGLVERTEXATTRIB1SNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1SNVPROC)_GetProcAddress("glVertexAttrib1sNV");
	assert(proc != NULL);
	glVertexAttrib1sNV = proc;
	glVertexAttrib1sNV(index, x);
}

static void APIENTRY InitVertexAttrib1svNV(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB1SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1SVNVPROC)_GetProcAddress("glVertexAttrib1svNV");
	assert(proc != NULL);
	glVertexAttrib1svNV = proc;
	glVertexAttrib1svNV(index, v);
}

static void APIENTRY InitVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
	PFNGLVERTEXATTRIB2DNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2DNVPROC)_GetProcAddress("glVertexAttrib2dNV");
	assert(proc != NULL);
	glVertexAttrib2dNV = proc;
	glVertexAttrib2dNV(index, x, y);
}

static void APIENTRY InitVertexAttrib2dvNV(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB2DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2DVNVPROC)_GetProcAddress("glVertexAttrib2dvNV");
	assert(proc != NULL);
	glVertexAttrib2dvNV = proc;
	glVertexAttrib2dvNV(index, v);
}

static void APIENTRY InitVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
	PFNGLVERTEXATTRIB2FNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2FNVPROC)_GetProcAddress("glVertexAttrib2fNV");
	assert(proc != NULL);
	glVertexAttrib2fNV = proc;
	glVertexAttrib2fNV(index, x, y);
}

static void APIENTRY InitVertexAttrib2fvNV(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB2FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2FVNVPROC)_GetProcAddress("glVertexAttrib2fvNV");
	assert(proc != NULL);
	glVertexAttrib2fvNV = proc;
	glVertexAttrib2fvNV(index, v);
}

static void APIENTRY InitVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
	PFNGLVERTEXATTRIB2SNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2SNVPROC)_GetProcAddress("glVertexAttrib2sNV");
	assert(proc != NULL);
	glVertexAttrib2sNV = proc;
	glVertexAttrib2sNV(index, x, y);
}

static void APIENTRY InitVertexAttrib2svNV(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB2SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2SVNVPROC)_GetProcAddress("glVertexAttrib2svNV");
	assert(proc != NULL);
	glVertexAttrib2svNV = proc;
	glVertexAttrib2svNV(index, v);
}

static void APIENTRY InitVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLVERTEXATTRIB3DNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3DNVPROC)_GetProcAddress("glVertexAttrib3dNV");
	assert(proc != NULL);
	glVertexAttrib3dNV = proc;
	glVertexAttrib3dNV(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3dvNV(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB3DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3DVNVPROC)_GetProcAddress("glVertexAttrib3dvNV");
	assert(proc != NULL);
	glVertexAttrib3dvNV = proc;
	glVertexAttrib3dvNV(index, v);
}

static void APIENTRY InitVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLVERTEXATTRIB3FNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3FNVPROC)_GetProcAddress("glVertexAttrib3fNV");
	assert(proc != NULL);
	glVertexAttrib3fNV = proc;
	glVertexAttrib3fNV(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3fvNV(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB3FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3FVNVPROC)_GetProcAddress("glVertexAttrib3fvNV");
	assert(proc != NULL);
	glVertexAttrib3fvNV = proc;
	glVertexAttrib3fvNV(index, v);
}

static void APIENTRY InitVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
	PFNGLVERTEXATTRIB3SNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3SNVPROC)_GetProcAddress("glVertexAttrib3sNV");
	assert(proc != NULL);
	glVertexAttrib3sNV = proc;
	glVertexAttrib3sNV(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3svNV(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB3SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3SVNVPROC)_GetProcAddress("glVertexAttrib3svNV");
	assert(proc != NULL);
	glVertexAttrib3svNV = proc;
	glVertexAttrib3svNV(index, v);
}

static void APIENTRY InitVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLVERTEXATTRIB4DNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4DNVPROC)_GetProcAddress("glVertexAttrib4dNV");
	assert(proc != NULL);
	glVertexAttrib4dNV = proc;
	glVertexAttrib4dNV(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4dvNV(GLuint index, const GLdouble *v)
{
	PFNGLVERTEXATTRIB4DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4DVNVPROC)_GetProcAddress("glVertexAttrib4dvNV");
	assert(proc != NULL);
	glVertexAttrib4dvNV = proc;
	glVertexAttrib4dvNV(index, v);
}

static void APIENTRY InitVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLVERTEXATTRIB4FNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4FNVPROC)_GetProcAddress("glVertexAttrib4fNV");
	assert(proc != NULL);
	glVertexAttrib4fNV = proc;
	glVertexAttrib4fNV(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4fvNV(GLuint index, const GLfloat *v)
{
	PFNGLVERTEXATTRIB4FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4FVNVPROC)_GetProcAddress("glVertexAttrib4fvNV");
	assert(proc != NULL);
	glVertexAttrib4fvNV = proc;
	glVertexAttrib4fvNV(index, v);
}

static void APIENTRY InitVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	PFNGLVERTEXATTRIB4SNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4SNVPROC)_GetProcAddress("glVertexAttrib4sNV");
	assert(proc != NULL);
	glVertexAttrib4sNV = proc;
	glVertexAttrib4sNV(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4svNV(GLuint index, const GLshort *v)
{
	PFNGLVERTEXATTRIB4SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4SVNVPROC)_GetProcAddress("glVertexAttrib4svNV");
	assert(proc != NULL);
	glVertexAttrib4svNV = proc;
	glVertexAttrib4svNV(index, v);
}

static void APIENTRY InitVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	PFNGLVERTEXATTRIB4UBNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4UBNVPROC)_GetProcAddress("glVertexAttrib4ubNV");
	assert(proc != NULL);
	glVertexAttrib4ubNV = proc;
	glVertexAttrib4ubNV(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4ubvNV(GLuint index, const GLubyte *v)
{
	PFNGLVERTEXATTRIB4UBVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4UBVNVPROC)_GetProcAddress("glVertexAttrib4ubvNV");
	assert(proc != NULL);
	glVertexAttrib4ubvNV = proc;
	glVertexAttrib4ubvNV(index, v);
}

static void APIENTRY InitVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	PFNGLVERTEXATTRIBS1DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS1DVNVPROC)_GetProcAddress("glVertexAttribs1dvNV");
	assert(proc != NULL);
	glVertexAttribs1dvNV = proc;
	glVertexAttribs1dvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	PFNGLVERTEXATTRIBS1FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS1FVNVPROC)_GetProcAddress("glVertexAttribs1fvNV");
	assert(proc != NULL);
	glVertexAttribs1fvNV = proc;
	glVertexAttribs1fvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort *v)
{
	PFNGLVERTEXATTRIBS1SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS1SVNVPROC)_GetProcAddress("glVertexAttribs1svNV");
	assert(proc != NULL);
	glVertexAttribs1svNV = proc;
	glVertexAttribs1svNV(index, count, v);
}

static void APIENTRY InitVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	PFNGLVERTEXATTRIBS2DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS2DVNVPROC)_GetProcAddress("glVertexAttribs2dvNV");
	assert(proc != NULL);
	glVertexAttribs2dvNV = proc;
	glVertexAttribs2dvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	PFNGLVERTEXATTRIBS2FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS2FVNVPROC)_GetProcAddress("glVertexAttribs2fvNV");
	assert(proc != NULL);
	glVertexAttribs2fvNV = proc;
	glVertexAttribs2fvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort *v)
{
	PFNGLVERTEXATTRIBS2SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS2SVNVPROC)_GetProcAddress("glVertexAttribs2svNV");
	assert(proc != NULL);
	glVertexAttribs2svNV = proc;
	glVertexAttribs2svNV(index, count, v);
}

static void APIENTRY InitVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	PFNGLVERTEXATTRIBS3DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS3DVNVPROC)_GetProcAddress("glVertexAttribs3dvNV");
	assert(proc != NULL);
	glVertexAttribs3dvNV = proc;
	glVertexAttribs3dvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	PFNGLVERTEXATTRIBS3FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS3FVNVPROC)_GetProcAddress("glVertexAttribs3fvNV");
	assert(proc != NULL);
	glVertexAttribs3fvNV = proc;
	glVertexAttribs3fvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort *v)
{
	PFNGLVERTEXATTRIBS3SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS3SVNVPROC)_GetProcAddress("glVertexAttribs3svNV");
	assert(proc != NULL);
	glVertexAttribs3svNV = proc;
	glVertexAttribs3svNV(index, count, v);
}

static void APIENTRY InitVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	PFNGLVERTEXATTRIBS4DVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS4DVNVPROC)_GetProcAddress("glVertexAttribs4dvNV");
	assert(proc != NULL);
	glVertexAttribs4dvNV = proc;
	glVertexAttribs4dvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	PFNGLVERTEXATTRIBS4FVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS4FVNVPROC)_GetProcAddress("glVertexAttribs4fvNV");
	assert(proc != NULL);
	glVertexAttribs4fvNV = proc;
	glVertexAttribs4fvNV(index, count, v);
}

static void APIENTRY InitVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort *v)
{
	PFNGLVERTEXATTRIBS4SVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS4SVNVPROC)_GetProcAddress("glVertexAttribs4svNV");
	assert(proc != NULL);
	glVertexAttribs4svNV = proc;
	glVertexAttribs4svNV(index, count, v);
}

static void APIENTRY InitVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte *v)
{
	PFNGLVERTEXATTRIBS4UBVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS4UBVNVPROC)_GetProcAddress("glVertexAttribs4ubvNV");
	assert(proc != NULL);
	glVertexAttribs4ubvNV = proc;
	glVertexAttribs4ubvNV(index, count, v);
}


/* GL_SGIX_texture_coordinate_clamp */

/* GL_SGIX_scalebias_hint */

/* GL_OML_interlace */

/* GL_OML_subsample */

/* GL_OML_resample */

/* GL_NV_copy_depth_to_color */

/* GL_ATI_envmap_bumpmap */
static void APIENTRY InitTexBumpParameterivATI(GLenum pname, const GLint *param)
{
	PFNGLTEXBUMPPARAMETERIVATIPROC proc;
	proc = (PFNGLTEXBUMPPARAMETERIVATIPROC)_GetProcAddress("glTexBumpParameterivATI");
	assert(proc != NULL);
	glTexBumpParameterivATI = proc;
	glTexBumpParameterivATI(pname, param);
}

static void APIENTRY InitTexBumpParameterfvATI(GLenum pname, const GLfloat *param)
{
	PFNGLTEXBUMPPARAMETERFVATIPROC proc;
	proc = (PFNGLTEXBUMPPARAMETERFVATIPROC)_GetProcAddress("glTexBumpParameterfvATI");
	assert(proc != NULL);
	glTexBumpParameterfvATI = proc;
	glTexBumpParameterfvATI(pname, param);
}

static void APIENTRY InitGetTexBumpParameterivATI(GLenum pname, GLint *param)
{
	PFNGLGETTEXBUMPPARAMETERIVATIPROC proc;
	proc = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)_GetProcAddress("glGetTexBumpParameterivATI");
	assert(proc != NULL);
	glGetTexBumpParameterivATI = proc;
	glGetTexBumpParameterivATI(pname, param);
}

static void APIENTRY InitGetTexBumpParameterfvATI(GLenum pname, GLfloat *param)
{
	PFNGLGETTEXBUMPPARAMETERFVATIPROC proc;
	proc = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)_GetProcAddress("glGetTexBumpParameterfvATI");
	assert(proc != NULL);
	glGetTexBumpParameterfvATI = proc;
	glGetTexBumpParameterfvATI(pname, param);
}


/* GL_ATI_fragment_shader */
static GLuint APIENTRY InitGenFragmentShadersATI(GLuint range)
{
	PFNGLGENFRAGMENTSHADERSATIPROC proc;
	proc = (PFNGLGENFRAGMENTSHADERSATIPROC)_GetProcAddress("glGenFragmentShadersATI");
	assert(proc != NULL);
	glGenFragmentShadersATI = proc;
	return glGenFragmentShadersATI(range);
}

static void APIENTRY InitBindFragmentShaderATI(GLuint id)
{
	PFNGLBINDFRAGMENTSHADERATIPROC proc;
	proc = (PFNGLBINDFRAGMENTSHADERATIPROC)_GetProcAddress("glBindFragmentShaderATI");
	assert(proc != NULL);
	glBindFragmentShaderATI = proc;
	glBindFragmentShaderATI(id);
}

static void APIENTRY InitDeleteFragmentShaderATI(GLuint id)
{
	PFNGLDELETEFRAGMENTSHADERATIPROC proc;
	proc = (PFNGLDELETEFRAGMENTSHADERATIPROC)_GetProcAddress("glDeleteFragmentShaderATI");
	assert(proc != NULL);
	glDeleteFragmentShaderATI = proc;
	glDeleteFragmentShaderATI(id);
}

static void APIENTRY InitBeginFragmentShaderATI(void)
{
	PFNGLBEGINFRAGMENTSHADERATIPROC proc;
	proc = (PFNGLBEGINFRAGMENTSHADERATIPROC)_GetProcAddress("glBeginFragmentShaderATI");
	assert(proc != NULL);
	glBeginFragmentShaderATI = proc;
	glBeginFragmentShaderATI();
}

static void APIENTRY InitEndFragmentShaderATI(void)
{
	PFNGLENDFRAGMENTSHADERATIPROC proc;
	proc = (PFNGLENDFRAGMENTSHADERATIPROC)_GetProcAddress("glEndFragmentShaderATI");
	assert(proc != NULL);
	glEndFragmentShaderATI = proc;
	glEndFragmentShaderATI();
}

static void APIENTRY InitPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
	PFNGLPASSTEXCOORDATIPROC proc;
	proc = (PFNGLPASSTEXCOORDATIPROC)_GetProcAddress("glPassTexCoordATI");
	assert(proc != NULL);
	glPassTexCoordATI = proc;
	glPassTexCoordATI(dst, coord, swizzle);
}

static void APIENTRY InitSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
	PFNGLSAMPLEMAPATIPROC proc;
	proc = (PFNGLSAMPLEMAPATIPROC)_GetProcAddress("glSampleMapATI");
	assert(proc != NULL);
	glSampleMapATI = proc;
	glSampleMapATI(dst, interp, swizzle);
}

static void APIENTRY InitColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	PFNGLCOLORFRAGMENTOP1ATIPROC proc;
	proc = (PFNGLCOLORFRAGMENTOP1ATIPROC)_GetProcAddress("glColorFragmentOp1ATI");
	assert(proc != NULL);
	glColorFragmentOp1ATI = proc;
	glColorFragmentOp1ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

static void APIENTRY InitColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	PFNGLCOLORFRAGMENTOP2ATIPROC proc;
	proc = (PFNGLCOLORFRAGMENTOP2ATIPROC)_GetProcAddress("glColorFragmentOp2ATI");
	assert(proc != NULL);
	glColorFragmentOp2ATI = proc;
	glColorFragmentOp2ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

static void APIENTRY InitColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	PFNGLCOLORFRAGMENTOP3ATIPROC proc;
	proc = (PFNGLCOLORFRAGMENTOP3ATIPROC)_GetProcAddress("glColorFragmentOp3ATI");
	assert(proc != NULL);
	glColorFragmentOp3ATI = proc;
	glColorFragmentOp3ATI(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

static void APIENTRY InitAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	PFNGLALPHAFRAGMENTOP1ATIPROC proc;
	proc = (PFNGLALPHAFRAGMENTOP1ATIPROC)_GetProcAddress("glAlphaFragmentOp1ATI");
	assert(proc != NULL);
	glAlphaFragmentOp1ATI = proc;
	glAlphaFragmentOp1ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

static void APIENTRY InitAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	PFNGLALPHAFRAGMENTOP2ATIPROC proc;
	proc = (PFNGLALPHAFRAGMENTOP2ATIPROC)_GetProcAddress("glAlphaFragmentOp2ATI");
	assert(proc != NULL);
	glAlphaFragmentOp2ATI = proc;
	glAlphaFragmentOp2ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

static void APIENTRY InitAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	PFNGLALPHAFRAGMENTOP3ATIPROC proc;
	proc = (PFNGLALPHAFRAGMENTOP3ATIPROC)_GetProcAddress("glAlphaFragmentOp3ATI");
	assert(proc != NULL);
	glAlphaFragmentOp3ATI = proc;
	glAlphaFragmentOp3ATI(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

static void APIENTRY InitSetFragmentShaderConstantATI(GLuint dst, const GLfloat *value)
{
	PFNGLSETFRAGMENTSHADERCONSTANTATIPROC proc;
	proc = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)_GetProcAddress("glSetFragmentShaderConstantATI");
	assert(proc != NULL);
	glSetFragmentShaderConstantATI = proc;
	glSetFragmentShaderConstantATI(dst, value);
}


/* GL_ATI_pn_triangles */
static void APIENTRY InitPNTrianglesiATI(GLenum pname, GLint param)
{
	PFNGLPNTRIANGLESIATIPROC proc;
	proc = (PFNGLPNTRIANGLESIATIPROC)_GetProcAddress("glPNTrianglesiATI");
	assert(proc != NULL);
	glPNTrianglesiATI = proc;
	glPNTrianglesiATI(pname, param);
}

static void APIENTRY InitPNTrianglesfATI(GLenum pname, GLfloat param)
{
	PFNGLPNTRIANGLESFATIPROC proc;
	proc = (PFNGLPNTRIANGLESFATIPROC)_GetProcAddress("glPNTrianglesfATI");
	assert(proc != NULL);
	glPNTrianglesfATI = proc;
	glPNTrianglesfATI(pname, param);
}


/* GL_ATI_vertex_array_object */
static GLuint APIENTRY InitNewObjectBufferATI(GLsizei size, const GLvoid *pointer, GLenum usage)
{
	PFNGLNEWOBJECTBUFFERATIPROC proc;
	proc = (PFNGLNEWOBJECTBUFFERATIPROC)_GetProcAddress("glNewObjectBufferATI");
	assert(proc != NULL);
	glNewObjectBufferATI = proc;
	return glNewObjectBufferATI(size, pointer, usage);
}

static GLboolean APIENTRY InitIsObjectBufferATI(GLuint buffer)
{
	PFNGLISOBJECTBUFFERATIPROC proc;
	proc = (PFNGLISOBJECTBUFFERATIPROC)_GetProcAddress("glIsObjectBufferATI");
	assert(proc != NULL);
	glIsObjectBufferATI = proc;
	return glIsObjectBufferATI(buffer);
}

static void APIENTRY InitUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve)
{
	PFNGLUPDATEOBJECTBUFFERATIPROC proc;
	proc = (PFNGLUPDATEOBJECTBUFFERATIPROC)_GetProcAddress("glUpdateObjectBufferATI");
	assert(proc != NULL);
	glUpdateObjectBufferATI = proc;
	glUpdateObjectBufferATI(buffer, offset, size, pointer, preserve);
}

static void APIENTRY InitGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat *params)
{
	PFNGLGETOBJECTBUFFERFVATIPROC proc;
	proc = (PFNGLGETOBJECTBUFFERFVATIPROC)_GetProcAddress("glGetObjectBufferfvATI");
	assert(proc != NULL);
	glGetObjectBufferfvATI = proc;
	glGetObjectBufferfvATI(buffer, pname, params);
}

static void APIENTRY InitGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint *params)
{
	PFNGLGETOBJECTBUFFERIVATIPROC proc;
	proc = (PFNGLGETOBJECTBUFFERIVATIPROC)_GetProcAddress("glGetObjectBufferivATI");
	assert(proc != NULL);
	glGetObjectBufferivATI = proc;
	glGetObjectBufferivATI(buffer, pname, params);
}

static void APIENTRY InitFreeObjectBufferATI(GLuint buffer)
{
	PFNGLFREEOBJECTBUFFERATIPROC proc;
	proc = (PFNGLFREEOBJECTBUFFERATIPROC)_GetProcAddress("glFreeObjectBufferATI");
	assert(proc != NULL);
	glFreeObjectBufferATI = proc;
	glFreeObjectBufferATI(buffer);
}

static void APIENTRY InitArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	PFNGLARRAYOBJECTATIPROC proc;
	proc = (PFNGLARRAYOBJECTATIPROC)_GetProcAddress("glArrayObjectATI");
	assert(proc != NULL);
	glArrayObjectATI = proc;
	glArrayObjectATI(array, size, type, stride, buffer, offset);
}

static void APIENTRY InitGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat *params)
{
	PFNGLGETARRAYOBJECTFVATIPROC proc;
	proc = (PFNGLGETARRAYOBJECTFVATIPROC)_GetProcAddress("glGetArrayObjectfvATI");
	assert(proc != NULL);
	glGetArrayObjectfvATI = proc;
	glGetArrayObjectfvATI(array, pname, params);
}

static void APIENTRY InitGetArrayObjectivATI(GLenum array, GLenum pname, GLint *params)
{
	PFNGLGETARRAYOBJECTIVATIPROC proc;
	proc = (PFNGLGETARRAYOBJECTIVATIPROC)_GetProcAddress("glGetArrayObjectivATI");
	assert(proc != NULL);
	glGetArrayObjectivATI = proc;
	glGetArrayObjectivATI(array, pname, params);
}

static void APIENTRY InitVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	PFNGLVARIANTARRAYOBJECTATIPROC proc;
	proc = (PFNGLVARIANTARRAYOBJECTATIPROC)_GetProcAddress("glVariantArrayObjectATI");
	assert(proc != NULL);
	glVariantArrayObjectATI = proc;
	glVariantArrayObjectATI(id, type, stride, buffer, offset);
}

static void APIENTRY InitGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat *params)
{
	PFNGLGETVARIANTARRAYOBJECTFVATIPROC proc;
	proc = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)_GetProcAddress("glGetVariantArrayObjectfvATI");
	assert(proc != NULL);
	glGetVariantArrayObjectfvATI = proc;
	glGetVariantArrayObjectfvATI(id, pname, params);
}

static void APIENTRY InitGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint *params)
{
	PFNGLGETVARIANTARRAYOBJECTIVATIPROC proc;
	proc = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)_GetProcAddress("glGetVariantArrayObjectivATI");
	assert(proc != NULL);
	glGetVariantArrayObjectivATI = proc;
	glGetVariantArrayObjectivATI(id, pname, params);
}


/* GL_EXT_vertex_shader */
static void APIENTRY InitBeginVertexShaderEXT(void)
{
	PFNGLBEGINVERTEXSHADEREXTPROC proc;
	proc = (PFNGLBEGINVERTEXSHADEREXTPROC)_GetProcAddress("glBeginVertexShaderEXT");
	assert(proc != NULL);
	glBeginVertexShaderEXT = proc;
	glBeginVertexShaderEXT();
}

static void APIENTRY InitEndVertexShaderEXT(void)
{
	PFNGLENDVERTEXSHADEREXTPROC proc;
	proc = (PFNGLENDVERTEXSHADEREXTPROC)_GetProcAddress("glEndVertexShaderEXT");
	assert(proc != NULL);
	glEndVertexShaderEXT = proc;
	glEndVertexShaderEXT();
}

static void APIENTRY InitBindVertexShaderEXT(GLuint id)
{
	PFNGLBINDVERTEXSHADEREXTPROC proc;
	proc = (PFNGLBINDVERTEXSHADEREXTPROC)_GetProcAddress("glBindVertexShaderEXT");
	assert(proc != NULL);
	glBindVertexShaderEXT = proc;
	glBindVertexShaderEXT(id);
}

static GLuint APIENTRY InitGenVertexShadersEXT(GLuint range)
{
	PFNGLGENVERTEXSHADERSEXTPROC proc;
	proc = (PFNGLGENVERTEXSHADERSEXTPROC)_GetProcAddress("glGenVertexShadersEXT");
	assert(proc != NULL);
	glGenVertexShadersEXT = proc;
	return glGenVertexShadersEXT(range);
}

static void APIENTRY InitDeleteVertexShaderEXT(GLuint id)
{
	PFNGLDELETEVERTEXSHADEREXTPROC proc;
	proc = (PFNGLDELETEVERTEXSHADEREXTPROC)_GetProcAddress("glDeleteVertexShaderEXT");
	assert(proc != NULL);
	glDeleteVertexShaderEXT = proc;
	glDeleteVertexShaderEXT(id);
}

static void APIENTRY InitShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
	PFNGLSHADEROP1EXTPROC proc;
	proc = (PFNGLSHADEROP1EXTPROC)_GetProcAddress("glShaderOp1EXT");
	assert(proc != NULL);
	glShaderOp1EXT = proc;
	glShaderOp1EXT(op, res, arg1);
}

static void APIENTRY InitShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
	PFNGLSHADEROP2EXTPROC proc;
	proc = (PFNGLSHADEROP2EXTPROC)_GetProcAddress("glShaderOp2EXT");
	assert(proc != NULL);
	glShaderOp2EXT = proc;
	glShaderOp2EXT(op, res, arg1, arg2);
}

static void APIENTRY InitShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
	PFNGLSHADEROP3EXTPROC proc;
	proc = (PFNGLSHADEROP3EXTPROC)_GetProcAddress("glShaderOp3EXT");
	assert(proc != NULL);
	glShaderOp3EXT = proc;
	glShaderOp3EXT(op, res, arg1, arg2, arg3);
}

static void APIENTRY InitSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	PFNGLSWIZZLEEXTPROC proc;
	proc = (PFNGLSWIZZLEEXTPROC)_GetProcAddress("glSwizzleEXT");
	assert(proc != NULL);
	glSwizzleEXT = proc;
	glSwizzleEXT(res, in, outX, outY, outZ, outW);
}

static void APIENTRY InitWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	PFNGLWRITEMASKEXTPROC proc;
	proc = (PFNGLWRITEMASKEXTPROC)_GetProcAddress("glWriteMaskEXT");
	assert(proc != NULL);
	glWriteMaskEXT = proc;
	glWriteMaskEXT(res, in, outX, outY, outZ, outW);
}

static void APIENTRY InitInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
	PFNGLINSERTCOMPONENTEXTPROC proc;
	proc = (PFNGLINSERTCOMPONENTEXTPROC)_GetProcAddress("glInsertComponentEXT");
	assert(proc != NULL);
	glInsertComponentEXT = proc;
	glInsertComponentEXT(res, src, num);
}

static void APIENTRY InitExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
	PFNGLEXTRACTCOMPONENTEXTPROC proc;
	proc = (PFNGLEXTRACTCOMPONENTEXTPROC)_GetProcAddress("glExtractComponentEXT");
	assert(proc != NULL);
	glExtractComponentEXT = proc;
	glExtractComponentEXT(res, src, num);
}

static GLuint APIENTRY InitGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
	PFNGLGENSYMBOLSEXTPROC proc;
	proc = (PFNGLGENSYMBOLSEXTPROC)_GetProcAddress("glGenSymbolsEXT");
	assert(proc != NULL);
	glGenSymbolsEXT = proc;
	return glGenSymbolsEXT(datatype, storagetype, range, components);
}

static void APIENTRY InitSetInvariantEXT(GLuint id, GLenum type, const GLvoid *addr)
{
	PFNGLSETINVARIANTEXTPROC proc;
	proc = (PFNGLSETINVARIANTEXTPROC)_GetProcAddress("glSetInvariantEXT");
	assert(proc != NULL);
	glSetInvariantEXT = proc;
	glSetInvariantEXT(id, type, addr);
}

static void APIENTRY InitSetLocalConstantEXT(GLuint id, GLenum type, const GLvoid *addr)
{
	PFNGLSETLOCALCONSTANTEXTPROC proc;
	proc = (PFNGLSETLOCALCONSTANTEXTPROC)_GetProcAddress("glSetLocalConstantEXT");
	assert(proc != NULL);
	glSetLocalConstantEXT = proc;
	glSetLocalConstantEXT(id, type, addr);
}

static void APIENTRY InitVariantbvEXT(GLuint id, const GLbyte *addr)
{
	PFNGLVARIANTBVEXTPROC proc;
	proc = (PFNGLVARIANTBVEXTPROC)_GetProcAddress("glVariantbvEXT");
	assert(proc != NULL);
	glVariantbvEXT = proc;
	glVariantbvEXT(id, addr);
}

static void APIENTRY InitVariantsvEXT(GLuint id, const GLshort *addr)
{
	PFNGLVARIANTSVEXTPROC proc;
	proc = (PFNGLVARIANTSVEXTPROC)_GetProcAddress("glVariantsvEXT");
	assert(proc != NULL);
	glVariantsvEXT = proc;
	glVariantsvEXT(id, addr);
}

static void APIENTRY InitVariantivEXT(GLuint id, const GLint *addr)
{
	PFNGLVARIANTIVEXTPROC proc;
	proc = (PFNGLVARIANTIVEXTPROC)_GetProcAddress("glVariantivEXT");
	assert(proc != NULL);
	glVariantivEXT = proc;
	glVariantivEXT(id, addr);
}

static void APIENTRY InitVariantfvEXT(GLuint id, const GLfloat *addr)
{
	PFNGLVARIANTFVEXTPROC proc;
	proc = (PFNGLVARIANTFVEXTPROC)_GetProcAddress("glVariantfvEXT");
	assert(proc != NULL);
	glVariantfvEXT = proc;
	glVariantfvEXT(id, addr);
}

static void APIENTRY InitVariantdvEXT(GLuint id, const GLdouble *addr)
{
	PFNGLVARIANTDVEXTPROC proc;
	proc = (PFNGLVARIANTDVEXTPROC)_GetProcAddress("glVariantdvEXT");
	assert(proc != NULL);
	glVariantdvEXT = proc;
	glVariantdvEXT(id, addr);
}

static void APIENTRY InitVariantubvEXT(GLuint id, const GLubyte *addr)
{
	PFNGLVARIANTUBVEXTPROC proc;
	proc = (PFNGLVARIANTUBVEXTPROC)_GetProcAddress("glVariantubvEXT");
	assert(proc != NULL);
	glVariantubvEXT = proc;
	glVariantubvEXT(id, addr);
}

static void APIENTRY InitVariantusvEXT(GLuint id, const GLushort *addr)
{
	PFNGLVARIANTUSVEXTPROC proc;
	proc = (PFNGLVARIANTUSVEXTPROC)_GetProcAddress("glVariantusvEXT");
	assert(proc != NULL);
	glVariantusvEXT = proc;
	glVariantusvEXT(id, addr);
}

static void APIENTRY InitVariantuivEXT(GLuint id, const GLuint *addr)
{
	PFNGLVARIANTUIVEXTPROC proc;
	proc = (PFNGLVARIANTUIVEXTPROC)_GetProcAddress("glVariantuivEXT");
	assert(proc != NULL);
	glVariantuivEXT = proc;
	glVariantuivEXT(id, addr);
}

static void APIENTRY InitVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const GLvoid *addr)
{
	PFNGLVARIANTPOINTEREXTPROC proc;
	proc = (PFNGLVARIANTPOINTEREXTPROC)_GetProcAddress("glVariantPointerEXT");
	assert(proc != NULL);
	glVariantPointerEXT = proc;
	glVariantPointerEXT(id, type, stride, addr);
}

static void APIENTRY InitEnableVariantClientStateEXT(GLuint id)
{
	PFNGLENABLEVARIANTCLIENTSTATEEXTPROC proc;
	proc = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)_GetProcAddress("glEnableVariantClientStateEXT");
	assert(proc != NULL);
	glEnableVariantClientStateEXT = proc;
	glEnableVariantClientStateEXT(id);
}

static void APIENTRY InitDisableVariantClientStateEXT(GLuint id)
{
	PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC proc;
	proc = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)_GetProcAddress("glDisableVariantClientStateEXT");
	assert(proc != NULL);
	glDisableVariantClientStateEXT = proc;
	glDisableVariantClientStateEXT(id);
}

static GLuint APIENTRY InitBindLightParameterEXT(GLenum light, GLenum value)
{
	PFNGLBINDLIGHTPARAMETEREXTPROC proc;
	proc = (PFNGLBINDLIGHTPARAMETEREXTPROC)_GetProcAddress("glBindLightParameterEXT");
	assert(proc != NULL);
	glBindLightParameterEXT = proc;
	return glBindLightParameterEXT(light, value);
}

static GLuint APIENTRY InitBindMaterialParameterEXT(GLenum face, GLenum value)
{
	PFNGLBINDMATERIALPARAMETEREXTPROC proc;
	proc = (PFNGLBINDMATERIALPARAMETEREXTPROC)_GetProcAddress("glBindMaterialParameterEXT");
	assert(proc != NULL);
	glBindMaterialParameterEXT = proc;
	return glBindMaterialParameterEXT(face, value);
}

static GLuint APIENTRY InitBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
	PFNGLBINDTEXGENPARAMETEREXTPROC proc;
	proc = (PFNGLBINDTEXGENPARAMETEREXTPROC)_GetProcAddress("glBindTexGenParameterEXT");
	assert(proc != NULL);
	glBindTexGenParameterEXT = proc;
	return glBindTexGenParameterEXT(unit, coord, value);
}

static GLuint APIENTRY InitBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
	PFNGLBINDTEXTUREUNITPARAMETEREXTPROC proc;
	proc = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)_GetProcAddress("glBindTextureUnitParameterEXT");
	assert(proc != NULL);
	glBindTextureUnitParameterEXT = proc;
	return glBindTextureUnitParameterEXT(unit, value);
}

static GLuint APIENTRY InitBindParameterEXT(GLenum value)
{
	PFNGLBINDPARAMETEREXTPROC proc;
	proc = (PFNGLBINDPARAMETEREXTPROC)_GetProcAddress("glBindParameterEXT");
	assert(proc != NULL);
	glBindParameterEXT = proc;
	return glBindParameterEXT(value);
}

static GLboolean APIENTRY InitIsVariantEnabledEXT(GLuint id, GLenum cap)
{
	PFNGLISVARIANTENABLEDEXTPROC proc;
	proc = (PFNGLISVARIANTENABLEDEXTPROC)_GetProcAddress("glIsVariantEnabledEXT");
	assert(proc != NULL);
	glIsVariantEnabledEXT = proc;
	return glIsVariantEnabledEXT(id, cap);
}

static void APIENTRY InitGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
{
	PFNGLGETVARIANTBOOLEANVEXTPROC proc;
	proc = (PFNGLGETVARIANTBOOLEANVEXTPROC)_GetProcAddress("glGetVariantBooleanvEXT");
	assert(proc != NULL);
	glGetVariantBooleanvEXT = proc;
	glGetVariantBooleanvEXT(id, value, data);
}

static void APIENTRY InitGetVariantIntegervEXT(GLuint id, GLenum value, GLint *data)
{
	PFNGLGETVARIANTINTEGERVEXTPROC proc;
	proc = (PFNGLGETVARIANTINTEGERVEXTPROC)_GetProcAddress("glGetVariantIntegervEXT");
	assert(proc != NULL);
	glGetVariantIntegervEXT = proc;
	glGetVariantIntegervEXT(id, value, data);
}

static void APIENTRY InitGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
{
	PFNGLGETVARIANTFLOATVEXTPROC proc;
	proc = (PFNGLGETVARIANTFLOATVEXTPROC)_GetProcAddress("glGetVariantFloatvEXT");
	assert(proc != NULL);
	glGetVariantFloatvEXT = proc;
	glGetVariantFloatvEXT(id, value, data);
}

static void APIENTRY InitGetVariantPointervEXT(GLuint id, GLenum value, GLvoid* *data)
{
	PFNGLGETVARIANTPOINTERVEXTPROC proc;
	proc = (PFNGLGETVARIANTPOINTERVEXTPROC)_GetProcAddress("glGetVariantPointervEXT");
	assert(proc != NULL);
	glGetVariantPointervEXT = proc;
	glGetVariantPointervEXT(id, value, data);
}

static void APIENTRY InitGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
{
	PFNGLGETINVARIANTBOOLEANVEXTPROC proc;
	proc = (PFNGLGETINVARIANTBOOLEANVEXTPROC)_GetProcAddress("glGetInvariantBooleanvEXT");
	assert(proc != NULL);
	glGetInvariantBooleanvEXT = proc;
	glGetInvariantBooleanvEXT(id, value, data);
}

static void APIENTRY InitGetInvariantIntegervEXT(GLuint id, GLenum value, GLint *data)
{
	PFNGLGETINVARIANTINTEGERVEXTPROC proc;
	proc = (PFNGLGETINVARIANTINTEGERVEXTPROC)_GetProcAddress("glGetInvariantIntegervEXT");
	assert(proc != NULL);
	glGetInvariantIntegervEXT = proc;
	glGetInvariantIntegervEXT(id, value, data);
}

static void APIENTRY InitGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
{
	PFNGLGETINVARIANTFLOATVEXTPROC proc;
	proc = (PFNGLGETINVARIANTFLOATVEXTPROC)_GetProcAddress("glGetInvariantFloatvEXT");
	assert(proc != NULL);
	glGetInvariantFloatvEXT = proc;
	glGetInvariantFloatvEXT(id, value, data);
}

static void APIENTRY InitGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
{
	PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC proc;
	proc = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)_GetProcAddress("glGetLocalConstantBooleanvEXT");
	assert(proc != NULL);
	glGetLocalConstantBooleanvEXT = proc;
	glGetLocalConstantBooleanvEXT(id, value, data);
}

static void APIENTRY InitGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint *data)
{
	PFNGLGETLOCALCONSTANTINTEGERVEXTPROC proc;
	proc = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)_GetProcAddress("glGetLocalConstantIntegervEXT");
	assert(proc != NULL);
	glGetLocalConstantIntegervEXT = proc;
	glGetLocalConstantIntegervEXT(id, value, data);
}

static void APIENTRY InitGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
{
	PFNGLGETLOCALCONSTANTFLOATVEXTPROC proc;
	proc = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)_GetProcAddress("glGetLocalConstantFloatvEXT");
	assert(proc != NULL);
	glGetLocalConstantFloatvEXT = proc;
	glGetLocalConstantFloatvEXT(id, value, data);
}


/* GL_ATI_vertex_streams */
static void APIENTRY InitVertexStream1sATI(GLenum stream, GLshort x)
{
	PFNGLVERTEXSTREAM1SATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1SATIPROC)_GetProcAddress("glVertexStream1sATI");
	assert(proc != NULL);
	glVertexStream1sATI = proc;
	glVertexStream1sATI(stream, x);
}

static void APIENTRY InitVertexStream1svATI(GLenum stream, const GLshort *coords)
{
	PFNGLVERTEXSTREAM1SVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1SVATIPROC)_GetProcAddress("glVertexStream1svATI");
	assert(proc != NULL);
	glVertexStream1svATI = proc;
	glVertexStream1svATI(stream, coords);
}

static void APIENTRY InitVertexStream1iATI(GLenum stream, GLint x)
{
	PFNGLVERTEXSTREAM1IATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1IATIPROC)_GetProcAddress("glVertexStream1iATI");
	assert(proc != NULL);
	glVertexStream1iATI = proc;
	glVertexStream1iATI(stream, x);
}

static void APIENTRY InitVertexStream1ivATI(GLenum stream, const GLint *coords)
{
	PFNGLVERTEXSTREAM1IVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1IVATIPROC)_GetProcAddress("glVertexStream1ivATI");
	assert(proc != NULL);
	glVertexStream1ivATI = proc;
	glVertexStream1ivATI(stream, coords);
}

static void APIENTRY InitVertexStream1fATI(GLenum stream, GLfloat x)
{
	PFNGLVERTEXSTREAM1FATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1FATIPROC)_GetProcAddress("glVertexStream1fATI");
	assert(proc != NULL);
	glVertexStream1fATI = proc;
	glVertexStream1fATI(stream, x);
}

static void APIENTRY InitVertexStream1fvATI(GLenum stream, const GLfloat *coords)
{
	PFNGLVERTEXSTREAM1FVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1FVATIPROC)_GetProcAddress("glVertexStream1fvATI");
	assert(proc != NULL);
	glVertexStream1fvATI = proc;
	glVertexStream1fvATI(stream, coords);
}

static void APIENTRY InitVertexStream1dATI(GLenum stream, GLdouble x)
{
	PFNGLVERTEXSTREAM1DATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1DATIPROC)_GetProcAddress("glVertexStream1dATI");
	assert(proc != NULL);
	glVertexStream1dATI = proc;
	glVertexStream1dATI(stream, x);
}

static void APIENTRY InitVertexStream1dvATI(GLenum stream, const GLdouble *coords)
{
	PFNGLVERTEXSTREAM1DVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM1DVATIPROC)_GetProcAddress("glVertexStream1dvATI");
	assert(proc != NULL);
	glVertexStream1dvATI = proc;
	glVertexStream1dvATI(stream, coords);
}

static void APIENTRY InitVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
	PFNGLVERTEXSTREAM2SATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2SATIPROC)_GetProcAddress("glVertexStream2sATI");
	assert(proc != NULL);
	glVertexStream2sATI = proc;
	glVertexStream2sATI(stream, x, y);
}

static void APIENTRY InitVertexStream2svATI(GLenum stream, const GLshort *coords)
{
	PFNGLVERTEXSTREAM2SVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2SVATIPROC)_GetProcAddress("glVertexStream2svATI");
	assert(proc != NULL);
	glVertexStream2svATI = proc;
	glVertexStream2svATI(stream, coords);
}

static void APIENTRY InitVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
	PFNGLVERTEXSTREAM2IATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2IATIPROC)_GetProcAddress("glVertexStream2iATI");
	assert(proc != NULL);
	glVertexStream2iATI = proc;
	glVertexStream2iATI(stream, x, y);
}

static void APIENTRY InitVertexStream2ivATI(GLenum stream, const GLint *coords)
{
	PFNGLVERTEXSTREAM2IVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2IVATIPROC)_GetProcAddress("glVertexStream2ivATI");
	assert(proc != NULL);
	glVertexStream2ivATI = proc;
	glVertexStream2ivATI(stream, coords);
}

static void APIENTRY InitVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
	PFNGLVERTEXSTREAM2FATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2FATIPROC)_GetProcAddress("glVertexStream2fATI");
	assert(proc != NULL);
	glVertexStream2fATI = proc;
	glVertexStream2fATI(stream, x, y);
}

static void APIENTRY InitVertexStream2fvATI(GLenum stream, const GLfloat *coords)
{
	PFNGLVERTEXSTREAM2FVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2FVATIPROC)_GetProcAddress("glVertexStream2fvATI");
	assert(proc != NULL);
	glVertexStream2fvATI = proc;
	glVertexStream2fvATI(stream, coords);
}

static void APIENTRY InitVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
	PFNGLVERTEXSTREAM2DATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2DATIPROC)_GetProcAddress("glVertexStream2dATI");
	assert(proc != NULL);
	glVertexStream2dATI = proc;
	glVertexStream2dATI(stream, x, y);
}

static void APIENTRY InitVertexStream2dvATI(GLenum stream, const GLdouble *coords)
{
	PFNGLVERTEXSTREAM2DVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM2DVATIPROC)_GetProcAddress("glVertexStream2dvATI");
	assert(proc != NULL);
	glVertexStream2dvATI = proc;
	glVertexStream2dvATI(stream, coords);
}

static void APIENTRY InitVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
	PFNGLVERTEXSTREAM3SATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3SATIPROC)_GetProcAddress("glVertexStream3sATI");
	assert(proc != NULL);
	glVertexStream3sATI = proc;
	glVertexStream3sATI(stream, x, y, z);
}

static void APIENTRY InitVertexStream3svATI(GLenum stream, const GLshort *coords)
{
	PFNGLVERTEXSTREAM3SVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3SVATIPROC)_GetProcAddress("glVertexStream3svATI");
	assert(proc != NULL);
	glVertexStream3svATI = proc;
	glVertexStream3svATI(stream, coords);
}

static void APIENTRY InitVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
	PFNGLVERTEXSTREAM3IATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3IATIPROC)_GetProcAddress("glVertexStream3iATI");
	assert(proc != NULL);
	glVertexStream3iATI = proc;
	glVertexStream3iATI(stream, x, y, z);
}

static void APIENTRY InitVertexStream3ivATI(GLenum stream, const GLint *coords)
{
	PFNGLVERTEXSTREAM3IVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3IVATIPROC)_GetProcAddress("glVertexStream3ivATI");
	assert(proc != NULL);
	glVertexStream3ivATI = proc;
	glVertexStream3ivATI(stream, coords);
}

static void APIENTRY InitVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
	PFNGLVERTEXSTREAM3FATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3FATIPROC)_GetProcAddress("glVertexStream3fATI");
	assert(proc != NULL);
	glVertexStream3fATI = proc;
	glVertexStream3fATI(stream, x, y, z);
}

static void APIENTRY InitVertexStream3fvATI(GLenum stream, const GLfloat *coords)
{
	PFNGLVERTEXSTREAM3FVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3FVATIPROC)_GetProcAddress("glVertexStream3fvATI");
	assert(proc != NULL);
	glVertexStream3fvATI = proc;
	glVertexStream3fvATI(stream, coords);
}

static void APIENTRY InitVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
	PFNGLVERTEXSTREAM3DATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3DATIPROC)_GetProcAddress("glVertexStream3dATI");
	assert(proc != NULL);
	glVertexStream3dATI = proc;
	glVertexStream3dATI(stream, x, y, z);
}

static void APIENTRY InitVertexStream3dvATI(GLenum stream, const GLdouble *coords)
{
	PFNGLVERTEXSTREAM3DVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM3DVATIPROC)_GetProcAddress("glVertexStream3dvATI");
	assert(proc != NULL);
	glVertexStream3dvATI = proc;
	glVertexStream3dvATI(stream, coords);
}

static void APIENTRY InitVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
	PFNGLVERTEXSTREAM4SATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4SATIPROC)_GetProcAddress("glVertexStream4sATI");
	assert(proc != NULL);
	glVertexStream4sATI = proc;
	glVertexStream4sATI(stream, x, y, z, w);
}

static void APIENTRY InitVertexStream4svATI(GLenum stream, const GLshort *coords)
{
	PFNGLVERTEXSTREAM4SVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4SVATIPROC)_GetProcAddress("glVertexStream4svATI");
	assert(proc != NULL);
	glVertexStream4svATI = proc;
	glVertexStream4svATI(stream, coords);
}

static void APIENTRY InitVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
	PFNGLVERTEXSTREAM4IATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4IATIPROC)_GetProcAddress("glVertexStream4iATI");
	assert(proc != NULL);
	glVertexStream4iATI = proc;
	glVertexStream4iATI(stream, x, y, z, w);
}

static void APIENTRY InitVertexStream4ivATI(GLenum stream, const GLint *coords)
{
	PFNGLVERTEXSTREAM4IVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4IVATIPROC)_GetProcAddress("glVertexStream4ivATI");
	assert(proc != NULL);
	glVertexStream4ivATI = proc;
	glVertexStream4ivATI(stream, coords);
}

static void APIENTRY InitVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLVERTEXSTREAM4FATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4FATIPROC)_GetProcAddress("glVertexStream4fATI");
	assert(proc != NULL);
	glVertexStream4fATI = proc;
	glVertexStream4fATI(stream, x, y, z, w);
}

static void APIENTRY InitVertexStream4fvATI(GLenum stream, const GLfloat *coords)
{
	PFNGLVERTEXSTREAM4FVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4FVATIPROC)_GetProcAddress("glVertexStream4fvATI");
	assert(proc != NULL);
	glVertexStream4fvATI = proc;
	glVertexStream4fvATI(stream, coords);
}

static void APIENTRY InitVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLVERTEXSTREAM4DATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4DATIPROC)_GetProcAddress("glVertexStream4dATI");
	assert(proc != NULL);
	glVertexStream4dATI = proc;
	glVertexStream4dATI(stream, x, y, z, w);
}

static void APIENTRY InitVertexStream4dvATI(GLenum stream, const GLdouble *coords)
{
	PFNGLVERTEXSTREAM4DVATIPROC proc;
	proc = (PFNGLVERTEXSTREAM4DVATIPROC)_GetProcAddress("glVertexStream4dvATI");
	assert(proc != NULL);
	glVertexStream4dvATI = proc;
	glVertexStream4dvATI(stream, coords);
}

static void APIENTRY InitNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
	PFNGLNORMALSTREAM3BATIPROC proc;
	proc = (PFNGLNORMALSTREAM3BATIPROC)_GetProcAddress("glNormalStream3bATI");
	assert(proc != NULL);
	glNormalStream3bATI = proc;
	glNormalStream3bATI(stream, nx, ny, nz);
}

static void APIENTRY InitNormalStream3bvATI(GLenum stream, const GLbyte *coords)
{
	PFNGLNORMALSTREAM3BVATIPROC proc;
	proc = (PFNGLNORMALSTREAM3BVATIPROC)_GetProcAddress("glNormalStream3bvATI");
	assert(proc != NULL);
	glNormalStream3bvATI = proc;
	glNormalStream3bvATI(stream, coords);
}

static void APIENTRY InitNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
	PFNGLNORMALSTREAM3SATIPROC proc;
	proc = (PFNGLNORMALSTREAM3SATIPROC)_GetProcAddress("glNormalStream3sATI");
	assert(proc != NULL);
	glNormalStream3sATI = proc;
	glNormalStream3sATI(stream, nx, ny, nz);
}

static void APIENTRY InitNormalStream3svATI(GLenum stream, const GLshort *coords)
{
	PFNGLNORMALSTREAM3SVATIPROC proc;
	proc = (PFNGLNORMALSTREAM3SVATIPROC)_GetProcAddress("glNormalStream3svATI");
	assert(proc != NULL);
	glNormalStream3svATI = proc;
	glNormalStream3svATI(stream, coords);
}

static void APIENTRY InitNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
	PFNGLNORMALSTREAM3IATIPROC proc;
	proc = (PFNGLNORMALSTREAM3IATIPROC)_GetProcAddress("glNormalStream3iATI");
	assert(proc != NULL);
	glNormalStream3iATI = proc;
	glNormalStream3iATI(stream, nx, ny, nz);
}

static void APIENTRY InitNormalStream3ivATI(GLenum stream, const GLint *coords)
{
	PFNGLNORMALSTREAM3IVATIPROC proc;
	proc = (PFNGLNORMALSTREAM3IVATIPROC)_GetProcAddress("glNormalStream3ivATI");
	assert(proc != NULL);
	glNormalStream3ivATI = proc;
	glNormalStream3ivATI(stream, coords);
}

static void APIENTRY InitNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
	PFNGLNORMALSTREAM3FATIPROC proc;
	proc = (PFNGLNORMALSTREAM3FATIPROC)_GetProcAddress("glNormalStream3fATI");
	assert(proc != NULL);
	glNormalStream3fATI = proc;
	glNormalStream3fATI(stream, nx, ny, nz);
}

static void APIENTRY InitNormalStream3fvATI(GLenum stream, const GLfloat *coords)
{
	PFNGLNORMALSTREAM3FVATIPROC proc;
	proc = (PFNGLNORMALSTREAM3FVATIPROC)_GetProcAddress("glNormalStream3fvATI");
	assert(proc != NULL);
	glNormalStream3fvATI = proc;
	glNormalStream3fvATI(stream, coords);
}

static void APIENTRY InitNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
	PFNGLNORMALSTREAM3DATIPROC proc;
	proc = (PFNGLNORMALSTREAM3DATIPROC)_GetProcAddress("glNormalStream3dATI");
	assert(proc != NULL);
	glNormalStream3dATI = proc;
	glNormalStream3dATI(stream, nx, ny, nz);
}

static void APIENTRY InitNormalStream3dvATI(GLenum stream, const GLdouble *coords)
{
	PFNGLNORMALSTREAM3DVATIPROC proc;
	proc = (PFNGLNORMALSTREAM3DVATIPROC)_GetProcAddress("glNormalStream3dvATI");
	assert(proc != NULL);
	glNormalStream3dvATI = proc;
	glNormalStream3dvATI(stream, coords);
}

static void APIENTRY InitClientActiveVertexStreamATI(GLenum stream)
{
	PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC proc;
	proc = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)_GetProcAddress("glClientActiveVertexStreamATI");
	assert(proc != NULL);
	glClientActiveVertexStreamATI = proc;
	glClientActiveVertexStreamATI(stream);
}

static void APIENTRY InitVertexBlendEnviATI(GLenum pname, GLint param)
{
	PFNGLVERTEXBLENDENVIATIPROC proc;
	proc = (PFNGLVERTEXBLENDENVIATIPROC)_GetProcAddress("glVertexBlendEnviATI");
	assert(proc != NULL);
	glVertexBlendEnviATI = proc;
	glVertexBlendEnviATI(pname, param);
}

static void APIENTRY InitVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
	PFNGLVERTEXBLENDENVFATIPROC proc;
	proc = (PFNGLVERTEXBLENDENVFATIPROC)_GetProcAddress("glVertexBlendEnvfATI");
	assert(proc != NULL);
	glVertexBlendEnvfATI = proc;
	glVertexBlendEnvfATI(pname, param);
}


/* GL_ATI_element_array */
static void APIENTRY InitElementPointerATI(GLenum type, const GLvoid *pointer)
{
	PFNGLELEMENTPOINTERATIPROC proc;
	proc = (PFNGLELEMENTPOINTERATIPROC)_GetProcAddress("glElementPointerATI");
	assert(proc != NULL);
	glElementPointerATI = proc;
	glElementPointerATI(type, pointer);
}

static void APIENTRY InitDrawElementArrayATI(GLenum mode, GLsizei count)
{
	PFNGLDRAWELEMENTARRAYATIPROC proc;
	proc = (PFNGLDRAWELEMENTARRAYATIPROC)_GetProcAddress("glDrawElementArrayATI");
	assert(proc != NULL);
	glDrawElementArrayATI = proc;
	glDrawElementArrayATI(mode, count);
}

static void APIENTRY InitDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
	PFNGLDRAWRANGEELEMENTARRAYATIPROC proc;
	proc = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)_GetProcAddress("glDrawRangeElementArrayATI");
	assert(proc != NULL);
	glDrawRangeElementArrayATI = proc;
	glDrawRangeElementArrayATI(mode, start, end, count);
}


/* GL_SUN_mesh_array */
static void APIENTRY InitDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
	PFNGLDRAWMESHARRAYSSUNPROC proc;
	proc = (PFNGLDRAWMESHARRAYSSUNPROC)_GetProcAddress("glDrawMeshArraysSUN");
	assert(proc != NULL);
	glDrawMeshArraysSUN = proc;
	glDrawMeshArraysSUN(mode, first, count, width);
}


/* GL_SUN_slice_accum */

/* GL_NV_multisample_filter_hint */

/* GL_NV_depth_clamp */

/* GL_NV_occlusion_query */
static void APIENTRY InitGenOcclusionQueriesNV(GLsizei n, GLuint *ids)
{
	PFNGLGENOCCLUSIONQUERIESNVPROC proc;
	proc = (PFNGLGENOCCLUSIONQUERIESNVPROC)_GetProcAddress("glGenOcclusionQueriesNV");
	assert(proc != NULL);
	glGenOcclusionQueriesNV = proc;
	glGenOcclusionQueriesNV(n, ids);
}

static void APIENTRY InitDeleteOcclusionQueriesNV(GLsizei n, const GLuint *ids)
{
	PFNGLDELETEOCCLUSIONQUERIESNVPROC proc;
	proc = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)_GetProcAddress("glDeleteOcclusionQueriesNV");
	assert(proc != NULL);
	glDeleteOcclusionQueriesNV = proc;
	glDeleteOcclusionQueriesNV(n, ids);
}

static GLboolean APIENTRY InitIsOcclusionQueryNV(GLuint id)
{
	PFNGLISOCCLUSIONQUERYNVPROC proc;
	proc = (PFNGLISOCCLUSIONQUERYNVPROC)_GetProcAddress("glIsOcclusionQueryNV");
	assert(proc != NULL);
	glIsOcclusionQueryNV = proc;
	return glIsOcclusionQueryNV(id);
}

static void APIENTRY InitBeginOcclusionQueryNV(GLuint id)
{
	PFNGLBEGINOCCLUSIONQUERYNVPROC proc;
	proc = (PFNGLBEGINOCCLUSIONQUERYNVPROC)_GetProcAddress("glBeginOcclusionQueryNV");
	assert(proc != NULL);
	glBeginOcclusionQueryNV = proc;
	glBeginOcclusionQueryNV(id);
}

static void APIENTRY InitEndOcclusionQueryNV(void)
{
	PFNGLENDOCCLUSIONQUERYNVPROC proc;
	proc = (PFNGLENDOCCLUSIONQUERYNVPROC)_GetProcAddress("glEndOcclusionQueryNV");
	assert(proc != NULL);
	glEndOcclusionQueryNV = proc;
	glEndOcclusionQueryNV();
}

static void APIENTRY InitGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint *params)
{
	PFNGLGETOCCLUSIONQUERYIVNVPROC proc;
	proc = (PFNGLGETOCCLUSIONQUERYIVNVPROC)_GetProcAddress("glGetOcclusionQueryivNV");
	assert(proc != NULL);
	glGetOcclusionQueryivNV = proc;
	glGetOcclusionQueryivNV(id, pname, params);
}

static void APIENTRY InitGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint *params)
{
	PFNGLGETOCCLUSIONQUERYUIVNVPROC proc;
	proc = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)_GetProcAddress("glGetOcclusionQueryuivNV");
	assert(proc != NULL);
	glGetOcclusionQueryuivNV = proc;
	glGetOcclusionQueryuivNV(id, pname, params);
}


/* GL_NV_point_sprite */
static void APIENTRY InitPointParameteriNV(GLenum pname, GLint param)
{
	PFNGLPOINTPARAMETERINVPROC proc;
	proc = (PFNGLPOINTPARAMETERINVPROC)_GetProcAddress("glPointParameteriNV");
	assert(proc != NULL);
	glPointParameteriNV = proc;
	glPointParameteriNV(pname, param);
}

static void APIENTRY InitPointParameterivNV(GLenum pname, const GLint *params)
{
	PFNGLPOINTPARAMETERIVNVPROC proc;
	proc = (PFNGLPOINTPARAMETERIVNVPROC)_GetProcAddress("glPointParameterivNV");
	assert(proc != NULL);
	glPointParameterivNV = proc;
	glPointParameterivNV(pname, params);
}


/* GL_NV_texture_shader3 */

/* GL_NV_vertex_program1_1 */

/* GL_EXT_shadow_funcs */

/* GL_EXT_stencil_two_side */
static void APIENTRY InitActiveStencilFaceEXT(GLenum face)
{
	PFNGLACTIVESTENCILFACEEXTPROC proc;
	proc = (PFNGLACTIVESTENCILFACEEXTPROC)_GetProcAddress("glActiveStencilFaceEXT");
	assert(proc != NULL);
	glActiveStencilFaceEXT = proc;
	glActiveStencilFaceEXT(face);
}


/* GL_ATI_text_fragment_shader */

/* GL_APPLE_client_storage */

/* GL_APPLE_element_array */
static void APIENTRY InitElementPointerAPPLE(GLenum type, const GLvoid *pointer)
{
	PFNGLELEMENTPOINTERAPPLEPROC proc;
	proc = (PFNGLELEMENTPOINTERAPPLEPROC)_GetProcAddress("glElementPointerAPPLE");
	assert(proc != NULL);
	glElementPointerAPPLE = proc;
	glElementPointerAPPLE(type, pointer);
}

static void APIENTRY InitDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
	PFNGLDRAWELEMENTARRAYAPPLEPROC proc;
	proc = (PFNGLDRAWELEMENTARRAYAPPLEPROC)_GetProcAddress("glDrawElementArrayAPPLE");
	assert(proc != NULL);
	glDrawElementArrayAPPLE = proc;
	glDrawElementArrayAPPLE(mode, first, count);
}

static void APIENTRY InitDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
	PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC proc;
	proc = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)_GetProcAddress("glDrawRangeElementArrayAPPLE");
	assert(proc != NULL);
	glDrawRangeElementArrayAPPLE = proc;
	glDrawRangeElementArrayAPPLE(mode, start, end, first, count);
}

static void APIENTRY InitMultiDrawElementArrayAPPLE(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
	PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC proc;
	proc = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)_GetProcAddress("glMultiDrawElementArrayAPPLE");
	assert(proc != NULL);
	glMultiDrawElementArrayAPPLE = proc;
	glMultiDrawElementArrayAPPLE(mode, first, count, primcount);
}

static void APIENTRY InitMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount)
{
	PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC proc;
	proc = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)_GetProcAddress("glMultiDrawRangeElementArrayAPPLE");
	assert(proc != NULL);
	glMultiDrawRangeElementArrayAPPLE = proc;
	glMultiDrawRangeElementArrayAPPLE(mode, start, end, first, count, primcount);
}


/* GL_APPLE_fence */
static void APIENTRY InitGenFencesAPPLE(GLsizei n, GLuint *fences)
{
	PFNGLGENFENCESAPPLEPROC proc;
	proc = (PFNGLGENFENCESAPPLEPROC)_GetProcAddress("glGenFencesAPPLE");
	assert(proc != NULL);
	glGenFencesAPPLE = proc;
	glGenFencesAPPLE(n, fences);
}

static void APIENTRY InitDeleteFencesAPPLE(GLsizei n, const GLuint *fences)
{
	PFNGLDELETEFENCESAPPLEPROC proc;
	proc = (PFNGLDELETEFENCESAPPLEPROC)_GetProcAddress("glDeleteFencesAPPLE");
	assert(proc != NULL);
	glDeleteFencesAPPLE = proc;
	glDeleteFencesAPPLE(n, fences);
}

static void APIENTRY InitSetFenceAPPLE(GLuint fence)
{
	PFNGLSETFENCEAPPLEPROC proc;
	proc = (PFNGLSETFENCEAPPLEPROC)_GetProcAddress("glSetFenceAPPLE");
	assert(proc != NULL);
	glSetFenceAPPLE = proc;
	glSetFenceAPPLE(fence);
}

static GLboolean APIENTRY InitIsFenceAPPLE(GLuint fence)
{
	PFNGLISFENCEAPPLEPROC proc;
	proc = (PFNGLISFENCEAPPLEPROC)_GetProcAddress("glIsFenceAPPLE");
	assert(proc != NULL);
	glIsFenceAPPLE = proc;
	return glIsFenceAPPLE(fence);
}

static GLboolean APIENTRY InitTestFenceAPPLE(GLuint fence)
{
	PFNGLTESTFENCEAPPLEPROC proc;
	proc = (PFNGLTESTFENCEAPPLEPROC)_GetProcAddress("glTestFenceAPPLE");
	assert(proc != NULL);
	glTestFenceAPPLE = proc;
	return glTestFenceAPPLE(fence);
}

static void APIENTRY InitFinishFenceAPPLE(GLuint fence)
{
	PFNGLFINISHFENCEAPPLEPROC proc;
	proc = (PFNGLFINISHFENCEAPPLEPROC)_GetProcAddress("glFinishFenceAPPLE");
	assert(proc != NULL);
	glFinishFenceAPPLE = proc;
	glFinishFenceAPPLE(fence);
}

static GLboolean APIENTRY InitTestObjectAPPLE(GLenum object, GLuint name)
{
	PFNGLTESTOBJECTAPPLEPROC proc;
	proc = (PFNGLTESTOBJECTAPPLEPROC)_GetProcAddress("glTestObjectAPPLE");
	assert(proc != NULL);
	glTestObjectAPPLE = proc;
	return glTestObjectAPPLE(object, name);
}

static void APIENTRY InitFinishObjectAPPLE(GLenum object, GLint name)
{
	PFNGLFINISHOBJECTAPPLEPROC proc;
	proc = (PFNGLFINISHOBJECTAPPLEPROC)_GetProcAddress("glFinishObjectAPPLE");
	assert(proc != NULL);
	glFinishObjectAPPLE = proc;
	glFinishObjectAPPLE(object, name);
}


/* GL_APPLE_vertex_array_object */
static void APIENTRY InitBindVertexArrayAPPLE(GLuint array)
{
	PFNGLBINDVERTEXARRAYAPPLEPROC proc;
	proc = (PFNGLBINDVERTEXARRAYAPPLEPROC)_GetProcAddress("glBindVertexArrayAPPLE");
	assert(proc != NULL);
	glBindVertexArrayAPPLE = proc;
	glBindVertexArrayAPPLE(array);
}

static void APIENTRY InitDeleteVertexArraysAPPLE(GLsizei n, const GLuint *arrays)
{
	PFNGLDELETEVERTEXARRAYSAPPLEPROC proc;
	proc = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)_GetProcAddress("glDeleteVertexArraysAPPLE");
	assert(proc != NULL);
	glDeleteVertexArraysAPPLE = proc;
	glDeleteVertexArraysAPPLE(n, arrays);
}

static void APIENTRY InitGenVertexArraysAPPLE(GLsizei n, const GLuint *arrays)
{
	PFNGLGENVERTEXARRAYSAPPLEPROC proc;
	proc = (PFNGLGENVERTEXARRAYSAPPLEPROC)_GetProcAddress("glGenVertexArraysAPPLE");
	assert(proc != NULL);
	glGenVertexArraysAPPLE = proc;
	glGenVertexArraysAPPLE(n, arrays);
}

static GLboolean APIENTRY InitIsVertexArrayAPPLE(GLuint array)
{
	PFNGLISVERTEXARRAYAPPLEPROC proc;
	proc = (PFNGLISVERTEXARRAYAPPLEPROC)_GetProcAddress("glIsVertexArrayAPPLE");
	assert(proc != NULL);
	glIsVertexArrayAPPLE = proc;
	return glIsVertexArrayAPPLE(array);
}


/* GL_APPLE_vertex_array_range */
static void APIENTRY InitVertexArrayRangeAPPLE(GLsizei length, GLvoid *pointer)
{
	PFNGLVERTEXARRAYRANGEAPPLEPROC proc;
	proc = (PFNGLVERTEXARRAYRANGEAPPLEPROC)_GetProcAddress("glVertexArrayRangeAPPLE");
	assert(proc != NULL);
	glVertexArrayRangeAPPLE = proc;
	glVertexArrayRangeAPPLE(length, pointer);
}

static void APIENTRY InitFlushVertexArrayRangeAPPLE(GLsizei length, GLvoid *pointer)
{
	PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC proc;
	proc = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)_GetProcAddress("glFlushVertexArrayRangeAPPLE");
	assert(proc != NULL);
	glFlushVertexArrayRangeAPPLE = proc;
	glFlushVertexArrayRangeAPPLE(length, pointer);
}

static void APIENTRY InitVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
	PFNGLVERTEXARRAYPARAMETERIAPPLEPROC proc;
	proc = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)_GetProcAddress("glVertexArrayParameteriAPPLE");
	assert(proc != NULL);
	glVertexArrayParameteriAPPLE = proc;
	glVertexArrayParameteriAPPLE(pname, param);
}


/* GL_APPLE_ycbcr_422 */

/* GL_S3_s3tc */

/* GL_ATI_draw_buffers */
static void APIENTRY InitDrawBuffersATI(GLsizei n, const GLenum *bufs)
{
	PFNGLDRAWBUFFERSATIPROC proc;
	proc = (PFNGLDRAWBUFFERSATIPROC)_GetProcAddress("glDrawBuffersATI");
	assert(proc != NULL);
	glDrawBuffersATI = proc;
	glDrawBuffersATI(n, bufs);
}


/* GL_ATI_pixel_format_float */

/* GL_ATI_texture_env_combine3 */

/* GL_ATI_texture_float */

/* GL_NV_float_buffer */

/* GL_NV_fragment_program */
static void APIENTRY InitProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PFNGLPROGRAMNAMEDPARAMETER4FNVPROC proc;
	proc = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)_GetProcAddress("glProgramNamedParameter4fNV");
	assert(proc != NULL);
	glProgramNamedParameter4fNV = proc;
	glProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

static void APIENTRY InitProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PFNGLPROGRAMNAMEDPARAMETER4DNVPROC proc;
	proc = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)_GetProcAddress("glProgramNamedParameter4dNV");
	assert(proc != NULL);
	glProgramNamedParameter4dNV = proc;
	glProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

static void APIENTRY InitProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v)
{
	PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC proc;
	proc = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)_GetProcAddress("glProgramNamedParameter4fvNV");
	assert(proc != NULL);
	glProgramNamedParameter4fvNV = proc;
	glProgramNamedParameter4fvNV(id, len, name, v);
}

static void APIENTRY InitProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v)
{
	PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC proc;
	proc = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)_GetProcAddress("glProgramNamedParameter4dvNV");
	assert(proc != NULL);
	glProgramNamedParameter4dvNV = proc;
	glProgramNamedParameter4dvNV(id, len, name, v);
}

static void APIENTRY InitGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params)
{
	PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC proc;
	proc = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)_GetProcAddress("glGetProgramNamedParameterfvNV");
	assert(proc != NULL);
	glGetProgramNamedParameterfvNV = proc;
	glGetProgramNamedParameterfvNV(id, len, name, params);
}

static void APIENTRY InitGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params)
{
	PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC proc;
	proc = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)_GetProcAddress("glGetProgramNamedParameterdvNV");
	assert(proc != NULL);
	glGetProgramNamedParameterdvNV = proc;
	glGetProgramNamedParameterdvNV(id, len, name, params);
}


/* GL_NV_half_float */
static void APIENTRY InitVertex2hNV(GLhalfNV x, GLhalfNV y)
{
	PFNGLVERTEX2HNVPROC proc;
	proc = (PFNGLVERTEX2HNVPROC)_GetProcAddress("glVertex2hNV");
	assert(proc != NULL);
	glVertex2hNV = proc;
	glVertex2hNV(x, y);
}

static void APIENTRY InitVertex2hvNV(const GLhalfNV *v)
{
	PFNGLVERTEX2HVNVPROC proc;
	proc = (PFNGLVERTEX2HVNVPROC)_GetProcAddress("glVertex2hvNV");
	assert(proc != NULL);
	glVertex2hvNV = proc;
	glVertex2hvNV(v);
}

static void APIENTRY InitVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	PFNGLVERTEX3HNVPROC proc;
	proc = (PFNGLVERTEX3HNVPROC)_GetProcAddress("glVertex3hNV");
	assert(proc != NULL);
	glVertex3hNV = proc;
	glVertex3hNV(x, y, z);
}

static void APIENTRY InitVertex3hvNV(const GLhalfNV *v)
{
	PFNGLVERTEX3HVNVPROC proc;
	proc = (PFNGLVERTEX3HVNVPROC)_GetProcAddress("glVertex3hvNV");
	assert(proc != NULL);
	glVertex3hvNV = proc;
	glVertex3hvNV(v);
}

static void APIENTRY InitVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	PFNGLVERTEX4HNVPROC proc;
	proc = (PFNGLVERTEX4HNVPROC)_GetProcAddress("glVertex4hNV");
	assert(proc != NULL);
	glVertex4hNV = proc;
	glVertex4hNV(x, y, z, w);
}

static void APIENTRY InitVertex4hvNV(const GLhalfNV *v)
{
	PFNGLVERTEX4HVNVPROC proc;
	proc = (PFNGLVERTEX4HVNVPROC)_GetProcAddress("glVertex4hvNV");
	assert(proc != NULL);
	glVertex4hvNV = proc;
	glVertex4hvNV(v);
}

static void APIENTRY InitNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
	PFNGLNORMAL3HNVPROC proc;
	proc = (PFNGLNORMAL3HNVPROC)_GetProcAddress("glNormal3hNV");
	assert(proc != NULL);
	glNormal3hNV = proc;
	glNormal3hNV(nx, ny, nz);
}

static void APIENTRY InitNormal3hvNV(const GLhalfNV *v)
{
	PFNGLNORMAL3HVNVPROC proc;
	proc = (PFNGLNORMAL3HVNVPROC)_GetProcAddress("glNormal3hvNV");
	assert(proc != NULL);
	glNormal3hvNV = proc;
	glNormal3hvNV(v);
}

static void APIENTRY InitColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	PFNGLCOLOR3HNVPROC proc;
	proc = (PFNGLCOLOR3HNVPROC)_GetProcAddress("glColor3hNV");
	assert(proc != NULL);
	glColor3hNV = proc;
	glColor3hNV(red, green, blue);
}

static void APIENTRY InitColor3hvNV(const GLhalfNV *v)
{
	PFNGLCOLOR3HVNVPROC proc;
	proc = (PFNGLCOLOR3HVNVPROC)_GetProcAddress("glColor3hvNV");
	assert(proc != NULL);
	glColor3hvNV = proc;
	glColor3hvNV(v);
}

static void APIENTRY InitColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
	PFNGLCOLOR4HNVPROC proc;
	proc = (PFNGLCOLOR4HNVPROC)_GetProcAddress("glColor4hNV");
	assert(proc != NULL);
	glColor4hNV = proc;
	glColor4hNV(red, green, blue, alpha);
}

static void APIENTRY InitColor4hvNV(const GLhalfNV *v)
{
	PFNGLCOLOR4HVNVPROC proc;
	proc = (PFNGLCOLOR4HVNVPROC)_GetProcAddress("glColor4hvNV");
	assert(proc != NULL);
	glColor4hvNV = proc;
	glColor4hvNV(v);
}

static void APIENTRY InitTexCoord1hNV(GLhalfNV s)
{
	PFNGLTEXCOORD1HNVPROC proc;
	proc = (PFNGLTEXCOORD1HNVPROC)_GetProcAddress("glTexCoord1hNV");
	assert(proc != NULL);
	glTexCoord1hNV = proc;
	glTexCoord1hNV(s);
}

static void APIENTRY InitTexCoord1hvNV(const GLhalfNV *v)
{
	PFNGLTEXCOORD1HVNVPROC proc;
	proc = (PFNGLTEXCOORD1HVNVPROC)_GetProcAddress("glTexCoord1hvNV");
	assert(proc != NULL);
	glTexCoord1hvNV = proc;
	glTexCoord1hvNV(v);
}

static void APIENTRY InitTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
	PFNGLTEXCOORD2HNVPROC proc;
	proc = (PFNGLTEXCOORD2HNVPROC)_GetProcAddress("glTexCoord2hNV");
	assert(proc != NULL);
	glTexCoord2hNV = proc;
	glTexCoord2hNV(s, t);
}

static void APIENTRY InitTexCoord2hvNV(const GLhalfNV *v)
{
	PFNGLTEXCOORD2HVNVPROC proc;
	proc = (PFNGLTEXCOORD2HVNVPROC)_GetProcAddress("glTexCoord2hvNV");
	assert(proc != NULL);
	glTexCoord2hvNV = proc;
	glTexCoord2hvNV(v);
}

static void APIENTRY InitTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	PFNGLTEXCOORD3HNVPROC proc;
	proc = (PFNGLTEXCOORD3HNVPROC)_GetProcAddress("glTexCoord3hNV");
	assert(proc != NULL);
	glTexCoord3hNV = proc;
	glTexCoord3hNV(s, t, r);
}

static void APIENTRY InitTexCoord3hvNV(const GLhalfNV *v)
{
	PFNGLTEXCOORD3HVNVPROC proc;
	proc = (PFNGLTEXCOORD3HVNVPROC)_GetProcAddress("glTexCoord3hvNV");
	assert(proc != NULL);
	glTexCoord3hvNV = proc;
	glTexCoord3hvNV(v);
}

static void APIENTRY InitTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	PFNGLTEXCOORD4HNVPROC proc;
	proc = (PFNGLTEXCOORD4HNVPROC)_GetProcAddress("glTexCoord4hNV");
	assert(proc != NULL);
	glTexCoord4hNV = proc;
	glTexCoord4hNV(s, t, r, q);
}

static void APIENTRY InitTexCoord4hvNV(const GLhalfNV *v)
{
	PFNGLTEXCOORD4HVNVPROC proc;
	proc = (PFNGLTEXCOORD4HVNVPROC)_GetProcAddress("glTexCoord4hvNV");
	assert(proc != NULL);
	glTexCoord4hvNV = proc;
	glTexCoord4hvNV(v);
}

static void APIENTRY InitMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
	PFNGLMULTITEXCOORD1HNVPROC proc;
	proc = (PFNGLMULTITEXCOORD1HNVPROC)_GetProcAddress("glMultiTexCoord1hNV");
	assert(proc != NULL);
	glMultiTexCoord1hNV = proc;
	glMultiTexCoord1hNV(target, s);
}

static void APIENTRY InitMultiTexCoord1hvNV(GLenum target, const GLhalfNV *v)
{
	PFNGLMULTITEXCOORD1HVNVPROC proc;
	proc = (PFNGLMULTITEXCOORD1HVNVPROC)_GetProcAddress("glMultiTexCoord1hvNV");
	assert(proc != NULL);
	glMultiTexCoord1hvNV = proc;
	glMultiTexCoord1hvNV(target, v);
}

static void APIENTRY InitMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
	PFNGLMULTITEXCOORD2HNVPROC proc;
	proc = (PFNGLMULTITEXCOORD2HNVPROC)_GetProcAddress("glMultiTexCoord2hNV");
	assert(proc != NULL);
	glMultiTexCoord2hNV = proc;
	glMultiTexCoord2hNV(target, s, t);
}

static void APIENTRY InitMultiTexCoord2hvNV(GLenum target, const GLhalfNV *v)
{
	PFNGLMULTITEXCOORD2HVNVPROC proc;
	proc = (PFNGLMULTITEXCOORD2HVNVPROC)_GetProcAddress("glMultiTexCoord2hvNV");
	assert(proc != NULL);
	glMultiTexCoord2hvNV = proc;
	glMultiTexCoord2hvNV(target, v);
}

static void APIENTRY InitMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	PFNGLMULTITEXCOORD3HNVPROC proc;
	proc = (PFNGLMULTITEXCOORD3HNVPROC)_GetProcAddress("glMultiTexCoord3hNV");
	assert(proc != NULL);
	glMultiTexCoord3hNV = proc;
	glMultiTexCoord3hNV(target, s, t, r);
}

static void APIENTRY InitMultiTexCoord3hvNV(GLenum target, const GLhalfNV *v)
{
	PFNGLMULTITEXCOORD3HVNVPROC proc;
	proc = (PFNGLMULTITEXCOORD3HVNVPROC)_GetProcAddress("glMultiTexCoord3hvNV");
	assert(proc != NULL);
	glMultiTexCoord3hvNV = proc;
	glMultiTexCoord3hvNV(target, v);
}

static void APIENTRY InitMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	PFNGLMULTITEXCOORD4HNVPROC proc;
	proc = (PFNGLMULTITEXCOORD4HNVPROC)_GetProcAddress("glMultiTexCoord4hNV");
	assert(proc != NULL);
	glMultiTexCoord4hNV = proc;
	glMultiTexCoord4hNV(target, s, t, r, q);
}

static void APIENTRY InitMultiTexCoord4hvNV(GLenum target, const GLhalfNV *v)
{
	PFNGLMULTITEXCOORD4HVNVPROC proc;
	proc = (PFNGLMULTITEXCOORD4HVNVPROC)_GetProcAddress("glMultiTexCoord4hvNV");
	assert(proc != NULL);
	glMultiTexCoord4hvNV = proc;
	glMultiTexCoord4hvNV(target, v);
}

static void APIENTRY InitFogCoordhNV(GLhalfNV fog)
{
	PFNGLFOGCOORDHNVPROC proc;
	proc = (PFNGLFOGCOORDHNVPROC)_GetProcAddress("glFogCoordhNV");
	assert(proc != NULL);
	glFogCoordhNV = proc;
	glFogCoordhNV(fog);
}

static void APIENTRY InitFogCoordhvNV(const GLhalfNV *fog)
{
	PFNGLFOGCOORDHVNVPROC proc;
	proc = (PFNGLFOGCOORDHVNVPROC)_GetProcAddress("glFogCoordhvNV");
	assert(proc != NULL);
	glFogCoordhvNV = proc;
	glFogCoordhvNV(fog);
}

static void APIENTRY InitSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	PFNGLSECONDARYCOLOR3HNVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3HNVPROC)_GetProcAddress("glSecondaryColor3hNV");
	assert(proc != NULL);
	glSecondaryColor3hNV = proc;
	glSecondaryColor3hNV(red, green, blue);
}

static void APIENTRY InitSecondaryColor3hvNV(const GLhalfNV *v)
{
	PFNGLSECONDARYCOLOR3HVNVPROC proc;
	proc = (PFNGLSECONDARYCOLOR3HVNVPROC)_GetProcAddress("glSecondaryColor3hvNV");
	assert(proc != NULL);
	glSecondaryColor3hvNV = proc;
	glSecondaryColor3hvNV(v);
}

static void APIENTRY InitVertexWeighthNV(GLhalfNV weight)
{
	PFNGLVERTEXWEIGHTHNVPROC proc;
	proc = (PFNGLVERTEXWEIGHTHNVPROC)_GetProcAddress("glVertexWeighthNV");
	assert(proc != NULL);
	glVertexWeighthNV = proc;
	glVertexWeighthNV(weight);
}

static void APIENTRY InitVertexWeighthvNV(const GLhalfNV *weight)
{
	PFNGLVERTEXWEIGHTHVNVPROC proc;
	proc = (PFNGLVERTEXWEIGHTHVNVPROC)_GetProcAddress("glVertexWeighthvNV");
	assert(proc != NULL);
	glVertexWeighthvNV = proc;
	glVertexWeighthvNV(weight);
}

static void APIENTRY InitVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
	PFNGLVERTEXATTRIB1HNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1HNVPROC)_GetProcAddress("glVertexAttrib1hNV");
	assert(proc != NULL);
	glVertexAttrib1hNV = proc;
	glVertexAttrib1hNV(index, x);
}

static void APIENTRY InitVertexAttrib1hvNV(GLuint index, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIB1HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB1HVNVPROC)_GetProcAddress("glVertexAttrib1hvNV");
	assert(proc != NULL);
	glVertexAttrib1hvNV = proc;
	glVertexAttrib1hvNV(index, v);
}

static void APIENTRY InitVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
	PFNGLVERTEXATTRIB2HNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2HNVPROC)_GetProcAddress("glVertexAttrib2hNV");
	assert(proc != NULL);
	glVertexAttrib2hNV = proc;
	glVertexAttrib2hNV(index, x, y);
}

static void APIENTRY InitVertexAttrib2hvNV(GLuint index, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIB2HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB2HVNVPROC)_GetProcAddress("glVertexAttrib2hvNV");
	assert(proc != NULL);
	glVertexAttrib2hvNV = proc;
	glVertexAttrib2hvNV(index, v);
}

static void APIENTRY InitVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	PFNGLVERTEXATTRIB3HNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3HNVPROC)_GetProcAddress("glVertexAttrib3hNV");
	assert(proc != NULL);
	glVertexAttrib3hNV = proc;
	glVertexAttrib3hNV(index, x, y, z);
}

static void APIENTRY InitVertexAttrib3hvNV(GLuint index, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIB3HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB3HVNVPROC)_GetProcAddress("glVertexAttrib3hvNV");
	assert(proc != NULL);
	glVertexAttrib3hvNV = proc;
	glVertexAttrib3hvNV(index, v);
}

static void APIENTRY InitVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	PFNGLVERTEXATTRIB4HNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4HNVPROC)_GetProcAddress("glVertexAttrib4hNV");
	assert(proc != NULL);
	glVertexAttrib4hNV = proc;
	glVertexAttrib4hNV(index, x, y, z, w);
}

static void APIENTRY InitVertexAttrib4hvNV(GLuint index, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIB4HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIB4HVNVPROC)_GetProcAddress("glVertexAttrib4hvNV");
	assert(proc != NULL);
	glVertexAttrib4hvNV = proc;
	glVertexAttrib4hvNV(index, v);
}

static void APIENTRY InitVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIBS1HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS1HVNVPROC)_GetProcAddress("glVertexAttribs1hvNV");
	assert(proc != NULL);
	glVertexAttribs1hvNV = proc;
	glVertexAttribs1hvNV(index, n, v);
}

static void APIENTRY InitVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIBS2HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS2HVNVPROC)_GetProcAddress("glVertexAttribs2hvNV");
	assert(proc != NULL);
	glVertexAttribs2hvNV = proc;
	glVertexAttribs2hvNV(index, n, v);
}

static void APIENTRY InitVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIBS3HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS3HVNVPROC)_GetProcAddress("glVertexAttribs3hvNV");
	assert(proc != NULL);
	glVertexAttribs3hvNV = proc;
	glVertexAttribs3hvNV(index, n, v);
}

static void APIENTRY InitVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	PFNGLVERTEXATTRIBS4HVNVPROC proc;
	proc = (PFNGLVERTEXATTRIBS4HVNVPROC)_GetProcAddress("glVertexAttribs4hvNV");
	assert(proc != NULL);
	glVertexAttribs4hvNV = proc;
	glVertexAttribs4hvNV(index, n, v);
}


/* GL_NV_pixel_data_range */
static void APIENTRY InitPixelDataRangeNV(GLenum target, GLsizei length, GLvoid *pointer)
{
	PFNGLPIXELDATARANGENVPROC proc;
	proc = (PFNGLPIXELDATARANGENVPROC)_GetProcAddress("glPixelDataRangeNV");
	assert(proc != NULL);
	glPixelDataRangeNV = proc;
	glPixelDataRangeNV(target, length, pointer);
}

static void APIENTRY InitFlushPixelDataRangeNV(GLenum target)
{
	PFNGLFLUSHPIXELDATARANGENVPROC proc;
	proc = (PFNGLFLUSHPIXELDATARANGENVPROC)_GetProcAddress("glFlushPixelDataRangeNV");
	assert(proc != NULL);
	glFlushPixelDataRangeNV = proc;
	glFlushPixelDataRangeNV(target);
}


/* GL_NV_primitive_restart */
static void APIENTRY InitPrimitiveRestartNV(void)
{
	PFNGLPRIMITIVERESTARTNVPROC proc;
	proc = (PFNGLPRIMITIVERESTARTNVPROC)_GetProcAddress("glPrimitiveRestartNV");
	assert(proc != NULL);
	glPrimitiveRestartNV = proc;
	glPrimitiveRestartNV();
}

static void APIENTRY InitPrimitiveRestartIndexNV(GLuint index)
{
	PFNGLPRIMITIVERESTARTINDEXNVPROC proc;
	proc = (PFNGLPRIMITIVERESTARTINDEXNVPROC)_GetProcAddress("glPrimitiveRestartIndexNV");
	assert(proc != NULL);
	glPrimitiveRestartIndexNV = proc;
	glPrimitiveRestartIndexNV(index);
}


/* GL_NV_texture_expand_normal */

/* GL_NV_vertex_program2 */

/* GL_ATI_map_object_buffer */
static GLvoid* APIENTRY InitMapObjectBufferATI(GLuint buffer)
{
	PFNGLMAPOBJECTBUFFERATIPROC proc;
	proc = (PFNGLMAPOBJECTBUFFERATIPROC)_GetProcAddress("glMapObjectBufferATI");
	assert(proc != NULL);
	glMapObjectBufferATI = proc;
	return glMapObjectBufferATI(buffer);
}

static void APIENTRY InitUnmapObjectBufferATI(GLuint buffer)
{
	PFNGLUNMAPOBJECTBUFFERATIPROC proc;
	proc = (PFNGLUNMAPOBJECTBUFFERATIPROC)_GetProcAddress("glUnmapObjectBufferATI");
	assert(proc != NULL);
	glUnmapObjectBufferATI = proc;
	glUnmapObjectBufferATI(buffer);
}


/* GL_ATI_separate_stencil */
static void APIENTRY InitStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	PFNGLSTENCILOPSEPARATEATIPROC proc;
	proc = (PFNGLSTENCILOPSEPARATEATIPROC)_GetProcAddress("glStencilOpSeparateATI");
	assert(proc != NULL);
	glStencilOpSeparateATI = proc;
	glStencilOpSeparateATI(face, sfail, dpfail, dppass);
}

static void APIENTRY InitStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
	PFNGLSTENCILFUNCSEPARATEATIPROC proc;
	proc = (PFNGLSTENCILFUNCSEPARATEATIPROC)_GetProcAddress("glStencilFuncSeparateATI");
	assert(proc != NULL);
	glStencilFuncSeparateATI = proc;
	glStencilFuncSeparateATI(frontfunc, backfunc, ref, mask);
}


/* GL_ATI_vertex_attrib_array_object */
static void APIENTRY InitVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
	PFNGLVERTEXATTRIBARRAYOBJECTATIPROC proc;
	proc = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)_GetProcAddress("glVertexAttribArrayObjectATI");
	assert(proc != NULL);
	glVertexAttribArrayObjectATI = proc;
	glVertexAttribArrayObjectATI(index, size, type, normalized, stride, buffer, offset);
}

static void APIENTRY InitGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat *params)
{
	PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC proc;
	proc = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)_GetProcAddress("glGetVertexAttribArrayObjectfvATI");
	assert(proc != NULL);
	glGetVertexAttribArrayObjectfvATI = proc;
	glGetVertexAttribArrayObjectfvATI(index, pname, params);
}

static void APIENTRY InitGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint *params)
{
	PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC proc;
	proc = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)_GetProcAddress("glGetVertexAttribArrayObjectivATI");
	assert(proc != NULL);
	glGetVertexAttribArrayObjectivATI = proc;
	glGetVertexAttribArrayObjectivATI(index, pname, params);
}


/* GL_OES_read_format */

/* GL_EXT_depth_bounds_test */
static void APIENTRY InitDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
	PFNGLDEPTHBOUNDSEXTPROC proc;
	proc = (PFNGLDEPTHBOUNDSEXTPROC)_GetProcAddress("glDepthBoundsEXT");
	assert(proc != NULL);
	glDepthBoundsEXT = proc;
	glDepthBoundsEXT(zmin, zmax);
}


/* GL_EXT_texture_mirror_clamp */

/* GL_EXT_blend_equation_separate */
static void APIENTRY InitBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
	PFNGLBLENDEQUATIONSEPARATEEXTPROC proc;
	proc = (PFNGLBLENDEQUATIONSEPARATEEXTPROC)_GetProcAddress("glBlendEquationSeparateEXT");
	assert(proc != NULL);
	glBlendEquationSeparateEXT = proc;
	glBlendEquationSeparateEXT(modeRGB, modeAlpha);
}


/* GL_MESA_pack_invert */

/* GL_MESA_ycbcr_texture */

/* GL_EXT_pixel_buffer_object */

/* GL_NV_fragment_program_option */

/* GL_NV_fragment_program2 */

/* GL_NV_vertex_program2_option */

/* GL_NV_vertex_program3 */



/* GL_VERSION_1_2 */
PFNGLBLENDCOLORPROC glBlendColor = InitBlendColor;
PFNGLBLENDEQUATIONPROC glBlendEquation = InitBlendEquation;
PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements = InitDrawRangeElements;
PFNGLCOLORTABLEPROC glColorTable = InitColorTable;
PFNGLCOLORTABLEPARAMETERFVPROC glColorTableParameterfv = InitColorTableParameterfv;
PFNGLCOLORTABLEPARAMETERIVPROC glColorTableParameteriv = InitColorTableParameteriv;
PFNGLCOPYCOLORTABLEPROC glCopyColorTable = InitCopyColorTable;
PFNGLGETCOLORTABLEPROC glGetColorTable = InitGetColorTable;
PFNGLGETCOLORTABLEPARAMETERFVPROC glGetColorTableParameterfv = InitGetColorTableParameterfv;
PFNGLGETCOLORTABLEPARAMETERIVPROC glGetColorTableParameteriv = InitGetColorTableParameteriv;
PFNGLCOLORSUBTABLEPROC glColorSubTable = InitColorSubTable;
PFNGLCOPYCOLORSUBTABLEPROC glCopyColorSubTable = InitCopyColorSubTable;
PFNGLCONVOLUTIONFILTER1DPROC glConvolutionFilter1D = InitConvolutionFilter1D;
PFNGLCONVOLUTIONFILTER2DPROC glConvolutionFilter2D = InitConvolutionFilter2D;
PFNGLCONVOLUTIONPARAMETERFPROC glConvolutionParameterf = InitConvolutionParameterf;
PFNGLCONVOLUTIONPARAMETERFVPROC glConvolutionParameterfv = InitConvolutionParameterfv;
PFNGLCONVOLUTIONPARAMETERIPROC glConvolutionParameteri = InitConvolutionParameteri;
PFNGLCONVOLUTIONPARAMETERIVPROC glConvolutionParameteriv = InitConvolutionParameteriv;
PFNGLCOPYCONVOLUTIONFILTER1DPROC glCopyConvolutionFilter1D = InitCopyConvolutionFilter1D;
PFNGLCOPYCONVOLUTIONFILTER2DPROC glCopyConvolutionFilter2D = InitCopyConvolutionFilter2D;
PFNGLGETCONVOLUTIONFILTERPROC glGetConvolutionFilter = InitGetConvolutionFilter;
PFNGLGETCONVOLUTIONPARAMETERFVPROC glGetConvolutionParameterfv = InitGetConvolutionParameterfv;
PFNGLGETCONVOLUTIONPARAMETERIVPROC glGetConvolutionParameteriv = InitGetConvolutionParameteriv;
PFNGLGETSEPARABLEFILTERPROC glGetSeparableFilter = InitGetSeparableFilter;
PFNGLSEPARABLEFILTER2DPROC glSeparableFilter2D = InitSeparableFilter2D;
PFNGLGETHISTOGRAMPROC glGetHistogram = InitGetHistogram;
PFNGLGETHISTOGRAMPARAMETERFVPROC glGetHistogramParameterfv = InitGetHistogramParameterfv;
PFNGLGETHISTOGRAMPARAMETERIVPROC glGetHistogramParameteriv = InitGetHistogramParameteriv;
PFNGLGETMINMAXPROC glGetMinmax = InitGetMinmax;
PFNGLGETMINMAXPARAMETERFVPROC glGetMinmaxParameterfv = InitGetMinmaxParameterfv;
PFNGLGETMINMAXPARAMETERIVPROC glGetMinmaxParameteriv = InitGetMinmaxParameteriv;
PFNGLHISTOGRAMPROC glHistogram = InitHistogram;
PFNGLMINMAXPROC glMinmax = InitMinmax;
PFNGLRESETHISTOGRAMPROC glResetHistogram = InitResetHistogram;
PFNGLRESETMINMAXPROC glResetMinmax = InitResetMinmax;
PFNGLTEXIMAGE3DPROC glTexImage3D = InitTexImage3D;
PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = InitTexSubImage3D;
PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = InitCopyTexSubImage3D;

/* GL_VERSION_1_3 */
PFNGLACTIVETEXTUREPROC glActiveTexture = InitActiveTexture;
PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture = InitClientActiveTexture;
PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d = InitMultiTexCoord1d;
PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv = InitMultiTexCoord1dv;
PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f = InitMultiTexCoord1f;
PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv = InitMultiTexCoord1fv;
PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i = InitMultiTexCoord1i;
PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv = InitMultiTexCoord1iv;
PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s = InitMultiTexCoord1s;
PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv = InitMultiTexCoord1sv;
PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d = InitMultiTexCoord2d;
PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv = InitMultiTexCoord2dv;
PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f = InitMultiTexCoord2f;
PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv = InitMultiTexCoord2fv;
PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i = InitMultiTexCoord2i;
PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv = InitMultiTexCoord2iv;
PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s = InitMultiTexCoord2s;
PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv = InitMultiTexCoord2sv;
PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d = InitMultiTexCoord3d;
PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv = InitMultiTexCoord3dv;
PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f = InitMultiTexCoord3f;
PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv = InitMultiTexCoord3fv;
PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i = InitMultiTexCoord3i;
PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv = InitMultiTexCoord3iv;
PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s = InitMultiTexCoord3s;
PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv = InitMultiTexCoord3sv;
PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d = InitMultiTexCoord4d;
PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv = InitMultiTexCoord4dv;
PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f = InitMultiTexCoord4f;
PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv = InitMultiTexCoord4fv;
PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i = InitMultiTexCoord4i;
PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv = InitMultiTexCoord4iv;
PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s = InitMultiTexCoord4s;
PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv = InitMultiTexCoord4sv;
PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf = InitLoadTransposeMatrixf;
PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd = InitLoadTransposeMatrixd;
PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf = InitMultTransposeMatrixf;
PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd = InitMultTransposeMatrixd;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage = InitSampleCoverage;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D = InitCompressedTexImage3D;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = InitCompressedTexImage2D;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = InitCompressedTexImage1D;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D = InitCompressedTexSubImage3D;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = InitCompressedTexSubImage2D;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D = InitCompressedTexSubImage1D;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage = InitGetCompressedTexImage;

/* GL_VERSION_1_4 */
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = InitBlendFuncSeparate;
PFNGLFOGCOORDFPROC glFogCoordf = InitFogCoordf;
PFNGLFOGCOORDFVPROC glFogCoordfv = InitFogCoordfv;
PFNGLFOGCOORDDPROC glFogCoordd = InitFogCoordd;
PFNGLFOGCOORDDVPROC glFogCoorddv = InitFogCoorddv;
PFNGLFOGCOORDPOINTERPROC glFogCoordPointer = InitFogCoordPointer;
PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays = InitMultiDrawArrays;
PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements = InitMultiDrawElements;
PFNGLPOINTPARAMETERFPROC glPointParameterf = InitPointParameterf;
PFNGLPOINTPARAMETERFVPROC glPointParameterfv = InitPointParameterfv;
PFNGLPOINTPARAMETERIPROC glPointParameteri = InitPointParameteri;
PFNGLPOINTPARAMETERIVPROC glPointParameteriv = InitPointParameteriv;
PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b = InitSecondaryColor3b;
PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv = InitSecondaryColor3bv;
PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d = InitSecondaryColor3d;
PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv = InitSecondaryColor3dv;
PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f = InitSecondaryColor3f;
PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv = InitSecondaryColor3fv;
PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i = InitSecondaryColor3i;
PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv = InitSecondaryColor3iv;
PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s = InitSecondaryColor3s;
PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv = InitSecondaryColor3sv;
PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub = InitSecondaryColor3ub;
PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv = InitSecondaryColor3ubv;
PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui = InitSecondaryColor3ui;
PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv = InitSecondaryColor3uiv;
PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us = InitSecondaryColor3us;
PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv = InitSecondaryColor3usv;
PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer = InitSecondaryColorPointer;
PFNGLWINDOWPOS2DPROC glWindowPos2d = InitWindowPos2d;
PFNGLWINDOWPOS2DVPROC glWindowPos2dv = InitWindowPos2dv;
PFNGLWINDOWPOS2FPROC glWindowPos2f = InitWindowPos2f;
PFNGLWINDOWPOS2FVPROC glWindowPos2fv = InitWindowPos2fv;
PFNGLWINDOWPOS2IPROC glWindowPos2i = InitWindowPos2i;
PFNGLWINDOWPOS2IVPROC glWindowPos2iv = InitWindowPos2iv;
PFNGLWINDOWPOS2SPROC glWindowPos2s = InitWindowPos2s;
PFNGLWINDOWPOS2SVPROC glWindowPos2sv = InitWindowPos2sv;
PFNGLWINDOWPOS3DPROC glWindowPos3d = InitWindowPos3d;
PFNGLWINDOWPOS3DVPROC glWindowPos3dv = InitWindowPos3dv;
PFNGLWINDOWPOS3FPROC glWindowPos3f = InitWindowPos3f;
PFNGLWINDOWPOS3FVPROC glWindowPos3fv = InitWindowPos3fv;
PFNGLWINDOWPOS3IPROC glWindowPos3i = InitWindowPos3i;
PFNGLWINDOWPOS3IVPROC glWindowPos3iv = InitWindowPos3iv;
PFNGLWINDOWPOS3SPROC glWindowPos3s = InitWindowPos3s;
PFNGLWINDOWPOS3SVPROC glWindowPos3sv = InitWindowPos3sv;

/* GL_VERSION_1_5 */
PFNGLGENQUERIESPROC glGenQueries = InitGenQueries;
PFNGLDELETEQUERIESPROC glDeleteQueries = InitDeleteQueries;
PFNGLISQUERYPROC glIsQuery = InitIsQuery;
PFNGLBEGINQUERYPROC glBeginQuery = InitBeginQuery;
PFNGLENDQUERYPROC glEndQuery = InitEndQuery;
PFNGLGETQUERYIVPROC glGetQueryiv = InitGetQueryiv;
PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv = InitGetQueryObjectiv;
PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = InitGetQueryObjectuiv;
PFNGLBINDBUFFERPROC glBindBuffer = InitBindBuffer;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = InitDeleteBuffers;
PFNGLGENBUFFERSPROC glGenBuffers = InitGenBuffers;
PFNGLISBUFFERPROC glIsBuffer = InitIsBuffer;
PFNGLBUFFERDATAPROC glBufferData = InitBufferData;
PFNGLBUFFERSUBDATAPROC glBufferSubData = InitBufferSubData;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = InitGetBufferSubData;
/* The following cast is necessary because otherwise g++ would complain (gcc not) */
PFNGLMAPBUFFERPROC glMapBuffer = (PFNGLMAPBUFFERPROC)InitMapBuffer;
PFNGLUNMAPBUFFERPROC glUnmapBuffer = InitUnmapBuffer;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = InitGetBufferParameteriv;
PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = InitGetBufferPointerv;

/* GL_VERSION_2_0 */
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = InitBlendEquationSeparate;
PFNGLDRAWBUFFERSPROC glDrawBuffers = InitDrawBuffers;
PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = InitStencilOpSeparate;
PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = InitStencilFuncSeparate;
PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = InitStencilMaskSeparate;
PFNGLATTACHSHADERPROC glAttachShader = InitAttachShader;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = InitBindAttribLocation;
PFNGLCOMPILESHADERPROC glCompileShader = InitCompileShader;
PFNGLCREATEPROGRAMPROC glCreateProgram = InitCreateProgram;
PFNGLCREATESHADERPROC glCreateShader = InitCreateShader;
PFNGLDELETEPROGRAMPROC glDeleteProgram = InitDeleteProgram;
PFNGLDELETESHADERPROC glDeleteShader = InitDeleteShader;
PFNGLDETACHSHADERPROC glDetachShader = InitDetachShader;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = InitDisableVertexAttribArray;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = InitEnableVertexAttribArray;
PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = InitGetActiveAttrib;
PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = InitGetActiveUniform;
PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = InitGetAttachedShaders;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = InitGetAttribLocation;
PFNGLGETPROGRAMIVPROC glGetProgramiv = InitGetProgramiv;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = InitGetProgramInfoLog;
PFNGLGETSHADERIVPROC glGetShaderiv = InitGetShaderiv;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = InitGetShaderInfoLog;
PFNGLGETSHADERSOURCEPROC glGetShaderSource = InitGetShaderSource;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = InitGetUniformLocation;
PFNGLGETUNIFORMFVPROC glGetUniformfv = InitGetUniformfv;
PFNGLGETUNIFORMIVPROC glGetUniformiv = InitGetUniformiv;
PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv = InitGetVertexAttribdv;
PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = InitGetVertexAttribfv;
PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = InitGetVertexAttribiv;
PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = InitGetVertexAttribPointerv;
PFNGLISPROGRAMPROC glIsProgram = InitIsProgram;
PFNGLISSHADERPROC glIsShader = InitIsShader;
PFNGLLINKPROGRAMPROC glLinkProgram = InitLinkProgram;
PFNGLSHADERSOURCEPROC glShaderSource = InitShaderSource;
PFNGLUSEPROGRAMPROC glUseProgram = InitUseProgram;
PFNGLUNIFORM1FPROC glUniform1f = InitUniform1f;
PFNGLUNIFORM2FPROC glUniform2f = InitUniform2f;
PFNGLUNIFORM3FPROC glUniform3f = InitUniform3f;
PFNGLUNIFORM4FPROC glUniform4f = InitUniform4f;
PFNGLUNIFORM1IPROC glUniform1i = InitUniform1i;
PFNGLUNIFORM2IPROC glUniform2i = InitUniform2i;
PFNGLUNIFORM3IPROC glUniform3i = InitUniform3i;
PFNGLUNIFORM4IPROC glUniform4i = InitUniform4i;
PFNGLUNIFORM1FVPROC glUniform1fv = InitUniform1fv;
PFNGLUNIFORM2FVPROC glUniform2fv = InitUniform2fv;
PFNGLUNIFORM3FVPROC glUniform3fv = InitUniform3fv;
PFNGLUNIFORM4FVPROC glUniform4fv = InitUniform4fv;
PFNGLUNIFORM1IVPROC glUniform1iv = InitUniform1iv;
PFNGLUNIFORM2IVPROC glUniform2iv = InitUniform2iv;
PFNGLUNIFORM3IVPROC glUniform3iv = InitUniform3iv;
PFNGLUNIFORM4IVPROC glUniform4iv = InitUniform4iv;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = InitUniformMatrix2fv;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = InitUniformMatrix3fv;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = InitUniformMatrix4fv;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = InitValidateProgram;
PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d = InitVertexAttrib1d;
PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv = InitVertexAttrib1dv;
PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f = InitVertexAttrib1f;
PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv = InitVertexAttrib1fv;
PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s = InitVertexAttrib1s;
PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv = InitVertexAttrib1sv;
PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d = InitVertexAttrib2d;
PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv = InitVertexAttrib2dv;
PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = InitVertexAttrib2f;
PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = InitVertexAttrib2fv;
PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s = InitVertexAttrib2s;
PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv = InitVertexAttrib2sv;
PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d = InitVertexAttrib3d;
PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv = InitVertexAttrib3dv;
PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = InitVertexAttrib3f;
PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = InitVertexAttrib3fv;
PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s = InitVertexAttrib3s;
PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv = InitVertexAttrib3sv;
PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv = InitVertexAttrib4Nbv;
PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv = InitVertexAttrib4Niv;
PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv = InitVertexAttrib4Nsv;
PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub = InitVertexAttrib4Nub;
PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv = InitVertexAttrib4Nubv;
PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv = InitVertexAttrib4Nuiv;
PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv = InitVertexAttrib4Nusv;
PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv = InitVertexAttrib4bv;
PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d = InitVertexAttrib4d;
PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv = InitVertexAttrib4dv;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = InitVertexAttrib4f;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = InitVertexAttrib4fv;
PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv = InitVertexAttrib4iv;
PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s = InitVertexAttrib4s;
PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv = InitVertexAttrib4sv;
PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv = InitVertexAttrib4ubv;
PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv = InitVertexAttrib4uiv;
PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv = InitVertexAttrib4usv;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = InitVertexAttribPointer;

/* GL_ARB_multitexture */
PFNGLACTIVETEXTUREARBPROC glActiveTextureARB = InitActiveTextureARB;
PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB = InitClientActiveTextureARB;
PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1dARB = InitMultiTexCoord1dARB;
PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dvARB = InitMultiTexCoord1dvARB;
PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1fARB = InitMultiTexCoord1fARB;
PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fvARB = InitMultiTexCoord1fvARB;
PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1iARB = InitMultiTexCoord1iARB;
PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1ivARB = InitMultiTexCoord1ivARB;
PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1sARB = InitMultiTexCoord1sARB;
PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1svARB = InitMultiTexCoord1svARB;
PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2dARB = InitMultiTexCoord2dARB;
PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dvARB = InitMultiTexCoord2dvARB;
PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2fARB = InitMultiTexCoord2fARB;
PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fvARB = InitMultiTexCoord2fvARB;
PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2iARB = InitMultiTexCoord2iARB;
PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2ivARB = InitMultiTexCoord2ivARB;
PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2sARB = InitMultiTexCoord2sARB;
PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2svARB = InitMultiTexCoord2svARB;
PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3dARB = InitMultiTexCoord3dARB;
PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dvARB = InitMultiTexCoord3dvARB;
PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3fARB = InitMultiTexCoord3fARB;
PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fvARB = InitMultiTexCoord3fvARB;
PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3iARB = InitMultiTexCoord3iARB;
PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3ivARB = InitMultiTexCoord3ivARB;
PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3sARB = InitMultiTexCoord3sARB;
PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3svARB = InitMultiTexCoord3svARB;
PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4dARB = InitMultiTexCoord4dARB;
PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dvARB = InitMultiTexCoord4dvARB;
PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB = InitMultiTexCoord4fARB;
PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB = InitMultiTexCoord4fvARB;
PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4iARB = InitMultiTexCoord4iARB;
PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4ivARB = InitMultiTexCoord4ivARB;
PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4sARB = InitMultiTexCoord4sARB;
PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4svARB = InitMultiTexCoord4svARB;

/* GL_ARB_transpose_matrix */
PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB = InitLoadTransposeMatrixfARB;
PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB = InitLoadTransposeMatrixdARB;
PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB = InitMultTransposeMatrixfARB;
PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB = InitMultTransposeMatrixdARB;

/* GL_ARB_multisample */
PFNGLSAMPLECOVERAGEARBPROC glSampleCoverageARB = InitSampleCoverageARB;

/* GL_ARB_texture_env_add */

/* GL_ARB_texture_cube_map */

/* GL_ARB_texture_compression */
PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB = InitCompressedTexImage3DARB;
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB = InitCompressedTexImage2DARB;
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB = InitCompressedTexImage1DARB;
PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB = InitCompressedTexSubImage3DARB;
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB = InitCompressedTexSubImage2DARB;
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB = InitCompressedTexSubImage1DARB;
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB = InitGetCompressedTexImageARB;

/* GL_ARB_texture_border_clamp */

/* GL_ARB_point_parameters */
PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB = InitPointParameterfARB;
PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB = InitPointParameterfvARB;

/* GL_ARB_vertex_blend */
PFNGLWEIGHTBVARBPROC glWeightbvARB = InitWeightbvARB;
PFNGLWEIGHTSVARBPROC glWeightsvARB = InitWeightsvARB;
PFNGLWEIGHTIVARBPROC glWeightivARB = InitWeightivARB;
PFNGLWEIGHTFVARBPROC glWeightfvARB = InitWeightfvARB;
PFNGLWEIGHTDVARBPROC glWeightdvARB = InitWeightdvARB;
PFNGLWEIGHTUBVARBPROC glWeightubvARB = InitWeightubvARB;
PFNGLWEIGHTUSVARBPROC glWeightusvARB = InitWeightusvARB;
PFNGLWEIGHTUIVARBPROC glWeightuivARB = InitWeightuivARB;
PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB = InitWeightPointerARB;
PFNGLVERTEXBLENDARBPROC glVertexBlendARB = InitVertexBlendARB;

/* GL_ARB_matrix_palette */
PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB = InitCurrentPaletteMatrixARB;
PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB = InitMatrixIndexubvARB;
PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB = InitMatrixIndexusvARB;
PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB = InitMatrixIndexuivARB;
PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB = InitMatrixIndexPointerARB;

/* GL_ARB_texture_env_combine */

/* GL_ARB_texture_env_crossbar */

/* GL_ARB_texture_env_dot3 */

/* GL_ARB_texture_mirrored_repeat */

/* GL_ARB_depth_texture */

/* GL_ARB_shadow */

/* GL_ARB_shadow_ambient */

/* GL_ARB_window_pos */
PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB = InitWindowPos2dARB;
PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB = InitWindowPos2dvARB;
PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB = InitWindowPos2fARB;
PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB = InitWindowPos2fvARB;
PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB = InitWindowPos2iARB;
PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB = InitWindowPos2ivARB;
PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB = InitWindowPos2sARB;
PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB = InitWindowPos2svARB;
PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB = InitWindowPos3dARB;
PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB = InitWindowPos3dvARB;
PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB = InitWindowPos3fARB;
PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB = InitWindowPos3fvARB;
PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB = InitWindowPos3iARB;
PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB = InitWindowPos3ivARB;
PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB = InitWindowPos3sARB;
PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB = InitWindowPos3svARB;

/* GL_ARB_vertex_program */
PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB = InitVertexAttrib1dARB;
PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB = InitVertexAttrib1dvARB;
PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB = InitVertexAttrib1fARB;
PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB = InitVertexAttrib1fvARB;
PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB = InitVertexAttrib1sARB;
PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB = InitVertexAttrib1svARB;
PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB = InitVertexAttrib2dARB;
PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB = InitVertexAttrib2dvARB;
PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB = InitVertexAttrib2fARB;
PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB = InitVertexAttrib2fvARB;
PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB = InitVertexAttrib2sARB;
PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB = InitVertexAttrib2svARB;
PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB = InitVertexAttrib3dARB;
PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB = InitVertexAttrib3dvARB;
PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB = InitVertexAttrib3fARB;
PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB = InitVertexAttrib3fvARB;
PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB = InitVertexAttrib3sARB;
PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB = InitVertexAttrib3svARB;
PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB = InitVertexAttrib4NbvARB;
PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB = InitVertexAttrib4NivARB;
PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB = InitVertexAttrib4NsvARB;
PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB = InitVertexAttrib4NubARB;
PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB = InitVertexAttrib4NubvARB;
PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB = InitVertexAttrib4NuivARB;
PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB = InitVertexAttrib4NusvARB;
PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB = InitVertexAttrib4bvARB;
PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB = InitVertexAttrib4dARB;
PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB = InitVertexAttrib4dvARB;
PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB = InitVertexAttrib4fARB;
PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB = InitVertexAttrib4fvARB;
PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB = InitVertexAttrib4ivARB;
PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB = InitVertexAttrib4sARB;
PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB = InitVertexAttrib4svARB;
PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB = InitVertexAttrib4ubvARB;
PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB = InitVertexAttrib4uivARB;
PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB = InitVertexAttrib4usvARB;
PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB = InitVertexAttribPointerARB;
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB = InitEnableVertexAttribArrayARB;
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB = InitDisableVertexAttribArrayARB;
PFNGLPROGRAMSTRINGARBPROC glProgramStringARB = InitProgramStringARB;
PFNGLBINDPROGRAMARBPROC glBindProgramARB = InitBindProgramARB;
PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB = InitDeleteProgramsARB;
PFNGLGENPROGRAMSARBPROC glGenProgramsARB = InitGenProgramsARB;
PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB = InitProgramEnvParameter4dARB;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB = InitProgramEnvParameter4dvARB;
PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB = InitProgramEnvParameter4fARB;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB = InitProgramEnvParameter4fvARB;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB = InitProgramLocalParameter4dARB;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB = InitProgramLocalParameter4dvARB;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB = InitProgramLocalParameter4fARB;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB = InitProgramLocalParameter4fvARB;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB = InitGetProgramEnvParameterdvARB;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB = InitGetProgramEnvParameterfvARB;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB = InitGetProgramLocalParameterdvARB;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB = InitGetProgramLocalParameterfvARB;
PFNGLGETPROGRAMIVARBPROC glGetProgramivARB = InitGetProgramivARB;
PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB = InitGetProgramStringARB;
PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB = InitGetVertexAttribdvARB;
PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB = InitGetVertexAttribfvARB;
PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB = InitGetVertexAttribivARB;
PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB = InitGetVertexAttribPointervARB;
PFNGLISPROGRAMARBPROC glIsProgramARB = InitIsProgramARB;

/* GL_ARB_fragment_program */

/* GL_ARB_vertex_buffer_object */
PFNGLBINDBUFFERARBPROC glBindBufferARB = InitBindBufferARB;
PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB = InitDeleteBuffersARB;
PFNGLGENBUFFERSARBPROC glGenBuffersARB = InitGenBuffersARB;
PFNGLISBUFFERARBPROC glIsBufferARB = InitIsBufferARB;
PFNGLBUFFERDATAARBPROC glBufferDataARB = InitBufferDataARB;
PFNGLBUFFERSUBDATAARBPROC glBufferSubDataARB = InitBufferSubDataARB;
PFNGLGETBUFFERSUBDATAARBPROC glGetBufferSubDataARB = InitGetBufferSubDataARB;
/* The following cast is necessary because otherwise g++ would complain (gcc not) */
PFNGLMAPBUFFERARBPROC glMapBufferARB = (PFNGLMAPBUFFERARBPROC)InitMapBufferARB;
PFNGLUNMAPBUFFERARBPROC glUnmapBufferARB = InitUnmapBufferARB;
PFNGLGETBUFFERPARAMETERIVARBPROC glGetBufferParameterivARB = InitGetBufferParameterivARB;
PFNGLGETBUFFERPOINTERVARBPROC glGetBufferPointervARB = InitGetBufferPointervARB;

/* GL_ARB_occlusion_query */
PFNGLGENQUERIESARBPROC glGenQueriesARB = InitGenQueriesARB;
PFNGLDELETEQUERIESARBPROC glDeleteQueriesARB = InitDeleteQueriesARB;
PFNGLISQUERYARBPROC glIsQueryARB = InitIsQueryARB;
PFNGLBEGINQUERYARBPROC glBeginQueryARB = InitBeginQueryARB;
PFNGLENDQUERYARBPROC glEndQueryARB = InitEndQueryARB;
PFNGLGETQUERYIVARBPROC glGetQueryivARB = InitGetQueryivARB;
PFNGLGETQUERYOBJECTIVARBPROC glGetQueryObjectivARB = InitGetQueryObjectivARB;
PFNGLGETQUERYOBJECTUIVARBPROC glGetQueryObjectuivARB = InitGetQueryObjectuivARB;

/* GL_ARB_shader_objects */
PFNGLDELETEOBJECTARBPROC glDeleteObjectARB = InitDeleteObjectARB;
PFNGLGETHANDLEARBPROC glGetHandleARB = InitGetHandleARB;
PFNGLDETACHOBJECTARBPROC glDetachObjectARB = InitDetachObjectARB;
PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB = InitCreateShaderObjectARB;
PFNGLSHADERSOURCEARBPROC glShaderSourceARB = InitShaderSourceARB;
PFNGLCOMPILESHADERARBPROC glCompileShaderARB = InitCompileShaderARB;
PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB = InitCreateProgramObjectARB;
PFNGLATTACHOBJECTARBPROC glAttachObjectARB = InitAttachObjectARB;
PFNGLLINKPROGRAMARBPROC glLinkProgramARB = InitLinkProgramARB;
PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB = InitUseProgramObjectARB;
PFNGLVALIDATEPROGRAMARBPROC glValidateProgramARB = InitValidateProgramARB;
PFNGLUNIFORM1FARBPROC glUniform1fARB = InitUniform1fARB;
PFNGLUNIFORM2FARBPROC glUniform2fARB = InitUniform2fARB;
PFNGLUNIFORM3FARBPROC glUniform3fARB = InitUniform3fARB;
PFNGLUNIFORM4FARBPROC glUniform4fARB = InitUniform4fARB;
PFNGLUNIFORM1IARBPROC glUniform1iARB = InitUniform1iARB;
PFNGLUNIFORM2IARBPROC glUniform2iARB = InitUniform2iARB;
PFNGLUNIFORM3IARBPROC glUniform3iARB = InitUniform3iARB;
PFNGLUNIFORM4IARBPROC glUniform4iARB = InitUniform4iARB;
PFNGLUNIFORM1FVARBPROC glUniform1fvARB = InitUniform1fvARB;
PFNGLUNIFORM2FVARBPROC glUniform2fvARB = InitUniform2fvARB;
PFNGLUNIFORM3FVARBPROC glUniform3fvARB = InitUniform3fvARB;
PFNGLUNIFORM4FVARBPROC glUniform4fvARB = InitUniform4fvARB;
PFNGLUNIFORM1IVARBPROC glUniform1ivARB = InitUniform1ivARB;
PFNGLUNIFORM2IVARBPROC glUniform2ivARB = InitUniform2ivARB;
PFNGLUNIFORM3IVARBPROC glUniform3ivARB = InitUniform3ivARB;
PFNGLUNIFORM4IVARBPROC glUniform4ivARB = InitUniform4ivARB;
PFNGLUNIFORMMATRIX2FVARBPROC glUniformMatrix2fvARB = InitUniformMatrix2fvARB;
PFNGLUNIFORMMATRIX3FVARBPROC glUniformMatrix3fvARB = InitUniformMatrix3fvARB;
PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB = InitUniformMatrix4fvARB;
PFNGLGETOBJECTPARAMETERFVARBPROC glGetObjectParameterfvARB = InitGetObjectParameterfvARB;
PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB = InitGetObjectParameterivARB;
PFNGLGETINFOLOGARBPROC glGetInfoLogARB = InitGetInfoLogARB;
PFNGLGETATTACHEDOBJECTSARBPROC glGetAttachedObjectsARB = InitGetAttachedObjectsARB;
PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB = InitGetUniformLocationARB;
PFNGLGETACTIVEUNIFORMARBPROC glGetActiveUniformARB = InitGetActiveUniformARB;
PFNGLGETUNIFORMFVARBPROC glGetUniformfvARB = InitGetUniformfvARB;
PFNGLGETUNIFORMIVARBPROC glGetUniformivARB = InitGetUniformivARB;
PFNGLGETSHADERSOURCEARBPROC glGetShaderSourceARB = InitGetShaderSourceARB;

/* GL_ARB_vertex_shader */
PFNGLBINDATTRIBLOCATIONARBPROC glBindAttribLocationARB = InitBindAttribLocationARB;
PFNGLGETACTIVEATTRIBARBPROC glGetActiveAttribARB = InitGetActiveAttribARB;
PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB = InitGetAttribLocationARB;

/* GL_ARB_fragment_shader */

/* GL_ARB_shading_language_100 */

/* GL_ARB_texture_non_power_of_two */

/* GL_ARB_point_sprite */

/* GL_ARB_fragment_program_shadow */

/* GL_ARB_draw_buffers */
PFNGLDRAWBUFFERSARBPROC glDrawBuffersARB = InitDrawBuffersARB;

/* GL_ARB_texture_rectangle */

/* GL_ARB_color_buffer_float */
PFNGLCLAMPCOLORARBPROC glClampColorARB = InitClampColorARB;

/* GL_ARB_half_float_pixel */

/* GL_ARB_texture_float */

/* GL_ARB_pixel_buffer_object */

/* GL_EXT_abgr */

/* GL_EXT_blend_color */
PFNGLBLENDCOLOREXTPROC glBlendColorEXT = InitBlendColorEXT;

/* GL_EXT_polygon_offset */
PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT = InitPolygonOffsetEXT;

/* GL_EXT_texture */

/* GL_EXT_texture3D */
PFNGLTEXIMAGE3DEXTPROC glTexImage3DEXT = InitTexImage3DEXT;
PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT = InitTexSubImage3DEXT;

/* GL_SGIS_texture_filter4 */
PFNGLGETTEXFILTERFUNCSGISPROC glGetTexFilterFuncSGIS = InitGetTexFilterFuncSGIS;
PFNGLTEXFILTERFUNCSGISPROC glTexFilterFuncSGIS = InitTexFilterFuncSGIS;

/* GL_EXT_subtexture */
PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT = InitTexSubImage1DEXT;
PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT = InitTexSubImage2DEXT;

/* GL_EXT_copy_texture */
PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT = InitCopyTexImage1DEXT;
PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT = InitCopyTexImage2DEXT;
PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT = InitCopyTexSubImage1DEXT;
PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT = InitCopyTexSubImage2DEXT;
PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT = InitCopyTexSubImage3DEXT;

/* GL_EXT_histogram */
PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT = InitGetHistogramEXT;
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT = InitGetHistogramParameterfvEXT;
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT = InitGetHistogramParameterivEXT;
PFNGLGETMINMAXEXTPROC glGetMinmaxEXT = InitGetMinmaxEXT;
PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT = InitGetMinmaxParameterfvEXT;
PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT = InitGetMinmaxParameterivEXT;
PFNGLHISTOGRAMEXTPROC glHistogramEXT = InitHistogramEXT;
PFNGLMINMAXEXTPROC glMinmaxEXT = InitMinmaxEXT;
PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT = InitResetHistogramEXT;
PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT = InitResetMinmaxEXT;

/* GL_EXT_convolution */
PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT = InitConvolutionFilter1DEXT;
PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT = InitConvolutionFilter2DEXT;
PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT = InitConvolutionParameterfEXT;
PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT = InitConvolutionParameterfvEXT;
PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT = InitConvolutionParameteriEXT;
PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT = InitConvolutionParameterivEXT;
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT = InitCopyConvolutionFilter1DEXT;
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT = InitCopyConvolutionFilter2DEXT;
PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT = InitGetConvolutionFilterEXT;
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT = InitGetConvolutionParameterfvEXT;
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT = InitGetConvolutionParameterivEXT;
PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT = InitGetSeparableFilterEXT;
PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT = InitSeparableFilter2DEXT;

/* GL_EXT_color_matrix */

/* GL_SGI_color_table */
PFNGLCOLORTABLESGIPROC glColorTableSGI = InitColorTableSGI;
PFNGLCOLORTABLEPARAMETERFVSGIPROC glColorTableParameterfvSGI = InitColorTableParameterfvSGI;
PFNGLCOLORTABLEPARAMETERIVSGIPROC glColorTableParameterivSGI = InitColorTableParameterivSGI;
PFNGLCOPYCOLORTABLESGIPROC glCopyColorTableSGI = InitCopyColorTableSGI;
PFNGLGETCOLORTABLESGIPROC glGetColorTableSGI = InitGetColorTableSGI;
PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glGetColorTableParameterfvSGI = InitGetColorTableParameterfvSGI;
PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glGetColorTableParameterivSGI = InitGetColorTableParameterivSGI;

/* GL_SGIX_pixel_texture */
PFNGLPIXELTEXGENSGIXPROC glPixelTexGenSGIX = InitPixelTexGenSGIX;

/* GL_SGIS_pixel_texture */
PFNGLPIXELTEXGENPARAMETERISGISPROC glPixelTexGenParameteriSGIS = InitPixelTexGenParameteriSGIS;
PFNGLPIXELTEXGENPARAMETERIVSGISPROC glPixelTexGenParameterivSGIS = InitPixelTexGenParameterivSGIS;
PFNGLPIXELTEXGENPARAMETERFSGISPROC glPixelTexGenParameterfSGIS = InitPixelTexGenParameterfSGIS;
PFNGLPIXELTEXGENPARAMETERFVSGISPROC glPixelTexGenParameterfvSGIS = InitPixelTexGenParameterfvSGIS;
PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC glGetPixelTexGenParameterivSGIS = InitGetPixelTexGenParameterivSGIS;
PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC glGetPixelTexGenParameterfvSGIS = InitGetPixelTexGenParameterfvSGIS;

/* GL_SGIS_texture4D */
PFNGLTEXIMAGE4DSGISPROC glTexImage4DSGIS = InitTexImage4DSGIS;
PFNGLTEXSUBIMAGE4DSGISPROC glTexSubImage4DSGIS = InitTexSubImage4DSGIS;

/* GL_SGI_texture_color_table */

/* GL_EXT_cmyka */

/* GL_EXT_texture_object */
PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT = InitAreTexturesResidentEXT;
PFNGLBINDTEXTUREEXTPROC glBindTextureEXT = InitBindTextureEXT;
PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT = InitDeleteTexturesEXT;
PFNGLGENTEXTURESEXTPROC glGenTexturesEXT = InitGenTexturesEXT;
PFNGLISTEXTUREEXTPROC glIsTextureEXT = InitIsTextureEXT;
PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT = InitPrioritizeTexturesEXT;

/* GL_SGIS_detail_texture */
PFNGLDETAILTEXFUNCSGISPROC glDetailTexFuncSGIS = InitDetailTexFuncSGIS;
PFNGLGETDETAILTEXFUNCSGISPROC glGetDetailTexFuncSGIS = InitGetDetailTexFuncSGIS;

/* GL_SGIS_sharpen_texture */
PFNGLSHARPENTEXFUNCSGISPROC glSharpenTexFuncSGIS = InitSharpenTexFuncSGIS;
PFNGLGETSHARPENTEXFUNCSGISPROC glGetSharpenTexFuncSGIS = InitGetSharpenTexFuncSGIS;

/* GL_EXT_packed_pixels */

/* GL_SGIS_texture_lod */

/* GL_SGIS_multisample */
PFNGLSAMPLEMASKSGISPROC glSampleMaskSGIS = InitSampleMaskSGIS;
PFNGLSAMPLEPATTERNSGISPROC glSamplePatternSGIS = InitSamplePatternSGIS;

/* GL_EXT_rescale_normal */

/* GL_EXT_vertex_array */
PFNGLARRAYELEMENTEXTPROC glArrayElementEXT = InitArrayElementEXT;
PFNGLCOLORPOINTEREXTPROC glColorPointerEXT = InitColorPointerEXT;
PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT = InitDrawArraysEXT;
PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT = InitEdgeFlagPointerEXT;
PFNGLGETPOINTERVEXTPROC glGetPointervEXT = InitGetPointervEXT;
PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT = InitIndexPointerEXT;
PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT = InitNormalPointerEXT;
PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT = InitTexCoordPointerEXT;
PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT = InitVertexPointerEXT;

/* GL_EXT_misc_attribute */

/* GL_SGIS_generate_mipmap */

/* GL_SGIX_clipmap */

/* GL_SGIX_shadow */

/* GL_SGIS_texture_edge_clamp */

/* GL_SGIS_texture_border_clamp */

/* GL_EXT_blend_minmax */
PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT = InitBlendEquationEXT;

/* GL_EXT_blend_subtract */

/* GL_EXT_blend_logic_op */

/* GL_SGIX_interlace */

/* GL_SGIX_pixel_tiles */

/* GL_SGIX_texture_select */

/* GL_SGIX_sprite */
PFNGLSPRITEPARAMETERFSGIXPROC glSpriteParameterfSGIX = InitSpriteParameterfSGIX;
PFNGLSPRITEPARAMETERFVSGIXPROC glSpriteParameterfvSGIX = InitSpriteParameterfvSGIX;
PFNGLSPRITEPARAMETERISGIXPROC glSpriteParameteriSGIX = InitSpriteParameteriSGIX;
PFNGLSPRITEPARAMETERIVSGIXPROC glSpriteParameterivSGIX = InitSpriteParameterivSGIX;

/* GL_SGIX_texture_multi_buffer */

/* GL_EXT_point_parameters */
PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT = InitPointParameterfEXT;
PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT = InitPointParameterfvEXT;

/* GL_SGIS_point_parameters */
PFNGLPOINTPARAMETERFSGISPROC glPointParameterfSGIS = InitPointParameterfSGIS;
PFNGLPOINTPARAMETERFVSGISPROC glPointParameterfvSGIS = InitPointParameterfvSGIS;

/* GL_SGIX_instruments */
PFNGLGETINSTRUMENTSSGIXPROC glGetInstrumentsSGIX = InitGetInstrumentsSGIX;
PFNGLINSTRUMENTSBUFFERSGIXPROC glInstrumentsBufferSGIX = InitInstrumentsBufferSGIX;
PFNGLPOLLINSTRUMENTSSGIXPROC glPollInstrumentsSGIX = InitPollInstrumentsSGIX;
PFNGLREADINSTRUMENTSSGIXPROC glReadInstrumentsSGIX = InitReadInstrumentsSGIX;
PFNGLSTARTINSTRUMENTSSGIXPROC glStartInstrumentsSGIX = InitStartInstrumentsSGIX;
PFNGLSTOPINSTRUMENTSSGIXPROC glStopInstrumentsSGIX = InitStopInstrumentsSGIX;

/* GL_SGIX_texture_scale_bias */

/* GL_SGIX_framezoom */
PFNGLFRAMEZOOMSGIXPROC glFrameZoomSGIX = InitFrameZoomSGIX;

/* GL_SGIX_tag_sample_buffer */
PFNGLTAGSAMPLEBUFFERSGIXPROC glTagSampleBufferSGIX = InitTagSampleBufferSGIX;

/* GL_SGIX_polynomial_ffd */
PFNGLDEFORMATIONMAP3DSGIXPROC glDeformationMap3dSGIX = InitDeformationMap3dSGIX;
PFNGLDEFORMATIONMAP3FSGIXPROC glDeformationMap3fSGIX = InitDeformationMap3fSGIX;
PFNGLDEFORMSGIXPROC glDeformSGIX = InitDeformSGIX;
PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC glLoadIdentityDeformationMapSGIX = InitLoadIdentityDeformationMapSGIX;

/* GL_SGIX_reference_plane */
PFNGLREFERENCEPLANESGIXPROC glReferencePlaneSGIX = InitReferencePlaneSGIX;

/* GL_SGIX_flush_raster */
PFNGLFLUSHRASTERSGIXPROC glFlushRasterSGIX = InitFlushRasterSGIX;

/* GL_SGIX_depth_texture */

/* GL_SGIS_fog_function */
PFNGLFOGFUNCSGISPROC glFogFuncSGIS = InitFogFuncSGIS;
PFNGLGETFOGFUNCSGISPROC glGetFogFuncSGIS = InitGetFogFuncSGIS;

/* GL_SGIX_fog_offset */

/* GL_HP_image_transform */
PFNGLIMAGETRANSFORMPARAMETERIHPPROC glImageTransformParameteriHP = InitImageTransformParameteriHP;
PFNGLIMAGETRANSFORMPARAMETERFHPPROC glImageTransformParameterfHP = InitImageTransformParameterfHP;
PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glImageTransformParameterivHP = InitImageTransformParameterivHP;
PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glImageTransformParameterfvHP = InitImageTransformParameterfvHP;
PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glGetImageTransformParameterivHP = InitGetImageTransformParameterivHP;
PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glGetImageTransformParameterfvHP = InitGetImageTransformParameterfvHP;

/* GL_HP_convolution_border_modes */

/* GL_SGIX_texture_add_env */

/* GL_EXT_color_subtable */
PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT = InitColorSubTableEXT;
PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT = InitCopyColorSubTableEXT;

/* GL_PGI_vertex_hints */

/* GL_PGI_misc_hints */
PFNGLHINTPGIPROC glHintPGI = InitHintPGI;

/* GL_EXT_paletted_texture */
PFNGLCOLORTABLEEXTPROC glColorTableEXT = InitColorTableEXT;
PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT = InitGetColorTableEXT;
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT = InitGetColorTableParameterivEXT;
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT = InitGetColorTableParameterfvEXT;

/* GL_EXT_clip_volume_hint */

/* GL_SGIX_list_priority */
PFNGLGETLISTPARAMETERFVSGIXPROC glGetListParameterfvSGIX = InitGetListParameterfvSGIX;
PFNGLGETLISTPARAMETERIVSGIXPROC glGetListParameterivSGIX = InitGetListParameterivSGIX;
PFNGLLISTPARAMETERFSGIXPROC glListParameterfSGIX = InitListParameterfSGIX;
PFNGLLISTPARAMETERFVSGIXPROC glListParameterfvSGIX = InitListParameterfvSGIX;
PFNGLLISTPARAMETERISGIXPROC glListParameteriSGIX = InitListParameteriSGIX;
PFNGLLISTPARAMETERIVSGIXPROC glListParameterivSGIX = InitListParameterivSGIX;

/* GL_SGIX_ir_instrument1 */

/* GL_SGIX_calligraphic_fragment */

/* GL_SGIX_texture_lod_bias */

/* GL_SGIX_shadow_ambient */

/* GL_EXT_index_texture */

/* GL_EXT_index_material */
PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT = InitIndexMaterialEXT;

/* GL_EXT_index_func */
PFNGLINDEXFUNCEXTPROC glIndexFuncEXT = InitIndexFuncEXT;

/* GL_EXT_index_array_formats */

/* GL_EXT_compiled_vertex_array */
PFNGLLOCKARRAYSEXTPROC glLockArraysEXT = InitLockArraysEXT;
PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT = InitUnlockArraysEXT;

/* GL_EXT_cull_vertex */
PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT = InitCullParameterdvEXT;
PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT = InitCullParameterfvEXT;

/* GL_SGIX_ycrcb */

/* GL_SGIX_fragment_lighting */
PFNGLFRAGMENTCOLORMATERIALSGIXPROC glFragmentColorMaterialSGIX = InitFragmentColorMaterialSGIX;
PFNGLFRAGMENTLIGHTFSGIXPROC glFragmentLightfSGIX = InitFragmentLightfSGIX;
PFNGLFRAGMENTLIGHTFVSGIXPROC glFragmentLightfvSGIX = InitFragmentLightfvSGIX;
PFNGLFRAGMENTLIGHTISGIXPROC glFragmentLightiSGIX = InitFragmentLightiSGIX;
PFNGLFRAGMENTLIGHTIVSGIXPROC glFragmentLightivSGIX = InitFragmentLightivSGIX;
PFNGLFRAGMENTLIGHTMODELFSGIXPROC glFragmentLightModelfSGIX = InitFragmentLightModelfSGIX;
PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glFragmentLightModelfvSGIX = InitFragmentLightModelfvSGIX;
PFNGLFRAGMENTLIGHTMODELISGIXPROC glFragmentLightModeliSGIX = InitFragmentLightModeliSGIX;
PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glFragmentLightModelivSGIX = InitFragmentLightModelivSGIX;
PFNGLFRAGMENTMATERIALFSGIXPROC glFragmentMaterialfSGIX = InitFragmentMaterialfSGIX;
PFNGLFRAGMENTMATERIALFVSGIXPROC glFragmentMaterialfvSGIX = InitFragmentMaterialfvSGIX;
PFNGLFRAGMENTMATERIALISGIXPROC glFragmentMaterialiSGIX = InitFragmentMaterialiSGIX;
PFNGLFRAGMENTMATERIALIVSGIXPROC glFragmentMaterialivSGIX = InitFragmentMaterialivSGIX;
PFNGLGETFRAGMENTLIGHTFVSGIXPROC glGetFragmentLightfvSGIX = InitGetFragmentLightfvSGIX;
PFNGLGETFRAGMENTLIGHTIVSGIXPROC glGetFragmentLightivSGIX = InitGetFragmentLightivSGIX;
PFNGLGETFRAGMENTMATERIALFVSGIXPROC glGetFragmentMaterialfvSGIX = InitGetFragmentMaterialfvSGIX;
PFNGLGETFRAGMENTMATERIALIVSGIXPROC glGetFragmentMaterialivSGIX = InitGetFragmentMaterialivSGIX;
PFNGLLIGHTENVISGIXPROC glLightEnviSGIX = InitLightEnviSGIX;

/* GL_IBM_rasterpos_clip */

/* GL_HP_texture_lighting */

/* GL_EXT_draw_range_elements */
PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT = InitDrawRangeElementsEXT;

/* GL_WIN_phong_shading */

/* GL_WIN_specular_fog */

/* GL_EXT_light_texture */
PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT = InitApplyTextureEXT;
PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT = InitTextureLightEXT;
PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT = InitTextureMaterialEXT;

/* GL_SGIX_blend_alpha_minmax */

/* GL_EXT_bgra */

/* GL_SGIX_async */
PFNGLASYNCMARKERSGIXPROC glAsyncMarkerSGIX = InitAsyncMarkerSGIX;
PFNGLFINISHASYNCSGIXPROC glFinishAsyncSGIX = InitFinishAsyncSGIX;
PFNGLPOLLASYNCSGIXPROC glPollAsyncSGIX = InitPollAsyncSGIX;
PFNGLGENASYNCMARKERSSGIXPROC glGenAsyncMarkersSGIX = InitGenAsyncMarkersSGIX;
PFNGLDELETEASYNCMARKERSSGIXPROC glDeleteAsyncMarkersSGIX = InitDeleteAsyncMarkersSGIX;
PFNGLISASYNCMARKERSGIXPROC glIsAsyncMarkerSGIX = InitIsAsyncMarkerSGIX;

/* GL_SGIX_async_pixel */

/* GL_SGIX_async_histogram */

/* GL_INTEL_parallel_arrays */
PFNGLVERTEXPOINTERVINTELPROC glVertexPointervINTEL = InitVertexPointervINTEL;
PFNGLNORMALPOINTERVINTELPROC glNormalPointervINTEL = InitNormalPointervINTEL;
PFNGLCOLORPOINTERVINTELPROC glColorPointervINTEL = InitColorPointervINTEL;
PFNGLTEXCOORDPOINTERVINTELPROC glTexCoordPointervINTEL = InitTexCoordPointervINTEL;

/* GL_HP_occlusion_test */

/* GL_EXT_pixel_transform */
PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT = InitPixelTransformParameteriEXT;
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT = InitPixelTransformParameterfEXT;
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT = InitPixelTransformParameterivEXT;
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT = InitPixelTransformParameterfvEXT;

/* GL_EXT_pixel_transform_color_table */

/* GL_EXT_shared_texture_palette */

/* GL_EXT_separate_specular_color */

/* GL_EXT_secondary_color */
PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT = InitSecondaryColor3bEXT;
PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT = InitSecondaryColor3bvEXT;
PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT = InitSecondaryColor3dEXT;
PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT = InitSecondaryColor3dvEXT;
PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT = InitSecondaryColor3fEXT;
PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT = InitSecondaryColor3fvEXT;
PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT = InitSecondaryColor3iEXT;
PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT = InitSecondaryColor3ivEXT;
PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT = InitSecondaryColor3sEXT;
PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT = InitSecondaryColor3svEXT;
PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT = InitSecondaryColor3ubEXT;
PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT = InitSecondaryColor3ubvEXT;
PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT = InitSecondaryColor3uiEXT;
PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT = InitSecondaryColor3uivEXT;
PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT = InitSecondaryColor3usEXT;
PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT = InitSecondaryColor3usvEXT;
PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT = InitSecondaryColorPointerEXT;

/* GL_EXT_texture_perturb_normal */
PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT = InitTextureNormalEXT;

/* GL_EXT_multi_draw_arrays */
PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT = InitMultiDrawArraysEXT;
PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT = InitMultiDrawElementsEXT;

/* GL_EXT_fog_coord */
PFNGLFOGCOORDFEXTPROC glFogCoordfEXT = InitFogCoordfEXT;
PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT = InitFogCoordfvEXT;
PFNGLFOGCOORDDEXTPROC glFogCoorddEXT = InitFogCoorddEXT;
PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT = InitFogCoorddvEXT;
PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT = InitFogCoordPointerEXT;

/* GL_REND_screen_coordinates */

/* GL_EXT_coordinate_frame */
PFNGLTANGENT3BEXTPROC glTangent3bEXT = InitTangent3bEXT;
PFNGLTANGENT3BVEXTPROC glTangent3bvEXT = InitTangent3bvEXT;
PFNGLTANGENT3DEXTPROC glTangent3dEXT = InitTangent3dEXT;
PFNGLTANGENT3DVEXTPROC glTangent3dvEXT = InitTangent3dvEXT;
PFNGLTANGENT3FEXTPROC glTangent3fEXT = InitTangent3fEXT;
PFNGLTANGENT3FVEXTPROC glTangent3fvEXT = InitTangent3fvEXT;
PFNGLTANGENT3IEXTPROC glTangent3iEXT = InitTangent3iEXT;
PFNGLTANGENT3IVEXTPROC glTangent3ivEXT = InitTangent3ivEXT;
PFNGLTANGENT3SEXTPROC glTangent3sEXT = InitTangent3sEXT;
PFNGLTANGENT3SVEXTPROC glTangent3svEXT = InitTangent3svEXT;
PFNGLBINORMAL3BEXTPROC glBinormal3bEXT = InitBinormal3bEXT;
PFNGLBINORMAL3BVEXTPROC glBinormal3bvEXT = InitBinormal3bvEXT;
PFNGLBINORMAL3DEXTPROC glBinormal3dEXT = InitBinormal3dEXT;
PFNGLBINORMAL3DVEXTPROC glBinormal3dvEXT = InitBinormal3dvEXT;
PFNGLBINORMAL3FEXTPROC glBinormal3fEXT = InitBinormal3fEXT;
PFNGLBINORMAL3FVEXTPROC glBinormal3fvEXT = InitBinormal3fvEXT;
PFNGLBINORMAL3IEXTPROC glBinormal3iEXT = InitBinormal3iEXT;
PFNGLBINORMAL3IVEXTPROC glBinormal3ivEXT = InitBinormal3ivEXT;
PFNGLBINORMAL3SEXTPROC glBinormal3sEXT = InitBinormal3sEXT;
PFNGLBINORMAL3SVEXTPROC glBinormal3svEXT = InitBinormal3svEXT;
PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT = InitTangentPointerEXT;
PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT = InitBinormalPointerEXT;

/* GL_EXT_texture_env_combine */

/* GL_APPLE_specular_vector */

/* GL_APPLE_transform_hint */

/* GL_SGIX_fog_scale */

/* GL_SUNX_constant_data */
PFNGLFINISHTEXTURESUNXPROC glFinishTextureSUNX = InitFinishTextureSUNX;

/* GL_SUN_global_alpha */
PFNGLGLOBALALPHAFACTORBSUNPROC glGlobalAlphaFactorbSUN = InitGlobalAlphaFactorbSUN;
PFNGLGLOBALALPHAFACTORSSUNPROC glGlobalAlphaFactorsSUN = InitGlobalAlphaFactorsSUN;
PFNGLGLOBALALPHAFACTORISUNPROC glGlobalAlphaFactoriSUN = InitGlobalAlphaFactoriSUN;
PFNGLGLOBALALPHAFACTORFSUNPROC glGlobalAlphaFactorfSUN = InitGlobalAlphaFactorfSUN;
PFNGLGLOBALALPHAFACTORDSUNPROC glGlobalAlphaFactordSUN = InitGlobalAlphaFactordSUN;
PFNGLGLOBALALPHAFACTORUBSUNPROC glGlobalAlphaFactorubSUN = InitGlobalAlphaFactorubSUN;
PFNGLGLOBALALPHAFACTORUSSUNPROC glGlobalAlphaFactorusSUN = InitGlobalAlphaFactorusSUN;
PFNGLGLOBALALPHAFACTORUISUNPROC glGlobalAlphaFactoruiSUN = InitGlobalAlphaFactoruiSUN;

/* GL_SUN_triangle_list */
PFNGLREPLACEMENTCODEUISUNPROC glReplacementCodeuiSUN = InitReplacementCodeuiSUN;
PFNGLREPLACEMENTCODEUSSUNPROC glReplacementCodeusSUN = InitReplacementCodeusSUN;
PFNGLREPLACEMENTCODEUBSUNPROC glReplacementCodeubSUN = InitReplacementCodeubSUN;
PFNGLREPLACEMENTCODEUIVSUNPROC glReplacementCodeuivSUN = InitReplacementCodeuivSUN;
PFNGLREPLACEMENTCODEUSVSUNPROC glReplacementCodeusvSUN = InitReplacementCodeusvSUN;
PFNGLREPLACEMENTCODEUBVSUNPROC glReplacementCodeubvSUN = InitReplacementCodeubvSUN;
PFNGLREPLACEMENTCODEPOINTERSUNPROC glReplacementCodePointerSUN = InitReplacementCodePointerSUN;

/* GL_SUN_vertex */
PFNGLCOLOR4UBVERTEX2FSUNPROC glColor4ubVertex2fSUN = InitColor4ubVertex2fSUN;
PFNGLCOLOR4UBVERTEX2FVSUNPROC glColor4ubVertex2fvSUN = InitColor4ubVertex2fvSUN;
PFNGLCOLOR4UBVERTEX3FSUNPROC glColor4ubVertex3fSUN = InitColor4ubVertex3fSUN;
PFNGLCOLOR4UBVERTEX3FVSUNPROC glColor4ubVertex3fvSUN = InitColor4ubVertex3fvSUN;
PFNGLCOLOR3FVERTEX3FSUNPROC glColor3fVertex3fSUN = InitColor3fVertex3fSUN;
PFNGLCOLOR3FVERTEX3FVSUNPROC glColor3fVertex3fvSUN = InitColor3fVertex3fvSUN;
PFNGLNORMAL3FVERTEX3FSUNPROC glNormal3fVertex3fSUN = InitNormal3fVertex3fSUN;
PFNGLNORMAL3FVERTEX3FVSUNPROC glNormal3fVertex3fvSUN = InitNormal3fVertex3fvSUN;
PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glColor4fNormal3fVertex3fSUN = InitColor4fNormal3fVertex3fSUN;
PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glColor4fNormal3fVertex3fvSUN = InitColor4fNormal3fVertex3fvSUN;
PFNGLTEXCOORD2FVERTEX3FSUNPROC glTexCoord2fVertex3fSUN = InitTexCoord2fVertex3fSUN;
PFNGLTEXCOORD2FVERTEX3FVSUNPROC glTexCoord2fVertex3fvSUN = InitTexCoord2fVertex3fvSUN;
PFNGLTEXCOORD4FVERTEX4FSUNPROC glTexCoord4fVertex4fSUN = InitTexCoord4fVertex4fSUN;
PFNGLTEXCOORD4FVERTEX4FVSUNPROC glTexCoord4fVertex4fvSUN = InitTexCoord4fVertex4fvSUN;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glTexCoord2fColor4ubVertex3fSUN = InitTexCoord2fColor4ubVertex3fSUN;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glTexCoord2fColor4ubVertex3fvSUN = InitTexCoord2fColor4ubVertex3fvSUN;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glTexCoord2fColor3fVertex3fSUN = InitTexCoord2fColor3fVertex3fSUN;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glTexCoord2fColor3fVertex3fvSUN = InitTexCoord2fColor3fVertex3fvSUN;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glTexCoord2fNormal3fVertex3fSUN = InitTexCoord2fNormal3fVertex3fSUN;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fNormal3fVertex3fvSUN = InitTexCoord2fNormal3fVertex3fvSUN;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glTexCoord2fColor4fNormal3fVertex3fSUN = InitTexCoord2fColor4fNormal3fVertex3fSUN;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fColor4fNormal3fVertex3fvSUN = InitTexCoord2fColor4fNormal3fVertex3fvSUN;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC glTexCoord4fColor4fNormal3fVertex4fSUN = InitTexCoord4fColor4fNormal3fVertex4fSUN;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC glTexCoord4fColor4fNormal3fVertex4fvSUN = InitTexCoord4fColor4fNormal3fVertex4fvSUN;
PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glReplacementCodeuiVertex3fSUN = InitReplacementCodeuiVertex3fSUN;
PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glReplacementCodeuiVertex3fvSUN = InitReplacementCodeuiVertex3fvSUN;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC glReplacementCodeuiColor4ubVertex3fSUN = InitReplacementCodeuiColor4ubVertex3fSUN;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC glReplacementCodeuiColor4ubVertex3fvSUN = InitReplacementCodeuiColor4ubVertex3fvSUN;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC glReplacementCodeuiColor3fVertex3fSUN = InitReplacementCodeuiColor3fVertex3fSUN;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC glReplacementCodeuiColor3fVertex3fvSUN = InitReplacementCodeuiColor3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC glReplacementCodeuiNormal3fVertex3fSUN = InitReplacementCodeuiNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiNormal3fVertex3fvSUN = InitReplacementCodeuiNormal3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fSUN = InitReplacementCodeuiColor4fNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fvSUN = InitReplacementCodeuiColor4fNormal3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fVertex3fSUN = InitReplacementCodeuiTexCoord2fVertex3fSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fVertex3fvSUN = InitReplacementCodeuiTexCoord2fVertex3fvSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = InitReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = InitReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = InitReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = InitReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

/* GL_EXT_blend_func_separate */
PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT = InitBlendFuncSeparateEXT;

/* GL_INGR_blend_func_separate */
PFNGLBLENDFUNCSEPARATEINGRPROC glBlendFuncSeparateINGR = InitBlendFuncSeparateINGR;

/* GL_INGR_color_clamp */

/* GL_INGR_interlace_read */

/* GL_EXT_stencil_wrap */

/* GL_EXT_422_pixels */

/* GL_NV_texgen_reflection */

/* GL_SUN_convolution_border_modes */

/* GL_EXT_texture_env_add */

/* GL_EXT_texture_lod_bias */

/* GL_EXT_texture_filter_anisotropic */

/* GL_EXT_vertex_weighting */
PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT = InitVertexWeightfEXT;
PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT = InitVertexWeightfvEXT;
PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT = InitVertexWeightPointerEXT;

/* GL_NV_light_max_exponent */

/* GL_NV_vertex_array_range */
PFNGLFLUSHVERTEXARRAYRANGENVPROC glFlushVertexArrayRangeNV = InitFlushVertexArrayRangeNV;
PFNGLVERTEXARRAYRANGENVPROC glVertexArrayRangeNV = InitVertexArrayRangeNV;

/* GL_NV_register_combiners */
PFNGLCOMBINERPARAMETERFVNVPROC glCombinerParameterfvNV = InitCombinerParameterfvNV;
PFNGLCOMBINERPARAMETERFNVPROC glCombinerParameterfNV = InitCombinerParameterfNV;
PFNGLCOMBINERPARAMETERIVNVPROC glCombinerParameterivNV = InitCombinerParameterivNV;
PFNGLCOMBINERPARAMETERINVPROC glCombinerParameteriNV = InitCombinerParameteriNV;
PFNGLCOMBINERINPUTNVPROC glCombinerInputNV = InitCombinerInputNV;
PFNGLCOMBINEROUTPUTNVPROC glCombinerOutputNV = InitCombinerOutputNV;
PFNGLFINALCOMBINERINPUTNVPROC glFinalCombinerInputNV = InitFinalCombinerInputNV;
PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glGetCombinerInputParameterfvNV = InitGetCombinerInputParameterfvNV;
PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glGetCombinerInputParameterivNV = InitGetCombinerInputParameterivNV;
PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glGetCombinerOutputParameterfvNV = InitGetCombinerOutputParameterfvNV;
PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glGetCombinerOutputParameterivNV = InitGetCombinerOutputParameterivNV;
PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glGetFinalCombinerInputParameterfvNV = InitGetFinalCombinerInputParameterfvNV;
PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glGetFinalCombinerInputParameterivNV = InitGetFinalCombinerInputParameterivNV;

/* GL_NV_fog_distance */

/* GL_NV_texgen_emboss */

/* GL_NV_blend_square */

/* GL_NV_texture_env_combine4 */

/* GL_MESA_resize_buffers */
PFNGLRESIZEBUFFERSMESAPROC glResizeBuffersMESA = InitResizeBuffersMESA;

/* GL_MESA_window_pos */
PFNGLWINDOWPOS2DMESAPROC glWindowPos2dMESA = InitWindowPos2dMESA;
PFNGLWINDOWPOS2DVMESAPROC glWindowPos2dvMESA = InitWindowPos2dvMESA;
PFNGLWINDOWPOS2FMESAPROC glWindowPos2fMESA = InitWindowPos2fMESA;
PFNGLWINDOWPOS2FVMESAPROC glWindowPos2fvMESA = InitWindowPos2fvMESA;
PFNGLWINDOWPOS2IMESAPROC glWindowPos2iMESA = InitWindowPos2iMESA;
PFNGLWINDOWPOS2IVMESAPROC glWindowPos2ivMESA = InitWindowPos2ivMESA;
PFNGLWINDOWPOS2SMESAPROC glWindowPos2sMESA = InitWindowPos2sMESA;
PFNGLWINDOWPOS2SVMESAPROC glWindowPos2svMESA = InitWindowPos2svMESA;
PFNGLWINDOWPOS3DMESAPROC glWindowPos3dMESA = InitWindowPos3dMESA;
PFNGLWINDOWPOS3DVMESAPROC glWindowPos3dvMESA = InitWindowPos3dvMESA;
PFNGLWINDOWPOS3FMESAPROC glWindowPos3fMESA = InitWindowPos3fMESA;
PFNGLWINDOWPOS3FVMESAPROC glWindowPos3fvMESA = InitWindowPos3fvMESA;
PFNGLWINDOWPOS3IMESAPROC glWindowPos3iMESA = InitWindowPos3iMESA;
PFNGLWINDOWPOS3IVMESAPROC glWindowPos3ivMESA = InitWindowPos3ivMESA;
PFNGLWINDOWPOS3SMESAPROC glWindowPos3sMESA = InitWindowPos3sMESA;
PFNGLWINDOWPOS3SVMESAPROC glWindowPos3svMESA = InitWindowPos3svMESA;
PFNGLWINDOWPOS4DMESAPROC glWindowPos4dMESA = InitWindowPos4dMESA;
PFNGLWINDOWPOS4DVMESAPROC glWindowPos4dvMESA = InitWindowPos4dvMESA;
PFNGLWINDOWPOS4FMESAPROC glWindowPos4fMESA = InitWindowPos4fMESA;
PFNGLWINDOWPOS4FVMESAPROC glWindowPos4fvMESA = InitWindowPos4fvMESA;
PFNGLWINDOWPOS4IMESAPROC glWindowPos4iMESA = InitWindowPos4iMESA;
PFNGLWINDOWPOS4IVMESAPROC glWindowPos4ivMESA = InitWindowPos4ivMESA;
PFNGLWINDOWPOS4SMESAPROC glWindowPos4sMESA = InitWindowPos4sMESA;
PFNGLWINDOWPOS4SVMESAPROC glWindowPos4svMESA = InitWindowPos4svMESA;

/* GL_IBM_cull_vertex */

/* GL_IBM_multimode_draw_arrays */
PFNGLMULTIMODEDRAWARRAYSIBMPROC glMultiModeDrawArraysIBM = InitMultiModeDrawArraysIBM;
PFNGLMULTIMODEDRAWELEMENTSIBMPROC glMultiModeDrawElementsIBM = InitMultiModeDrawElementsIBM;

/* GL_IBM_vertex_array_lists */
PFNGLCOLORPOINTERLISTIBMPROC glColorPointerListIBM = InitColorPointerListIBM;
PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glSecondaryColorPointerListIBM = InitSecondaryColorPointerListIBM;
PFNGLEDGEFLAGPOINTERLISTIBMPROC glEdgeFlagPointerListIBM = InitEdgeFlagPointerListIBM;
PFNGLFOGCOORDPOINTERLISTIBMPROC glFogCoordPointerListIBM = InitFogCoordPointerListIBM;
PFNGLINDEXPOINTERLISTIBMPROC glIndexPointerListIBM = InitIndexPointerListIBM;
PFNGLNORMALPOINTERLISTIBMPROC glNormalPointerListIBM = InitNormalPointerListIBM;
PFNGLTEXCOORDPOINTERLISTIBMPROC glTexCoordPointerListIBM = InitTexCoordPointerListIBM;
PFNGLVERTEXPOINTERLISTIBMPROC glVertexPointerListIBM = InitVertexPointerListIBM;

/* GL_SGIX_subsample */

/* GL_SGIX_ycrcba */

/* GL_SGIX_ycrcb_subsample */

/* GL_SGIX_depth_pass_instrument */

/* GL_3DFX_texture_compression_FXT1 */

/* GL_3DFX_multisample */

/* GL_3DFX_tbuffer */
PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX = InitTbufferMask3DFX;

/* GL_EXT_multisample */
PFNGLSAMPLEMASKEXTPROC glSampleMaskEXT = InitSampleMaskEXT;
PFNGLSAMPLEPATTERNEXTPROC glSamplePatternEXT = InitSamplePatternEXT;

/* GL_SGIX_vertex_preclip */

/* GL_SGIX_convolution_accuracy */

/* GL_SGIX_resample */

/* GL_SGIS_point_line_texgen */

/* GL_SGIS_texture_color_mask */
PFNGLTEXTURECOLORMASKSGISPROC glTextureColorMaskSGIS = InitTextureColorMaskSGIS;

/* GL_SGIX_igloo_interface */
PFNGLIGLOOINTERFACESGIXPROC glIglooInterfaceSGIX = InitIglooInterfaceSGIX;

/* GL_EXT_texture_env_dot3 */

/* GL_ATI_texture_mirror_once */

/* GL_NV_fence */
PFNGLDELETEFENCESNVPROC glDeleteFencesNV = InitDeleteFencesNV;
PFNGLGENFENCESNVPROC glGenFencesNV = InitGenFencesNV;
PFNGLISFENCENVPROC glIsFenceNV = InitIsFenceNV;
PFNGLTESTFENCENVPROC glTestFenceNV = InitTestFenceNV;
PFNGLGETFENCEIVNVPROC glGetFenceivNV = InitGetFenceivNV;
PFNGLFINISHFENCENVPROC glFinishFenceNV = InitFinishFenceNV;
PFNGLSETFENCENVPROC glSetFenceNV = InitSetFenceNV;

/* GL_NV_evaluators */
PFNGLMAPCONTROLPOINTSNVPROC glMapControlPointsNV = InitMapControlPointsNV;
PFNGLMAPPARAMETERIVNVPROC glMapParameterivNV = InitMapParameterivNV;
PFNGLMAPPARAMETERFVNVPROC glMapParameterfvNV = InitMapParameterfvNV;
PFNGLGETMAPCONTROLPOINTSNVPROC glGetMapControlPointsNV = InitGetMapControlPointsNV;
PFNGLGETMAPPARAMETERIVNVPROC glGetMapParameterivNV = InitGetMapParameterivNV;
PFNGLGETMAPPARAMETERFVNVPROC glGetMapParameterfvNV = InitGetMapParameterfvNV;
PFNGLGETMAPATTRIBPARAMETERIVNVPROC glGetMapAttribParameterivNV = InitGetMapAttribParameterivNV;
PFNGLGETMAPATTRIBPARAMETERFVNVPROC glGetMapAttribParameterfvNV = InitGetMapAttribParameterfvNV;
PFNGLEVALMAPSNVPROC glEvalMapsNV = InitEvalMapsNV;

/* GL_NV_packed_depth_stencil */

/* GL_NV_register_combiners2 */
PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV = InitCombinerStageParameterfvNV;
PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV = InitGetCombinerStageParameterfvNV;

/* GL_NV_texture_compression_vtc */

/* GL_NV_texture_rectangle */

/* GL_NV_texture_shader */

/* GL_NV_texture_shader2 */

/* GL_NV_vertex_array_range2 */

/* GL_NV_vertex_program */
PFNGLAREPROGRAMSRESIDENTNVPROC glAreProgramsResidentNV = InitAreProgramsResidentNV;
PFNGLBINDPROGRAMNVPROC glBindProgramNV = InitBindProgramNV;
PFNGLDELETEPROGRAMSNVPROC glDeleteProgramsNV = InitDeleteProgramsNV;
PFNGLEXECUTEPROGRAMNVPROC glExecuteProgramNV = InitExecuteProgramNV;
PFNGLGENPROGRAMSNVPROC glGenProgramsNV = InitGenProgramsNV;
PFNGLGETPROGRAMPARAMETERDVNVPROC glGetProgramParameterdvNV = InitGetProgramParameterdvNV;
PFNGLGETPROGRAMPARAMETERFVNVPROC glGetProgramParameterfvNV = InitGetProgramParameterfvNV;
PFNGLGETPROGRAMIVNVPROC glGetProgramivNV = InitGetProgramivNV;
PFNGLGETPROGRAMSTRINGNVPROC glGetProgramStringNV = InitGetProgramStringNV;
PFNGLGETTRACKMATRIXIVNVPROC glGetTrackMatrixivNV = InitGetTrackMatrixivNV;
PFNGLGETVERTEXATTRIBDVNVPROC glGetVertexAttribdvNV = InitGetVertexAttribdvNV;
PFNGLGETVERTEXATTRIBFVNVPROC glGetVertexAttribfvNV = InitGetVertexAttribfvNV;
PFNGLGETVERTEXATTRIBIVNVPROC glGetVertexAttribivNV = InitGetVertexAttribivNV;
PFNGLGETVERTEXATTRIBPOINTERVNVPROC glGetVertexAttribPointervNV = InitGetVertexAttribPointervNV;
PFNGLISPROGRAMNVPROC glIsProgramNV = InitIsProgramNV;
PFNGLLOADPROGRAMNVPROC glLoadProgramNV = InitLoadProgramNV;
PFNGLPROGRAMPARAMETER4DNVPROC glProgramParameter4dNV = InitProgramParameter4dNV;
PFNGLPROGRAMPARAMETER4DVNVPROC glProgramParameter4dvNV = InitProgramParameter4dvNV;
PFNGLPROGRAMPARAMETER4FNVPROC glProgramParameter4fNV = InitProgramParameter4fNV;
PFNGLPROGRAMPARAMETER4FVNVPROC glProgramParameter4fvNV = InitProgramParameter4fvNV;
PFNGLPROGRAMPARAMETERS4DVNVPROC glProgramParameters4dvNV = InitProgramParameters4dvNV;
PFNGLPROGRAMPARAMETERS4FVNVPROC glProgramParameters4fvNV = InitProgramParameters4fvNV;
PFNGLREQUESTRESIDENTPROGRAMSNVPROC glRequestResidentProgramsNV = InitRequestResidentProgramsNV;
PFNGLTRACKMATRIXNVPROC glTrackMatrixNV = InitTrackMatrixNV;
PFNGLVERTEXATTRIBPOINTERNVPROC glVertexAttribPointerNV = InitVertexAttribPointerNV;
PFNGLVERTEXATTRIB1DNVPROC glVertexAttrib1dNV = InitVertexAttrib1dNV;
PFNGLVERTEXATTRIB1DVNVPROC glVertexAttrib1dvNV = InitVertexAttrib1dvNV;
PFNGLVERTEXATTRIB1FNVPROC glVertexAttrib1fNV = InitVertexAttrib1fNV;
PFNGLVERTEXATTRIB1FVNVPROC glVertexAttrib1fvNV = InitVertexAttrib1fvNV;
PFNGLVERTEXATTRIB1SNVPROC glVertexAttrib1sNV = InitVertexAttrib1sNV;
PFNGLVERTEXATTRIB1SVNVPROC glVertexAttrib1svNV = InitVertexAttrib1svNV;
PFNGLVERTEXATTRIB2DNVPROC glVertexAttrib2dNV = InitVertexAttrib2dNV;
PFNGLVERTEXATTRIB2DVNVPROC glVertexAttrib2dvNV = InitVertexAttrib2dvNV;
PFNGLVERTEXATTRIB2FNVPROC glVertexAttrib2fNV = InitVertexAttrib2fNV;
PFNGLVERTEXATTRIB2FVNVPROC glVertexAttrib2fvNV = InitVertexAttrib2fvNV;
PFNGLVERTEXATTRIB2SNVPROC glVertexAttrib2sNV = InitVertexAttrib2sNV;
PFNGLVERTEXATTRIB2SVNVPROC glVertexAttrib2svNV = InitVertexAttrib2svNV;
PFNGLVERTEXATTRIB3DNVPROC glVertexAttrib3dNV = InitVertexAttrib3dNV;
PFNGLVERTEXATTRIB3DVNVPROC glVertexAttrib3dvNV = InitVertexAttrib3dvNV;
PFNGLVERTEXATTRIB3FNVPROC glVertexAttrib3fNV = InitVertexAttrib3fNV;
PFNGLVERTEXATTRIB3FVNVPROC glVertexAttrib3fvNV = InitVertexAttrib3fvNV;
PFNGLVERTEXATTRIB3SNVPROC glVertexAttrib3sNV = InitVertexAttrib3sNV;
PFNGLVERTEXATTRIB3SVNVPROC glVertexAttrib3svNV = InitVertexAttrib3svNV;
PFNGLVERTEXATTRIB4DNVPROC glVertexAttrib4dNV = InitVertexAttrib4dNV;
PFNGLVERTEXATTRIB4DVNVPROC glVertexAttrib4dvNV = InitVertexAttrib4dvNV;
PFNGLVERTEXATTRIB4FNVPROC glVertexAttrib4fNV = InitVertexAttrib4fNV;
PFNGLVERTEXATTRIB4FVNVPROC glVertexAttrib4fvNV = InitVertexAttrib4fvNV;
PFNGLVERTEXATTRIB4SNVPROC glVertexAttrib4sNV = InitVertexAttrib4sNV;
PFNGLVERTEXATTRIB4SVNVPROC glVertexAttrib4svNV = InitVertexAttrib4svNV;
PFNGLVERTEXATTRIB4UBNVPROC glVertexAttrib4ubNV = InitVertexAttrib4ubNV;
PFNGLVERTEXATTRIB4UBVNVPROC glVertexAttrib4ubvNV = InitVertexAttrib4ubvNV;
PFNGLVERTEXATTRIBS1DVNVPROC glVertexAttribs1dvNV = InitVertexAttribs1dvNV;
PFNGLVERTEXATTRIBS1FVNVPROC glVertexAttribs1fvNV = InitVertexAttribs1fvNV;
PFNGLVERTEXATTRIBS1SVNVPROC glVertexAttribs1svNV = InitVertexAttribs1svNV;
PFNGLVERTEXATTRIBS2DVNVPROC glVertexAttribs2dvNV = InitVertexAttribs2dvNV;
PFNGLVERTEXATTRIBS2FVNVPROC glVertexAttribs2fvNV = InitVertexAttribs2fvNV;
PFNGLVERTEXATTRIBS2SVNVPROC glVertexAttribs2svNV = InitVertexAttribs2svNV;
PFNGLVERTEXATTRIBS3DVNVPROC glVertexAttribs3dvNV = InitVertexAttribs3dvNV;
PFNGLVERTEXATTRIBS3FVNVPROC glVertexAttribs3fvNV = InitVertexAttribs3fvNV;
PFNGLVERTEXATTRIBS3SVNVPROC glVertexAttribs3svNV = InitVertexAttribs3svNV;
PFNGLVERTEXATTRIBS4DVNVPROC glVertexAttribs4dvNV = InitVertexAttribs4dvNV;
PFNGLVERTEXATTRIBS4FVNVPROC glVertexAttribs4fvNV = InitVertexAttribs4fvNV;
PFNGLVERTEXATTRIBS4SVNVPROC glVertexAttribs4svNV = InitVertexAttribs4svNV;
PFNGLVERTEXATTRIBS4UBVNVPROC glVertexAttribs4ubvNV = InitVertexAttribs4ubvNV;

/* GL_SGIX_texture_coordinate_clamp */

/* GL_SGIX_scalebias_hint */

/* GL_OML_interlace */

/* GL_OML_subsample */

/* GL_OML_resample */

/* GL_NV_copy_depth_to_color */

/* GL_ATI_envmap_bumpmap */
PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI = InitTexBumpParameterivATI;
PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI = InitTexBumpParameterfvATI;
PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI = InitGetTexBumpParameterivATI;
PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI = InitGetTexBumpParameterfvATI;

/* GL_ATI_fragment_shader */
PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI = InitGenFragmentShadersATI;
PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI = InitBindFragmentShaderATI;
PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI = InitDeleteFragmentShaderATI;
PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI = InitBeginFragmentShaderATI;
PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI = InitEndFragmentShaderATI;
PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI = InitPassTexCoordATI;
PFNGLSAMPLEMAPATIPROC glSampleMapATI = InitSampleMapATI;
PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI = InitColorFragmentOp1ATI;
PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI = InitColorFragmentOp2ATI;
PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI = InitColorFragmentOp3ATI;
PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI = InitAlphaFragmentOp1ATI;
PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI = InitAlphaFragmentOp2ATI;
PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI = InitAlphaFragmentOp3ATI;
PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI = InitSetFragmentShaderConstantATI;

/* GL_ATI_pn_triangles */
PFNGLPNTRIANGLESIATIPROC glPNTrianglesiATI = InitPNTrianglesiATI;
PFNGLPNTRIANGLESFATIPROC glPNTrianglesfATI = InitPNTrianglesfATI;

/* GL_ATI_vertex_array_object */
PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI = InitNewObjectBufferATI;
PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI = InitIsObjectBufferATI;
PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI = InitUpdateObjectBufferATI;
PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI = InitGetObjectBufferfvATI;
PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI = InitGetObjectBufferivATI;
PFNGLFREEOBJECTBUFFERATIPROC glFreeObjectBufferATI = InitFreeObjectBufferATI;
PFNGLARRAYOBJECTATIPROC glArrayObjectATI = InitArrayObjectATI;
PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI = InitGetArrayObjectfvATI;
PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI = InitGetArrayObjectivATI;
PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI = InitVariantArrayObjectATI;
PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI = InitGetVariantArrayObjectfvATI;
PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI = InitGetVariantArrayObjectivATI;

/* GL_EXT_vertex_shader */
PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT = InitBeginVertexShaderEXT;
PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT = InitEndVertexShaderEXT;
PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT = InitBindVertexShaderEXT;
PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT = InitGenVertexShadersEXT;
PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT = InitDeleteVertexShaderEXT;
PFNGLSHADEROP1EXTPROC glShaderOp1EXT = InitShaderOp1EXT;
PFNGLSHADEROP2EXTPROC glShaderOp2EXT = InitShaderOp2EXT;
PFNGLSHADEROP3EXTPROC glShaderOp3EXT = InitShaderOp3EXT;
PFNGLSWIZZLEEXTPROC glSwizzleEXT = InitSwizzleEXT;
PFNGLWRITEMASKEXTPROC glWriteMaskEXT = InitWriteMaskEXT;
PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT = InitInsertComponentEXT;
PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT = InitExtractComponentEXT;
PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT = InitGenSymbolsEXT;
PFNGLSETINVARIANTEXTPROC glSetInvariantEXT = InitSetInvariantEXT;
PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT = InitSetLocalConstantEXT;
PFNGLVARIANTBVEXTPROC glVariantbvEXT = InitVariantbvEXT;
PFNGLVARIANTSVEXTPROC glVariantsvEXT = InitVariantsvEXT;
PFNGLVARIANTIVEXTPROC glVariantivEXT = InitVariantivEXT;
PFNGLVARIANTFVEXTPROC glVariantfvEXT = InitVariantfvEXT;
PFNGLVARIANTDVEXTPROC glVariantdvEXT = InitVariantdvEXT;
PFNGLVARIANTUBVEXTPROC glVariantubvEXT = InitVariantubvEXT;
PFNGLVARIANTUSVEXTPROC glVariantusvEXT = InitVariantusvEXT;
PFNGLVARIANTUIVEXTPROC glVariantuivEXT = InitVariantuivEXT;
PFNGLVARIANTPOINTEREXTPROC glVariantPointerEXT = InitVariantPointerEXT;
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT = InitEnableVariantClientStateEXT;
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT = InitDisableVariantClientStateEXT;
PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT = InitBindLightParameterEXT;
PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT = InitBindMaterialParameterEXT;
PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT = InitBindTexGenParameterEXT;
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT = InitBindTextureUnitParameterEXT;
PFNGLBINDPARAMETEREXTPROC glBindParameterEXT = InitBindParameterEXT;
PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT = InitIsVariantEnabledEXT;
PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT = InitGetVariantBooleanvEXT;
PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT = InitGetVariantIntegervEXT;
PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT = InitGetVariantFloatvEXT;
PFNGLGETVARIANTPOINTERVEXTPROC glGetVariantPointervEXT = InitGetVariantPointervEXT;
PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT = InitGetInvariantBooleanvEXT;
PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT = InitGetInvariantIntegervEXT;
PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT = InitGetInvariantFloatvEXT;
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT = InitGetLocalConstantBooleanvEXT;
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT = InitGetLocalConstantIntegervEXT;
PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT = InitGetLocalConstantFloatvEXT;

/* GL_ATI_vertex_streams */
PFNGLVERTEXSTREAM1SATIPROC glVertexStream1sATI = InitVertexStream1sATI;
PFNGLVERTEXSTREAM1SVATIPROC glVertexStream1svATI = InitVertexStream1svATI;
PFNGLVERTEXSTREAM1IATIPROC glVertexStream1iATI = InitVertexStream1iATI;
PFNGLVERTEXSTREAM1IVATIPROC glVertexStream1ivATI = InitVertexStream1ivATI;
PFNGLVERTEXSTREAM1FATIPROC glVertexStream1fATI = InitVertexStream1fATI;
PFNGLVERTEXSTREAM1FVATIPROC glVertexStream1fvATI = InitVertexStream1fvATI;
PFNGLVERTEXSTREAM1DATIPROC glVertexStream1dATI = InitVertexStream1dATI;
PFNGLVERTEXSTREAM1DVATIPROC glVertexStream1dvATI = InitVertexStream1dvATI;
PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI = InitVertexStream2sATI;
PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI = InitVertexStream2svATI;
PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI = InitVertexStream2iATI;
PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI = InitVertexStream2ivATI;
PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI = InitVertexStream2fATI;
PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI = InitVertexStream2fvATI;
PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI = InitVertexStream2dATI;
PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI = InitVertexStream2dvATI;
PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI = InitVertexStream3sATI;
PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI = InitVertexStream3svATI;
PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI = InitVertexStream3iATI;
PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI = InitVertexStream3ivATI;
PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI = InitVertexStream3fATI;
PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI = InitVertexStream3fvATI;
PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI = InitVertexStream3dATI;
PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI = InitVertexStream3dvATI;
PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI = InitVertexStream4sATI;
PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI = InitVertexStream4svATI;
PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI = InitVertexStream4iATI;
PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI = InitVertexStream4ivATI;
PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI = InitVertexStream4fATI;
PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI = InitVertexStream4fvATI;
PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI = InitVertexStream4dATI;
PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI = InitVertexStream4dvATI;
PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI = InitNormalStream3bATI;
PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI = InitNormalStream3bvATI;
PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI = InitNormalStream3sATI;
PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI = InitNormalStream3svATI;
PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI = InitNormalStream3iATI;
PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI = InitNormalStream3ivATI;
PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI = InitNormalStream3fATI;
PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI = InitNormalStream3fvATI;
PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI = InitNormalStream3dATI;
PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI = InitNormalStream3dvATI;
PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI = InitClientActiveVertexStreamATI;
PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI = InitVertexBlendEnviATI;
PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI = InitVertexBlendEnvfATI;

/* GL_ATI_element_array */
PFNGLELEMENTPOINTERATIPROC glElementPointerATI = InitElementPointerATI;
PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI = InitDrawElementArrayATI;
PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI = InitDrawRangeElementArrayATI;

/* GL_SUN_mesh_array */
PFNGLDRAWMESHARRAYSSUNPROC glDrawMeshArraysSUN = InitDrawMeshArraysSUN;

/* GL_SUN_slice_accum */

/* GL_NV_multisample_filter_hint */

/* GL_NV_depth_clamp */

/* GL_NV_occlusion_query */
PFNGLGENOCCLUSIONQUERIESNVPROC glGenOcclusionQueriesNV = InitGenOcclusionQueriesNV;
PFNGLDELETEOCCLUSIONQUERIESNVPROC glDeleteOcclusionQueriesNV = InitDeleteOcclusionQueriesNV;
PFNGLISOCCLUSIONQUERYNVPROC glIsOcclusionQueryNV = InitIsOcclusionQueryNV;
PFNGLBEGINOCCLUSIONQUERYNVPROC glBeginOcclusionQueryNV = InitBeginOcclusionQueryNV;
PFNGLENDOCCLUSIONQUERYNVPROC glEndOcclusionQueryNV = InitEndOcclusionQueryNV;
PFNGLGETOCCLUSIONQUERYIVNVPROC glGetOcclusionQueryivNV = InitGetOcclusionQueryivNV;
PFNGLGETOCCLUSIONQUERYUIVNVPROC glGetOcclusionQueryuivNV = InitGetOcclusionQueryuivNV;

/* GL_NV_point_sprite */
PFNGLPOINTPARAMETERINVPROC glPointParameteriNV = InitPointParameteriNV;
PFNGLPOINTPARAMETERIVNVPROC glPointParameterivNV = InitPointParameterivNV;

/* GL_NV_texture_shader3 */

/* GL_NV_vertex_program1_1 */

/* GL_EXT_shadow_funcs */

/* GL_EXT_stencil_two_side */
PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT = InitActiveStencilFaceEXT;

/* GL_ATI_text_fragment_shader */

/* GL_APPLE_client_storage */

/* GL_APPLE_element_array */
PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE = InitElementPointerAPPLE;
PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE = InitDrawElementArrayAPPLE;
PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE = InitDrawRangeElementArrayAPPLE;
PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE = InitMultiDrawElementArrayAPPLE;
PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE = InitMultiDrawRangeElementArrayAPPLE;

/* GL_APPLE_fence */
PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE = InitGenFencesAPPLE;
PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE = InitDeleteFencesAPPLE;
PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE = InitSetFenceAPPLE;
PFNGLISFENCEAPPLEPROC glIsFenceAPPLE = InitIsFenceAPPLE;
PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE = InitTestFenceAPPLE;
PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE = InitFinishFenceAPPLE;
PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE = InitTestObjectAPPLE;
PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE = InitFinishObjectAPPLE;

/* GL_APPLE_vertex_array_object */
PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE = InitBindVertexArrayAPPLE;
PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE = InitDeleteVertexArraysAPPLE;
PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE = InitGenVertexArraysAPPLE;
PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE = InitIsVertexArrayAPPLE;

/* GL_APPLE_vertex_array_range */
PFNGLVERTEXARRAYRANGEAPPLEPROC glVertexArrayRangeAPPLE = InitVertexArrayRangeAPPLE;
PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glFlushVertexArrayRangeAPPLE = InitFlushVertexArrayRangeAPPLE;
PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glVertexArrayParameteriAPPLE = InitVertexArrayParameteriAPPLE;

/* GL_APPLE_ycbcr_422 */

/* GL_S3_s3tc */

/* GL_ATI_draw_buffers */
PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI = InitDrawBuffersATI;

/* GL_ATI_pixel_format_float */

/* GL_ATI_texture_env_combine3 */

/* GL_ATI_texture_float */

/* GL_NV_float_buffer */

/* GL_NV_fragment_program */
PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glProgramNamedParameter4fNV = InitProgramNamedParameter4fNV;
PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glProgramNamedParameter4dNV = InitProgramNamedParameter4dNV;
PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glProgramNamedParameter4fvNV = InitProgramNamedParameter4fvNV;
PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glProgramNamedParameter4dvNV = InitProgramNamedParameter4dvNV;
PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glGetProgramNamedParameterfvNV = InitGetProgramNamedParameterfvNV;
PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glGetProgramNamedParameterdvNV = InitGetProgramNamedParameterdvNV;

/* GL_NV_half_float */
PFNGLVERTEX2HNVPROC glVertex2hNV = InitVertex2hNV;
PFNGLVERTEX2HVNVPROC glVertex2hvNV = InitVertex2hvNV;
PFNGLVERTEX3HNVPROC glVertex3hNV = InitVertex3hNV;
PFNGLVERTEX3HVNVPROC glVertex3hvNV = InitVertex3hvNV;
PFNGLVERTEX4HNVPROC glVertex4hNV = InitVertex4hNV;
PFNGLVERTEX4HVNVPROC glVertex4hvNV = InitVertex4hvNV;
PFNGLNORMAL3HNVPROC glNormal3hNV = InitNormal3hNV;
PFNGLNORMAL3HVNVPROC glNormal3hvNV = InitNormal3hvNV;
PFNGLCOLOR3HNVPROC glColor3hNV = InitColor3hNV;
PFNGLCOLOR3HVNVPROC glColor3hvNV = InitColor3hvNV;
PFNGLCOLOR4HNVPROC glColor4hNV = InitColor4hNV;
PFNGLCOLOR4HVNVPROC glColor4hvNV = InitColor4hvNV;
PFNGLTEXCOORD1HNVPROC glTexCoord1hNV = InitTexCoord1hNV;
PFNGLTEXCOORD1HVNVPROC glTexCoord1hvNV = InitTexCoord1hvNV;
PFNGLTEXCOORD2HNVPROC glTexCoord2hNV = InitTexCoord2hNV;
PFNGLTEXCOORD2HVNVPROC glTexCoord2hvNV = InitTexCoord2hvNV;
PFNGLTEXCOORD3HNVPROC glTexCoord3hNV = InitTexCoord3hNV;
PFNGLTEXCOORD3HVNVPROC glTexCoord3hvNV = InitTexCoord3hvNV;
PFNGLTEXCOORD4HNVPROC glTexCoord4hNV = InitTexCoord4hNV;
PFNGLTEXCOORD4HVNVPROC glTexCoord4hvNV = InitTexCoord4hvNV;
PFNGLMULTITEXCOORD1HNVPROC glMultiTexCoord1hNV = InitMultiTexCoord1hNV;
PFNGLMULTITEXCOORD1HVNVPROC glMultiTexCoord1hvNV = InitMultiTexCoord1hvNV;
PFNGLMULTITEXCOORD2HNVPROC glMultiTexCoord2hNV = InitMultiTexCoord2hNV;
PFNGLMULTITEXCOORD2HVNVPROC glMultiTexCoord2hvNV = InitMultiTexCoord2hvNV;
PFNGLMULTITEXCOORD3HNVPROC glMultiTexCoord3hNV = InitMultiTexCoord3hNV;
PFNGLMULTITEXCOORD3HVNVPROC glMultiTexCoord3hvNV = InitMultiTexCoord3hvNV;
PFNGLMULTITEXCOORD4HNVPROC glMultiTexCoord4hNV = InitMultiTexCoord4hNV;
PFNGLMULTITEXCOORD4HVNVPROC glMultiTexCoord4hvNV = InitMultiTexCoord4hvNV;
PFNGLFOGCOORDHNVPROC glFogCoordhNV = InitFogCoordhNV;
PFNGLFOGCOORDHVNVPROC glFogCoordhvNV = InitFogCoordhvNV;
PFNGLSECONDARYCOLOR3HNVPROC glSecondaryColor3hNV = InitSecondaryColor3hNV;
PFNGLSECONDARYCOLOR3HVNVPROC glSecondaryColor3hvNV = InitSecondaryColor3hvNV;
PFNGLVERTEXWEIGHTHNVPROC glVertexWeighthNV = InitVertexWeighthNV;
PFNGLVERTEXWEIGHTHVNVPROC glVertexWeighthvNV = InitVertexWeighthvNV;
PFNGLVERTEXATTRIB1HNVPROC glVertexAttrib1hNV = InitVertexAttrib1hNV;
PFNGLVERTEXATTRIB1HVNVPROC glVertexAttrib1hvNV = InitVertexAttrib1hvNV;
PFNGLVERTEXATTRIB2HNVPROC glVertexAttrib2hNV = InitVertexAttrib2hNV;
PFNGLVERTEXATTRIB2HVNVPROC glVertexAttrib2hvNV = InitVertexAttrib2hvNV;
PFNGLVERTEXATTRIB3HNVPROC glVertexAttrib3hNV = InitVertexAttrib3hNV;
PFNGLVERTEXATTRIB3HVNVPROC glVertexAttrib3hvNV = InitVertexAttrib3hvNV;
PFNGLVERTEXATTRIB4HNVPROC glVertexAttrib4hNV = InitVertexAttrib4hNV;
PFNGLVERTEXATTRIB4HVNVPROC glVertexAttrib4hvNV = InitVertexAttrib4hvNV;
PFNGLVERTEXATTRIBS1HVNVPROC glVertexAttribs1hvNV = InitVertexAttribs1hvNV;
PFNGLVERTEXATTRIBS2HVNVPROC glVertexAttribs2hvNV = InitVertexAttribs2hvNV;
PFNGLVERTEXATTRIBS3HVNVPROC glVertexAttribs3hvNV = InitVertexAttribs3hvNV;
PFNGLVERTEXATTRIBS4HVNVPROC glVertexAttribs4hvNV = InitVertexAttribs4hvNV;

/* GL_NV_pixel_data_range */
PFNGLPIXELDATARANGENVPROC glPixelDataRangeNV = InitPixelDataRangeNV;
PFNGLFLUSHPIXELDATARANGENVPROC glFlushPixelDataRangeNV = InitFlushPixelDataRangeNV;

/* GL_NV_primitive_restart */
PFNGLPRIMITIVERESTARTNVPROC glPrimitiveRestartNV = InitPrimitiveRestartNV;
PFNGLPRIMITIVERESTARTINDEXNVPROC glPrimitiveRestartIndexNV = InitPrimitiveRestartIndexNV;

/* GL_NV_texture_expand_normal */

/* GL_NV_vertex_program2 */

/* GL_ATI_map_object_buffer */
/* The following cast is necessary because otherwise g++ would complain (gcc not) */
PFNGLMAPOBJECTBUFFERATIPROC glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC)InitMapObjectBufferATI;
PFNGLUNMAPOBJECTBUFFERATIPROC glUnmapObjectBufferATI = InitUnmapObjectBufferATI;

/* GL_ATI_separate_stencil */
PFNGLSTENCILOPSEPARATEATIPROC glStencilOpSeparateATI = InitStencilOpSeparateATI;
PFNGLSTENCILFUNCSEPARATEATIPROC glStencilFuncSeparateATI = InitStencilFuncSeparateATI;

/* GL_ATI_vertex_attrib_array_object */
PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glVertexAttribArrayObjectATI = InitVertexAttribArrayObjectATI;
PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC glGetVertexAttribArrayObjectfvATI = InitGetVertexAttribArrayObjectfvATI;
PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC glGetVertexAttribArrayObjectivATI = InitGetVertexAttribArrayObjectivATI;

/* GL_OES_read_format */

/* GL_EXT_depth_bounds_test */
PFNGLDEPTHBOUNDSEXTPROC glDepthBoundsEXT = InitDepthBoundsEXT;

/* GL_EXT_texture_mirror_clamp */

/* GL_EXT_blend_equation_separate */
PFNGLBLENDEQUATIONSEPARATEEXTPROC glBlendEquationSeparateEXT = InitBlendEquationSeparateEXT;

/* GL_MESA_pack_invert */

/* GL_MESA_ycbcr_texture */

/* GL_EXT_pixel_buffer_object */

/* GL_NV_fragment_program_option */

/* GL_NV_fragment_program2 */

/* GL_NV_vertex_program2_option */

/* GL_NV_vertex_program3 */


int egl_hasExtension(const char* ext) {
  char tmp[80]; /* 80 should be safe */
  
  int result;
  const char *extensions = (const char*)glGetString(GL_EXTENSIONS);
  
  assert(strlen(ext) < 78);
  
  /* First search for e.g. 'GL_ARB_multitexture ' */
  //strcpy_s(tmp, strlen(ext)+1, ext);
  //strcat_s(tmp, strlen(tmp)+1, " ");
  strcpy( tmp, ext );
  strcat( tmp, " " );
  
  result = strstr(extensions, tmp) != NULL;
  
  if ( !result ) {
    /* Search for ' GL_ARB_multitexture'; it could be the last extension
     * in the list where there is no space character at the end of the
     * extension string so the previous test would not report the extension to
     * be present */
    //strcpy_s(tmp, strlen(tmp)+1, " ");
    //strcat_s(tmp, strlen(tmp)+1, ext);
    strcpy( tmp, " " );
	strcat( tmp, ext );

    result = strstr(extensions, tmp) != NULL;
  }
  
  return result;
}

static int egl_hasMinGLVersion(int major, int minor) {
  const char *version = (const char*)glGetString(GL_VERSION);
  
  if ( major < version[0] - '0' ) return 1;
  if ( major == version[0] - '0' && minor <= version[2] - '0' ) return 1;
  return 0;
}

int EGL_HAS_GL_VERSION_1_2 = 0;
int EGL_HAS_GL_VERSION_1_3 = 0;
int EGL_HAS_GL_VERSION_1_4 = 0;
int EGL_HAS_GL_VERSION_1_5 = 0;
int EGL_HAS_GL_VERSION_2_0 = 0;
int EGL_HAS_GL_ARB_multitexture = 0;
int EGL_HAS_GL_ARB_transpose_matrix = 0;
int EGL_HAS_GL_ARB_multisample = 0;
int EGL_HAS_GL_ARB_texture_env_add = 0;
int EGL_HAS_GL_ARB_texture_cube_map = 0;
int EGL_HAS_GL_ARB_texture_compression = 0;
int EGL_HAS_GL_ARB_texture_border_clamp = 0;
int EGL_HAS_GL_ARB_point_parameters = 0;
int EGL_HAS_GL_ARB_vertex_blend = 0;
int EGL_HAS_GL_ARB_matrix_palette = 0;
int EGL_HAS_GL_ARB_texture_env_combine = 0;
int EGL_HAS_GL_ARB_texture_env_crossbar = 0;
int EGL_HAS_GL_ARB_texture_env_dot3 = 0;
int EGL_HAS_GL_ARB_texture_mirrored_repeat = 0;
int EGL_HAS_GL_ARB_depth_texture = 0;
int EGL_HAS_GL_ARB_shadow = 0;
int EGL_HAS_GL_ARB_shadow_ambient = 0;
int EGL_HAS_GL_ARB_window_pos = 0;
int EGL_HAS_GL_ARB_vertex_program = 0;
int EGL_HAS_GL_ARB_fragment_program = 0;
int EGL_HAS_GL_ARB_vertex_buffer_object = 0;
int EGL_HAS_GL_ARB_occlusion_query = 0;
int EGL_HAS_GL_ARB_shader_objects = 0;
int EGL_HAS_GL_ARB_vertex_shader = 0;
int EGL_HAS_GL_ARB_fragment_shader = 0;
int EGL_HAS_GL_ARB_shading_language_100 = 0;
int EGL_HAS_GL_ARB_texture_non_power_of_two = 0;
int EGL_HAS_GL_ARB_point_sprite = 0;
int EGL_HAS_GL_ARB_fragment_program_shadow = 0;
int EGL_HAS_GL_ARB_draw_buffers = 0;
int EGL_HAS_GL_ARB_texture_rectangle = 0;
int EGL_HAS_GL_ARB_color_buffer_float = 0;
int EGL_HAS_GL_ARB_half_float_pixel = 0;
int EGL_HAS_GL_ARB_texture_float = 0;
int EGL_HAS_GL_ARB_pixel_buffer_object = 0;
int EGL_HAS_GL_EXT_abgr = 0;
int EGL_HAS_GL_EXT_blend_color = 0;
int EGL_HAS_GL_EXT_polygon_offset = 0;
int EGL_HAS_GL_EXT_texture = 0;
int EGL_HAS_GL_EXT_texture3D = 0;
int EGL_HAS_GL_SGIS_texture_filter4 = 0;
int EGL_HAS_GL_EXT_subtexture = 0;
int EGL_HAS_GL_EXT_copy_texture = 0;
int EGL_HAS_GL_EXT_histogram = 0;
int EGL_HAS_GL_EXT_convolution = 0;
int EGL_HAS_GL_EXT_color_matrix = 0;
int EGL_HAS_GL_SGI_color_table = 0;
int EGL_HAS_GL_SGIX_pixel_texture = 0;
int EGL_HAS_GL_SGIS_pixel_texture = 0;
int EGL_HAS_GL_SGIS_texture4D = 0;
int EGL_HAS_GL_SGI_texture_color_table = 0;
int EGL_HAS_GL_EXT_cmyka = 0;
int EGL_HAS_GL_EXT_texture_object = 0;
int EGL_HAS_GL_SGIS_detail_texture = 0;
int EGL_HAS_GL_SGIS_sharpen_texture = 0;
int EGL_HAS_GL_EXT_packed_pixels = 0;
int EGL_HAS_GL_SGIS_texture_lod = 0;
int EGL_HAS_GL_SGIS_multisample = 0;
int EGL_HAS_GL_EXT_rescale_normal = 0;
int EGL_HAS_GL_EXT_vertex_array = 0;
int EGL_HAS_GL_EXT_misc_attribute = 0;
int EGL_HAS_GL_SGIS_generate_mipmap = 0;
int EGL_HAS_GL_SGIX_clipmap = 0;
int EGL_HAS_GL_SGIX_shadow = 0;
int EGL_HAS_GL_SGIS_texture_edge_clamp = 0;
int EGL_HAS_GL_SGIS_texture_border_clamp = 0;
int EGL_HAS_GL_EXT_blend_minmax = 0;
int EGL_HAS_GL_EXT_blend_subtract = 0;
int EGL_HAS_GL_EXT_blend_logic_op = 0;
int EGL_HAS_GL_SGIX_interlace = 0;
int EGL_HAS_GL_SGIX_pixel_tiles = 0;
int EGL_HAS_GL_SGIX_texture_select = 0;
int EGL_HAS_GL_SGIX_sprite = 0;
int EGL_HAS_GL_SGIX_texture_multi_buffer = 0;
int EGL_HAS_GL_EXT_point_parameters = 0;
int EGL_HAS_GL_SGIS_point_parameters = 0;
int EGL_HAS_GL_SGIX_instruments = 0;
int EGL_HAS_GL_SGIX_texture_scale_bias = 0;
int EGL_HAS_GL_SGIX_framezoom = 0;
int EGL_HAS_GL_SGIX_tag_sample_buffer = 0;
int EGL_HAS_GL_SGIX_polynomial_ffd = 0;
int EGL_HAS_GL_SGIX_reference_plane = 0;
int EGL_HAS_GL_SGIX_flush_raster = 0;
int EGL_HAS_GL_SGIX_depth_texture = 0;
int EGL_HAS_GL_SGIS_fog_function = 0;
int EGL_HAS_GL_SGIX_fog_offset = 0;
int EGL_HAS_GL_HP_image_transform = 0;
int EGL_HAS_GL_HP_convolution_border_modes = 0;
int EGL_HAS_GL_SGIX_texture_add_env = 0;
int EGL_HAS_GL_EXT_color_subtable = 0;
int EGL_HAS_GL_PGI_vertex_hints = 0;
int EGL_HAS_GL_PGI_misc_hints = 0;
int EGL_HAS_GL_EXT_paletted_texture = 0;
int EGL_HAS_GL_EXT_clip_volume_hint = 0;
int EGL_HAS_GL_SGIX_list_priority = 0;
int EGL_HAS_GL_SGIX_ir_instrument1 = 0;
int EGL_HAS_GL_SGIX_calligraphic_fragment = 0;
int EGL_HAS_GL_SGIX_texture_lod_bias = 0;
int EGL_HAS_GL_SGIX_shadow_ambient = 0;
int EGL_HAS_GL_EXT_index_texture = 0;
int EGL_HAS_GL_EXT_index_material = 0;
int EGL_HAS_GL_EXT_index_func = 0;
int EGL_HAS_GL_EXT_index_array_formats = 0;
int EGL_HAS_GL_EXT_compiled_vertex_array = 0;
int EGL_HAS_GL_EXT_cull_vertex = 0;
int EGL_HAS_GL_SGIX_ycrcb = 0;
int EGL_HAS_GL_SGIX_fragment_lighting = 0;
int EGL_HAS_GL_IBM_rasterpos_clip = 0;
int EGL_HAS_GL_HP_texture_lighting = 0;
int EGL_HAS_GL_EXT_draw_range_elements = 0;
int EGL_HAS_GL_WIN_phong_shading = 0;
int EGL_HAS_GL_WIN_specular_fog = 0;
int EGL_HAS_GL_EXT_light_texture = 0;
int EGL_HAS_GL_SGIX_blend_alpha_minmax = 0;
int EGL_HAS_GL_EXT_bgra = 0;
int EGL_HAS_GL_SGIX_async = 0;
int EGL_HAS_GL_SGIX_async_pixel = 0;
int EGL_HAS_GL_SGIX_async_histogram = 0;
int EGL_HAS_GL_INTEL_parallel_arrays = 0;
int EGL_HAS_GL_HP_occlusion_test = 0;
int EGL_HAS_GL_EXT_pixel_transform = 0;
int EGL_HAS_GL_EXT_pixel_transform_color_table = 0;
int EGL_HAS_GL_EXT_shared_texture_palette = 0;
int EGL_HAS_GL_EXT_separate_specular_color = 0;
int EGL_HAS_GL_EXT_secondary_color = 0;
int EGL_HAS_GL_EXT_texture_perturb_normal = 0;
int EGL_HAS_GL_EXT_multi_draw_arrays = 0;
int EGL_HAS_GL_EXT_fog_coord = 0;
int EGL_HAS_GL_REND_screen_coordinates = 0;
int EGL_HAS_GL_EXT_coordinate_frame = 0;
int EGL_HAS_GL_EXT_texture_env_combine = 0;
int EGL_HAS_GL_APPLE_specular_vector = 0;
int EGL_HAS_GL_APPLE_transform_hint = 0;
int EGL_HAS_GL_SGIX_fog_scale = 0;
int EGL_HAS_GL_SUNX_constant_data = 0;
int EGL_HAS_GL_SUN_global_alpha = 0;
int EGL_HAS_GL_SUN_triangle_list = 0;
int EGL_HAS_GL_SUN_vertex = 0;
int EGL_HAS_GL_EXT_blend_func_separate = 0;
int EGL_HAS_GL_INGR_blend_func_separate = 0;
int EGL_HAS_GL_INGR_color_clamp = 0;
int EGL_HAS_GL_INGR_interlace_read = 0;
int EGL_HAS_GL_EXT_stencil_wrap = 0;
int EGL_HAS_GL_EXT_422_pixels = 0;
int EGL_HAS_GL_NV_texgen_reflection = 0;
int EGL_HAS_GL_SUN_convolution_border_modes = 0;
int EGL_HAS_GL_EXT_texture_env_add = 0;
int EGL_HAS_GL_EXT_texture_lod_bias = 0;
int EGL_HAS_GL_EXT_texture_filter_anisotropic = 0;
int EGL_HAS_GL_EXT_vertex_weighting = 0;
int EGL_HAS_GL_NV_light_max_exponent = 0;
int EGL_HAS_GL_NV_vertex_array_range = 0;
int EGL_HAS_GL_NV_register_combiners = 0;
int EGL_HAS_GL_NV_fog_distance = 0;
int EGL_HAS_GL_NV_texgen_emboss = 0;
int EGL_HAS_GL_NV_blend_square = 0;
int EGL_HAS_GL_NV_texture_env_combine4 = 0;
int EGL_HAS_GL_MESA_resize_buffers = 0;
int EGL_HAS_GL_MESA_window_pos = 0;
int EGL_HAS_GL_IBM_cull_vertex = 0;
int EGL_HAS_GL_IBM_multimode_draw_arrays = 0;
int EGL_HAS_GL_IBM_vertex_array_lists = 0;
int EGL_HAS_GL_SGIX_subsample = 0;
int EGL_HAS_GL_SGIX_ycrcba = 0;
int EGL_HAS_GL_SGIX_ycrcb_subsample = 0;
int EGL_HAS_GL_SGIX_depth_pass_instrument = 0;
int EGL_HAS_GL_3DFX_texture_compression_FXT1 = 0;
int EGL_HAS_GL_3DFX_multisample = 0;
int EGL_HAS_GL_3DFX_tbuffer = 0;
int EGL_HAS_GL_EXT_multisample = 0;
int EGL_HAS_GL_SGIX_vertex_preclip = 0;
int EGL_HAS_GL_SGIX_convolution_accuracy = 0;
int EGL_HAS_GL_SGIX_resample = 0;
int EGL_HAS_GL_SGIS_point_line_texgen = 0;
int EGL_HAS_GL_SGIS_texture_color_mask = 0;
int EGL_HAS_GL_SGIX_igloo_interface = 0;
int EGL_HAS_GL_EXT_texture_env_dot3 = 0;
int EGL_HAS_GL_ATI_texture_mirror_once = 0;
int EGL_HAS_GL_NV_fence = 0;
int EGL_HAS_GL_NV_evaluators = 0;
int EGL_HAS_GL_NV_packed_depth_stencil = 0;
int EGL_HAS_GL_NV_register_combiners2 = 0;
int EGL_HAS_GL_NV_texture_compression_vtc = 0;
int EGL_HAS_GL_NV_texture_rectangle = 0;
int EGL_HAS_GL_NV_texture_shader = 0;
int EGL_HAS_GL_NV_texture_shader2 = 0;
int EGL_HAS_GL_NV_vertex_array_range2 = 0;
int EGL_HAS_GL_NV_vertex_program = 0;
int EGL_HAS_GL_SGIX_texture_coordinate_clamp = 0;
int EGL_HAS_GL_SGIX_scalebias_hint = 0;
int EGL_HAS_GL_OML_interlace = 0;
int EGL_HAS_GL_OML_subsample = 0;
int EGL_HAS_GL_OML_resample = 0;
int EGL_HAS_GL_NV_copy_depth_to_color = 0;
int EGL_HAS_GL_ATI_envmap_bumpmap = 0;
int EGL_HAS_GL_ATI_fragment_shader = 0;
int EGL_HAS_GL_ATI_pn_triangles = 0;
int EGL_HAS_GL_ATI_vertex_array_object = 0;
int EGL_HAS_GL_EXT_vertex_shader = 0;
int EGL_HAS_GL_ATI_vertex_streams = 0;
int EGL_HAS_GL_ATI_element_array = 0;
int EGL_HAS_GL_SUN_mesh_array = 0;
int EGL_HAS_GL_SUN_slice_accum = 0;
int EGL_HAS_GL_NV_multisample_filter_hint = 0;
int EGL_HAS_GL_NV_depth_clamp = 0;
int EGL_HAS_GL_NV_occlusion_query = 0;
int EGL_HAS_GL_NV_point_sprite = 0;
int EGL_HAS_GL_NV_texture_shader3 = 0;
int EGL_HAS_GL_NV_vertex_program1_1 = 0;
int EGL_HAS_GL_EXT_shadow_funcs = 0;
int EGL_HAS_GL_EXT_stencil_two_side = 0;
int EGL_HAS_GL_ATI_text_fragment_shader = 0;
int EGL_HAS_GL_APPLE_client_storage = 0;
int EGL_HAS_GL_APPLE_element_array = 0;
int EGL_HAS_GL_APPLE_fence = 0;
int EGL_HAS_GL_APPLE_vertex_array_object = 0;
int EGL_HAS_GL_APPLE_vertex_array_range = 0;
int EGL_HAS_GL_APPLE_ycbcr_422 = 0;
int EGL_HAS_GL_S3_s3tc = 0;
int EGL_HAS_GL_ATI_draw_buffers = 0;
int EGL_HAS_GL_ATI_pixel_format_float = 0;
int EGL_HAS_GL_ATI_texture_env_combine3 = 0;
int EGL_HAS_GL_ATI_texture_float = 0;
int EGL_HAS_GL_NV_float_buffer = 0;
int EGL_HAS_GL_NV_fragment_program = 0;
int EGL_HAS_GL_NV_half_float = 0;
int EGL_HAS_GL_NV_pixel_data_range = 0;
int EGL_HAS_GL_NV_primitive_restart = 0;
int EGL_HAS_GL_NV_texture_expand_normal = 0;
int EGL_HAS_GL_NV_vertex_program2 = 0;
int EGL_HAS_GL_ATI_map_object_buffer = 0;
int EGL_HAS_GL_ATI_separate_stencil = 0;
int EGL_HAS_GL_ATI_vertex_attrib_array_object = 0;
int EGL_HAS_GL_OES_read_format = 0;
int EGL_HAS_GL_EXT_depth_bounds_test = 0;
int EGL_HAS_GL_EXT_texture_mirror_clamp = 0;
int EGL_HAS_GL_EXT_blend_equation_separate = 0;
int EGL_HAS_GL_MESA_pack_invert = 0;
int EGL_HAS_GL_MESA_ycbcr_texture = 0;
int EGL_HAS_GL_EXT_pixel_buffer_object = 0;
int EGL_HAS_GL_NV_fragment_program_option = 0;
int EGL_HAS_GL_NV_fragment_program2 = 0;
int EGL_HAS_GL_NV_vertex_program2_option = 0;
int EGL_HAS_GL_NV_vertex_program3 = 0;

int EGL_HAS_GL_ARB_imaging = 0;
int EGL_HAS_GL_EXT_texture_compression_s3tc = 0;
int EGL_HAS_GL_EXT_texture_cube_map = 0;
int EGL_HAS_GL_FfdMaskSGIX = 0;
int EGL_HAS_GL_IBM_texture_mirrored_repeat = 0;
int EGL_HAS_GL_INGR_palette_buffer = 0;
int EGL_HAS_GL_INTEL_texture_scissor = 0;
int EGL_HAS_GL_SGIS_texture_select = 0;
int EGL_HAS_GL_SGIX_impact_pixel_texture = 0;
int EGL_HAS_GL_SGI_color_matrix = 0;
int EGL_HAS_GL_SGI_depth_pass_instrument = 0;


static int egl_Init_GL_VERSION_1_2(void) {
	int result = 1;

	result = egl_hasMinGLVersion(1,2);
	if ( !result ) return result;

	result = result && (glBlendColor = (PFNGLBLENDCOLORPROC)_GetProcAddress("glBlendColor"));
	result = result && (glBlendEquation = (PFNGLBLENDEQUATIONPROC)_GetProcAddress("glBlendEquation"));
	result = result && (glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)_GetProcAddress("glDrawRangeElements"));
	result = result && (glColorTable = (PFNGLCOLORTABLEPROC)_GetProcAddress("glColorTable"));
	result = result && (glColorTableParameterfv = (PFNGLCOLORTABLEPARAMETERFVPROC)_GetProcAddress("glColorTableParameterfv"));
	result = result && (glColorTableParameteriv = (PFNGLCOLORTABLEPARAMETERIVPROC)_GetProcAddress("glColorTableParameteriv"));
	result = result && (glCopyColorTable = (PFNGLCOPYCOLORTABLEPROC)_GetProcAddress("glCopyColorTable"));
	result = result && (glGetColorTable = (PFNGLGETCOLORTABLEPROC)_GetProcAddress("glGetColorTable"));
	result = result && (glGetColorTableParameterfv = (PFNGLGETCOLORTABLEPARAMETERFVPROC)_GetProcAddress("glGetColorTableParameterfv"));
	result = result && (glGetColorTableParameteriv = (PFNGLGETCOLORTABLEPARAMETERIVPROC)_GetProcAddress("glGetColorTableParameteriv"));
	result = result && (glColorSubTable = (PFNGLCOLORSUBTABLEPROC)_GetProcAddress("glColorSubTable"));
	result = result && (glCopyColorSubTable = (PFNGLCOPYCOLORSUBTABLEPROC)_GetProcAddress("glCopyColorSubTable"));
	result = result && (glConvolutionFilter1D = (PFNGLCONVOLUTIONFILTER1DPROC)_GetProcAddress("glConvolutionFilter1D"));
	result = result && (glConvolutionFilter2D = (PFNGLCONVOLUTIONFILTER2DPROC)_GetProcAddress("glConvolutionFilter2D"));
	result = result && (glConvolutionParameterf = (PFNGLCONVOLUTIONPARAMETERFPROC)_GetProcAddress("glConvolutionParameterf"));
	result = result && (glConvolutionParameterfv = (PFNGLCONVOLUTIONPARAMETERFVPROC)_GetProcAddress("glConvolutionParameterfv"));
	result = result && (glConvolutionParameteri = (PFNGLCONVOLUTIONPARAMETERIPROC)_GetProcAddress("glConvolutionParameteri"));
	result = result && (glConvolutionParameteriv = (PFNGLCONVOLUTIONPARAMETERIVPROC)_GetProcAddress("glConvolutionParameteriv"));
	result = result && (glCopyConvolutionFilter1D = (PFNGLCOPYCONVOLUTIONFILTER1DPROC)_GetProcAddress("glCopyConvolutionFilter1D"));
	result = result && (glCopyConvolutionFilter2D = (PFNGLCOPYCONVOLUTIONFILTER2DPROC)_GetProcAddress("glCopyConvolutionFilter2D"));
	result = result && (glGetConvolutionFilter = (PFNGLGETCONVOLUTIONFILTERPROC)_GetProcAddress("glGetConvolutionFilter"));
	result = result && (glGetConvolutionParameterfv = (PFNGLGETCONVOLUTIONPARAMETERFVPROC)_GetProcAddress("glGetConvolutionParameterfv"));
	result = result && (glGetConvolutionParameteriv = (PFNGLGETCONVOLUTIONPARAMETERIVPROC)_GetProcAddress("glGetConvolutionParameteriv"));
	result = result && (glGetSeparableFilter = (PFNGLGETSEPARABLEFILTERPROC)_GetProcAddress("glGetSeparableFilter"));
	result = result && (glSeparableFilter2D = (PFNGLSEPARABLEFILTER2DPROC)_GetProcAddress("glSeparableFilter2D"));
	result = result && (glGetHistogram = (PFNGLGETHISTOGRAMPROC)_GetProcAddress("glGetHistogram"));
	result = result && (glGetHistogramParameterfv = (PFNGLGETHISTOGRAMPARAMETERFVPROC)_GetProcAddress("glGetHistogramParameterfv"));
	result = result && (glGetHistogramParameteriv = (PFNGLGETHISTOGRAMPARAMETERIVPROC)_GetProcAddress("glGetHistogramParameteriv"));
	result = result && (glGetMinmax = (PFNGLGETMINMAXPROC)_GetProcAddress("glGetMinmax"));
	result = result && (glGetMinmaxParameterfv = (PFNGLGETMINMAXPARAMETERFVPROC)_GetProcAddress("glGetMinmaxParameterfv"));
	result = result && (glGetMinmaxParameteriv = (PFNGLGETMINMAXPARAMETERIVPROC)_GetProcAddress("glGetMinmaxParameteriv"));
	result = result && (glHistogram = (PFNGLHISTOGRAMPROC)_GetProcAddress("glHistogram"));
	result = result && (glMinmax = (PFNGLMINMAXPROC)_GetProcAddress("glMinmax"));
	result = result && (glResetHistogram = (PFNGLRESETHISTOGRAMPROC)_GetProcAddress("glResetHistogram"));
	result = result && (glResetMinmax = (PFNGLRESETMINMAXPROC)_GetProcAddress("glResetMinmax"));
	result = result && (glTexImage3D = (PFNGLTEXIMAGE3DPROC)_GetProcAddress("glTexImage3D"));
	result = result && (glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)_GetProcAddress("glTexSubImage3D"));
	result = result && (glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)_GetProcAddress("glCopyTexSubImage3D"));

	return result;
}

static int egl_Init_GL_VERSION_1_3(void) {
	int result = 1;

	result = egl_hasMinGLVersion(1,3);
	if ( !result ) return result;

	result = result && (glActiveTexture = (PFNGLACTIVETEXTUREPROC)_GetProcAddress("glActiveTexture"));
	result = result && (glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)_GetProcAddress("glClientActiveTexture"));
	result = result && (glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC)_GetProcAddress("glMultiTexCoord1d"));
	result = result && (glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC)_GetProcAddress("glMultiTexCoord1dv"));
	result = result && (glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC)_GetProcAddress("glMultiTexCoord1f"));
	result = result && (glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC)_GetProcAddress("glMultiTexCoord1fv"));
	result = result && (glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC)_GetProcAddress("glMultiTexCoord1i"));
	result = result && (glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC)_GetProcAddress("glMultiTexCoord1iv"));
	result = result && (glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC)_GetProcAddress("glMultiTexCoord1s"));
	result = result && (glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC)_GetProcAddress("glMultiTexCoord1sv"));
	result = result && (glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC)_GetProcAddress("glMultiTexCoord2d"));
	result = result && (glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC)_GetProcAddress("glMultiTexCoord2dv"));
	result = result && (glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC)_GetProcAddress("glMultiTexCoord2f"));
	result = result && (glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC)_GetProcAddress("glMultiTexCoord2fv"));
	result = result && (glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC)_GetProcAddress("glMultiTexCoord2i"));
	result = result && (glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC)_GetProcAddress("glMultiTexCoord2iv"));
	result = result && (glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC)_GetProcAddress("glMultiTexCoord2s"));
	result = result && (glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC)_GetProcAddress("glMultiTexCoord2sv"));
	result = result && (glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC)_GetProcAddress("glMultiTexCoord3d"));
	result = result && (glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC)_GetProcAddress("glMultiTexCoord3dv"));
	result = result && (glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC)_GetProcAddress("glMultiTexCoord3f"));
	result = result && (glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC)_GetProcAddress("glMultiTexCoord3fv"));
	result = result && (glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC)_GetProcAddress("glMultiTexCoord3i"));
	result = result && (glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC)_GetProcAddress("glMultiTexCoord3iv"));
	result = result && (glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC)_GetProcAddress("glMultiTexCoord3s"));
	result = result && (glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC)_GetProcAddress("glMultiTexCoord3sv"));
	result = result && (glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC)_GetProcAddress("glMultiTexCoord4d"));
	result = result && (glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC)_GetProcAddress("glMultiTexCoord4dv"));
	result = result && (glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC)_GetProcAddress("glMultiTexCoord4f"));
	result = result && (glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC)_GetProcAddress("glMultiTexCoord4fv"));
	result = result && (glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC)_GetProcAddress("glMultiTexCoord4i"));
	result = result && (glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC)_GetProcAddress("glMultiTexCoord4iv"));
	result = result && (glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC)_GetProcAddress("glMultiTexCoord4s"));
	result = result && (glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC)_GetProcAddress("glMultiTexCoord4sv"));
	result = result && (glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC)_GetProcAddress("glLoadTransposeMatrixf"));
	result = result && (glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC)_GetProcAddress("glLoadTransposeMatrixd"));
	result = result && (glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC)_GetProcAddress("glMultTransposeMatrixf"));
	result = result && (glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC)_GetProcAddress("glMultTransposeMatrixd"));
	result = result && (glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)_GetProcAddress("glSampleCoverage"));
	result = result && (glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)_GetProcAddress("glCompressedTexImage3D"));
	result = result && (glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)_GetProcAddress("glCompressedTexImage2D"));
	result = result && (glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)_GetProcAddress("glCompressedTexImage1D"));
	result = result && (glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)_GetProcAddress("glCompressedTexSubImage3D"));
	result = result && (glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)_GetProcAddress("glCompressedTexSubImage2D"));
	result = result && (glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)_GetProcAddress("glCompressedTexSubImage1D"));
	result = result && (glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)_GetProcAddress("glGetCompressedTexImage"));

	return result;
}

static int egl_Init_GL_VERSION_1_4(void) {
	int result = 1;

	result = egl_hasMinGLVersion(1,4);
	if ( !result ) return result;

	result = result && (glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)_GetProcAddress("glBlendFuncSeparate"));
	result = result && (glFogCoordf = (PFNGLFOGCOORDFPROC)_GetProcAddress("glFogCoordf"));
	result = result && (glFogCoordfv = (PFNGLFOGCOORDFVPROC)_GetProcAddress("glFogCoordfv"));
	result = result && (glFogCoordd = (PFNGLFOGCOORDDPROC)_GetProcAddress("glFogCoordd"));
	result = result && (glFogCoorddv = (PFNGLFOGCOORDDVPROC)_GetProcAddress("glFogCoorddv"));
	result = result && (glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC)_GetProcAddress("glFogCoordPointer"));
	result = result && (glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)_GetProcAddress("glMultiDrawArrays"));
	result = result && (glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)_GetProcAddress("glMultiDrawElements"));
	result = result && (glPointParameterf = (PFNGLPOINTPARAMETERFPROC)_GetProcAddress("glPointParameterf"));
	result = result && (glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)_GetProcAddress("glPointParameterfv"));
	result = result && (glPointParameteri = (PFNGLPOINTPARAMETERIPROC)_GetProcAddress("glPointParameteri"));
	result = result && (glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)_GetProcAddress("glPointParameteriv"));
	result = result && (glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC)_GetProcAddress("glSecondaryColor3b"));
	result = result && (glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC)_GetProcAddress("glSecondaryColor3bv"));
	result = result && (glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC)_GetProcAddress("glSecondaryColor3d"));
	result = result && (glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC)_GetProcAddress("glSecondaryColor3dv"));
	result = result && (glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC)_GetProcAddress("glSecondaryColor3f"));
	result = result && (glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC)_GetProcAddress("glSecondaryColor3fv"));
	result = result && (glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC)_GetProcAddress("glSecondaryColor3i"));
	result = result && (glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC)_GetProcAddress("glSecondaryColor3iv"));
	result = result && (glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC)_GetProcAddress("glSecondaryColor3s"));
	result = result && (glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC)_GetProcAddress("glSecondaryColor3sv"));
	result = result && (glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC)_GetProcAddress("glSecondaryColor3ub"));
	result = result && (glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC)_GetProcAddress("glSecondaryColor3ubv"));
	result = result && (glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC)_GetProcAddress("glSecondaryColor3ui"));
	result = result && (glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC)_GetProcAddress("glSecondaryColor3uiv"));
	result = result && (glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC)_GetProcAddress("glSecondaryColor3us"));
	result = result && (glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC)_GetProcAddress("glSecondaryColor3usv"));
	result = result && (glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC)_GetProcAddress("glSecondaryColorPointer"));
	result = result && (glWindowPos2d = (PFNGLWINDOWPOS2DPROC)_GetProcAddress("glWindowPos2d"));
	result = result && (glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC)_GetProcAddress("glWindowPos2dv"));
	result = result && (glWindowPos2f = (PFNGLWINDOWPOS2FPROC)_GetProcAddress("glWindowPos2f"));
	result = result && (glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC)_GetProcAddress("glWindowPos2fv"));
	result = result && (glWindowPos2i = (PFNGLWINDOWPOS2IPROC)_GetProcAddress("glWindowPos2i"));
	result = result && (glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC)_GetProcAddress("glWindowPos2iv"));
	result = result && (glWindowPos2s = (PFNGLWINDOWPOS2SPROC)_GetProcAddress("glWindowPos2s"));
	result = result && (glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC)_GetProcAddress("glWindowPos2sv"));
	result = result && (glWindowPos3d = (PFNGLWINDOWPOS3DPROC)_GetProcAddress("glWindowPos3d"));
	result = result && (glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC)_GetProcAddress("glWindowPos3dv"));
	result = result && (glWindowPos3f = (PFNGLWINDOWPOS3FPROC)_GetProcAddress("glWindowPos3f"));
	result = result && (glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC)_GetProcAddress("glWindowPos3fv"));
	result = result && (glWindowPos3i = (PFNGLWINDOWPOS3IPROC)_GetProcAddress("glWindowPos3i"));
	result = result && (glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC)_GetProcAddress("glWindowPos3iv"));
	result = result && (glWindowPos3s = (PFNGLWINDOWPOS3SPROC)_GetProcAddress("glWindowPos3s"));
	result = result && (glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC)_GetProcAddress("glWindowPos3sv"));

	return result;
}

static int egl_Init_GL_VERSION_1_5(void) {
	int result = 1;

	result = egl_hasMinGLVersion(1,5);
	if ( !result ) return result;

	result = result && (glGenQueries = (PFNGLGENQUERIESPROC)_GetProcAddress("glGenQueries"));
	result = result && (glDeleteQueries = (PFNGLDELETEQUERIESPROC)_GetProcAddress("glDeleteQueries"));
	result = result && (glIsQuery = (PFNGLISQUERYPROC)_GetProcAddress("glIsQuery"));
	result = result && (glBeginQuery = (PFNGLBEGINQUERYPROC)_GetProcAddress("glBeginQuery"));
	result = result && (glEndQuery = (PFNGLENDQUERYPROC)_GetProcAddress("glEndQuery"));
	result = result && (glGetQueryiv = (PFNGLGETQUERYIVPROC)_GetProcAddress("glGetQueryiv"));
	result = result && (glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)_GetProcAddress("glGetQueryObjectiv"));
	result = result && (glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)_GetProcAddress("glGetQueryObjectuiv"));
	result = result && (glBindBuffer = (PFNGLBINDBUFFERPROC)_GetProcAddress("glBindBuffer"));
	result = result && (glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)_GetProcAddress("glDeleteBuffers"));
	result = result && (glGenBuffers = (PFNGLGENBUFFERSPROC)_GetProcAddress("glGenBuffers"));
	result = result && (glIsBuffer = (PFNGLISBUFFERPROC)_GetProcAddress("glIsBuffer"));
	result = result && (glBufferData = (PFNGLBUFFERDATAPROC)_GetProcAddress("glBufferData"));
	result = result && (glBufferSubData = (PFNGLBUFFERSUBDATAPROC)_GetProcAddress("glBufferSubData"));
	result = result && (glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)_GetProcAddress("glGetBufferSubData"));
	result = result && (glMapBuffer = (PFNGLMAPBUFFERPROC)_GetProcAddress("glMapBuffer"));
	result = result && (glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)_GetProcAddress("glUnmapBuffer"));
	result = result && (glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)_GetProcAddress("glGetBufferParameteriv"));
	result = result && (glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)_GetProcAddress("glGetBufferPointerv"));

	return result;
}

static int egl_Init_GL_VERSION_2_0(void) {
	int result = 1;

	result = egl_hasMinGLVersion(2,0);
	if ( !result ) return result;

	result = result && (glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)_GetProcAddress("glBlendEquationSeparate"));
	result = result && (glDrawBuffers = (PFNGLDRAWBUFFERSPROC)_GetProcAddress("glDrawBuffers"));
	result = result && (glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)_GetProcAddress("glStencilOpSeparate"));
	result = result && (glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)_GetProcAddress("glStencilFuncSeparate"));
	result = result && (glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)_GetProcAddress("glStencilMaskSeparate"));
	result = result && (glAttachShader = (PFNGLATTACHSHADERPROC)_GetProcAddress("glAttachShader"));
	result = result && (glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)_GetProcAddress("glBindAttribLocation"));
	result = result && (glCompileShader = (PFNGLCOMPILESHADERPROC)_GetProcAddress("glCompileShader"));
	result = result && (glCreateProgram = (PFNGLCREATEPROGRAMPROC)_GetProcAddress("glCreateProgram"));
	result = result && (glCreateShader = (PFNGLCREATESHADERPROC)_GetProcAddress("glCreateShader"));
	result = result && (glDeleteProgram = (PFNGLDELETEPROGRAMPROC)_GetProcAddress("glDeleteProgram"));
	result = result && (glDeleteShader = (PFNGLDELETESHADERPROC)_GetProcAddress("glDeleteShader"));
	result = result && (glDetachShader = (PFNGLDETACHSHADERPROC)_GetProcAddress("glDetachShader"));
	result = result && (glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)_GetProcAddress("glDisableVertexAttribArray"));
	result = result && (glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)_GetProcAddress("glEnableVertexAttribArray"));
	result = result && (glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)_GetProcAddress("glGetActiveAttrib"));
	result = result && (glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)_GetProcAddress("glGetActiveUniform"));
	result = result && (glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)_GetProcAddress("glGetAttachedShaders"));
	result = result && (glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)_GetProcAddress("glGetAttribLocation"));
	result = result && (glGetProgramiv = (PFNGLGETPROGRAMIVPROC)_GetProcAddress("glGetProgramiv"));
	result = result && (glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)_GetProcAddress("glGetProgramInfoLog"));
	result = result && (glGetShaderiv = (PFNGLGETSHADERIVPROC)_GetProcAddress("glGetShaderiv"));
	result = result && (glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)_GetProcAddress("glGetShaderInfoLog"));
	result = result && (glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)_GetProcAddress("glGetShaderSource"));
	result = result && (glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)_GetProcAddress("glGetUniformLocation"));
	result = result && (glGetUniformfv = (PFNGLGETUNIFORMFVPROC)_GetProcAddress("glGetUniformfv"));
	result = result && (glGetUniformiv = (PFNGLGETUNIFORMIVPROC)_GetProcAddress("glGetUniformiv"));
	result = result && (glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)_GetProcAddress("glGetVertexAttribdv"));
	result = result && (glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)_GetProcAddress("glGetVertexAttribfv"));
	result = result && (glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)_GetProcAddress("glGetVertexAttribiv"));
	result = result && (glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)_GetProcAddress("glGetVertexAttribPointerv"));
	result = result && (glIsProgram = (PFNGLISPROGRAMPROC)_GetProcAddress("glIsProgram"));
	result = result && (glIsShader = (PFNGLISSHADERPROC)_GetProcAddress("glIsShader"));
	result = result && (glLinkProgram = (PFNGLLINKPROGRAMPROC)_GetProcAddress("glLinkProgram"));
	result = result && (glShaderSource = (PFNGLSHADERSOURCEPROC)_GetProcAddress("glShaderSource"));
	result = result && (glUseProgram = (PFNGLUSEPROGRAMPROC)_GetProcAddress("glUseProgram"));
	result = result && (glUniform1f = (PFNGLUNIFORM1FPROC)_GetProcAddress("glUniform1f"));
	result = result && (glUniform2f = (PFNGLUNIFORM2FPROC)_GetProcAddress("glUniform2f"));
	result = result && (glUniform3f = (PFNGLUNIFORM3FPROC)_GetProcAddress("glUniform3f"));
	result = result && (glUniform4f = (PFNGLUNIFORM4FPROC)_GetProcAddress("glUniform4f"));
	result = result && (glUniform1i = (PFNGLUNIFORM1IPROC)_GetProcAddress("glUniform1i"));
	result = result && (glUniform2i = (PFNGLUNIFORM2IPROC)_GetProcAddress("glUniform2i"));
	result = result && (glUniform3i = (PFNGLUNIFORM3IPROC)_GetProcAddress("glUniform3i"));
	result = result && (glUniform4i = (PFNGLUNIFORM4IPROC)_GetProcAddress("glUniform4i"));
	result = result && (glUniform1fv = (PFNGLUNIFORM1FVPROC)_GetProcAddress("glUniform1fv"));
	result = result && (glUniform2fv = (PFNGLUNIFORM2FVPROC)_GetProcAddress("glUniform2fv"));
	result = result && (glUniform3fv = (PFNGLUNIFORM3FVPROC)_GetProcAddress("glUniform3fv"));
	result = result && (glUniform4fv = (PFNGLUNIFORM4FVPROC)_GetProcAddress("glUniform4fv"));
	result = result && (glUniform1iv = (PFNGLUNIFORM1IVPROC)_GetProcAddress("glUniform1iv"));
	result = result && (glUniform2iv = (PFNGLUNIFORM2IVPROC)_GetProcAddress("glUniform2iv"));
	result = result && (glUniform3iv = (PFNGLUNIFORM3IVPROC)_GetProcAddress("glUniform3iv"));
	result = result && (glUniform4iv = (PFNGLUNIFORM4IVPROC)_GetProcAddress("glUniform4iv"));
	result = result && (glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)_GetProcAddress("glUniformMatrix2fv"));
	result = result && (glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)_GetProcAddress("glUniformMatrix3fv"));
	result = result && (glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)_GetProcAddress("glUniformMatrix4fv"));
	result = result && (glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)_GetProcAddress("glValidateProgram"));
	result = result && (glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)_GetProcAddress("glVertexAttrib1d"));
	result = result && (glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)_GetProcAddress("glVertexAttrib1dv"));
	result = result && (glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)_GetProcAddress("glVertexAttrib1f"));
	result = result && (glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)_GetProcAddress("glVertexAttrib1fv"));
	result = result && (glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)_GetProcAddress("glVertexAttrib1s"));
	result = result && (glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)_GetProcAddress("glVertexAttrib1sv"));
	result = result && (glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)_GetProcAddress("glVertexAttrib2d"));
	result = result && (glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)_GetProcAddress("glVertexAttrib2dv"));
	result = result && (glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)_GetProcAddress("glVertexAttrib2f"));
	result = result && (glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)_GetProcAddress("glVertexAttrib2fv"));
	result = result && (glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)_GetProcAddress("glVertexAttrib2s"));
	result = result && (glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)_GetProcAddress("glVertexAttrib2sv"));
	result = result && (glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)_GetProcAddress("glVertexAttrib3d"));
	result = result && (glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)_GetProcAddress("glVertexAttrib3dv"));
	result = result && (glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)_GetProcAddress("glVertexAttrib3f"));
	result = result && (glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)_GetProcAddress("glVertexAttrib3fv"));
	result = result && (glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)_GetProcAddress("glVertexAttrib3s"));
	result = result && (glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)_GetProcAddress("glVertexAttrib3sv"));
	result = result && (glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)_GetProcAddress("glVertexAttrib4Nbv"));
	result = result && (glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)_GetProcAddress("glVertexAttrib4Niv"));
	result = result && (glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)_GetProcAddress("glVertexAttrib4Nsv"));
	result = result && (glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)_GetProcAddress("glVertexAttrib4Nub"));
	result = result && (glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)_GetProcAddress("glVertexAttrib4Nubv"));
	result = result && (glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)_GetProcAddress("glVertexAttrib4Nuiv"));
	result = result && (glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)_GetProcAddress("glVertexAttrib4Nusv"));
	result = result && (glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)_GetProcAddress("glVertexAttrib4bv"));
	result = result && (glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)_GetProcAddress("glVertexAttrib4d"));
	result = result && (glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)_GetProcAddress("glVertexAttrib4dv"));
	result = result && (glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)_GetProcAddress("glVertexAttrib4f"));
	result = result && (glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)_GetProcAddress("glVertexAttrib4fv"));
	result = result && (glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)_GetProcAddress("glVertexAttrib4iv"));
	result = result && (glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)_GetProcAddress("glVertexAttrib4s"));
	result = result && (glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)_GetProcAddress("glVertexAttrib4sv"));
	result = result && (glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)_GetProcAddress("glVertexAttrib4ubv"));
	result = result && (glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)_GetProcAddress("glVertexAttrib4uiv"));
	result = result && (glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)_GetProcAddress("glVertexAttrib4usv"));
	result = result && (glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)_GetProcAddress("glVertexAttribPointer"));

	return result;
}

static int egl_Init_GL_ARB_multitexture(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_multitexture");
	if ( !result ) return result;

	result = result && (glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC)_GetProcAddress("glActiveTextureARB"));
	result = result && (glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC)_GetProcAddress("glClientActiveTextureARB"));
	result = result && (glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC)_GetProcAddress("glMultiTexCoord1dARB"));
	result = result && (glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC)_GetProcAddress("glMultiTexCoord1dvARB"));
	result = result && (glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC)_GetProcAddress("glMultiTexCoord1fARB"));
	result = result && (glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC)_GetProcAddress("glMultiTexCoord1fvARB"));
	result = result && (glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC)_GetProcAddress("glMultiTexCoord1iARB"));
	result = result && (glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC)_GetProcAddress("glMultiTexCoord1ivARB"));
	result = result && (glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC)_GetProcAddress("glMultiTexCoord1sARB"));
	result = result && (glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC)_GetProcAddress("glMultiTexCoord1svARB"));
	result = result && (glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC)_GetProcAddress("glMultiTexCoord2dARB"));
	result = result && (glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC)_GetProcAddress("glMultiTexCoord2dvARB"));
	result = result && (glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC)_GetProcAddress("glMultiTexCoord2fARB"));
	result = result && (glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC)_GetProcAddress("glMultiTexCoord2fvARB"));
	result = result && (glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC)_GetProcAddress("glMultiTexCoord2iARB"));
	result = result && (glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC)_GetProcAddress("glMultiTexCoord2ivARB"));
	result = result && (glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC)_GetProcAddress("glMultiTexCoord2sARB"));
	result = result && (glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC)_GetProcAddress("glMultiTexCoord2svARB"));
	result = result && (glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC)_GetProcAddress("glMultiTexCoord3dARB"));
	result = result && (glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC)_GetProcAddress("glMultiTexCoord3dvARB"));
	result = result && (glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC)_GetProcAddress("glMultiTexCoord3fARB"));
	result = result && (glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC)_GetProcAddress("glMultiTexCoord3fvARB"));
	result = result && (glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC)_GetProcAddress("glMultiTexCoord3iARB"));
	result = result && (glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC)_GetProcAddress("glMultiTexCoord3ivARB"));
	result = result && (glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC)_GetProcAddress("glMultiTexCoord3sARB"));
	result = result && (glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC)_GetProcAddress("glMultiTexCoord3svARB"));
	result = result && (glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC)_GetProcAddress("glMultiTexCoord4dARB"));
	result = result && (glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC)_GetProcAddress("glMultiTexCoord4dvARB"));
	result = result && (glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC)_GetProcAddress("glMultiTexCoord4fARB"));
	result = result && (glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC)_GetProcAddress("glMultiTexCoord4fvARB"));
	result = result && (glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC)_GetProcAddress("glMultiTexCoord4iARB"));
	result = result && (glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC)_GetProcAddress("glMultiTexCoord4ivARB"));
	result = result && (glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC)_GetProcAddress("glMultiTexCoord4sARB"));
	result = result && (glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC)_GetProcAddress("glMultiTexCoord4svARB"));

	return result;
}

static int egl_Init_GL_ARB_transpose_matrix(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_transpose_matrix");
	if ( !result ) return result;

	result = result && (glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)_GetProcAddress("glLoadTransposeMatrixfARB"));
	result = result && (glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)_GetProcAddress("glLoadTransposeMatrixdARB"));
	result = result && (glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)_GetProcAddress("glMultTransposeMatrixfARB"));
	result = result && (glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)_GetProcAddress("glMultTransposeMatrixdARB"));

	return result;
}

static int egl_Init_GL_ARB_multisample(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_multisample");
	if ( !result ) return result;

	result = result && (glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC)_GetProcAddress("glSampleCoverageARB"));

	return result;
}

static int egl_Init_GL_ARB_texture_env_add(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_env_add");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_cube_map(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_cube_map");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_compression(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_compression");
	if ( !result ) return result;

	result = result && (glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)_GetProcAddress("glCompressedTexImage3DARB"));
	result = result && (glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)_GetProcAddress("glCompressedTexImage2DARB"));
	result = result && (glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)_GetProcAddress("glCompressedTexImage1DARB"));
	result = result && (glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)_GetProcAddress("glCompressedTexSubImage3DARB"));
	result = result && (glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)_GetProcAddress("glCompressedTexSubImage2DARB"));
	result = result && (glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)_GetProcAddress("glCompressedTexSubImage1DARB"));
	result = result && (glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)_GetProcAddress("glGetCompressedTexImageARB"));

	return result;
}

static int egl_Init_GL_ARB_texture_border_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_border_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_point_parameters(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_point_parameters");
	if ( !result ) return result;

	result = result && (glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC)_GetProcAddress("glPointParameterfARB"));
	result = result && (glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC)_GetProcAddress("glPointParameterfvARB"));

	return result;
}

static int egl_Init_GL_ARB_vertex_blend(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_vertex_blend");
	if ( !result ) return result;

	result = result && (glWeightbvARB = (PFNGLWEIGHTBVARBPROC)_GetProcAddress("glWeightbvARB"));
	result = result && (glWeightsvARB = (PFNGLWEIGHTSVARBPROC)_GetProcAddress("glWeightsvARB"));
	result = result && (glWeightivARB = (PFNGLWEIGHTIVARBPROC)_GetProcAddress("glWeightivARB"));
	result = result && (glWeightfvARB = (PFNGLWEIGHTFVARBPROC)_GetProcAddress("glWeightfvARB"));
	result = result && (glWeightdvARB = (PFNGLWEIGHTDVARBPROC)_GetProcAddress("glWeightdvARB"));
	result = result && (glWeightubvARB = (PFNGLWEIGHTUBVARBPROC)_GetProcAddress("glWeightubvARB"));
	result = result && (glWeightusvARB = (PFNGLWEIGHTUSVARBPROC)_GetProcAddress("glWeightusvARB"));
	result = result && (glWeightuivARB = (PFNGLWEIGHTUIVARBPROC)_GetProcAddress("glWeightuivARB"));
	result = result && (glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC)_GetProcAddress("glWeightPointerARB"));
	result = result && (glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC)_GetProcAddress("glVertexBlendARB"));

	return result;
}

static int egl_Init_GL_ARB_matrix_palette(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_matrix_palette");
	if ( !result ) return result;

	result = result && (glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC)_GetProcAddress("glCurrentPaletteMatrixARB"));
	result = result && (glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC)_GetProcAddress("glMatrixIndexubvARB"));
	result = result && (glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC)_GetProcAddress("glMatrixIndexusvARB"));
	result = result && (glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC)_GetProcAddress("glMatrixIndexuivARB"));
	result = result && (glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC)_GetProcAddress("glMatrixIndexPointerARB"));

	return result;
}

static int egl_Init_GL_ARB_texture_env_combine(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_env_combine");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_env_crossbar(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_env_crossbar");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_env_dot3(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_env_dot3");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_mirrored_repeat(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_mirrored_repeat");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_depth_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_depth_texture");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_shadow(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_shadow");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_shadow_ambient(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_shadow_ambient");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_window_pos(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_window_pos");
	if ( !result ) return result;

	result = result && (glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC)_GetProcAddress("glWindowPos2dARB"));
	result = result && (glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC)_GetProcAddress("glWindowPos2dvARB"));
	result = result && (glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC)_GetProcAddress("glWindowPos2fARB"));
	result = result && (glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC)_GetProcAddress("glWindowPos2fvARB"));
	result = result && (glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC)_GetProcAddress("glWindowPos2iARB"));
	result = result && (glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC)_GetProcAddress("glWindowPos2ivARB"));
	result = result && (glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC)_GetProcAddress("glWindowPos2sARB"));
	result = result && (glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC)_GetProcAddress("glWindowPos2svARB"));
	result = result && (glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC)_GetProcAddress("glWindowPos3dARB"));
	result = result && (glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC)_GetProcAddress("glWindowPos3dvARB"));
	result = result && (glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC)_GetProcAddress("glWindowPos3fARB"));
	result = result && (glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC)_GetProcAddress("glWindowPos3fvARB"));
	result = result && (glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC)_GetProcAddress("glWindowPos3iARB"));
	result = result && (glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC)_GetProcAddress("glWindowPos3ivARB"));
	result = result && (glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC)_GetProcAddress("glWindowPos3sARB"));
	result = result && (glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC)_GetProcAddress("glWindowPos3svARB"));

	return result;
}

static int egl_Init_GL_ARB_vertex_program(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_vertex_program");
	if ( !result ) return result;

	result = result && (glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC)_GetProcAddress("glVertexAttrib1dARB"));
	result = result && (glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC)_GetProcAddress("glVertexAttrib1dvARB"));
	result = result && (glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC)_GetProcAddress("glVertexAttrib1fARB"));
	result = result && (glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC)_GetProcAddress("glVertexAttrib1fvARB"));
	result = result && (glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC)_GetProcAddress("glVertexAttrib1sARB"));
	result = result && (glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC)_GetProcAddress("glVertexAttrib1svARB"));
	result = result && (glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC)_GetProcAddress("glVertexAttrib2dARB"));
	result = result && (glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC)_GetProcAddress("glVertexAttrib2dvARB"));
	result = result && (glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC)_GetProcAddress("glVertexAttrib2fARB"));
	result = result && (glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC)_GetProcAddress("glVertexAttrib2fvARB"));
	result = result && (glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC)_GetProcAddress("glVertexAttrib2sARB"));
	result = result && (glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC)_GetProcAddress("glVertexAttrib2svARB"));
	result = result && (glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC)_GetProcAddress("glVertexAttrib3dARB"));
	result = result && (glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC)_GetProcAddress("glVertexAttrib3dvARB"));
	result = result && (glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC)_GetProcAddress("glVertexAttrib3fARB"));
	result = result && (glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC)_GetProcAddress("glVertexAttrib3fvARB"));
	result = result && (glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC)_GetProcAddress("glVertexAttrib3sARB"));
	result = result && (glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC)_GetProcAddress("glVertexAttrib3svARB"));
	result = result && (glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC)_GetProcAddress("glVertexAttrib4NbvARB"));
	result = result && (glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC)_GetProcAddress("glVertexAttrib4NivARB"));
	result = result && (glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC)_GetProcAddress("glVertexAttrib4NsvARB"));
	result = result && (glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC)_GetProcAddress("glVertexAttrib4NubARB"));
	result = result && (glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC)_GetProcAddress("glVertexAttrib4NubvARB"));
	result = result && (glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC)_GetProcAddress("glVertexAttrib4NuivARB"));
	result = result && (glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC)_GetProcAddress("glVertexAttrib4NusvARB"));
	result = result && (glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC)_GetProcAddress("glVertexAttrib4bvARB"));
	result = result && (glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC)_GetProcAddress("glVertexAttrib4dARB"));
	result = result && (glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC)_GetProcAddress("glVertexAttrib4dvARB"));
	result = result && (glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC)_GetProcAddress("glVertexAttrib4fARB"));
	result = result && (glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC)_GetProcAddress("glVertexAttrib4fvARB"));
	result = result && (glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC)_GetProcAddress("glVertexAttrib4ivARB"));
	result = result && (glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC)_GetProcAddress("glVertexAttrib4sARB"));
	result = result && (glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC)_GetProcAddress("glVertexAttrib4svARB"));
	result = result && (glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC)_GetProcAddress("glVertexAttrib4ubvARB"));
	result = result && (glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC)_GetProcAddress("glVertexAttrib4uivARB"));
	result = result && (glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC)_GetProcAddress("glVertexAttrib4usvARB"));
	result = result && (glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)_GetProcAddress("glVertexAttribPointerARB"));
	result = result && (glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)_GetProcAddress("glEnableVertexAttribArrayARB"));
	result = result && (glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)_GetProcAddress("glDisableVertexAttribArrayARB"));
	result = result && (glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC)_GetProcAddress("glProgramStringARB"));
	result = result && (glBindProgramARB = (PFNGLBINDPROGRAMARBPROC)_GetProcAddress("glBindProgramARB"));
	result = result && (glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC)_GetProcAddress("glDeleteProgramsARB"));
	result = result && (glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC)_GetProcAddress("glGenProgramsARB"));
	result = result && (glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)_GetProcAddress("glProgramEnvParameter4dARB"));
	result = result && (glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)_GetProcAddress("glProgramEnvParameter4dvARB"));
	result = result && (glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)_GetProcAddress("glProgramEnvParameter4fARB"));
	result = result && (glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)_GetProcAddress("glProgramEnvParameter4fvARB"));
	result = result && (glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)_GetProcAddress("glProgramLocalParameter4dARB"));
	result = result && (glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)_GetProcAddress("glProgramLocalParameter4dvARB"));
	result = result && (glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)_GetProcAddress("glProgramLocalParameter4fARB"));
	result = result && (glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)_GetProcAddress("glProgramLocalParameter4fvARB"));
	result = result && (glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)_GetProcAddress("glGetProgramEnvParameterdvARB"));
	result = result && (glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)_GetProcAddress("glGetProgramEnvParameterfvARB"));
	result = result && (glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)_GetProcAddress("glGetProgramLocalParameterdvARB"));
	result = result && (glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)_GetProcAddress("glGetProgramLocalParameterfvARB"));
	result = result && (glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC)_GetProcAddress("glGetProgramivARB"));
	result = result && (glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC)_GetProcAddress("glGetProgramStringARB"));
	result = result && (glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC)_GetProcAddress("glGetVertexAttribdvARB"));
	result = result && (glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC)_GetProcAddress("glGetVertexAttribfvARB"));
	result = result && (glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC)_GetProcAddress("glGetVertexAttribivARB"));
	result = result && (glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)_GetProcAddress("glGetVertexAttribPointervARB"));
	result = result && (glIsProgramARB = (PFNGLISPROGRAMARBPROC)_GetProcAddress("glIsProgramARB"));

	return result;
}

static int egl_Init_GL_ARB_fragment_program(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_fragment_program");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_vertex_buffer_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_vertex_buffer_object");
	if ( !result ) return result;

	result = result && (glBindBufferARB = (PFNGLBINDBUFFERARBPROC)_GetProcAddress("glBindBufferARB"));
	result = result && (glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC)_GetProcAddress("glDeleteBuffersARB"));
	result = result && (glGenBuffersARB = (PFNGLGENBUFFERSARBPROC)_GetProcAddress("glGenBuffersARB"));
	result = result && (glIsBufferARB = (PFNGLISBUFFERARBPROC)_GetProcAddress("glIsBufferARB"));
	result = result && (glBufferDataARB = (PFNGLBUFFERDATAARBPROC)_GetProcAddress("glBufferDataARB"));
	result = result && (glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC)_GetProcAddress("glBufferSubDataARB"));
	result = result && (glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC)_GetProcAddress("glGetBufferSubDataARB"));
	result = result && (glMapBufferARB = (PFNGLMAPBUFFERARBPROC)_GetProcAddress("glMapBufferARB"));
	result = result && (glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC)_GetProcAddress("glUnmapBufferARB"));
	result = result && (glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC)_GetProcAddress("glGetBufferParameterivARB"));
	result = result && (glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC)_GetProcAddress("glGetBufferPointervARB"));

	return result;
}

static int egl_Init_GL_ARB_occlusion_query(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_occlusion_query");
	if ( !result ) return result;

	result = result && (glGenQueriesARB = (PFNGLGENQUERIESARBPROC)_GetProcAddress("glGenQueriesARB"));
	result = result && (glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC)_GetProcAddress("glDeleteQueriesARB"));
	result = result && (glIsQueryARB = (PFNGLISQUERYARBPROC)_GetProcAddress("glIsQueryARB"));
	result = result && (glBeginQueryARB = (PFNGLBEGINQUERYARBPROC)_GetProcAddress("glBeginQueryARB"));
	result = result && (glEndQueryARB = (PFNGLENDQUERYARBPROC)_GetProcAddress("glEndQueryARB"));
	result = result && (glGetQueryivARB = (PFNGLGETQUERYIVARBPROC)_GetProcAddress("glGetQueryivARB"));
	result = result && (glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC)_GetProcAddress("glGetQueryObjectivARB"));
	result = result && (glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC)_GetProcAddress("glGetQueryObjectuivARB"));

	return result;
}

static int egl_Init_GL_ARB_shader_objects(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_shader_objects");
	if ( !result ) return result;

	result = result && (glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC)_GetProcAddress("glDeleteObjectARB"));
	result = result && (glGetHandleARB = (PFNGLGETHANDLEARBPROC)_GetProcAddress("glGetHandleARB"));
	result = result && (glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC)_GetProcAddress("glDetachObjectARB"));
	result = result && (glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC)_GetProcAddress("glCreateShaderObjectARB"));
	result = result && (glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC)_GetProcAddress("glShaderSourceARB"));
	result = result && (glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC)_GetProcAddress("glCompileShaderARB"));
	result = result && (glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC)_GetProcAddress("glCreateProgramObjectARB"));
	result = result && (glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC)_GetProcAddress("glAttachObjectARB"));
	result = result && (glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC)_GetProcAddress("glLinkProgramARB"));
	result = result && (glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC)_GetProcAddress("glUseProgramObjectARB"));
	result = result && (glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC)_GetProcAddress("glValidateProgramARB"));
	result = result && (glUniform1fARB = (PFNGLUNIFORM1FARBPROC)_GetProcAddress("glUniform1fARB"));
	result = result && (glUniform2fARB = (PFNGLUNIFORM2FARBPROC)_GetProcAddress("glUniform2fARB"));
	result = result && (glUniform3fARB = (PFNGLUNIFORM3FARBPROC)_GetProcAddress("glUniform3fARB"));
	result = result && (glUniform4fARB = (PFNGLUNIFORM4FARBPROC)_GetProcAddress("glUniform4fARB"));
	result = result && (glUniform1iARB = (PFNGLUNIFORM1IARBPROC)_GetProcAddress("glUniform1iARB"));
	result = result && (glUniform2iARB = (PFNGLUNIFORM2IARBPROC)_GetProcAddress("glUniform2iARB"));
	result = result && (glUniform3iARB = (PFNGLUNIFORM3IARBPROC)_GetProcAddress("glUniform3iARB"));
	result = result && (glUniform4iARB = (PFNGLUNIFORM4IARBPROC)_GetProcAddress("glUniform4iARB"));
	result = result && (glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC)_GetProcAddress("glUniform1fvARB"));
	result = result && (glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC)_GetProcAddress("glUniform2fvARB"));
	result = result && (glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC)_GetProcAddress("glUniform3fvARB"));
	result = result && (glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC)_GetProcAddress("glUniform4fvARB"));
	result = result && (glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC)_GetProcAddress("glUniform1ivARB"));
	result = result && (glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC)_GetProcAddress("glUniform2ivARB"));
	result = result && (glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC)_GetProcAddress("glUniform3ivARB"));
	result = result && (glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC)_GetProcAddress("glUniform4ivARB"));
	result = result && (glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC)_GetProcAddress("glUniformMatrix2fvARB"));
	result = result && (glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC)_GetProcAddress("glUniformMatrix3fvARB"));
	result = result && (glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC)_GetProcAddress("glUniformMatrix4fvARB"));
	result = result && (glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC)_GetProcAddress("glGetObjectParameterfvARB"));
	result = result && (glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)_GetProcAddress("glGetObjectParameterivARB"));
	result = result && (glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC)_GetProcAddress("glGetInfoLogARB"));
	result = result && (glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC)_GetProcAddress("glGetAttachedObjectsARB"));
	result = result && (glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC)_GetProcAddress("glGetUniformLocationARB"));
	result = result && (glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC)_GetProcAddress("glGetActiveUniformARB"));
	result = result && (glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC)_GetProcAddress("glGetUniformfvARB"));
	result = result && (glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC)_GetProcAddress("glGetUniformivARB"));
	result = result && (glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC)_GetProcAddress("glGetShaderSourceARB"));

	return result;
}

static int egl_Init_GL_ARB_vertex_shader(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_vertex_shader");
	if ( !result ) return result;

	result = result && (glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC)_GetProcAddress("glBindAttribLocationARB"));
	result = result && (glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC)_GetProcAddress("glGetActiveAttribARB"));
	result = result && (glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC)_GetProcAddress("glGetAttribLocationARB"));

	return result;
}

static int egl_Init_GL_ARB_fragment_shader(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_fragment_shader");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_shading_language_100(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_shading_language_100");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_non_power_of_two(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_non_power_of_two");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_point_sprite(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_point_sprite");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_fragment_program_shadow(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_fragment_program_shadow");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_draw_buffers(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_draw_buffers");
	if ( !result ) return result;

	result = result && (glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC)_GetProcAddress("glDrawBuffersARB"));

	return result;
}

static int egl_Init_GL_ARB_texture_rectangle(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_rectangle");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_color_buffer_float(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_color_buffer_float");
	if ( !result ) return result;

	result = result && (glClampColorARB = (PFNGLCLAMPCOLORARBPROC)_GetProcAddress("glClampColorARB"));

	return result;
}

static int egl_Init_GL_ARB_half_float_pixel(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_half_float_pixel");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_texture_float(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_texture_float");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ARB_pixel_buffer_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_ARB_pixel_buffer_object");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_abgr(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_abgr");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_blend_color(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_blend_color");
	if ( !result ) return result;

	result = result && (glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC)_GetProcAddress("glBlendColorEXT"));

	return result;
}

static int egl_Init_GL_EXT_polygon_offset(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_polygon_offset");
	if ( !result ) return result;

	result = result && (glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC)_GetProcAddress("glPolygonOffsetEXT"));

	return result;
}

static int egl_Init_GL_EXT_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_texture3D(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture3D");
	if ( !result ) return result;

	result = result && (glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC)_GetProcAddress("glTexImage3DEXT"));
	result = result && (glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC)_GetProcAddress("glTexSubImage3DEXT"));

	return result;
}

static int egl_Init_GL_SGIS_texture_filter4(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_texture_filter4");
	if ( !result ) return result;

	result = result && (glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC)_GetProcAddress("glGetTexFilterFuncSGIS"));
	result = result && (glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC)_GetProcAddress("glTexFilterFuncSGIS"));

	return result;
}

static int egl_Init_GL_EXT_subtexture(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_subtexture");
	if ( !result ) return result;

	result = result && (glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC)_GetProcAddress("glTexSubImage1DEXT"));
	result = result && (glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC)_GetProcAddress("glTexSubImage2DEXT"));

	return result;
}

static int egl_Init_GL_EXT_copy_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_copy_texture");
	if ( !result ) return result;

	result = result && (glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC)_GetProcAddress("glCopyTexImage1DEXT"));
	result = result && (glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC)_GetProcAddress("glCopyTexImage2DEXT"));
	result = result && (glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)_GetProcAddress("glCopyTexSubImage1DEXT"));
	result = result && (glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)_GetProcAddress("glCopyTexSubImage2DEXT"));
	result = result && (glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)_GetProcAddress("glCopyTexSubImage3DEXT"));

	return result;
}

static int egl_Init_GL_EXT_histogram(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_histogram");
	if ( !result ) return result;

	result = result && (glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC)_GetProcAddress("glGetHistogramEXT"));
	result = result && (glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)_GetProcAddress("glGetHistogramParameterfvEXT"));
	result = result && (glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)_GetProcAddress("glGetHistogramParameterivEXT"));
	result = result && (glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC)_GetProcAddress("glGetMinmaxEXT"));
	result = result && (glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC)_GetProcAddress("glGetMinmaxParameterfvEXT"));
	result = result && (glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC)_GetProcAddress("glGetMinmaxParameterivEXT"));
	result = result && (glHistogramEXT = (PFNGLHISTOGRAMEXTPROC)_GetProcAddress("glHistogramEXT"));
	result = result && (glMinmaxEXT = (PFNGLMINMAXEXTPROC)_GetProcAddress("glMinmaxEXT"));
	result = result && (glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC)_GetProcAddress("glResetHistogramEXT"));
	result = result && (glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC)_GetProcAddress("glResetMinmaxEXT"));

	return result;
}

static int egl_Init_GL_EXT_convolution(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_convolution");
	if ( !result ) return result;

	result = result && (glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC)_GetProcAddress("glConvolutionFilter1DEXT"));
	result = result && (glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC)_GetProcAddress("glConvolutionFilter2DEXT"));
	result = result && (glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)_GetProcAddress("glConvolutionParameterfEXT"));
	result = result && (glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)_GetProcAddress("glConvolutionParameterfvEXT"));
	result = result && (glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)_GetProcAddress("glConvolutionParameteriEXT"));
	result = result && (glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)_GetProcAddress("glConvolutionParameterivEXT"));
	result = result && (glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)_GetProcAddress("glCopyConvolutionFilter1DEXT"));
	result = result && (glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)_GetProcAddress("glCopyConvolutionFilter2DEXT"));
	result = result && (glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC)_GetProcAddress("glGetConvolutionFilterEXT"));
	result = result && (glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)_GetProcAddress("glGetConvolutionParameterfvEXT"));
	result = result && (glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)_GetProcAddress("glGetConvolutionParameterivEXT"));
	result = result && (glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC)_GetProcAddress("glGetSeparableFilterEXT"));
	result = result && (glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC)_GetProcAddress("glSeparableFilter2DEXT"));

	return result;
}

static int egl_Init_GL_EXT_color_matrix(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_color_matrix");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGI_color_table(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGI_color_table");
	if ( !result ) return result;

	result = result && (glColorTableSGI = (PFNGLCOLORTABLESGIPROC)_GetProcAddress("glColorTableSGI"));
	result = result && (glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)_GetProcAddress("glColorTableParameterfvSGI"));
	result = result && (glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)_GetProcAddress("glColorTableParameterivSGI"));
	result = result && (glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC)_GetProcAddress("glCopyColorTableSGI"));
	result = result && (glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC)_GetProcAddress("glGetColorTableSGI"));
	result = result && (glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)_GetProcAddress("glGetColorTableParameterfvSGI"));
	result = result && (glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)_GetProcAddress("glGetColorTableParameterivSGI"));

	return result;
}

static int egl_Init_GL_SGIX_pixel_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_pixel_texture");
	if ( !result ) return result;

	result = result && (glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC)_GetProcAddress("glPixelTexGenSGIX"));

	return result;
}

static int egl_Init_GL_SGIS_pixel_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_pixel_texture");
	if ( !result ) return result;

	result = result && (glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC)_GetProcAddress("glPixelTexGenParameteriSGIS"));
	result = result && (glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)_GetProcAddress("glPixelTexGenParameterivSGIS"));
	result = result && (glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)_GetProcAddress("glPixelTexGenParameterfSGIS"));
	result = result && (glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)_GetProcAddress("glPixelTexGenParameterfvSGIS"));
	result = result && (glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)_GetProcAddress("glGetPixelTexGenParameterivSGIS"));
	result = result && (glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)_GetProcAddress("glGetPixelTexGenParameterfvSGIS"));

	return result;
}

static int egl_Init_GL_SGIS_texture4D(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_texture4D");
	if ( !result ) return result;

	result = result && (glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC)_GetProcAddress("glTexImage4DSGIS"));
	result = result && (glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC)_GetProcAddress("glTexSubImage4DSGIS"));

	return result;
}

static int egl_Init_GL_SGI_texture_color_table(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGI_texture_color_table");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_cmyka(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_cmyka");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_texture_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_object");
	if ( !result ) return result;

	result = result && (glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC)_GetProcAddress("glAreTexturesResidentEXT"));
	result = result && (glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC)_GetProcAddress("glBindTextureEXT"));
	result = result && (glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC)_GetProcAddress("glDeleteTexturesEXT"));
	result = result && (glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC)_GetProcAddress("glGenTexturesEXT"));
	result = result && (glIsTextureEXT = (PFNGLISTEXTUREEXTPROC)_GetProcAddress("glIsTextureEXT"));
	result = result && (glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC)_GetProcAddress("glPrioritizeTexturesEXT"));

	return result;
}

static int egl_Init_GL_SGIS_detail_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_detail_texture");
	if ( !result ) return result;

	result = result && (glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC)_GetProcAddress("glDetailTexFuncSGIS"));
	result = result && (glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC)_GetProcAddress("glGetDetailTexFuncSGIS"));

	return result;
}

static int egl_Init_GL_SGIS_sharpen_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_sharpen_texture");
	if ( !result ) return result;

	result = result && (glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC)_GetProcAddress("glSharpenTexFuncSGIS"));
	result = result && (glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC)_GetProcAddress("glGetSharpenTexFuncSGIS"));

	return result;
}

static int egl_Init_GL_EXT_packed_pixels(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_packed_pixels");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_texture_lod(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_texture_lod");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_multisample(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_multisample");
	if ( !result ) return result;

	result = result && (glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC)_GetProcAddress("glSampleMaskSGIS"));
	result = result && (glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC)_GetProcAddress("glSamplePatternSGIS"));

	return result;
}

static int egl_Init_GL_EXT_rescale_normal(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_rescale_normal");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_vertex_array(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_vertex_array");
	if ( !result ) return result;

	result = result && (glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC)_GetProcAddress("glArrayElementEXT"));
	result = result && (glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC)_GetProcAddress("glColorPointerEXT"));
	result = result && (glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC)_GetProcAddress("glDrawArraysEXT"));
	result = result && (glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC)_GetProcAddress("glEdgeFlagPointerEXT"));
	result = result && (glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC)_GetProcAddress("glGetPointervEXT"));
	result = result && (glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC)_GetProcAddress("glIndexPointerEXT"));
	result = result && (glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC)_GetProcAddress("glNormalPointerEXT"));
	result = result && (glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC)_GetProcAddress("glTexCoordPointerEXT"));
	result = result && (glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC)_GetProcAddress("glVertexPointerEXT"));

	return result;
}

static int egl_Init_GL_EXT_misc_attribute(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_misc_attribute");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_generate_mipmap(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_generate_mipmap");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_clipmap(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_clipmap");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_shadow(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_shadow");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_texture_edge_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_texture_edge_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_texture_border_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_texture_border_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_blend_minmax(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_blend_minmax");
	if ( !result ) return result;

	result = result && (glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC)_GetProcAddress("glBlendEquationEXT"));

	return result;
}

static int egl_Init_GL_EXT_blend_subtract(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_blend_subtract");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_blend_logic_op(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_blend_logic_op");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_interlace(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_interlace");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_pixel_tiles(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_pixel_tiles");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_texture_select(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_texture_select");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_sprite(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_sprite");
	if ( !result ) return result;

	result = result && (glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC)_GetProcAddress("glSpriteParameterfSGIX"));
	result = result && (glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC)_GetProcAddress("glSpriteParameterfvSGIX"));
	result = result && (glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC)_GetProcAddress("glSpriteParameteriSGIX"));
	result = result && (glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC)_GetProcAddress("glSpriteParameterivSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_texture_multi_buffer(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_texture_multi_buffer");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_point_parameters(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_point_parameters");
	if ( !result ) return result;

	result = result && (glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC)_GetProcAddress("glPointParameterfEXT"));
	result = result && (glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC)_GetProcAddress("glPointParameterfvEXT"));

	return result;
}

static int egl_Init_GL_SGIS_point_parameters(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_point_parameters");
	if ( !result ) return result;

	result = result && (glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC)_GetProcAddress("glPointParameterfSGIS"));
	result = result && (glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC)_GetProcAddress("glPointParameterfvSGIS"));

	return result;
}

static int egl_Init_GL_SGIX_instruments(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_instruments");
	if ( !result ) return result;

	result = result && (glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC)_GetProcAddress("glGetInstrumentsSGIX"));
	result = result && (glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC)_GetProcAddress("glInstrumentsBufferSGIX"));
	result = result && (glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC)_GetProcAddress("glPollInstrumentsSGIX"));
	result = result && (glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC)_GetProcAddress("glReadInstrumentsSGIX"));
	result = result && (glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC)_GetProcAddress("glStartInstrumentsSGIX"));
	result = result && (glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC)_GetProcAddress("glStopInstrumentsSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_texture_scale_bias(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_texture_scale_bias");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_framezoom(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_framezoom");
	if ( !result ) return result;

	result = result && (glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC)_GetProcAddress("glFrameZoomSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_tag_sample_buffer(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_tag_sample_buffer");
	if ( !result ) return result;

	result = result && (glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC)_GetProcAddress("glTagSampleBufferSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_polynomial_ffd(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_polynomial_ffd");
	if ( !result ) return result;

	result = result && (glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC)_GetProcAddress("glDeformationMap3dSGIX"));
	result = result && (glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC)_GetProcAddress("glDeformationMap3fSGIX"));
	result = result && (glDeformSGIX = (PFNGLDEFORMSGIXPROC)_GetProcAddress("glDeformSGIX"));
	result = result && (glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)_GetProcAddress("glLoadIdentityDeformationMapSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_reference_plane(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_reference_plane");
	if ( !result ) return result;

	result = result && (glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC)_GetProcAddress("glReferencePlaneSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_flush_raster(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_flush_raster");
	if ( !result ) return result;

	result = result && (glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC)_GetProcAddress("glFlushRasterSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_depth_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_depth_texture");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_fog_function(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_fog_function");
	if ( !result ) return result;

	result = result && (glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC)_GetProcAddress("glFogFuncSGIS"));
	result = result && (glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC)_GetProcAddress("glGetFogFuncSGIS"));

	return result;
}

static int egl_Init_GL_SGIX_fog_offset(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_fog_offset");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_HP_image_transform(void) {
	int result = 1;

	result = egl_hasExtension("GL_HP_image_transform");
	if ( !result ) return result;

	result = result && (glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)_GetProcAddress("glImageTransformParameteriHP"));
	result = result && (glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)_GetProcAddress("glImageTransformParameterfHP"));
	result = result && (glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)_GetProcAddress("glImageTransformParameterivHP"));
	result = result && (glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)_GetProcAddress("glImageTransformParameterfvHP"));
	result = result && (glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)_GetProcAddress("glGetImageTransformParameterivHP"));
	result = result && (glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)_GetProcAddress("glGetImageTransformParameterfvHP"));

	return result;
}

static int egl_Init_GL_HP_convolution_border_modes(void) {
	int result = 1;

	result = egl_hasExtension("GL_HP_convolution_border_modes");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_texture_add_env(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_texture_add_env");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_color_subtable(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_color_subtable");
	if ( !result ) return result;

	result = result && (glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC)_GetProcAddress("glColorSubTableEXT"));
	result = result && (glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC)_GetProcAddress("glCopyColorSubTableEXT"));

	return result;
}

static int egl_Init_GL_PGI_vertex_hints(void) {
	int result = 1;

	result = egl_hasExtension("GL_PGI_vertex_hints");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_PGI_misc_hints(void) {
	int result = 1;

	result = egl_hasExtension("GL_PGI_misc_hints");
	if ( !result ) return result;

	result = result && (glHintPGI = (PFNGLHINTPGIPROC)_GetProcAddress("glHintPGI"));

	return result;
}

static int egl_Init_GL_EXT_paletted_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_paletted_texture");
	if ( !result ) return result;

	result = result && (glColorTableEXT = (PFNGLCOLORTABLEEXTPROC)_GetProcAddress("glColorTableEXT"));
	result = result && (glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC)_GetProcAddress("glGetColorTableEXT"));
	result = result && (glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)_GetProcAddress("glGetColorTableParameterivEXT"));
	result = result && (glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)_GetProcAddress("glGetColorTableParameterfvEXT"));

	return result;
}

static int egl_Init_GL_EXT_clip_volume_hint(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_clip_volume_hint");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_list_priority(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_list_priority");
	if ( !result ) return result;

	result = result && (glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC)_GetProcAddress("glGetListParameterfvSGIX"));
	result = result && (glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC)_GetProcAddress("glGetListParameterivSGIX"));
	result = result && (glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC)_GetProcAddress("glListParameterfSGIX"));
	result = result && (glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC)_GetProcAddress("glListParameterfvSGIX"));
	result = result && (glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC)_GetProcAddress("glListParameteriSGIX"));
	result = result && (glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC)_GetProcAddress("glListParameterivSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_ir_instrument1(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_ir_instrument1");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_calligraphic_fragment(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_calligraphic_fragment");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_texture_lod_bias(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_texture_lod_bias");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_shadow_ambient(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_shadow_ambient");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_index_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_index_texture");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_index_material(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_index_material");
	if ( !result ) return result;

	result = result && (glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC)_GetProcAddress("glIndexMaterialEXT"));

	return result;
}

static int egl_Init_GL_EXT_index_func(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_index_func");
	if ( !result ) return result;

	result = result && (glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC)_GetProcAddress("glIndexFuncEXT"));

	return result;
}

static int egl_Init_GL_EXT_index_array_formats(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_index_array_formats");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_compiled_vertex_array(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_compiled_vertex_array");
	if ( !result ) return result;

	result = result && (glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC)_GetProcAddress("glLockArraysEXT"));
	result = result && (glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC)_GetProcAddress("glUnlockArraysEXT"));

	return result;
}

static int egl_Init_GL_EXT_cull_vertex(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_cull_vertex");
	if ( !result ) return result;

	result = result && (glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC)_GetProcAddress("glCullParameterdvEXT"));
	result = result && (glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC)_GetProcAddress("glCullParameterfvEXT"));

	return result;
}

static int egl_Init_GL_SGIX_ycrcb(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_ycrcb");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_fragment_lighting(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_fragment_lighting");
	if ( !result ) return result;

	result = result && (glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)_GetProcAddress("glFragmentColorMaterialSGIX"));
	result = result && (glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC)_GetProcAddress("glFragmentLightfSGIX"));
	result = result && (glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC)_GetProcAddress("glFragmentLightfvSGIX"));
	result = result && (glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC)_GetProcAddress("glFragmentLightiSGIX"));
	result = result && (glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC)_GetProcAddress("glFragmentLightivSGIX"));
	result = result && (glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)_GetProcAddress("glFragmentLightModelfSGIX"));
	result = result && (glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)_GetProcAddress("glFragmentLightModelfvSGIX"));
	result = result && (glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)_GetProcAddress("glFragmentLightModeliSGIX"));
	result = result && (glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)_GetProcAddress("glFragmentLightModelivSGIX"));
	result = result && (glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC)_GetProcAddress("glFragmentMaterialfSGIX"));
	result = result && (glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC)_GetProcAddress("glFragmentMaterialfvSGIX"));
	result = result && (glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC)_GetProcAddress("glFragmentMaterialiSGIX"));
	result = result && (glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC)_GetProcAddress("glFragmentMaterialivSGIX"));
	result = result && (glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)_GetProcAddress("glGetFragmentLightfvSGIX"));
	result = result && (glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)_GetProcAddress("glGetFragmentLightivSGIX"));
	result = result && (glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)_GetProcAddress("glGetFragmentMaterialfvSGIX"));
	result = result && (glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)_GetProcAddress("glGetFragmentMaterialivSGIX"));
	result = result && (glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC)_GetProcAddress("glLightEnviSGIX"));

	return result;
}

static int egl_Init_GL_IBM_rasterpos_clip(void) {
	int result = 1;

	result = egl_hasExtension("GL_IBM_rasterpos_clip");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_HP_texture_lighting(void) {
	int result = 1;

	result = egl_hasExtension("GL_HP_texture_lighting");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_draw_range_elements(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_draw_range_elements");
	if ( !result ) return result;

	result = result && (glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC)_GetProcAddress("glDrawRangeElementsEXT"));

	return result;
}

static int egl_Init_GL_WIN_phong_shading(void) {
	int result = 1;

	result = egl_hasExtension("GL_WIN_phong_shading");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_WIN_specular_fog(void) {
	int result = 1;

	result = egl_hasExtension("GL_WIN_specular_fog");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_light_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_light_texture");
	if ( !result ) return result;

	result = result && (glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC)_GetProcAddress("glApplyTextureEXT"));
	result = result && (glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC)_GetProcAddress("glTextureLightEXT"));
	result = result && (glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC)_GetProcAddress("glTextureMaterialEXT"));

	return result;
}

static int egl_Init_GL_SGIX_blend_alpha_minmax(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_blend_alpha_minmax");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_bgra(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_bgra");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_async(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_async");
	if ( !result ) return result;

	result = result && (glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC)_GetProcAddress("glAsyncMarkerSGIX"));
	result = result && (glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC)_GetProcAddress("glFinishAsyncSGIX"));
	result = result && (glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC)_GetProcAddress("glPollAsyncSGIX"));
	result = result && (glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC)_GetProcAddress("glGenAsyncMarkersSGIX"));
	result = result && (glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC)_GetProcAddress("glDeleteAsyncMarkersSGIX"));
	result = result && (glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC)_GetProcAddress("glIsAsyncMarkerSGIX"));

	return result;
}

static int egl_Init_GL_SGIX_async_pixel(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_async_pixel");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_async_histogram(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_async_histogram");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_INTEL_parallel_arrays(void) {
	int result = 1;

	result = egl_hasExtension("GL_INTEL_parallel_arrays");
	if ( !result ) return result;

	result = result && (glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC)_GetProcAddress("glVertexPointervINTEL"));
	result = result && (glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC)_GetProcAddress("glNormalPointervINTEL"));
	result = result && (glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC)_GetProcAddress("glColorPointervINTEL"));
	result = result && (glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC)_GetProcAddress("glTexCoordPointervINTEL"));

	return result;
}

static int egl_Init_GL_HP_occlusion_test(void) {
	int result = 1;

	result = egl_hasExtension("GL_HP_occlusion_test");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_pixel_transform(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_pixel_transform");
	if ( !result ) return result;

	result = result && (glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)_GetProcAddress("glPixelTransformParameteriEXT"));
	result = result && (glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)_GetProcAddress("glPixelTransformParameterfEXT"));
	result = result && (glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)_GetProcAddress("glPixelTransformParameterivEXT"));
	result = result && (glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)_GetProcAddress("glPixelTransformParameterfvEXT"));

	return result;
}

static int egl_Init_GL_EXT_pixel_transform_color_table(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_pixel_transform_color_table");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_shared_texture_palette(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_shared_texture_palette");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_separate_specular_color(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_separate_specular_color");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_secondary_color(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_secondary_color");
	if ( !result ) return result;

	result = result && (glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC)_GetProcAddress("glSecondaryColor3bEXT"));
	result = result && (glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC)_GetProcAddress("glSecondaryColor3bvEXT"));
	result = result && (glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC)_GetProcAddress("glSecondaryColor3dEXT"));
	result = result && (glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC)_GetProcAddress("glSecondaryColor3dvEXT"));
	result = result && (glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC)_GetProcAddress("glSecondaryColor3fEXT"));
	result = result && (glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC)_GetProcAddress("glSecondaryColor3fvEXT"));
	result = result && (glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC)_GetProcAddress("glSecondaryColor3iEXT"));
	result = result && (glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC)_GetProcAddress("glSecondaryColor3ivEXT"));
	result = result && (glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC)_GetProcAddress("glSecondaryColor3sEXT"));
	result = result && (glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC)_GetProcAddress("glSecondaryColor3svEXT"));
	result = result && (glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC)_GetProcAddress("glSecondaryColor3ubEXT"));
	result = result && (glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC)_GetProcAddress("glSecondaryColor3ubvEXT"));
	result = result && (glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC)_GetProcAddress("glSecondaryColor3uiEXT"));
	result = result && (glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC)_GetProcAddress("glSecondaryColor3uivEXT"));
	result = result && (glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC)_GetProcAddress("glSecondaryColor3usEXT"));
	result = result && (glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC)_GetProcAddress("glSecondaryColor3usvEXT"));
	result = result && (glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC)_GetProcAddress("glSecondaryColorPointerEXT"));

	return result;
}

static int egl_Init_GL_EXT_texture_perturb_normal(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_perturb_normal");
	if ( !result ) return result;

	result = result && (glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC)_GetProcAddress("glTextureNormalEXT"));

	return result;
}

static int egl_Init_GL_EXT_multi_draw_arrays(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_multi_draw_arrays");
	if ( !result ) return result;

	result = result && (glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC)_GetProcAddress("glMultiDrawArraysEXT"));
	result = result && (glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)_GetProcAddress("glMultiDrawElementsEXT"));

	return result;
}

static int egl_Init_GL_EXT_fog_coord(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_fog_coord");
	if ( !result ) return result;

	result = result && (glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC)_GetProcAddress("glFogCoordfEXT"));
	result = result && (glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC)_GetProcAddress("glFogCoordfvEXT"));
	result = result && (glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC)_GetProcAddress("glFogCoorddEXT"));
	result = result && (glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC)_GetProcAddress("glFogCoorddvEXT"));
	result = result && (glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC)_GetProcAddress("glFogCoordPointerEXT"));

	return result;
}

static int egl_Init_GL_REND_screen_coordinates(void) {
	int result = 1;

	result = egl_hasExtension("GL_REND_screen_coordinates");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_coordinate_frame(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_coordinate_frame");
	if ( !result ) return result;

	result = result && (glTangent3bEXT = (PFNGLTANGENT3BEXTPROC)_GetProcAddress("glTangent3bEXT"));
	result = result && (glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC)_GetProcAddress("glTangent3bvEXT"));
	result = result && (glTangent3dEXT = (PFNGLTANGENT3DEXTPROC)_GetProcAddress("glTangent3dEXT"));
	result = result && (glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC)_GetProcAddress("glTangent3dvEXT"));
	result = result && (glTangent3fEXT = (PFNGLTANGENT3FEXTPROC)_GetProcAddress("glTangent3fEXT"));
	result = result && (glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC)_GetProcAddress("glTangent3fvEXT"));
	result = result && (glTangent3iEXT = (PFNGLTANGENT3IEXTPROC)_GetProcAddress("glTangent3iEXT"));
	result = result && (glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC)_GetProcAddress("glTangent3ivEXT"));
	result = result && (glTangent3sEXT = (PFNGLTANGENT3SEXTPROC)_GetProcAddress("glTangent3sEXT"));
	result = result && (glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC)_GetProcAddress("glTangent3svEXT"));
	result = result && (glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC)_GetProcAddress("glBinormal3bEXT"));
	result = result && (glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC)_GetProcAddress("glBinormal3bvEXT"));
	result = result && (glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC)_GetProcAddress("glBinormal3dEXT"));
	result = result && (glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC)_GetProcAddress("glBinormal3dvEXT"));
	result = result && (glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC)_GetProcAddress("glBinormal3fEXT"));
	result = result && (glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC)_GetProcAddress("glBinormal3fvEXT"));
	result = result && (glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC)_GetProcAddress("glBinormal3iEXT"));
	result = result && (glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC)_GetProcAddress("glBinormal3ivEXT"));
	result = result && (glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC)_GetProcAddress("glBinormal3sEXT"));
	result = result && (glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC)_GetProcAddress("glBinormal3svEXT"));
	result = result && (glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC)_GetProcAddress("glTangentPointerEXT"));
	result = result && (glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC)_GetProcAddress("glBinormalPointerEXT"));

	return result;
}

static int egl_Init_GL_EXT_texture_env_combine(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_env_combine");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_APPLE_specular_vector(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_specular_vector");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_APPLE_transform_hint(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_transform_hint");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_fog_scale(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_fog_scale");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SUNX_constant_data(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUNX_constant_data");
	if ( !result ) return result;

	result = result && (glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC)_GetProcAddress("glFinishTextureSUNX"));

	return result;
}

static int egl_Init_GL_SUN_global_alpha(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUN_global_alpha");
	if ( !result ) return result;

	result = result && (glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC)_GetProcAddress("glGlobalAlphaFactorbSUN"));
	result = result && (glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC)_GetProcAddress("glGlobalAlphaFactorsSUN"));
	result = result && (glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC)_GetProcAddress("glGlobalAlphaFactoriSUN"));
	result = result && (glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC)_GetProcAddress("glGlobalAlphaFactorfSUN"));
	result = result && (glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC)_GetProcAddress("glGlobalAlphaFactordSUN"));
	result = result && (glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC)_GetProcAddress("glGlobalAlphaFactorubSUN"));
	result = result && (glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC)_GetProcAddress("glGlobalAlphaFactorusSUN"));
	result = result && (glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC)_GetProcAddress("glGlobalAlphaFactoruiSUN"));

	return result;
}

static int egl_Init_GL_SUN_triangle_list(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUN_triangle_list");
	if ( !result ) return result;

	result = result && (glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC)_GetProcAddress("glReplacementCodeuiSUN"));
	result = result && (glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC)_GetProcAddress("glReplacementCodeusSUN"));
	result = result && (glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC)_GetProcAddress("glReplacementCodeubSUN"));
	result = result && (glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC)_GetProcAddress("glReplacementCodeuivSUN"));
	result = result && (glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC)_GetProcAddress("glReplacementCodeusvSUN"));
	result = result && (glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC)_GetProcAddress("glReplacementCodeubvSUN"));
	result = result && (glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)_GetProcAddress("glReplacementCodePointerSUN"));

	return result;
}

static int egl_Init_GL_SUN_vertex(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUN_vertex");
	if ( !result ) return result;

	result = result && (glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC)_GetProcAddress("glColor4ubVertex2fSUN"));
	result = result && (glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC)_GetProcAddress("glColor4ubVertex2fvSUN"));
	result = result && (glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC)_GetProcAddress("glColor4ubVertex3fSUN"));
	result = result && (glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC)_GetProcAddress("glColor4ubVertex3fvSUN"));
	result = result && (glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC)_GetProcAddress("glColor3fVertex3fSUN"));
	result = result && (glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC)_GetProcAddress("glColor3fVertex3fvSUN"));
	result = result && (glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glNormal3fVertex3fSUN"));
	result = result && (glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glNormal3fVertex3fvSUN"));
	result = result && (glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glColor4fNormal3fVertex3fSUN"));
	result = result && (glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glColor4fNormal3fVertex3fvSUN"));
	result = result && (glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fVertex3fSUN"));
	result = result && (glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fVertex3fvSUN"));
	result = result && (glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC)_GetProcAddress("glTexCoord4fVertex4fSUN"));
	result = result && (glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC)_GetProcAddress("glTexCoord4fVertex4fvSUN"));
	result = result && (glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fColor4ubVertex3fSUN"));
	result = result && (glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fColor4ubVertex3fvSUN"));
	result = result && (glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fColor3fVertex3fSUN"));
	result = result && (glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fColor3fVertex3fvSUN"));
	result = result && (glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fNormal3fVertex3fSUN"));
	result = result && (glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fNormal3fVertex3fvSUN"));
	result = result && (glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN"));
	result = result && (glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN"));
	result = result && (glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)_GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN"));
	result = result && (glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)_GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN"));
	result = result && (glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiVertex3fSUN"));
	result = result && (glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiVertex3fvSUN"));
	result = result && (glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN"));
	result = result && (glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN"));
	result = result && (glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiColor3fVertex3fSUN"));
	result = result && (glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN"));
	result = result && (glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN"));
	result = result && (glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN"));
	result = result && (glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN"));
	result = result && (glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN"));
	result = result && (glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN"));
	result = result && (glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN"));
	result = result && (glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN"));
	result = result && (glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN"));
	result = result && (glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN"));
	result = result && (glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)_GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN"));

	return result;
}

static int egl_Init_GL_EXT_blend_func_separate(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_blend_func_separate");
	if ( !result ) return result;

	result = result && (glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC)_GetProcAddress("glBlendFuncSeparateEXT"));

	return result;
}

static int egl_Init_GL_INGR_blend_func_separate(void) {
	int result = 1;

	result = egl_hasExtension("GL_INGR_blend_func_separate");
	if ( !result ) return result;

	result = result && (glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC)_GetProcAddress("glBlendFuncSeparateINGR"));

	return result;
}

static int egl_Init_GL_INGR_color_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_INGR_color_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_INGR_interlace_read(void) {
	int result = 1;

	result = egl_hasExtension("GL_INGR_interlace_read");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_stencil_wrap(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_stencil_wrap");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_422_pixels(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_422_pixels");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_texgen_reflection(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texgen_reflection");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SUN_convolution_border_modes(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUN_convolution_border_modes");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_texture_env_add(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_env_add");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_texture_lod_bias(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_lod_bias");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_texture_filter_anisotropic(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_filter_anisotropic");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_vertex_weighting(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_vertex_weighting");
	if ( !result ) return result;

	result = result && (glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC)_GetProcAddress("glVertexWeightfEXT"));
	result = result && (glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC)_GetProcAddress("glVertexWeightfvEXT"));
	result = result && (glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)_GetProcAddress("glVertexWeightPointerEXT"));

	return result;
}

static int egl_Init_GL_NV_light_max_exponent(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_light_max_exponent");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_array_range(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_array_range");
	if ( !result ) return result;

	result = result && (glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC)_GetProcAddress("glFlushVertexArrayRangeNV"));
	result = result && (glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC)_GetProcAddress("glVertexArrayRangeNV"));

	return result;
}

static int egl_Init_GL_NV_register_combiners(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_register_combiners");
	if ( !result ) return result;

	result = result && (glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC)_GetProcAddress("glCombinerParameterfvNV"));
	result = result && (glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC)_GetProcAddress("glCombinerParameterfNV"));
	result = result && (glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC)_GetProcAddress("glCombinerParameterivNV"));
	result = result && (glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC)_GetProcAddress("glCombinerParameteriNV"));
	result = result && (glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC)_GetProcAddress("glCombinerInputNV"));
	result = result && (glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC)_GetProcAddress("glCombinerOutputNV"));
	result = result && (glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC)_GetProcAddress("glFinalCombinerInputNV"));
	result = result && (glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)_GetProcAddress("glGetCombinerInputParameterfvNV"));
	result = result && (glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)_GetProcAddress("glGetCombinerInputParameterivNV"));
	result = result && (glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)_GetProcAddress("glGetCombinerOutputParameterfvNV"));
	result = result && (glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)_GetProcAddress("glGetCombinerOutputParameterivNV"));
	result = result && (glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)_GetProcAddress("glGetFinalCombinerInputParameterfvNV"));
	result = result && (glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)_GetProcAddress("glGetFinalCombinerInputParameterivNV"));

	return result;
}

static int egl_Init_GL_NV_fog_distance(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_fog_distance");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_texgen_emboss(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texgen_emboss");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_blend_square(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_blend_square");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_texture_env_combine4(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_env_combine4");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_MESA_resize_buffers(void) {
	int result = 1;

	result = egl_hasExtension("GL_MESA_resize_buffers");
	if ( !result ) return result;

	result = result && (glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC)_GetProcAddress("glResizeBuffersMESA"));

	return result;
}

static int egl_Init_GL_MESA_window_pos(void) {
	int result = 1;

	result = egl_hasExtension("GL_MESA_window_pos");
	if ( !result ) return result;

	result = result && (glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC)_GetProcAddress("glWindowPos2dMESA"));
	result = result && (glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC)_GetProcAddress("glWindowPos2dvMESA"));
	result = result && (glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC)_GetProcAddress("glWindowPos2fMESA"));
	result = result && (glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC)_GetProcAddress("glWindowPos2fvMESA"));
	result = result && (glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC)_GetProcAddress("glWindowPos2iMESA"));
	result = result && (glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC)_GetProcAddress("glWindowPos2ivMESA"));
	result = result && (glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC)_GetProcAddress("glWindowPos2sMESA"));
	result = result && (glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC)_GetProcAddress("glWindowPos2svMESA"));
	result = result && (glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC)_GetProcAddress("glWindowPos3dMESA"));
	result = result && (glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC)_GetProcAddress("glWindowPos3dvMESA"));
	result = result && (glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC)_GetProcAddress("glWindowPos3fMESA"));
	result = result && (glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC)_GetProcAddress("glWindowPos3fvMESA"));
	result = result && (glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC)_GetProcAddress("glWindowPos3iMESA"));
	result = result && (glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC)_GetProcAddress("glWindowPos3ivMESA"));
	result = result && (glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC)_GetProcAddress("glWindowPos3sMESA"));
	result = result && (glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC)_GetProcAddress("glWindowPos3svMESA"));
	result = result && (glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC)_GetProcAddress("glWindowPos4dMESA"));
	result = result && (glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC)_GetProcAddress("glWindowPos4dvMESA"));
	result = result && (glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC)_GetProcAddress("glWindowPos4fMESA"));
	result = result && (glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC)_GetProcAddress("glWindowPos4fvMESA"));
	result = result && (glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC)_GetProcAddress("glWindowPos4iMESA"));
	result = result && (glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC)_GetProcAddress("glWindowPos4ivMESA"));
	result = result && (glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC)_GetProcAddress("glWindowPos4sMESA"));
	result = result && (glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC)_GetProcAddress("glWindowPos4svMESA"));

	return result;
}

static int egl_Init_GL_IBM_cull_vertex(void) {
	int result = 1;

	result = egl_hasExtension("GL_IBM_cull_vertex");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_IBM_multimode_draw_arrays(void) {
	int result = 1;

	result = egl_hasExtension("GL_IBM_multimode_draw_arrays");
	if ( !result ) return result;

	result = result && (glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)_GetProcAddress("glMultiModeDrawArraysIBM"));
	result = result && (glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)_GetProcAddress("glMultiModeDrawElementsIBM"));

	return result;
}

static int egl_Init_GL_IBM_vertex_array_lists(void) {
	int result = 1;

	result = egl_hasExtension("GL_IBM_vertex_array_lists");
	if ( !result ) return result;

	result = result && (glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC)_GetProcAddress("glColorPointerListIBM"));
	result = result && (glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)_GetProcAddress("glSecondaryColorPointerListIBM"));
	result = result && (glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)_GetProcAddress("glEdgeFlagPointerListIBM"));
	result = result && (glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC)_GetProcAddress("glFogCoordPointerListIBM"));
	result = result && (glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC)_GetProcAddress("glIndexPointerListIBM"));
	result = result && (glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC)_GetProcAddress("glNormalPointerListIBM"));
	result = result && (glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC)_GetProcAddress("glTexCoordPointerListIBM"));
	result = result && (glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC)_GetProcAddress("glVertexPointerListIBM"));

	return result;
}

static int egl_Init_GL_SGIX_subsample(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_subsample");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_ycrcba(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_ycrcba");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_ycrcb_subsample(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_ycrcb_subsample");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_depth_pass_instrument(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_depth_pass_instrument");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_3DFX_texture_compression_FXT1(void) {
	int result = 1;

	result = egl_hasExtension("GL_3DFX_texture_compression_FXT1");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_3DFX_multisample(void) {
	int result = 1;

	result = egl_hasExtension("GL_3DFX_multisample");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_3DFX_tbuffer(void) {
	int result = 1;

	result = egl_hasExtension("GL_3DFX_tbuffer");
	if ( !result ) return result;

	result = result && (glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC)_GetProcAddress("glTbufferMask3DFX"));

	return result;
}

static int egl_Init_GL_EXT_multisample(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_multisample");
	if ( !result ) return result;

	result = result && (glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC)_GetProcAddress("glSampleMaskEXT"));
	result = result && (glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC)_GetProcAddress("glSamplePatternEXT"));

	return result;
}

static int egl_Init_GL_SGIX_vertex_preclip(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_vertex_preclip");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_convolution_accuracy(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_convolution_accuracy");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_resample(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_resample");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_point_line_texgen(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_point_line_texgen");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIS_texture_color_mask(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIS_texture_color_mask");
	if ( !result ) return result;

	result = result && (glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC)_GetProcAddress("glTextureColorMaskSGIS"));

	return result;
}

static int egl_Init_GL_SGIX_igloo_interface(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_igloo_interface");
	if ( !result ) return result;

	result = result && (glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC)_GetProcAddress("glIglooInterfaceSGIX"));

	return result;
}

static int egl_Init_GL_EXT_texture_env_dot3(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_env_dot3");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ATI_texture_mirror_once(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_texture_mirror_once");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_fence(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_fence");
	if ( !result ) return result;

	result = result && (glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC)_GetProcAddress("glDeleteFencesNV"));
	result = result && (glGenFencesNV = (PFNGLGENFENCESNVPROC)_GetProcAddress("glGenFencesNV"));
	result = result && (glIsFenceNV = (PFNGLISFENCENVPROC)_GetProcAddress("glIsFenceNV"));
	result = result && (glTestFenceNV = (PFNGLTESTFENCENVPROC)_GetProcAddress("glTestFenceNV"));
	result = result && (glGetFenceivNV = (PFNGLGETFENCEIVNVPROC)_GetProcAddress("glGetFenceivNV"));
	result = result && (glFinishFenceNV = (PFNGLFINISHFENCENVPROC)_GetProcAddress("glFinishFenceNV"));
	result = result && (glSetFenceNV = (PFNGLSETFENCENVPROC)_GetProcAddress("glSetFenceNV"));

	return result;
}

static int egl_Init_GL_NV_evaluators(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_evaluators");
	if ( !result ) return result;

	result = result && (glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC)_GetProcAddress("glMapControlPointsNV"));
	result = result && (glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC)_GetProcAddress("glMapParameterivNV"));
	result = result && (glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC)_GetProcAddress("glMapParameterfvNV"));
	result = result && (glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC)_GetProcAddress("glGetMapControlPointsNV"));
	result = result && (glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC)_GetProcAddress("glGetMapParameterivNV"));
	result = result && (glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC)_GetProcAddress("glGetMapParameterfvNV"));
	result = result && (glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)_GetProcAddress("glGetMapAttribParameterivNV"));
	result = result && (glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)_GetProcAddress("glGetMapAttribParameterfvNV"));
	result = result && (glEvalMapsNV = (PFNGLEVALMAPSNVPROC)_GetProcAddress("glEvalMapsNV"));

	return result;
}

static int egl_Init_GL_NV_packed_depth_stencil(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_packed_depth_stencil");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_register_combiners2(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_register_combiners2");
	if ( !result ) return result;

	result = result && (glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)_GetProcAddress("glCombinerStageParameterfvNV"));
	result = result && (glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)_GetProcAddress("glGetCombinerStageParameterfvNV"));

	return result;
}

static int egl_Init_GL_NV_texture_compression_vtc(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_compression_vtc");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_texture_rectangle(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_rectangle");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_texture_shader(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_shader");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_texture_shader2(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_shader2");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_array_range2(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_array_range2");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_program(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_program");
	if ( !result ) return result;

	result = result && (glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC)_GetProcAddress("glAreProgramsResidentNV"));
	result = result && (glBindProgramNV = (PFNGLBINDPROGRAMNVPROC)_GetProcAddress("glBindProgramNV"));
	result = result && (glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC)_GetProcAddress("glDeleteProgramsNV"));
	result = result && (glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC)_GetProcAddress("glExecuteProgramNV"));
	result = result && (glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC)_GetProcAddress("glGenProgramsNV"));
	result = result && (glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC)_GetProcAddress("glGetProgramParameterdvNV"));
	result = result && (glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC)_GetProcAddress("glGetProgramParameterfvNV"));
	result = result && (glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC)_GetProcAddress("glGetProgramivNV"));
	result = result && (glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC)_GetProcAddress("glGetProgramStringNV"));
	result = result && (glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC)_GetProcAddress("glGetTrackMatrixivNV"));
	result = result && (glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC)_GetProcAddress("glGetVertexAttribdvNV"));
	result = result && (glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC)_GetProcAddress("glGetVertexAttribfvNV"));
	result = result && (glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC)_GetProcAddress("glGetVertexAttribivNV"));
	result = result && (glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)_GetProcAddress("glGetVertexAttribPointervNV"));
	result = result && (glIsProgramNV = (PFNGLISPROGRAMNVPROC)_GetProcAddress("glIsProgramNV"));
	result = result && (glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC)_GetProcAddress("glLoadProgramNV"));
	result = result && (glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC)_GetProcAddress("glProgramParameter4dNV"));
	result = result && (glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC)_GetProcAddress("glProgramParameter4dvNV"));
	result = result && (glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC)_GetProcAddress("glProgramParameter4fNV"));
	result = result && (glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC)_GetProcAddress("glProgramParameter4fvNV"));
	result = result && (glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC)_GetProcAddress("glProgramParameters4dvNV"));
	result = result && (glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC)_GetProcAddress("glProgramParameters4fvNV"));
	result = result && (glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)_GetProcAddress("glRequestResidentProgramsNV"));
	result = result && (glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC)_GetProcAddress("glTrackMatrixNV"));
	result = result && (glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC)_GetProcAddress("glVertexAttribPointerNV"));
	result = result && (glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC)_GetProcAddress("glVertexAttrib1dNV"));
	result = result && (glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC)_GetProcAddress("glVertexAttrib1dvNV"));
	result = result && (glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC)_GetProcAddress("glVertexAttrib1fNV"));
	result = result && (glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC)_GetProcAddress("glVertexAttrib1fvNV"));
	result = result && (glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC)_GetProcAddress("glVertexAttrib1sNV"));
	result = result && (glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC)_GetProcAddress("glVertexAttrib1svNV"));
	result = result && (glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC)_GetProcAddress("glVertexAttrib2dNV"));
	result = result && (glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC)_GetProcAddress("glVertexAttrib2dvNV"));
	result = result && (glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC)_GetProcAddress("glVertexAttrib2fNV"));
	result = result && (glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC)_GetProcAddress("glVertexAttrib2fvNV"));
	result = result && (glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC)_GetProcAddress("glVertexAttrib2sNV"));
	result = result && (glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC)_GetProcAddress("glVertexAttrib2svNV"));
	result = result && (glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC)_GetProcAddress("glVertexAttrib3dNV"));
	result = result && (glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC)_GetProcAddress("glVertexAttrib3dvNV"));
	result = result && (glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC)_GetProcAddress("glVertexAttrib3fNV"));
	result = result && (glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC)_GetProcAddress("glVertexAttrib3fvNV"));
	result = result && (glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC)_GetProcAddress("glVertexAttrib3sNV"));
	result = result && (glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC)_GetProcAddress("glVertexAttrib3svNV"));
	result = result && (glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC)_GetProcAddress("glVertexAttrib4dNV"));
	result = result && (glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC)_GetProcAddress("glVertexAttrib4dvNV"));
	result = result && (glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC)_GetProcAddress("glVertexAttrib4fNV"));
	result = result && (glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC)_GetProcAddress("glVertexAttrib4fvNV"));
	result = result && (glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC)_GetProcAddress("glVertexAttrib4sNV"));
	result = result && (glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC)_GetProcAddress("glVertexAttrib4svNV"));
	result = result && (glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC)_GetProcAddress("glVertexAttrib4ubNV"));
	result = result && (glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC)_GetProcAddress("glVertexAttrib4ubvNV"));
	result = result && (glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC)_GetProcAddress("glVertexAttribs1dvNV"));
	result = result && (glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC)_GetProcAddress("glVertexAttribs1fvNV"));
	result = result && (glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC)_GetProcAddress("glVertexAttribs1svNV"));
	result = result && (glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC)_GetProcAddress("glVertexAttribs2dvNV"));
	result = result && (glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC)_GetProcAddress("glVertexAttribs2fvNV"));
	result = result && (glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC)_GetProcAddress("glVertexAttribs2svNV"));
	result = result && (glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC)_GetProcAddress("glVertexAttribs3dvNV"));
	result = result && (glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC)_GetProcAddress("glVertexAttribs3fvNV"));
	result = result && (glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC)_GetProcAddress("glVertexAttribs3svNV"));
	result = result && (glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC)_GetProcAddress("glVertexAttribs4dvNV"));
	result = result && (glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC)_GetProcAddress("glVertexAttribs4fvNV"));
	result = result && (glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC)_GetProcAddress("glVertexAttribs4svNV"));
	result = result && (glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC)_GetProcAddress("glVertexAttribs4ubvNV"));

	return result;
}

static int egl_Init_GL_SGIX_texture_coordinate_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_texture_coordinate_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_SGIX_scalebias_hint(void) {
	int result = 1;

	result = egl_hasExtension("GL_SGIX_scalebias_hint");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_OML_interlace(void) {
	int result = 1;

	result = egl_hasExtension("GL_OML_interlace");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_OML_subsample(void) {
	int result = 1;

	result = egl_hasExtension("GL_OML_subsample");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_OML_resample(void) {
	int result = 1;

	result = egl_hasExtension("GL_OML_resample");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_copy_depth_to_color(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_copy_depth_to_color");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ATI_envmap_bumpmap(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_envmap_bumpmap");
	if ( !result ) return result;

	result = result && (glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC)_GetProcAddress("glTexBumpParameterivATI"));
	result = result && (glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC)_GetProcAddress("glTexBumpParameterfvATI"));
	result = result && (glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)_GetProcAddress("glGetTexBumpParameterivATI"));
	result = result && (glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)_GetProcAddress("glGetTexBumpParameterfvATI"));

	return result;
}

static int egl_Init_GL_ATI_fragment_shader(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_fragment_shader");
	if ( !result ) return result;

	result = result && (glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC)_GetProcAddress("glGenFragmentShadersATI"));
	result = result && (glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC)_GetProcAddress("glBindFragmentShaderATI"));
	result = result && (glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC)_GetProcAddress("glDeleteFragmentShaderATI"));
	result = result && (glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC)_GetProcAddress("glBeginFragmentShaderATI"));
	result = result && (glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC)_GetProcAddress("glEndFragmentShaderATI"));
	result = result && (glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC)_GetProcAddress("glPassTexCoordATI"));
	result = result && (glSampleMapATI = (PFNGLSAMPLEMAPATIPROC)_GetProcAddress("glSampleMapATI"));
	result = result && (glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC)_GetProcAddress("glColorFragmentOp1ATI"));
	result = result && (glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC)_GetProcAddress("glColorFragmentOp2ATI"));
	result = result && (glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC)_GetProcAddress("glColorFragmentOp3ATI"));
	result = result && (glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC)_GetProcAddress("glAlphaFragmentOp1ATI"));
	result = result && (glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC)_GetProcAddress("glAlphaFragmentOp2ATI"));
	result = result && (glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC)_GetProcAddress("glAlphaFragmentOp3ATI"));
	result = result && (glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)_GetProcAddress("glSetFragmentShaderConstantATI"));

	return result;
}

static int egl_Init_GL_ATI_pn_triangles(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_pn_triangles");
	if ( !result ) return result;

	result = result && (glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC)_GetProcAddress("glPNTrianglesiATI"));
	result = result && (glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC)_GetProcAddress("glPNTrianglesfATI"));

	return result;
}

static int egl_Init_GL_ATI_vertex_array_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_vertex_array_object");
	if ( !result ) return result;

	result = result && (glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC)_GetProcAddress("glNewObjectBufferATI"));
	result = result && (glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC)_GetProcAddress("glIsObjectBufferATI"));
	result = result && (glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC)_GetProcAddress("glUpdateObjectBufferATI"));
	result = result && (glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC)_GetProcAddress("glGetObjectBufferfvATI"));
	result = result && (glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC)_GetProcAddress("glGetObjectBufferivATI"));
	result = result && (glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC)_GetProcAddress("glFreeObjectBufferATI"));
	result = result && (glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC)_GetProcAddress("glArrayObjectATI"));
	result = result && (glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC)_GetProcAddress("glGetArrayObjectfvATI"));
	result = result && (glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC)_GetProcAddress("glGetArrayObjectivATI"));
	result = result && (glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC)_GetProcAddress("glVariantArrayObjectATI"));
	result = result && (glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)_GetProcAddress("glGetVariantArrayObjectfvATI"));
	result = result && (glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)_GetProcAddress("glGetVariantArrayObjectivATI"));

	return result;
}

static int egl_Init_GL_EXT_vertex_shader(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_vertex_shader");
	if ( !result ) return result;

	result = result && (glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC)_GetProcAddress("glBeginVertexShaderEXT"));
	result = result && (glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC)_GetProcAddress("glEndVertexShaderEXT"));
	result = result && (glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC)_GetProcAddress("glBindVertexShaderEXT"));
	result = result && (glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC)_GetProcAddress("glGenVertexShadersEXT"));
	result = result && (glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC)_GetProcAddress("glDeleteVertexShaderEXT"));
	result = result && (glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC)_GetProcAddress("glShaderOp1EXT"));
	result = result && (glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC)_GetProcAddress("glShaderOp2EXT"));
	result = result && (glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC)_GetProcAddress("glShaderOp3EXT"));
	result = result && (glSwizzleEXT = (PFNGLSWIZZLEEXTPROC)_GetProcAddress("glSwizzleEXT"));
	result = result && (glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC)_GetProcAddress("glWriteMaskEXT"));
	result = result && (glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC)_GetProcAddress("glInsertComponentEXT"));
	result = result && (glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC)_GetProcAddress("glExtractComponentEXT"));
	result = result && (glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC)_GetProcAddress("glGenSymbolsEXT"));
	result = result && (glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC)_GetProcAddress("glSetInvariantEXT"));
	result = result && (glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC)_GetProcAddress("glSetLocalConstantEXT"));
	result = result && (glVariantbvEXT = (PFNGLVARIANTBVEXTPROC)_GetProcAddress("glVariantbvEXT"));
	result = result && (glVariantsvEXT = (PFNGLVARIANTSVEXTPROC)_GetProcAddress("glVariantsvEXT"));
	result = result && (glVariantivEXT = (PFNGLVARIANTIVEXTPROC)_GetProcAddress("glVariantivEXT"));
	result = result && (glVariantfvEXT = (PFNGLVARIANTFVEXTPROC)_GetProcAddress("glVariantfvEXT"));
	result = result && (glVariantdvEXT = (PFNGLVARIANTDVEXTPROC)_GetProcAddress("glVariantdvEXT"));
	result = result && (glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC)_GetProcAddress("glVariantubvEXT"));
	result = result && (glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC)_GetProcAddress("glVariantusvEXT"));
	result = result && (glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC)_GetProcAddress("glVariantuivEXT"));
	result = result && (glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC)_GetProcAddress("glVariantPointerEXT"));
	result = result && (glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)_GetProcAddress("glEnableVariantClientStateEXT"));
	result = result && (glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)_GetProcAddress("glDisableVariantClientStateEXT"));
	result = result && (glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC)_GetProcAddress("glBindLightParameterEXT"));
	result = result && (glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC)_GetProcAddress("glBindMaterialParameterEXT"));
	result = result && (glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC)_GetProcAddress("glBindTexGenParameterEXT"));
	result = result && (glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)_GetProcAddress("glBindTextureUnitParameterEXT"));
	result = result && (glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC)_GetProcAddress("glBindParameterEXT"));
	result = result && (glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC)_GetProcAddress("glIsVariantEnabledEXT"));
	result = result && (glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC)_GetProcAddress("glGetVariantBooleanvEXT"));
	result = result && (glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC)_GetProcAddress("glGetVariantIntegervEXT"));
	result = result && (glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC)_GetProcAddress("glGetVariantFloatvEXT"));
	result = result && (glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC)_GetProcAddress("glGetVariantPointervEXT"));
	result = result && (glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC)_GetProcAddress("glGetInvariantBooleanvEXT"));
	result = result && (glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC)_GetProcAddress("glGetInvariantIntegervEXT"));
	result = result && (glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC)_GetProcAddress("glGetInvariantFloatvEXT"));
	result = result && (glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)_GetProcAddress("glGetLocalConstantBooleanvEXT"));
	result = result && (glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)_GetProcAddress("glGetLocalConstantIntegervEXT"));
	result = result && (glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)_GetProcAddress("glGetLocalConstantFloatvEXT"));

	return result;
}

static int egl_Init_GL_ATI_vertex_streams(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_vertex_streams");
	if ( !result ) return result;

	result = result && (glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC)_GetProcAddress("glVertexStream1sATI"));
	result = result && (glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC)_GetProcAddress("glVertexStream1svATI"));
	result = result && (glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC)_GetProcAddress("glVertexStream1iATI"));
	result = result && (glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC)_GetProcAddress("glVertexStream1ivATI"));
	result = result && (glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC)_GetProcAddress("glVertexStream1fATI"));
	result = result && (glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC)_GetProcAddress("glVertexStream1fvATI"));
	result = result && (glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC)_GetProcAddress("glVertexStream1dATI"));
	result = result && (glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC)_GetProcAddress("glVertexStream1dvATI"));
	result = result && (glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC)_GetProcAddress("glVertexStream2sATI"));
	result = result && (glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC)_GetProcAddress("glVertexStream2svATI"));
	result = result && (glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC)_GetProcAddress("glVertexStream2iATI"));
	result = result && (glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC)_GetProcAddress("glVertexStream2ivATI"));
	result = result && (glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC)_GetProcAddress("glVertexStream2fATI"));
	result = result && (glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC)_GetProcAddress("glVertexStream2fvATI"));
	result = result && (glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC)_GetProcAddress("glVertexStream2dATI"));
	result = result && (glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC)_GetProcAddress("glVertexStream2dvATI"));
	result = result && (glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC)_GetProcAddress("glVertexStream3sATI"));
	result = result && (glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC)_GetProcAddress("glVertexStream3svATI"));
	result = result && (glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC)_GetProcAddress("glVertexStream3iATI"));
	result = result && (glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC)_GetProcAddress("glVertexStream3ivATI"));
	result = result && (glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC)_GetProcAddress("glVertexStream3fATI"));
	result = result && (glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC)_GetProcAddress("glVertexStream3fvATI"));
	result = result && (glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC)_GetProcAddress("glVertexStream3dATI"));
	result = result && (glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC)_GetProcAddress("glVertexStream3dvATI"));
	result = result && (glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC)_GetProcAddress("glVertexStream4sATI"));
	result = result && (glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC)_GetProcAddress("glVertexStream4svATI"));
	result = result && (glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC)_GetProcAddress("glVertexStream4iATI"));
	result = result && (glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC)_GetProcAddress("glVertexStream4ivATI"));
	result = result && (glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC)_GetProcAddress("glVertexStream4fATI"));
	result = result && (glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC)_GetProcAddress("glVertexStream4fvATI"));
	result = result && (glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC)_GetProcAddress("glVertexStream4dATI"));
	result = result && (glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC)_GetProcAddress("glVertexStream4dvATI"));
	result = result && (glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC)_GetProcAddress("glNormalStream3bATI"));
	result = result && (glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC)_GetProcAddress("glNormalStream3bvATI"));
	result = result && (glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC)_GetProcAddress("glNormalStream3sATI"));
	result = result && (glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC)_GetProcAddress("glNormalStream3svATI"));
	result = result && (glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC)_GetProcAddress("glNormalStream3iATI"));
	result = result && (glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC)_GetProcAddress("glNormalStream3ivATI"));
	result = result && (glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC)_GetProcAddress("glNormalStream3fATI"));
	result = result && (glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC)_GetProcAddress("glNormalStream3fvATI"));
	result = result && (glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC)_GetProcAddress("glNormalStream3dATI"));
	result = result && (glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC)_GetProcAddress("glNormalStream3dvATI"));
	result = result && (glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)_GetProcAddress("glClientActiveVertexStreamATI"));
	result = result && (glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC)_GetProcAddress("glVertexBlendEnviATI"));
	result = result && (glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC)_GetProcAddress("glVertexBlendEnvfATI"));

	return result;
}

static int egl_Init_GL_ATI_element_array(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_element_array");
	if ( !result ) return result;

	result = result && (glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC)_GetProcAddress("glElementPointerATI"));
	result = result && (glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC)_GetProcAddress("glDrawElementArrayATI"));
	result = result && (glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)_GetProcAddress("glDrawRangeElementArrayATI"));

	return result;
}

static int egl_Init_GL_SUN_mesh_array(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUN_mesh_array");
	if ( !result ) return result;

	result = result && (glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC)_GetProcAddress("glDrawMeshArraysSUN"));

	return result;
}

static int egl_Init_GL_SUN_slice_accum(void) {
	int result = 1;

	result = egl_hasExtension("GL_SUN_slice_accum");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_multisample_filter_hint(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_multisample_filter_hint");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_depth_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_depth_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_occlusion_query(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_occlusion_query");
	if ( !result ) return result;

	result = result && (glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC)_GetProcAddress("glGenOcclusionQueriesNV"));
	result = result && (glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)_GetProcAddress("glDeleteOcclusionQueriesNV"));
	result = result && (glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC)_GetProcAddress("glIsOcclusionQueryNV"));
	result = result && (glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC)_GetProcAddress("glBeginOcclusionQueryNV"));
	result = result && (glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC)_GetProcAddress("glEndOcclusionQueryNV"));
	result = result && (glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC)_GetProcAddress("glGetOcclusionQueryivNV"));
	result = result && (glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)_GetProcAddress("glGetOcclusionQueryuivNV"));

	return result;
}

static int egl_Init_GL_NV_point_sprite(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_point_sprite");
	if ( !result ) return result;

	result = result && (glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC)_GetProcAddress("glPointParameteriNV"));
	result = result && (glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC)_GetProcAddress("glPointParameterivNV"));

	return result;
}

static int egl_Init_GL_NV_texture_shader3(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_shader3");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_program1_1(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_program1_1");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_shadow_funcs(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_shadow_funcs");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_stencil_two_side(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_stencil_two_side");
	if ( !result ) return result;

	result = result && (glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC)_GetProcAddress("glActiveStencilFaceEXT"));

	return result;
}

static int egl_Init_GL_ATI_text_fragment_shader(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_text_fragment_shader");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_APPLE_client_storage(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_client_storage");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_APPLE_element_array(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_element_array");
	if ( !result ) return result;

	result = result && (glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC)_GetProcAddress("glElementPointerAPPLE"));
	result = result && (glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC)_GetProcAddress("glDrawElementArrayAPPLE"));
	result = result && (glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)_GetProcAddress("glDrawRangeElementArrayAPPLE"));
	result = result && (glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)_GetProcAddress("glMultiDrawElementArrayAPPLE"));
	result = result && (glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)_GetProcAddress("glMultiDrawRangeElementArrayAPPLE"));

	return result;
}

static int egl_Init_GL_APPLE_fence(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_fence");
	if ( !result ) return result;

	result = result && (glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC)_GetProcAddress("glGenFencesAPPLE"));
	result = result && (glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC)_GetProcAddress("glDeleteFencesAPPLE"));
	result = result && (glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC)_GetProcAddress("glSetFenceAPPLE"));
	result = result && (glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC)_GetProcAddress("glIsFenceAPPLE"));
	result = result && (glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC)_GetProcAddress("glTestFenceAPPLE"));
	result = result && (glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC)_GetProcAddress("glFinishFenceAPPLE"));
	result = result && (glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC)_GetProcAddress("glTestObjectAPPLE"));
	result = result && (glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC)_GetProcAddress("glFinishObjectAPPLE"));

	return result;
}

static int egl_Init_GL_APPLE_vertex_array_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_vertex_array_object");
	if ( !result ) return result;

	result = result && (glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC)_GetProcAddress("glBindVertexArrayAPPLE"));
	result = result && (glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)_GetProcAddress("glDeleteVertexArraysAPPLE"));
	result = result && (glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC)_GetProcAddress("glGenVertexArraysAPPLE"));
	result = result && (glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC)_GetProcAddress("glIsVertexArrayAPPLE"));

	return result;
}

static int egl_Init_GL_APPLE_vertex_array_range(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_vertex_array_range");
	if ( !result ) return result;

	result = result && (glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC)_GetProcAddress("glVertexArrayRangeAPPLE"));
	result = result && (glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)_GetProcAddress("glFlushVertexArrayRangeAPPLE"));
	result = result && (glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)_GetProcAddress("glVertexArrayParameteriAPPLE"));

	return result;
}

static int egl_Init_GL_APPLE_ycbcr_422(void) {
	int result = 1;

	result = egl_hasExtension("GL_APPLE_ycbcr_422");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_S3_s3tc(void) {
	int result = 1;

	result = egl_hasExtension("GL_S3_s3tc");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ATI_draw_buffers(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_draw_buffers");
	if ( !result ) return result;

	result = result && (glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC)_GetProcAddress("glDrawBuffersATI"));

	return result;
}

static int egl_Init_GL_ATI_pixel_format_float(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_pixel_format_float");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ATI_texture_env_combine3(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_texture_env_combine3");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ATI_texture_float(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_texture_float");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_float_buffer(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_float_buffer");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_fragment_program(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_fragment_program");
	if ( !result ) return result;

	result = result && (glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)_GetProcAddress("glProgramNamedParameter4fNV"));
	result = result && (glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)_GetProcAddress("glProgramNamedParameter4dNV"));
	result = result && (glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)_GetProcAddress("glProgramNamedParameter4fvNV"));
	result = result && (glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)_GetProcAddress("glProgramNamedParameter4dvNV"));
	result = result && (glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)_GetProcAddress("glGetProgramNamedParameterfvNV"));
	result = result && (glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)_GetProcAddress("glGetProgramNamedParameterdvNV"));

	return result;
}

static int egl_Init_GL_NV_half_float(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_half_float");
	if ( !result ) return result;

	result = result && (glVertex2hNV = (PFNGLVERTEX2HNVPROC)_GetProcAddress("glVertex2hNV"));
	result = result && (glVertex2hvNV = (PFNGLVERTEX2HVNVPROC)_GetProcAddress("glVertex2hvNV"));
	result = result && (glVertex3hNV = (PFNGLVERTEX3HNVPROC)_GetProcAddress("glVertex3hNV"));
	result = result && (glVertex3hvNV = (PFNGLVERTEX3HVNVPROC)_GetProcAddress("glVertex3hvNV"));
	result = result && (glVertex4hNV = (PFNGLVERTEX4HNVPROC)_GetProcAddress("glVertex4hNV"));
	result = result && (glVertex4hvNV = (PFNGLVERTEX4HVNVPROC)_GetProcAddress("glVertex4hvNV"));
	result = result && (glNormal3hNV = (PFNGLNORMAL3HNVPROC)_GetProcAddress("glNormal3hNV"));
	result = result && (glNormal3hvNV = (PFNGLNORMAL3HVNVPROC)_GetProcAddress("glNormal3hvNV"));
	result = result && (glColor3hNV = (PFNGLCOLOR3HNVPROC)_GetProcAddress("glColor3hNV"));
	result = result && (glColor3hvNV = (PFNGLCOLOR3HVNVPROC)_GetProcAddress("glColor3hvNV"));
	result = result && (glColor4hNV = (PFNGLCOLOR4HNVPROC)_GetProcAddress("glColor4hNV"));
	result = result && (glColor4hvNV = (PFNGLCOLOR4HVNVPROC)_GetProcAddress("glColor4hvNV"));
	result = result && (glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC)_GetProcAddress("glTexCoord1hNV"));
	result = result && (glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC)_GetProcAddress("glTexCoord1hvNV"));
	result = result && (glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC)_GetProcAddress("glTexCoord2hNV"));
	result = result && (glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC)_GetProcAddress("glTexCoord2hvNV"));
	result = result && (glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC)_GetProcAddress("glTexCoord3hNV"));
	result = result && (glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC)_GetProcAddress("glTexCoord3hvNV"));
	result = result && (glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC)_GetProcAddress("glTexCoord4hNV"));
	result = result && (glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC)_GetProcAddress("glTexCoord4hvNV"));
	result = result && (glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC)_GetProcAddress("glMultiTexCoord1hNV"));
	result = result && (glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC)_GetProcAddress("glMultiTexCoord1hvNV"));
	result = result && (glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC)_GetProcAddress("glMultiTexCoord2hNV"));
	result = result && (glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC)_GetProcAddress("glMultiTexCoord2hvNV"));
	result = result && (glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC)_GetProcAddress("glMultiTexCoord3hNV"));
	result = result && (glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC)_GetProcAddress("glMultiTexCoord3hvNV"));
	result = result && (glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC)_GetProcAddress("glMultiTexCoord4hNV"));
	result = result && (glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC)_GetProcAddress("glMultiTexCoord4hvNV"));
	result = result && (glFogCoordhNV = (PFNGLFOGCOORDHNVPROC)_GetProcAddress("glFogCoordhNV"));
	result = result && (glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC)_GetProcAddress("glFogCoordhvNV"));
	result = result && (glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC)_GetProcAddress("glSecondaryColor3hNV"));
	result = result && (glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC)_GetProcAddress("glSecondaryColor3hvNV"));
	result = result && (glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC)_GetProcAddress("glVertexWeighthNV"));
	result = result && (glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC)_GetProcAddress("glVertexWeighthvNV"));
	result = result && (glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC)_GetProcAddress("glVertexAttrib1hNV"));
	result = result && (glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC)_GetProcAddress("glVertexAttrib1hvNV"));
	result = result && (glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC)_GetProcAddress("glVertexAttrib2hNV"));
	result = result && (glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC)_GetProcAddress("glVertexAttrib2hvNV"));
	result = result && (glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC)_GetProcAddress("glVertexAttrib3hNV"));
	result = result && (glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC)_GetProcAddress("glVertexAttrib3hvNV"));
	result = result && (glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC)_GetProcAddress("glVertexAttrib4hNV"));
	result = result && (glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC)_GetProcAddress("glVertexAttrib4hvNV"));
	result = result && (glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC)_GetProcAddress("glVertexAttribs1hvNV"));
	result = result && (glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC)_GetProcAddress("glVertexAttribs2hvNV"));
	result = result && (glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC)_GetProcAddress("glVertexAttribs3hvNV"));
	result = result && (glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC)_GetProcAddress("glVertexAttribs4hvNV"));

	return result;
}

static int egl_Init_GL_NV_pixel_data_range(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_pixel_data_range");
	if ( !result ) return result;

	result = result && (glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC)_GetProcAddress("glPixelDataRangeNV"));
	result = result && (glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC)_GetProcAddress("glFlushPixelDataRangeNV"));

	return result;
}

static int egl_Init_GL_NV_primitive_restart(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_primitive_restart");
	if ( !result ) return result;

	result = result && (glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC)_GetProcAddress("glPrimitiveRestartNV"));
	result = result && (glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC)_GetProcAddress("glPrimitiveRestartIndexNV"));

	return result;
}

static int egl_Init_GL_NV_texture_expand_normal(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_texture_expand_normal");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_program2(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_program2");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_ATI_map_object_buffer(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_map_object_buffer");
	if ( !result ) return result;

	result = result && (glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC)_GetProcAddress("glMapObjectBufferATI"));
	result = result && (glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC)_GetProcAddress("glUnmapObjectBufferATI"));

	return result;
}

static int egl_Init_GL_ATI_separate_stencil(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_separate_stencil");
	if ( !result ) return result;

	result = result && (glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC)_GetProcAddress("glStencilOpSeparateATI"));
	result = result && (glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC)_GetProcAddress("glStencilFuncSeparateATI"));

	return result;
}

static int egl_Init_GL_ATI_vertex_attrib_array_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_ATI_vertex_attrib_array_object");
	if ( !result ) return result;

	result = result && (glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)_GetProcAddress("glVertexAttribArrayObjectATI"));
	result = result && (glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)_GetProcAddress("glGetVertexAttribArrayObjectfvATI"));
	result = result && (glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)_GetProcAddress("glGetVertexAttribArrayObjectivATI"));

	return result;
}

static int egl_Init_GL_OES_read_format(void) {
	int result = 1;

	result = egl_hasExtension("GL_OES_read_format");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_depth_bounds_test(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_depth_bounds_test");
	if ( !result ) return result;

	result = result && (glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC)_GetProcAddress("glDepthBoundsEXT"));

	return result;
}

static int egl_Init_GL_EXT_texture_mirror_clamp(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_texture_mirror_clamp");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_blend_equation_separate(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_blend_equation_separate");
	if ( !result ) return result;

	result = result && (glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC)_GetProcAddress("glBlendEquationSeparateEXT"));

	return result;
}

static int egl_Init_GL_MESA_pack_invert(void) {
	int result = 1;

	result = egl_hasExtension("GL_MESA_pack_invert");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_MESA_ycbcr_texture(void) {
	int result = 1;

	result = egl_hasExtension("GL_MESA_ycbcr_texture");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_EXT_pixel_buffer_object(void) {
	int result = 1;

	result = egl_hasExtension("GL_EXT_pixel_buffer_object");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_fragment_program_option(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_fragment_program_option");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_fragment_program2(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_fragment_program2");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_program2_option(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_program2_option");
	if ( !result ) return result;

	return result;
}

static int egl_Init_GL_NV_vertex_program3(void) {
	int result = 1;

	result = egl_hasExtension("GL_NV_vertex_program3");
	if ( !result ) return result;

	return result;
}



int egl_InitExtensions(void) {
	int result = 1;

	result = result & (EGL_HAS_GL_VERSION_1_2 = egl_Init_GL_VERSION_1_2());
	result = result & (EGL_HAS_GL_VERSION_1_3 = egl_Init_GL_VERSION_1_3());
	result = result & (EGL_HAS_GL_VERSION_1_4 = egl_Init_GL_VERSION_1_4());
	result = result & (EGL_HAS_GL_VERSION_1_5 = egl_Init_GL_VERSION_1_5());
	result = result & (EGL_HAS_GL_VERSION_2_0 = egl_Init_GL_VERSION_2_0());
	result = result & (EGL_HAS_GL_ARB_multitexture = egl_Init_GL_ARB_multitexture());
	result = result & (EGL_HAS_GL_ARB_transpose_matrix = egl_Init_GL_ARB_transpose_matrix());
	result = result & (EGL_HAS_GL_ARB_multisample = egl_Init_GL_ARB_multisample());
	result = result & (EGL_HAS_GL_ARB_texture_env_add = egl_Init_GL_ARB_texture_env_add());
	result = result & (EGL_HAS_GL_ARB_texture_cube_map = egl_Init_GL_ARB_texture_cube_map());
	result = result & (EGL_HAS_GL_ARB_texture_compression = egl_Init_GL_ARB_texture_compression());
	result = result & (EGL_HAS_GL_ARB_texture_border_clamp = egl_Init_GL_ARB_texture_border_clamp());
	result = result & (EGL_HAS_GL_ARB_point_parameters = egl_Init_GL_ARB_point_parameters());
	result = result & (EGL_HAS_GL_ARB_vertex_blend = egl_Init_GL_ARB_vertex_blend());
	result = result & (EGL_HAS_GL_ARB_matrix_palette = egl_Init_GL_ARB_matrix_palette());
	result = result & (EGL_HAS_GL_ARB_texture_env_combine = egl_Init_GL_ARB_texture_env_combine());
	result = result & (EGL_HAS_GL_ARB_texture_env_crossbar = egl_Init_GL_ARB_texture_env_crossbar());
	result = result & (EGL_HAS_GL_ARB_texture_env_dot3 = egl_Init_GL_ARB_texture_env_dot3());
	result = result & (EGL_HAS_GL_ARB_texture_mirrored_repeat = egl_Init_GL_ARB_texture_mirrored_repeat());
	result = result & (EGL_HAS_GL_ARB_depth_texture = egl_Init_GL_ARB_depth_texture());
	result = result & (EGL_HAS_GL_ARB_shadow = egl_Init_GL_ARB_shadow());
	result = result & (EGL_HAS_GL_ARB_shadow_ambient = egl_Init_GL_ARB_shadow_ambient());
	result = result & (EGL_HAS_GL_ARB_window_pos = egl_Init_GL_ARB_window_pos());
	result = result & (EGL_HAS_GL_ARB_vertex_program = egl_Init_GL_ARB_vertex_program());
	result = result & (EGL_HAS_GL_ARB_fragment_program = egl_Init_GL_ARB_fragment_program());
	result = result & (EGL_HAS_GL_ARB_vertex_buffer_object = egl_Init_GL_ARB_vertex_buffer_object());
	result = result & (EGL_HAS_GL_ARB_occlusion_query = egl_Init_GL_ARB_occlusion_query());
	result = result & (EGL_HAS_GL_ARB_shader_objects = egl_Init_GL_ARB_shader_objects());
	result = result & (EGL_HAS_GL_ARB_vertex_shader = egl_Init_GL_ARB_vertex_shader());
	result = result & (EGL_HAS_GL_ARB_fragment_shader = egl_Init_GL_ARB_fragment_shader());
	result = result & (EGL_HAS_GL_ARB_shading_language_100 = egl_Init_GL_ARB_shading_language_100());
	result = result & (EGL_HAS_GL_ARB_texture_non_power_of_two = egl_Init_GL_ARB_texture_non_power_of_two());
	result = result & (EGL_HAS_GL_ARB_point_sprite = egl_Init_GL_ARB_point_sprite());
	result = result & (EGL_HAS_GL_ARB_fragment_program_shadow = egl_Init_GL_ARB_fragment_program_shadow());
	result = result & (EGL_HAS_GL_ARB_draw_buffers = egl_Init_GL_ARB_draw_buffers());
	result = result & (EGL_HAS_GL_ARB_texture_rectangle = egl_Init_GL_ARB_texture_rectangle());
	result = result & (EGL_HAS_GL_ARB_color_buffer_float = egl_Init_GL_ARB_color_buffer_float());
	result = result & (EGL_HAS_GL_ARB_half_float_pixel = egl_Init_GL_ARB_half_float_pixel());
	result = result & (EGL_HAS_GL_ARB_texture_float = egl_Init_GL_ARB_texture_float());
	result = result & (EGL_HAS_GL_ARB_pixel_buffer_object = egl_Init_GL_ARB_pixel_buffer_object());
	result = result & (EGL_HAS_GL_EXT_abgr = egl_Init_GL_EXT_abgr());
	result = result & (EGL_HAS_GL_EXT_blend_color = egl_Init_GL_EXT_blend_color());
	result = result & (EGL_HAS_GL_EXT_polygon_offset = egl_Init_GL_EXT_polygon_offset());
	result = result & (EGL_HAS_GL_EXT_texture = egl_Init_GL_EXT_texture());
	result = result & (EGL_HAS_GL_EXT_texture3D = egl_Init_GL_EXT_texture3D());
	result = result & (EGL_HAS_GL_SGIS_texture_filter4 = egl_Init_GL_SGIS_texture_filter4());
	result = result & (EGL_HAS_GL_EXT_subtexture = egl_Init_GL_EXT_subtexture());
	result = result & (EGL_HAS_GL_EXT_copy_texture = egl_Init_GL_EXT_copy_texture());
	result = result & (EGL_HAS_GL_EXT_histogram = egl_Init_GL_EXT_histogram());
	result = result & (EGL_HAS_GL_EXT_convolution = egl_Init_GL_EXT_convolution());
	result = result & (EGL_HAS_GL_EXT_color_matrix = egl_Init_GL_EXT_color_matrix());
	result = result & (EGL_HAS_GL_SGI_color_table = egl_Init_GL_SGI_color_table());
	result = result & (EGL_HAS_GL_SGIX_pixel_texture = egl_Init_GL_SGIX_pixel_texture());
	result = result & (EGL_HAS_GL_SGIS_pixel_texture = egl_Init_GL_SGIS_pixel_texture());
	result = result & (EGL_HAS_GL_SGIS_texture4D = egl_Init_GL_SGIS_texture4D());
	result = result & (EGL_HAS_GL_SGI_texture_color_table = egl_Init_GL_SGI_texture_color_table());
	result = result & (EGL_HAS_GL_EXT_cmyka = egl_Init_GL_EXT_cmyka());
	result = result & (EGL_HAS_GL_EXT_texture_object = egl_Init_GL_EXT_texture_object());
	result = result & (EGL_HAS_GL_SGIS_detail_texture = egl_Init_GL_SGIS_detail_texture());
	result = result & (EGL_HAS_GL_SGIS_sharpen_texture = egl_Init_GL_SGIS_sharpen_texture());
	result = result & (EGL_HAS_GL_EXT_packed_pixels = egl_Init_GL_EXT_packed_pixels());
	result = result & (EGL_HAS_GL_SGIS_texture_lod = egl_Init_GL_SGIS_texture_lod());
	result = result & (EGL_HAS_GL_SGIS_multisample = egl_Init_GL_SGIS_multisample());
	result = result & (EGL_HAS_GL_EXT_rescale_normal = egl_Init_GL_EXT_rescale_normal());
	result = result & (EGL_HAS_GL_EXT_vertex_array = egl_Init_GL_EXT_vertex_array());
	result = result & (EGL_HAS_GL_EXT_misc_attribute = egl_Init_GL_EXT_misc_attribute());
	result = result & (EGL_HAS_GL_SGIS_generate_mipmap = egl_Init_GL_SGIS_generate_mipmap());
	result = result & (EGL_HAS_GL_SGIX_clipmap = egl_Init_GL_SGIX_clipmap());
	result = result & (EGL_HAS_GL_SGIX_shadow = egl_Init_GL_SGIX_shadow());
	result = result & (EGL_HAS_GL_SGIS_texture_edge_clamp = egl_Init_GL_SGIS_texture_edge_clamp());
	result = result & (EGL_HAS_GL_SGIS_texture_border_clamp = egl_Init_GL_SGIS_texture_border_clamp());
	result = result & (EGL_HAS_GL_EXT_blend_minmax = egl_Init_GL_EXT_blend_minmax());
	result = result & (EGL_HAS_GL_EXT_blend_subtract = egl_Init_GL_EXT_blend_subtract());
	result = result & (EGL_HAS_GL_EXT_blend_logic_op = egl_Init_GL_EXT_blend_logic_op());
	result = result & (EGL_HAS_GL_SGIX_interlace = egl_Init_GL_SGIX_interlace());
	result = result & (EGL_HAS_GL_SGIX_pixel_tiles = egl_Init_GL_SGIX_pixel_tiles());
	result = result & (EGL_HAS_GL_SGIX_texture_select = egl_Init_GL_SGIX_texture_select());
	result = result & (EGL_HAS_GL_SGIX_sprite = egl_Init_GL_SGIX_sprite());
	result = result & (EGL_HAS_GL_SGIX_texture_multi_buffer = egl_Init_GL_SGIX_texture_multi_buffer());
	result = result & (EGL_HAS_GL_EXT_point_parameters = egl_Init_GL_EXT_point_parameters());
	result = result & (EGL_HAS_GL_SGIS_point_parameters = egl_Init_GL_SGIS_point_parameters());
	result = result & (EGL_HAS_GL_SGIX_instruments = egl_Init_GL_SGIX_instruments());
	result = result & (EGL_HAS_GL_SGIX_texture_scale_bias = egl_Init_GL_SGIX_texture_scale_bias());
	result = result & (EGL_HAS_GL_SGIX_framezoom = egl_Init_GL_SGIX_framezoom());
	result = result & (EGL_HAS_GL_SGIX_tag_sample_buffer = egl_Init_GL_SGIX_tag_sample_buffer());
	result = result & (EGL_HAS_GL_SGIX_polynomial_ffd = egl_Init_GL_SGIX_polynomial_ffd());
	result = result & (EGL_HAS_GL_SGIX_reference_plane = egl_Init_GL_SGIX_reference_plane());
	result = result & (EGL_HAS_GL_SGIX_flush_raster = egl_Init_GL_SGIX_flush_raster());
	result = result & (EGL_HAS_GL_SGIX_depth_texture = egl_Init_GL_SGIX_depth_texture());
	result = result & (EGL_HAS_GL_SGIS_fog_function = egl_Init_GL_SGIS_fog_function());
	result = result & (EGL_HAS_GL_SGIX_fog_offset = egl_Init_GL_SGIX_fog_offset());
	result = result & (EGL_HAS_GL_HP_image_transform = egl_Init_GL_HP_image_transform());
	result = result & (EGL_HAS_GL_HP_convolution_border_modes = egl_Init_GL_HP_convolution_border_modes());
	result = result & (EGL_HAS_GL_SGIX_texture_add_env = egl_Init_GL_SGIX_texture_add_env());
	result = result & (EGL_HAS_GL_EXT_color_subtable = egl_Init_GL_EXT_color_subtable());
	result = result & (EGL_HAS_GL_PGI_vertex_hints = egl_Init_GL_PGI_vertex_hints());
	result = result & (EGL_HAS_GL_PGI_misc_hints = egl_Init_GL_PGI_misc_hints());
	result = result & (EGL_HAS_GL_EXT_paletted_texture = egl_Init_GL_EXT_paletted_texture());
	result = result & (EGL_HAS_GL_EXT_clip_volume_hint = egl_Init_GL_EXT_clip_volume_hint());
	result = result & (EGL_HAS_GL_SGIX_list_priority = egl_Init_GL_SGIX_list_priority());
	result = result & (EGL_HAS_GL_SGIX_ir_instrument1 = egl_Init_GL_SGIX_ir_instrument1());
	result = result & (EGL_HAS_GL_SGIX_calligraphic_fragment = egl_Init_GL_SGIX_calligraphic_fragment());
	result = result & (EGL_HAS_GL_SGIX_texture_lod_bias = egl_Init_GL_SGIX_texture_lod_bias());
	result = result & (EGL_HAS_GL_SGIX_shadow_ambient = egl_Init_GL_SGIX_shadow_ambient());
	result = result & (EGL_HAS_GL_EXT_index_texture = egl_Init_GL_EXT_index_texture());
	result = result & (EGL_HAS_GL_EXT_index_material = egl_Init_GL_EXT_index_material());
	result = result & (EGL_HAS_GL_EXT_index_func = egl_Init_GL_EXT_index_func());
	result = result & (EGL_HAS_GL_EXT_index_array_formats = egl_Init_GL_EXT_index_array_formats());
	result = result & (EGL_HAS_GL_EXT_compiled_vertex_array = egl_Init_GL_EXT_compiled_vertex_array());
	result = result & (EGL_HAS_GL_EXT_cull_vertex = egl_Init_GL_EXT_cull_vertex());
	result = result & (EGL_HAS_GL_SGIX_ycrcb = egl_Init_GL_SGIX_ycrcb());
	result = result & (EGL_HAS_GL_SGIX_fragment_lighting = egl_Init_GL_SGIX_fragment_lighting());
	result = result & (EGL_HAS_GL_IBM_rasterpos_clip = egl_Init_GL_IBM_rasterpos_clip());
	result = result & (EGL_HAS_GL_HP_texture_lighting = egl_Init_GL_HP_texture_lighting());
	result = result & (EGL_HAS_GL_EXT_draw_range_elements = egl_Init_GL_EXT_draw_range_elements());
	result = result & (EGL_HAS_GL_WIN_phong_shading = egl_Init_GL_WIN_phong_shading());
	result = result & (EGL_HAS_GL_WIN_specular_fog = egl_Init_GL_WIN_specular_fog());
	result = result & (EGL_HAS_GL_EXT_light_texture = egl_Init_GL_EXT_light_texture());
	result = result & (EGL_HAS_GL_SGIX_blend_alpha_minmax = egl_Init_GL_SGIX_blend_alpha_minmax());
	result = result & (EGL_HAS_GL_EXT_bgra = egl_Init_GL_EXT_bgra());
	result = result & (EGL_HAS_GL_SGIX_async = egl_Init_GL_SGIX_async());
	result = result & (EGL_HAS_GL_SGIX_async_pixel = egl_Init_GL_SGIX_async_pixel());
	result = result & (EGL_HAS_GL_SGIX_async_histogram = egl_Init_GL_SGIX_async_histogram());
	result = result & (EGL_HAS_GL_INTEL_parallel_arrays = egl_Init_GL_INTEL_parallel_arrays());
	result = result & (EGL_HAS_GL_HP_occlusion_test = egl_Init_GL_HP_occlusion_test());
	result = result & (EGL_HAS_GL_EXT_pixel_transform = egl_Init_GL_EXT_pixel_transform());
	result = result & (EGL_HAS_GL_EXT_pixel_transform_color_table = egl_Init_GL_EXT_pixel_transform_color_table());
	result = result & (EGL_HAS_GL_EXT_shared_texture_palette = egl_Init_GL_EXT_shared_texture_palette());
	result = result & (EGL_HAS_GL_EXT_separate_specular_color = egl_Init_GL_EXT_separate_specular_color());
	result = result & (EGL_HAS_GL_EXT_secondary_color = egl_Init_GL_EXT_secondary_color());
	result = result & (EGL_HAS_GL_EXT_texture_perturb_normal = egl_Init_GL_EXT_texture_perturb_normal());
	result = result & (EGL_HAS_GL_EXT_multi_draw_arrays = egl_Init_GL_EXT_multi_draw_arrays());
	result = result & (EGL_HAS_GL_EXT_fog_coord = egl_Init_GL_EXT_fog_coord());
	result = result & (EGL_HAS_GL_REND_screen_coordinates = egl_Init_GL_REND_screen_coordinates());
	result = result & (EGL_HAS_GL_EXT_coordinate_frame = egl_Init_GL_EXT_coordinate_frame());
	result = result & (EGL_HAS_GL_EXT_texture_env_combine = egl_Init_GL_EXT_texture_env_combine());
	result = result & (EGL_HAS_GL_APPLE_specular_vector = egl_Init_GL_APPLE_specular_vector());
	result = result & (EGL_HAS_GL_APPLE_transform_hint = egl_Init_GL_APPLE_transform_hint());
	result = result & (EGL_HAS_GL_SGIX_fog_scale = egl_Init_GL_SGIX_fog_scale());
	result = result & (EGL_HAS_GL_SUNX_constant_data = egl_Init_GL_SUNX_constant_data());
	result = result & (EGL_HAS_GL_SUN_global_alpha = egl_Init_GL_SUN_global_alpha());
	result = result & (EGL_HAS_GL_SUN_triangle_list = egl_Init_GL_SUN_triangle_list());
	result = result & (EGL_HAS_GL_SUN_vertex = egl_Init_GL_SUN_vertex());
	result = result & (EGL_HAS_GL_EXT_blend_func_separate = egl_Init_GL_EXT_blend_func_separate());
	result = result & (EGL_HAS_GL_INGR_blend_func_separate = egl_Init_GL_INGR_blend_func_separate());
	result = result & (EGL_HAS_GL_INGR_color_clamp = egl_Init_GL_INGR_color_clamp());
	result = result & (EGL_HAS_GL_INGR_interlace_read = egl_Init_GL_INGR_interlace_read());
	result = result & (EGL_HAS_GL_EXT_stencil_wrap = egl_Init_GL_EXT_stencil_wrap());
	result = result & (EGL_HAS_GL_EXT_422_pixels = egl_Init_GL_EXT_422_pixels());
	result = result & (EGL_HAS_GL_NV_texgen_reflection = egl_Init_GL_NV_texgen_reflection());
	result = result & (EGL_HAS_GL_SUN_convolution_border_modes = egl_Init_GL_SUN_convolution_border_modes());
	result = result & (EGL_HAS_GL_EXT_texture_env_add = egl_Init_GL_EXT_texture_env_add());
	result = result & (EGL_HAS_GL_EXT_texture_lod_bias = egl_Init_GL_EXT_texture_lod_bias());
	result = result & (EGL_HAS_GL_EXT_texture_filter_anisotropic = egl_Init_GL_EXT_texture_filter_anisotropic());
	result = result & (EGL_HAS_GL_EXT_vertex_weighting = egl_Init_GL_EXT_vertex_weighting());
	result = result & (EGL_HAS_GL_NV_light_max_exponent = egl_Init_GL_NV_light_max_exponent());
	result = result & (EGL_HAS_GL_NV_vertex_array_range = egl_Init_GL_NV_vertex_array_range());
	result = result & (EGL_HAS_GL_NV_register_combiners = egl_Init_GL_NV_register_combiners());
	result = result & (EGL_HAS_GL_NV_fog_distance = egl_Init_GL_NV_fog_distance());
	result = result & (EGL_HAS_GL_NV_texgen_emboss = egl_Init_GL_NV_texgen_emboss());
	result = result & (EGL_HAS_GL_NV_blend_square = egl_Init_GL_NV_blend_square());
	result = result & (EGL_HAS_GL_NV_texture_env_combine4 = egl_Init_GL_NV_texture_env_combine4());
	result = result & (EGL_HAS_GL_MESA_resize_buffers = egl_Init_GL_MESA_resize_buffers());
	result = result & (EGL_HAS_GL_MESA_window_pos = egl_Init_GL_MESA_window_pos());
	result = result & (EGL_HAS_GL_IBM_cull_vertex = egl_Init_GL_IBM_cull_vertex());
	result = result & (EGL_HAS_GL_IBM_multimode_draw_arrays = egl_Init_GL_IBM_multimode_draw_arrays());
	result = result & (EGL_HAS_GL_IBM_vertex_array_lists = egl_Init_GL_IBM_vertex_array_lists());
	result = result & (EGL_HAS_GL_SGIX_subsample = egl_Init_GL_SGIX_subsample());
	result = result & (EGL_HAS_GL_SGIX_ycrcba = egl_Init_GL_SGIX_ycrcba());
	result = result & (EGL_HAS_GL_SGIX_ycrcb_subsample = egl_Init_GL_SGIX_ycrcb_subsample());
	result = result & (EGL_HAS_GL_SGIX_depth_pass_instrument = egl_Init_GL_SGIX_depth_pass_instrument());
	result = result & (EGL_HAS_GL_3DFX_texture_compression_FXT1 = egl_Init_GL_3DFX_texture_compression_FXT1());
	result = result & (EGL_HAS_GL_3DFX_multisample = egl_Init_GL_3DFX_multisample());
	result = result & (EGL_HAS_GL_3DFX_tbuffer = egl_Init_GL_3DFX_tbuffer());
	result = result & (EGL_HAS_GL_EXT_multisample = egl_Init_GL_EXT_multisample());
	result = result & (EGL_HAS_GL_SGIX_vertex_preclip = egl_Init_GL_SGIX_vertex_preclip());
	result = result & (EGL_HAS_GL_SGIX_convolution_accuracy = egl_Init_GL_SGIX_convolution_accuracy());
	result = result & (EGL_HAS_GL_SGIX_resample = egl_Init_GL_SGIX_resample());
	result = result & (EGL_HAS_GL_SGIS_point_line_texgen = egl_Init_GL_SGIS_point_line_texgen());
	result = result & (EGL_HAS_GL_SGIS_texture_color_mask = egl_Init_GL_SGIS_texture_color_mask());
	result = result & (EGL_HAS_GL_SGIX_igloo_interface = egl_Init_GL_SGIX_igloo_interface());
	result = result & (EGL_HAS_GL_EXT_texture_env_dot3 = egl_Init_GL_EXT_texture_env_dot3());
	result = result & (EGL_HAS_GL_ATI_texture_mirror_once = egl_Init_GL_ATI_texture_mirror_once());
	result = result & (EGL_HAS_GL_NV_fence = egl_Init_GL_NV_fence());
	result = result & (EGL_HAS_GL_NV_evaluators = egl_Init_GL_NV_evaluators());
	result = result & (EGL_HAS_GL_NV_packed_depth_stencil = egl_Init_GL_NV_packed_depth_stencil());
	result = result & (EGL_HAS_GL_NV_register_combiners2 = egl_Init_GL_NV_register_combiners2());
	result = result & (EGL_HAS_GL_NV_texture_compression_vtc = egl_Init_GL_NV_texture_compression_vtc());
	result = result & (EGL_HAS_GL_NV_texture_rectangle = egl_Init_GL_NV_texture_rectangle());
	result = result & (EGL_HAS_GL_NV_texture_shader = egl_Init_GL_NV_texture_shader());
	result = result & (EGL_HAS_GL_NV_texture_shader2 = egl_Init_GL_NV_texture_shader2());
	result = result & (EGL_HAS_GL_NV_vertex_array_range2 = egl_Init_GL_NV_vertex_array_range2());
	result = result & (EGL_HAS_GL_NV_vertex_program = egl_Init_GL_NV_vertex_program());
	result = result & (EGL_HAS_GL_SGIX_texture_coordinate_clamp = egl_Init_GL_SGIX_texture_coordinate_clamp());
	result = result & (EGL_HAS_GL_SGIX_scalebias_hint = egl_Init_GL_SGIX_scalebias_hint());
	result = result & (EGL_HAS_GL_OML_interlace = egl_Init_GL_OML_interlace());
	result = result & (EGL_HAS_GL_OML_subsample = egl_Init_GL_OML_subsample());
	result = result & (EGL_HAS_GL_OML_resample = egl_Init_GL_OML_resample());
	result = result & (EGL_HAS_GL_NV_copy_depth_to_color = egl_Init_GL_NV_copy_depth_to_color());
	result = result & (EGL_HAS_GL_ATI_envmap_bumpmap = egl_Init_GL_ATI_envmap_bumpmap());
	result = result & (EGL_HAS_GL_ATI_fragment_shader = egl_Init_GL_ATI_fragment_shader());
	result = result & (EGL_HAS_GL_ATI_pn_triangles = egl_Init_GL_ATI_pn_triangles());
	result = result & (EGL_HAS_GL_ATI_vertex_array_object = egl_Init_GL_ATI_vertex_array_object());
	result = result & (EGL_HAS_GL_EXT_vertex_shader = egl_Init_GL_EXT_vertex_shader());
	result = result & (EGL_HAS_GL_ATI_vertex_streams = egl_Init_GL_ATI_vertex_streams());
	result = result & (EGL_HAS_GL_ATI_element_array = egl_Init_GL_ATI_element_array());
	result = result & (EGL_HAS_GL_SUN_mesh_array = egl_Init_GL_SUN_mesh_array());
	result = result & (EGL_HAS_GL_SUN_slice_accum = egl_Init_GL_SUN_slice_accum());
	result = result & (EGL_HAS_GL_NV_multisample_filter_hint = egl_Init_GL_NV_multisample_filter_hint());
	result = result & (EGL_HAS_GL_NV_depth_clamp = egl_Init_GL_NV_depth_clamp());
	result = result & (EGL_HAS_GL_NV_occlusion_query = egl_Init_GL_NV_occlusion_query());
	result = result & (EGL_HAS_GL_NV_point_sprite = egl_Init_GL_NV_point_sprite());
	result = result & (EGL_HAS_GL_NV_texture_shader3 = egl_Init_GL_NV_texture_shader3());
	result = result & (EGL_HAS_GL_NV_vertex_program1_1 = egl_Init_GL_NV_vertex_program1_1());
	result = result & (EGL_HAS_GL_EXT_shadow_funcs = egl_Init_GL_EXT_shadow_funcs());
	result = result & (EGL_HAS_GL_EXT_stencil_two_side = egl_Init_GL_EXT_stencil_two_side());
	result = result & (EGL_HAS_GL_ATI_text_fragment_shader = egl_Init_GL_ATI_text_fragment_shader());
	result = result & (EGL_HAS_GL_APPLE_client_storage = egl_Init_GL_APPLE_client_storage());
	result = result & (EGL_HAS_GL_APPLE_element_array = egl_Init_GL_APPLE_element_array());
	result = result & (EGL_HAS_GL_APPLE_fence = egl_Init_GL_APPLE_fence());
	result = result & (EGL_HAS_GL_APPLE_vertex_array_object = egl_Init_GL_APPLE_vertex_array_object());
	result = result & (EGL_HAS_GL_APPLE_vertex_array_range = egl_Init_GL_APPLE_vertex_array_range());
	result = result & (EGL_HAS_GL_APPLE_ycbcr_422 = egl_Init_GL_APPLE_ycbcr_422());
	result = result & (EGL_HAS_GL_S3_s3tc = egl_Init_GL_S3_s3tc());
	result = result & (EGL_HAS_GL_ATI_draw_buffers = egl_Init_GL_ATI_draw_buffers());
	result = result & (EGL_HAS_GL_ATI_pixel_format_float = egl_Init_GL_ATI_pixel_format_float());
	result = result & (EGL_HAS_GL_ATI_texture_env_combine3 = egl_Init_GL_ATI_texture_env_combine3());
	result = result & (EGL_HAS_GL_ATI_texture_float = egl_Init_GL_ATI_texture_float());
	result = result & (EGL_HAS_GL_NV_float_buffer = egl_Init_GL_NV_float_buffer());
	result = result & (EGL_HAS_GL_NV_fragment_program = egl_Init_GL_NV_fragment_program());
	result = result & (EGL_HAS_GL_NV_half_float = egl_Init_GL_NV_half_float());
	result = result & (EGL_HAS_GL_NV_pixel_data_range = egl_Init_GL_NV_pixel_data_range());
	result = result & (EGL_HAS_GL_NV_primitive_restart = egl_Init_GL_NV_primitive_restart());
	result = result & (EGL_HAS_GL_NV_texture_expand_normal = egl_Init_GL_NV_texture_expand_normal());
	result = result & (EGL_HAS_GL_NV_vertex_program2 = egl_Init_GL_NV_vertex_program2());
	result = result & (EGL_HAS_GL_ATI_map_object_buffer = egl_Init_GL_ATI_map_object_buffer());
	result = result & (EGL_HAS_GL_ATI_separate_stencil = egl_Init_GL_ATI_separate_stencil());
	result = result & (EGL_HAS_GL_ATI_vertex_attrib_array_object = egl_Init_GL_ATI_vertex_attrib_array_object());
	result = result & (EGL_HAS_GL_OES_read_format = egl_Init_GL_OES_read_format());
	result = result & (EGL_HAS_GL_EXT_depth_bounds_test = egl_Init_GL_EXT_depth_bounds_test());
	result = result & (EGL_HAS_GL_EXT_texture_mirror_clamp = egl_Init_GL_EXT_texture_mirror_clamp());
	result = result & (EGL_HAS_GL_EXT_blend_equation_separate = egl_Init_GL_EXT_blend_equation_separate());
	result = result & (EGL_HAS_GL_MESA_pack_invert = egl_Init_GL_MESA_pack_invert());
	result = result & (EGL_HAS_GL_MESA_ycbcr_texture = egl_Init_GL_MESA_ycbcr_texture());
	result = result & (EGL_HAS_GL_EXT_pixel_buffer_object = egl_Init_GL_EXT_pixel_buffer_object());
	result = result & (EGL_HAS_GL_NV_fragment_program_option = egl_Init_GL_NV_fragment_program_option());
	result = result & (EGL_HAS_GL_NV_fragment_program2 = egl_Init_GL_NV_fragment_program2());
	result = result & (EGL_HAS_GL_NV_vertex_program2_option = egl_Init_GL_NV_vertex_program2_option());
	result = result & (EGL_HAS_GL_NV_vertex_program3 = egl_Init_GL_NV_vertex_program3());

	result = result & (EGL_HAS_GL_ARB_imaging = egl_hasExtension("GL_ARB_imaging"));
	result = result & (EGL_HAS_GL_EXT_texture_compression_s3tc = egl_hasExtension("GL_EXT_texture_compression_s3tc"));
	result = result & (EGL_HAS_GL_EXT_texture_cube_map = egl_hasExtension("GL_EXT_texture_cube_map"));
	result = result & (EGL_HAS_GL_FfdMaskSGIX = egl_hasExtension("GL_FfdMaskSGIX"));
	result = result & (EGL_HAS_GL_IBM_texture_mirrored_repeat = egl_hasExtension("GL_IBM_texture_mirrored_repeat"));
	result = result & (EGL_HAS_GL_INGR_palette_buffer = egl_hasExtension("GL_INGR_palette_buffer"));
	result = result & (EGL_HAS_GL_INTEL_texture_scissor = egl_hasExtension("GL_INTEL_texture_scissor"));
	result = result & (EGL_HAS_GL_SGIS_texture_select = egl_hasExtension("GL_SGIS_texture_select"));
	result = result & (EGL_HAS_GL_SGIX_impact_pixel_texture = egl_hasExtension("GL_SGIX_impact_pixel_texture"));
	result = result & (EGL_HAS_GL_SGI_color_matrix = egl_hasExtension("GL_SGI_color_matrix"));
	result = result & (EGL_HAS_GL_SGI_depth_pass_instrument = egl_hasExtension("GL_SGI_depth_pass_instrument"));

	return result;
}


#ifdef __cplusplus
}
#endif

