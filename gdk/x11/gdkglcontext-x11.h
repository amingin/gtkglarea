/* 
 * Copyright (C) 1998 Janne L�f <jlof@mail.student.oulu.fi>
 * Copyright (C) 2007 C.J. Adams-Collier <cjac@colliertech.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __GDK_GL_CONTEXT_X11_H__
#define __GDK_GL_CONTEXT_X11_H__

#include "gdk/gdkglcontext.h"

struct _GdkGLContext {
  GObject     parent;
  Display    *xdisplay;
  GLXContext  glxcontext;
};

#define /* __GDK_GL_CONTEXT_X11_H__ */
