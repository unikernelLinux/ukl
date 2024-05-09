/* Multiple versions of wcsnlen.
   All versions must be listed in ifunc-impl-list.c.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

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

/* Define multiple versions only for the definition in libc.  */
#if IS_IN (libc)
# define __wcsnlen __redirect_wcsnlen
# include <wchar.h>
# undef __wcsnlen

# define SYMBOL_NAME wcsnlen
# include <init-arch.h>

extern __typeof (REDIRECT_NAME) OPTIMIZE (sse2) attribute_hidden;
extern __typeof (REDIRECT_NAME) OPTIMIZE (sse4_1) attribute_hidden;
extern __typeof (REDIRECT_NAME) OPTIMIZE (avx2) attribute_hidden;

static inline void *
IFUNC_SELECTOR (void)
{
  const struct cpu_features* cpu_features = __get_cpu_features ();

  if (!CPU_FEATURES_ARCH_P (cpu_features, Prefer_No_VZEROUPPER)
      && CPU_FEATURES_ARCH_P (cpu_features, AVX2_Usable)
      && CPU_FEATURES_ARCH_P (cpu_features, AVX_Fast_Unaligned_Load))
    return OPTIMIZE (avx2);

  if (CPU_FEATURES_CPU_P (cpu_features, SSE4_1))
    return OPTIMIZE (sse4_1);

  return OPTIMIZE (sse2);
}

libc_ifunc_redirected (__redirect_wcsnlen, __wcsnlen, IFUNC_SELECTOR ());
weak_alias (__wcsnlen, wcsnlen);
#endif
