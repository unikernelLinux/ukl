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

CLEANFILES = *~ *.o *.a

clean-local:
	-cd libsodium-1.0.18 && $(MAKE) clean
	-cd ec528_secrecy && $(MAKE) clean

distclean-local:
	rm -rf libsodium-1.0.18

# Libraries built in the top build directory.
CRT_STARTS  = $(abs_top_builddir)/crt1.o $(abs_top_builddir)/crti.o \
	      $(abs_top_builddir)/crtbeginT.o
CRT_ENDS    = $(abs_top_builddir)/crtend.o $(abs_top_builddir)/crtn.o
C_LIB       = $(abs_top_builddir)/libc.a
PTHREAD_LIB = $(abs_top_builddir)/libpthread.a
RT_LIB      = $(abs_top_builddir)/librt.a
MATH_LIB    = $(abs_top_builddir)/libm.a
GCC_LIBS    = $(abs_top_builddir)/libgcc.a $(abs_top_builddir)/libgcc_eh.a

AM_CFLAGS   = -no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel -static

noinst_DATA = UKL.a

UKL.a: secrecy.o undefined_sys_hack.o
	rm -f $@
	ar cr UKL.a $^
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names UKL.a

# Build libsodium.
libsodium.a: stamp-libsodium-dir
	rm -f $@
	-cd libsodium-1.0.18 && $(MAKE) clean
	cd libsodium-1.0.18 && \
	./configure CFLAGS='-no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel' --enable-static --disable-shared && \
	make --trace
	cp libsodium-1.0.18/src/libsodium/.libs/libsodium.a .

if ENABLE_BYPASS
SECRECY_TARGET = secrecy-bypass
else
if ENABLE_SHORTCUT
SECRECY_TARGET = secrecy-shortcut
else
SECRECY_TARGET = secrecy
endif
endif

# Build secrecy.
secrecy.o: stamp-secrecy-dir libsodium.a
	rm -f $@
	-cd ec528_secrecy && $(MAKE) clean
	cd ec528_secrecy && \
	make --trace $(SECRECY_TARGET)
	cd ec528_secrecy && \
	ld -r -o ../$@ --allow-multiple-definition \
	    $(CRT_STARTS) \
	    exp_group_by.o \
	    --start-group \
	    src/libsecrecy.a \
	    ../libsodium.a \
	    --whole-archive $(RT_LIB) $(PTHREAD_LIB) $(MATH_LIB) $(C_LIB) --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group \
	    $(CRT_ENDS)

# Check out a local copy of libsodium.
stamp-libsodium-dir:
	rm -f $@
	if ! test -d libsodium-1.0.18; then \
	    curl https://download.libsodium.org/libsodium/releases/libsodium-1.0.18.tar.gz --output libsodium-1.0.18.tar.gz; \
            tar xf libsodium-1.0.18.tar.gz; \
            rm -f tar xf libsodium-1.0.18.tar.gz; \
	fi
	touch $@

# Check out a local copy of memcached.
stamp-secrecy-dir:
	rm -f $@
	if ! test -d ec528_secrecy; then \
	    git clone git@github.com:jliagouris/ec528_secrecy.git; \
	fi
	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@
