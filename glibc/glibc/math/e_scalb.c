/* Copyright (C) 2011-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@gmail.com>, 2011.

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
#include <math_private.h>
#include <libm-alias-finite.h>

static double
__attribute__ ((noinline))
invalid_fn (double x, double fn)
{
  if (rint (fn) != fn)
    return (fn - fn) / (fn - fn);
  else if (fn > 65000.0)
    return __scalbn (x, 65000);
  else
    return __scalbn (x,-65000);
}


double
__ieee754_scalb (double x, double fn)
{
  if (__glibc_unlikely (isnan (x)))
    return x * fn;
  if (__glibc_unlikely (!isfinite (fn)))
    {
      if (isnan (fn) || fn > 0.0)
	return x * fn;
      if (x == 0.0)
	return x;
      return x / -fn;
    }
  if (__glibc_unlikely (fabs (fn) >= 0x1p31 || (double) (int) fn != fn))
    return invalid_fn (x, fn);

  return __scalbn (x, (int) fn);
}
libm_alias_finite (__ieee754_scalb, __scalb)
