/*
 * IBM Accurate Mathematical Library
 * Written by International Business Machines Corp.
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

/************************************************************************/
/*  MODULE_NAME: mpa.h                                                  */
/*                                                                      */
/*  FUNCTIONS:                                                          */
/*               mcr                                                    */
/*               acr                                                    */
/*               cpy                                                    */
/*               mp_dbl                                                 */
/*               dbl_mp                                                 */
/*               add                                                    */
/*               sub                                                    */
/*               mul                                                    */
/*               dvd                                                    */
/*                                                                      */
/* Arithmetic functions for multiple precision numbers.                 */
/* Common types and definition                                          */
/************************************************************************/

#include <mpa-arch.h>

/* The mp_no structure holds the details of a multi-precision floating point
   number.

   - The radix of the number (R) is 2 ^ 24.

   - E: The exponent of the number.

   - D[0]: The sign (-1, 1) or 0 if the value is 0.  In the latter case, the
     values of the remaining members of the structure are ignored.

   - D[1] - D[p]: The mantissa of the number where:

	0 <= D[i] < R and
	P is the precision of the number and 1 <= p <= 32

     D[p+1] ... D[39] have no significance.

   - The value of the number is:

	D[1] * R ^ (E - 1) + D[2] * R ^ (E - 2) ... D[p] * R ^ (E - p)

   */
typedef struct
{
  int e;
  mantissa_t d[40];
} mp_no;

typedef union
{
  int i[2];
  double d;
} number;

extern const mp_no __mpone;
extern const mp_no __mptwo;

#define  X   x->d
#define  Y   y->d
#define  Z   z->d
#define  EX  x->e
#define  EY  y->e
#define  EZ  z->e

#ifndef RADIXI
# define  RADIXI    0x1.0p-24		/* 2^-24   */
#endif

#ifndef TWO52
# define  TWO52     0x1.0p52		/* 2^52    */
#endif

#define  TWO5      TWOPOW (5)		/* 2^5     */
#define  TWO8      TWOPOW (8)		/* 2^52    */
#define  TWO10     TWOPOW (10)		/* 2^10    */
#define  TWO18     TWOPOW (18)		/* 2^18    */
#define  TWO19     TWOPOW (19)		/* 2^19    */
#define  TWO23     TWOPOW (23)		/* 2^23    */

#define  HALFRAD   TWO23

#define  TWO57     0x1.0p57		/* 2^57    */
#define  TWO71     0x1.0p71		/* 2^71    */
#define  TWOM1032  0x1.0p-1032		/* 2^-1032 */
#define  TWOM1022  0x1.0p-1022		/* 2^-1022 */

#define  HALF      0x1.0p-1		/* 1/2 */
#define  MHALF     -0x1.0p-1		/* -1/2 */

int __acr (const mp_no *, const mp_no *, int);
void __cpy (const mp_no *, mp_no *, int);
void __mp_dbl (const mp_no *, double *, int);
void __dbl_mp (double, mp_no *, int);
void __add (const mp_no *, const mp_no *, mp_no *, int);
void __sub (const mp_no *, const mp_no *, mp_no *, int);
void __mul (const mp_no *, const mp_no *, mp_no *, int);
void __sqr (const mp_no *, mp_no *, int);
void __dvd (const mp_no *, const mp_no *, mp_no *, int);

extern void __mpatan (mp_no *, mp_no *, int);
extern void __mpatan2 (mp_no *, mp_no *, mp_no *, int);
extern void __mpsqrt (mp_no *, mp_no *, int);
extern void __c32 (mp_no *, mp_no *, mp_no *, int);
extern int __mpranred (double, mp_no *, int);
