/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

/*
 * scalbn (double x, int n)
 * scalbn(x,n) returns x* 2**n  computed by  exponent
 * manipulation rather than by actually performing an
 * exponentiation or a multiplication.
 */

#include <math.h>
#include <math_private.h>

static const double
  two54 = 1.80143985094819840000e+16,  /* 0x43500000, 0x00000000 */
  twom54 = 5.55111512312578270212e-17, /* 0x3C900000, 0x00000000 */
  huge = 1.0e+300,
  tiny = 1.0e-300;

double
__scalbln (double x, long int n)
{
  int32_t k, hx, lx;
  EXTRACT_WORDS (hx, lx, x);
  k = (hx & 0x7ff00000) >> 20;                  /* extract exponent */
  if (__glibc_unlikely (k == 0))                   /* 0 or subnormal x */
    {
      if ((lx | (hx & 0x7fffffff)) == 0)
	return x;                                  /* +-0 */
      x *= two54;
      GET_HIGH_WORD (hx, x);
      k = ((hx & 0x7ff00000) >> 20) - 54;
    }
  if (__glibc_unlikely (k == 0x7ff))
    return x + x;                                       /* NaN or Inf */
  if (__glibc_unlikely (n < -50000))
    return tiny * copysign (tiny, x);   /*underflow*/
  if (__glibc_unlikely (n > 50000 || k + n > 0x7fe))
    return huge * copysign (huge, x);   /* overflow  */
  /* Now k and n are bounded we know that k = k+n does not
     overflow.  */
  k = k + n;
  if (__glibc_likely (k > 0))                    /* normal result */
    {
      SET_HIGH_WORD (x, (hx & 0x800fffff) | (k << 20)); return x;
    }
  if (k <= -54)
    return tiny * copysign (tiny, x);         /*underflow*/
  k += 54;                                      /* subnormal result */
  SET_HIGH_WORD (x, (hx & 0x800fffff) | (k << 20));
  return x * twom54;
}
#ifdef NO_LONG_DOUBLE
strong_alias (__scalbln, __scalblnl)
#endif
