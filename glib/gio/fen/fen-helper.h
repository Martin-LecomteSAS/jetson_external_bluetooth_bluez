/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* vim:set expandtab ts=4 shiftwidth=4: */
/* 
 * Copyright (c) 2008, 2010 Oracle and/or its affiliates, Inc. All rights
 * reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authors: Lin Ma <lin.ma@sun.com>
 */

#ifndef _FEN_HELPER_H_
#define _FEN_HELPER_H_

void fen_add (const gchar *filename, gpointer sub, gboolean is_mondir);
void fen_remove (const gchar *filename, gpointer sub, gboolean is_mondir);

gboolean fen_init ();

#endif /* _FEN_HELPER_H_ */
