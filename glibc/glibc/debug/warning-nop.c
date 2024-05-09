/* Dummy nop functions to elicit link-time warnings.
   Copyright (C) 2005-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   In addition to the permissions in the GNU Lesser General Public
   License, the Free Software Foundation gives you unlimited
   permission to link the compiled version of this file with other
   programs, and to distribute those programs without any restriction
   coming from the use of this file. (The GNU Lesser General Public
   License restrictions do apply in other respects; for example, they
   cover modification of the file, and distribution when not linked
   into another program.)

   Note that people who make modified versions of this file are not
   obligated to grant this special exception for their modified
   versions; it is their choice whether to do so. The GNU Lesser
   General Public License gives permission to release a modified
   version without this exception; this exception also makes it
   possible to release a modified version which carries forward this
   exception.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <sys/cdefs.h>

static void
__attribute__ ((used))
nop (void)
{
}

/* Don't insert any other #include's before this #undef!  */

#undef __warndecl
#define __warndecl(name, msg) \
  extern void name (void) __attribute__ ((alias ("nop"))) attribute_hidden; \
  link_warning (name, msg)

#undef	__USE_FORTIFY_LEVEL
#define __USE_FORTIFY_LEVEL 99

/* Following here we need an #include for each public header file
   that uses __warndecl.  */

/* Define away to avoid warnings with compilers that do not have these
   builtins.  */
#define __builtin___memcpy_chk(dest, src, len, bos) NULL
#define __builtin___memmove_chk(dest, src, len, bos) NULL
#define __builtin___mempcpy_chk(dest, src, len, bos) NULL
#define __builtin___memset_chk(dest, ch, len, bos) NULL
#define __builtin___stpcpy_chk(dest, src, bos) NULL
#define __builtin___strcat_chk(dest, src, bos) NULL
#define __builtin___strcpy_chk(dest, src, bos) NULL
#define __builtin___strncat_chk(dest, src, len, bos) NULL
#define __builtin___strncpy_chk(dest, src, len, bos) NULL
#define __builtin_object_size(bos, level) 0

#include <string.h>
