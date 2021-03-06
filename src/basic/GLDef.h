//
//  GLDef.h
//  Application3D
//
//  Created by CharlyZhang on 16/7/20.
//  Copyright © 2016年 CharlyZhang. All rights reserved.
//

#ifndef GLDef_h
#define GLDef_h

//////////////////////////////////////////////////////////////////////////
//	OpenGL definition
//////////////////////////////////////////////////////////////////////////
//// iOS
#if defined(__APPLE__)
//# import <OpenGLES/ES1/gl.h>
//# import <OpenGLES/ES1/glext.h>
# import <OpenGLES/ES2/gl.h>
# import <OpenGLES/ES2/glext.h>
# define GL_GEN_VERTEXARRAY(n,arr)  glGenVertexArraysOES(n, arr)
# define GL_BIND_VERTEXARRAY(id)    glBindVertexArrayOES(id)
# define GL_DEL_VERTEXARRAY(n,arr)  glDeleteVertexArraysOES(n,arr)
# define USE_OPENGL_ES

//// Windows
#elif defined(_WIN32)
//# include <gl/GL.h>
//# include <gl/GLU.h>
# include "glew.h"
# include "glut.h"
# define USE_OPENGL

//// Android
#else
# include <GLES2/gl2.h>
# define GL_GLEXT_PROTOTYPES
# include <GLES2/gl2ext.h>
# define GL_GEN_VERTEXARRAY(n,arr)
# define GL_BIND_VERTEXARRAY(id)
# define GL_DEL_VERTEXARRAY(n,arr)
# define USE_OPENGL_ES
#endif

#if defined USE_OPENGL

/// type

/// functions
# define GL_GEN_VERTEXARRAY(n,arr)	glGenVertexArrays(n, arr)
# define GL_BIND_VERTEXARRAY(id)	glBindVertexArray(id)
# define GL_DEL_VERTEXARRAY(n,arr)	glDeleteVertexArrays(n,arr)
# define GL_DRAW_BUF(arr)           glDrawBuffer(arr)
# define GL_PUSH_ATTR(arr)          glPushAttrib(arr)
# define GL_POP_ATTR()              glPopAttrib()

#elif defined USE_OPENGL_ES

/// type
# define GL_RGB8					GL_RGB8_OES
# define GL_RGBA8					GL_RGBA8_OES

/// functions

# define GL_DRAW_BUF(arr)
# define GL_PUSH_ATTR(arr)
# define GL_POP_ATTR()
#endif

#endif /* GLDef_h */
