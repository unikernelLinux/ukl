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
#	-cd depot_tools && $(MAKE) clean
	-cd v8 && $(MAKE) clean

distclean-local:
	rm -rf depot_tools

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

UKL.a: v8.o undefined_sys_hack.o
	rm -f $@
	ar cr UKL.a $^
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names UKL.a

# Build libsodium.
#libsodium.a: stamp-libsodium-dir
#	rm -f $@
#	-cd libsodium-1.0.18 && $(MAKE) clean
#	cd libsodium-1.0.18 && \
#	./configure CFLAGS='-no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel' --enable-static --disable-shared && \
#	make --trace
#	cp libsodium-1.0.18/src/libsodium/.libs/libsodium.a .

if ENABLE_BYPASS
V8_TARGET = v8-bypass
else
if ENABLE_SHORTCUT
V8_TARGET = v8-shortcut
else
V8_TARGET = v8
endif
endif

# Build v8.
v8.o: stamp-depot_tools-dir stamp-v8-dir out.gn/x64.release.sample/obj/libv8_monolith.a
	rm -f $@
	if ! test -d v8.o; then \
		cp support/theotherMakefile v8/Makefile;\
		cd v8; make; \
		pwd; \
	fi
	touch $@

# Check out a local copy of depot_tools.
stamp-depot_tools-dir:
	rm -f $@
	if ! test -d depot_tools; then \
	    git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git; \
	fi
	touch $@

# Check out a local copy of v8. From refs/tags/10.2.154
stamp-v8-dir:
	rm -f $@
	if ! test -d v8; then \
	    export PATH=/home/jonocameron/Documents/ukl/v8/depot_tools:$(PATH); git clone -b 10.2.154 https://chromium.googlesource.com/v8/v8.git; \
	fi
	touch $@

# Produce v8_monolith static library. out.gn/x64.release.sample/obj/libv8_monolith.a
out.gn/x64.release.sample/obj/libv8_monolith.a:
	rm -f $@
	if ! test -d out.gn/x64.release.sample/obj/libv8_monolith.a; then \
		export PATH=/home/jonocameron/Documents/ukl/v8/depot_tools:$(PATH); gclient sync -D; \
		cd v8; export PATH=/home/jonocameron/Documents/ukl/v8/depot_tools:$(PATH); gn gen out.gn/x64.release.sample --args='dcheck_always_on=false is_component_build=false is_debug=false target_cpu="x64" use_custom_libcxx=false v8_monolithic=true v8_use_external_startup_data=false is_clang=false use_sysroot=false'; \
		cd ..; cp v8_base_without_compiler.ninja v8/out.gn/x64.release.sample/obj/v8_base_without_compiler.ninja; \
		cp support/BUILD.gn v8; \
		export PATH=/home/jonocameron/Documents/ukl/v8/depot_tools:$(PATH); cd v8; ninja -C out.gn/x64.release.sample v8_monolith; \
	fi
#	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@