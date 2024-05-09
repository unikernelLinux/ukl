/*
 * IBM Accurate Mathematical Library
 * written by International Business Machines Corp.
 * Copyright (C) 2001-2020 Free Software Foundation, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses/>.
 */
/****************************************************************************/
/*  MODULE_NAME:mpsqrt.c                                                    */
/*                                                                          */
/*  FUNCTION:mpsqrt                                                         */
/*           fastiroot                                                      */
/*                                                                          */
/* FILES NEEDED:endian.h mpa.h mpsqrt.h                                     */
/*              mpa.c                                                       */
/* Multi-Precision square root function subroutine for precision p >= 4.    */
/* The relative error is bounded by 3.501*r**(1-p), where r=2**24.          */
/*                                                                          */
/****************************************************************************/
#include "endian.h"
#include "mpa.h"

#ifndef SECTION
# define SECTION
#endif

#include "mpsqrt.h"

/****************************************************************************/
/* Multi-Precision square root function subroutine for precision p >= 4.    */
/* The relative error is bounded by 3.501*r**(1-p), where r=2**24.          */
/* Routine receives two pointers to  Multi Precision numbers:               */
/* x (left argument) and y (next argument). Routine also receives precision */
/* p as integer. Routine computes sqrt(*x) and stores result in *y          */
/****************************************************************************/

static double fastiroot (double);

void
SECTION
__mpsqrt (mp_no *x, mp_no *y, int p)
{
  int i, m, ey;
  double dx, dy;
  static const mp_no mphalf = {0, {1.0, HALFRAD}};
  static const mp_no mp3halfs = {1, {1.0, 1.0, HALFRAD}};
  mp_no mpxn, mpz, mpu, mpt1, mpt2;

  ey = EX / 2;
  __cpy (x, &mpxn, p);
  mpxn.e -= (ey + ey);
  __mp_dbl (&mpxn, &dx, p);
  dy = fastiroot (dx);
  __dbl_mp (dy, &mpu, p);
  __mul (&mpxn, &mphalf, &mpz, p);

  m = __mpsqrt_mp[p];
  for (i = 0; i < m; i++)
    {
      __sqr (&mpu, &mpt1, p);
      __mul (&mpt1, &mpz, &mpt2, p);
      __sub (&mp3halfs, &mpt2, &mpt1, p);
      __mul (&mpu, &mpt1, &mpt2, p);
      __cpy (&mpt2, &mpu, p);
    }
  __mul (&mpxn, &mpu, y, p);
  EY += ey;
}

/***********************************************************/
/* Compute a double precision approximation for 1/sqrt(x)  */
/* with the relative error bounded by 2**-51.              */
/***********************************************************/
static double
SECTION
fastiroot (double x)
{
  union
  {
    int i[2];
    double d;
  } p, q;
  double y, z, t;
  int n;
  static const double c0 = 0.99674, c1 = -0.53380;
  static const double c2 = 0.45472, c3 = -0.21553;

  p.d = x;
  p.i[HIGH_HALF] = (p.i[HIGH_HALF] & 0x3FFFFFFF) | 0x3FE00000;
  q.d = x;
  y = p.d;
  z = y - 1.0;
  n = (q.i[HIGH_HALF] - p.i[HIGH_HALF]) >> 1;
  z = ((c3 * z + c2) * z + c1) * z + c0;	/* 2**-7         */
  z = z * (1.5 - 0.5 * y * z * z);		/* 2**-14        */
  p.d = z * (1.5 - 0.5 * y * z * z);		/* 2**-28        */
  p.i[HIGH_HALF] -= n;
  t = x * p.d;
  return p.d * (1.5 - 0.5 * p.d * t);
}
