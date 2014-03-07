/*
 * Mesa 3-D graphics library
 *
 * Copyright (C) 2014  Brian Paul   All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "getprogram.h"
#include "errors.h"
#include "uniforms.h"
#include "shaderobj.h"

void GLAPIENTRY
_mesa_GetProgramInterfaceiv(GLuint program, GLenum programInterface,
                            GLenum pname, GLint *params)
{
   GET_CURRENT_CONTEXT(ctx);

   switch (pname) {
   case GL_ACTIVE_RESOURCES:
      switch (programInterface) {
      case GL_UNIFORM:
      {
         struct gl_shader_program *shProg =
               _mesa_lookup_shader_program_err(ctx, program,
                                               "glGetProgramInterfaceiv");

         if (shProg && shProg->LinkStatus) {
            *params = shProg->NumUserUniformStorage;
         }
      }
         break;

      case GL_UNIFORM_BLOCK:
      {
         struct gl_shader_program *shProg =
               _mesa_lookup_shader_program_err(ctx, program,
                                               "glGetProgramInterfaceiv");

         if (shProg && shProg->LinkStatus) {
            *params = shProg->NumUniformBlocks;
         }
      }
         break;

      case GL_ATOMIC_COUNTER_BUFFER:
      {
         struct gl_shader_program *shProg =
               _mesa_lookup_shader_program_err(ctx, program,
                                               "glGetProgramInterfaceiv");

         if (shProg && shProg->LinkStatus) {
            *params = shProg->NumAtomicBuffers;
         }
      }
         break;

      case GL_PROGRAM_INPUT:
      {
         struct gl_shader_program *shProg =
               _mesa_lookup_shader_program_err(ctx, program,
                                               "glGetProgramInterfaceiv");

         if (shProg && shProg->LinkStatus) {
            *params = _mesa_count_active_attribs(shProg);
         }
      }
         break;

      case GL_PROGRAM_OUTPUT:
      {
         struct gl_shader_program *shProg =
               _mesa_lookup_shader_program_err(ctx, program,
                                               "glGetProgramInterfaceiv");

         if (shProg && shProg->LinkStatus) {
            *params = _mesa_count_active_program_outputs(shProg);
         }
      }
         break;

      case GL_TRANSFORM_FEEDBACK_VARYING:
      {
         struct gl_shader_program *shProg =
               _mesa_lookup_shader_program_err(ctx, program,
                                               "glGetProgramInterfaceiv");

         if (shProg && shProg->LinkStatus) {
            *params = shProg->TransformFeedback.NumVarying;
         }
      }
         break;
      }

      break;
   case GL_MAX_NAME_LENGTH:

      break;
   case GL_MAX_NUM_ACTIVE_VARIABLES:

      break;
   case GL_MAX_NUM_COMPATIBLE_SUBROUTINES:
      _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramInterfaceiv");
      break;
   }


void GLAPIENTRY
_mesa_GetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname,
                            GLint *params)
{
   GET_CURRENT_CONTEXT(ctx);
   _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramInterfaceiv");
}

GLuint GLAPIENTRY
_mesa_GetProgramResourceIndex(GLuint program, GLenum programInterface,
                              const GLchar *name)
{
   GET_CURRENT_CONTEXT(ctx);
   _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramResourceIndex");
   return GL_INVALID_INDEX;
}

void GLAPIENTRY
_mesa_GetProgramResourceName(GLuint program, GLenum programInterface, GLuint index,
                             GLsizei bufSize, GLsizei *length, GLchar *name)
{
   GET_CURRENT_CONTEXT(ctx);
   _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramResourceName");
}

void GLAPIENTRY
_mesa_GetProgramResourceiv(GLuint program, GLenum programInterface,
                           GLuint index, GLsizei propCount,
                           const GLenum *props, GLsizei bufSize,
                           GLsizei *length, GLint *params)
{
   GET_CURRENT_CONTEXT(ctx);
   _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramResourceiv");
}

GLint GLAPIENTRY
_mesa_GetProgramResourceLocation(GLuint program, GLenum programInterface,
                                 const GLchar *name)
{
   GET_CURRENT_CONTEXT(ctx);
   _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramResourceLocation");
   return GL_INVALID_INDEX;
}

GLint GLAPIENTRY
_mesa_GetProgramResourceLocationIndex(GLuint program, GLenum programInterface,
                                      const GLchar *name)
{
   GET_CURRENT_CONTEXT(ctx);
   _mesa_error(ctx, GL_INVALID_OPERATION, "glGetProgramResourceLocationIndex");
   return GL_INVALID_INDEX;
}
