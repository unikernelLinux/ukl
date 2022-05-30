# Unikernel Linux
# Copyright (C) 2018-2022 Red Hat Inc., Boston University,
# Ali Raza, Tommy Unger, Eric Munson, Richard W.M. Jones.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

AC_INIT([UKL], 1.0.0)

dnl This must be used very early else you will get
dnl "warning: AC_RUN_IFELSE was called before AC_USE_SYSTEM_EXTENSIONS"
m4_ifdef([AC_USE_SYSTEM_EXTENSIONS],[],
         [m4_define([AC_USE_SYSTEM_EXTENSIONS],[])])
AC_USE_SYSTEM_EXTENSIONS

dnl NB: Do not [quote] this parameter.
AM_INIT_AUTOMAKE(foreign)

dnl Check for basic C environment.
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_CPP
AC_SYS_LARGEFILE

AC_C_PROTOTYPES
test "x$U" != "x" && AC_MSG_ERROR([Compiler not ANSI compliant])

AM_PROG_CC_C_O

dnl Misc programs.
AC_PROG_SED

dnl Control glibc bypass.
AC_MSG_CHECKING([if we should enable glibc bypass])
AC_ARG_ENABLE([bypass],
    [AS_HELP_STRING([--enable-bypass],
        [enable glibc bypass (UKL_BP) @<:@default=no@:>@])],
        [ENABLE_BYPASS="$enableval"],
        [ENABLE_BYPASS="no"])
AM_CONDITIONAL([ENABLE_BYPASS], [test "x$ENABLE_BYPASS" = "xyes"])
AC_MSG_RESULT([$ENABLE_BYPASS])

dnl Produce output files.
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
