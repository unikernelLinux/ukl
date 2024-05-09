/* Read a directory in reentrant mode.  Linux LFS version.
   Copyright (C) 1997-2020 Free Software Foundation, Inc.
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

/* When _DIRENT_MATCHES_DIRENT64 is defined we can alias 'readdir64' to
   'readdir'.  However the function signatures are not equal due
   different return types, so we need to suppress {__}readdir so weak
   and strong alias do not throw conflicting types errors.  */
#define readdir_r   __no_readdir_r_decl
#define __readdir_r __no___readdir_r_decl
#include <dirent.h>

#define __READDIR_R __readdir64_r
#define __GETDENTS  __getdents64
#define DIRENT_TYPE struct dirent64

#include <sysdeps/posix/readdir_r.c>

#undef __readdir_r
#undef readdir_r

#if _DIRENT_MATCHES_DIRENT64
strong_alias (__readdir64_r, __readdir_r)
weak_alias (__readdir64_r, readdir_r)
weak_alias (__readdir64_r, readdir64_r)
#else
/* The compat code expects the 'struct direct' with d_ino being a __ino_t
   instead of __ino64_t.  */
# include <shlib-compat.h>
versioned_symbol (libc, __readdir64_r, readdir64_r, GLIBC_2_2);
# if SHLIB_COMPAT(libc, GLIBC_2_1, GLIBC_2_2)
#  include <olddirent.h>
#  define __READDIR_R attribute_compat_text_section __old_readdir64_r
#  define __GETDENTS  __old_getdents64
#  define DIRENT_TYPE struct __old_dirent64
#  include <sysdeps/posix/readdir_r.c>
compat_symbol (libc, __old_readdir64_r, readdir64_r, GLIBC_2_1);
# endif /* SHLIB_COMPAT(libc, GLIBC_2_1, GLIBC_2_2)  */
#endif /* _DIRENT_MATCHES_DIRENT64  */
