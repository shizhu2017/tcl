#include <tommath.h>
#ifdef BN_MP_SET_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is a library that provides multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library was designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@iahu.ca, http://math.libtomcrypt.org
 */

/* set to a digit */
void mp_set (mp_int * a, mp_digit b)
{
  mp_zero (a);
  a->dp[0] = b & MP_MASK;
  a->used  = (a->dp[0] != 0) ? 1 : 0;
}
#endif

/* $Source: /root/tcl/repos-to-convert/tcl/libtommath/bn_mp_set.c,v $ */
/* $Revision: 1.1.1.1.2.1 $ */
/* $Date: 2005/09/26 20:16:53 $ */
