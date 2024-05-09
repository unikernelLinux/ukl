/* Compute x * y + z as ternary operation.  S/390 version.
   Copyright (C) 2010-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Jakub Jelinek <jakub@redhat.com>, 2010.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <math.h>
#include <libm-alias-double.h>

double
__fma (double x, double y, double z)
{
  double r;
  __asm__ ("madbr %0,%1,%2" : "=f" (r) : "%f" (x), "fR" (y), "0" (z));
  return r;
}
#ifndef __fma
libm_alias_double (__fma, fma)
#endif
