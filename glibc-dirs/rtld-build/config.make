# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.31
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /home/vraiti/ukl/ukl/glibc
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib
bindir = ${exec_prefix}/bin
slibdir = 
rtlddir = 
complocaledir = 
sysconfdir = ${prefix}/etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = 
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = ${prefix}/var
localedir = ${datarootdir}/locale
multidir= .

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = sysdeps/unix/sysv/linux/x86_64/ldd-rewrite.sed

# System configuration.
config-machine = x86_64
base-machine = x86_64
config-vendor = pc
config-os = ukl
config-sysdirs =  sysdeps/unix/sysv/linux/ukl sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64/wordsize-64 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-extra-cppflags = 
config-cflags-nofma = -ffp-contract=off

defines = 
sysheaders = /home/vraiti/ukl/ukl/glibc/../linux-headers
sysincludes = -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/12/include -isystem /home/vraiti/ukl/ukl/glibc/../linux-headers
c++-sysincludes =  -isystem /usr/include/c++/12 -isystem /usr/include/x86_64-linux-gnu/c++/12 -isystem /usr/include/c++/12/backward
c++-cstdlib-header = /usr/include/c++/12/cstdlib
c++-cmath-header = /usr/include/c++/12/cmath
c++-bits-std_abs-h = /usr/include/c++/12/bits/std_abs.h
all-warnings = 
enable-werror = no

have-z-combreloc = yes
have-z-execstack = yes
have-protected-data = no
have-insert = yes
have-glob-dat-reloc = yes
with-fp = yes
enable-timezone-tools = yes
unwind-find-fde = no
have-fpie = yes
have-ssp = yes
stack-protector = -fno-stack-protector
no-stack-protector = -fno-stack-protector -DSTACK_PROTECTOR_LEVEL=0
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
fno-unit-at-a-time = -fno-toplevel-reorder -fno-section-anchors
bind-now = no
have-hash-style = yes
use-default-link = yes
output-format = elf64-x86-64
have-cxx-thread_local = yes
have-loop-to-function = yes
have-textrel_ifunc = yes

multi-arch = default

mach-interface-list = 

experimental-malloc = yes

nss-crypt = no
static-nss-crypt = no

# Configuration options.
build-shared = yes
build-pic-default= yes
build-pie-default= yes
cc-pie-default= yes
build-profile = no
build-static-nss = no
cross-compiling = no
force-install = yes
link-obsolete-rpc = no
build-obsolete-nsl = no
build-crypt = yes
build-nscd = no
use-nscd = no
build-hardcoded-path-in-tests= no
build-pt-chown = no
have-tunables = no

# Build tools.
CC = gcc
CXX = g++
BUILD_CC = 
CFLAGS = -g -O2 -mno-red-zone -fthread-jumps
CPPFLAGS-config = 
CPPUNDEFS = 
extra-nonshared-cflags = 
ASFLAGS-config =  -Wa,--noexecstack
AR = ar
NM = nm
MAKEINFO = :
AS = $(CC) -c
BISON = bison
AUTOCONF = no
OBJDUMP = objdump
OBJCOPY = objcopy
GPROF = gprof
READELF = readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
LN_S = ln -s
MSGFMT = :

# Script execution tools.
BASH = /usr/bin/bash
AWK = gawk
PERL = /usr/bin/perl
PYTHON = python3 -B

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (GNU libc) 
PKGVERSION_TEXI = (GNU libc) 
REPORT_BUGS_TO = <https://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{https://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

have-no-dynamic-linker = yes
have-static-pie = yes
have-mtls-dialect-gnu2 = yes
config-cflags-avx512 = yes
config-cflags-mprefer-vector-width = yes
enable-cet = no
build-mathvec = yes
have-ifunc = yes
enable-static-pie = no
