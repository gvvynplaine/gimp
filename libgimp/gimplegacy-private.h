/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-1997 Peter Mattis and Spencer Kimball
 *
 * gimplegacy-private.h
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_LEGACY_PRIVATE_H__
#define __GIMP_LEGACY_PRIVATE_H__

G_BEGIN_DECLS


void   _gimp_legacy_initialize      (const GimpPlugInInfo *info,
                                     GIOChannel           *read_channel,
                                     GIOChannel           *write_channel);

void   _gimp_legacy_query           (void);
void   _gimp_legacy_init            (void);
void   _gimp_legacy_run             (void);
void   _gimp_legacy_quit            (void);

void   _gimp_legacy_read_expect_msg (GimpWireMessage      *msg,
                                     gint                  type);


G_END_DECLS

#endif /* __GIMP_PRIVATE_H__ */