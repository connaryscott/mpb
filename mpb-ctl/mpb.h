/* Copyright (C) 1999, 2000, 2001 Massachusetts Institute of Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MPB_H
#define MPB_H

/* definitions common to different files in the mpb-ctl directory */

#include <maxwell.h>

extern void get_epsilon_file_func(const char *fname,
				  maxwell_dielectric_function *func,
				  void **func_data);
extern void destroy_epsilon_file_func_data(void *func_data);

extern real linear_interpolate(real rx, real ry, real rz,
			       real *data, int nx, int ny, int nz, int stride);

#endif /* MPB_H */
