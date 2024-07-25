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
	-cd libevent/build && $(MAKE) clean
	-cd memcached && $(MAKE) clean

distclean-local:
	rm -rf libevent memcached

# Libraries built in the top build directory.
CRT_STARTS  = $(abs_top_builddir)/crt1.o $(abs_top_builddir)/crti.o \
	      $(abs_top_builddir)/crtbeginT.o
CRT_ENDS    = $(abs_top_builddir)/crtend.o $(abs_top_builddir)/crtn.o
C_LIB       = $(abs_top_builddir)/libc.a
PTHREAD_LIB = $(abs_top_builddir)/libpthread.a
RT_LIB      = $(abs_top_builddir)/librt.a
MATH_LIB    = $(abs_top_builddir)/libm.a
GCC_LIBS    = $(abs_top_builddir)/libgcc.a $(abs_top_builddir)/libgcc_eh.a

AM_CFLAGS   = -ggdb -mno-red-zone -mcmodel=kernel -static
if DEFAULT_PIE
AM_CFLAGS += -fno-PIC -no-pie -fno-PIE
endif

noinst_DATA = UKL.a

UKL.a: memcached.o undefined_sys_hack.o
	rm -f $@
	ar cr UKL.a $^
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names UKL.a

# Build libevent.
libevent.a: stamp-libevent-dir
	rm -f $@
	-rm -Rf libevent/build
	cd libevent && \
	mkdir build && \
	cd build && \
	CFLAGS='$(AM_CFLAGS)' cmake .. && \
	sed -i 's/EVENT__LIBRARY_TYPE:STRING=DEFAULT/EVENT__LIBRARY_TYPE:STRING=STATIC/' CMakeCache.txt && \
	CFLAGS='$(AM_CFLAGS)' make -j`nproc` event_static
	mv libevent/build/lib/libevent.a $@

# Build memcached.
memcached.o: stamp-memcached-dir libevent.a
	rm -f $@
	-cd memcached && $(MAKE) clean
	cd memcached && \
	./autogen.sh && \
	./configure CFLAGS='$(AM_CFLAGS)' && \
	make --trace
	cd memcached && \
	ld -r -o ../$@ --allow-multiple-definition \
	    $(CRT_STARTS) \
	    memcached-memcached.o memcached-hash.o \
	    memcached-jenkins_hash.o memcached-murmur3_hash.o memcached-slabs.o memcached-items.o \
	    memcached-assoc.o memcached-thread.o memcached-daemon.o memcached-stats_prefix.o \
	    memcached-util.o memcached-cache.o memcached-bipbuffer.o memcached-base64.o memcached-logger.o \
	    memcached-crawler.o memcached-itoa_ljust.o memcached-slab_automove.o memcached-authfile.o \
	    memcached-restart.o memcached-proto_text.o memcached-proto_bin.o memcached-extstore.o \
	    memcached-crc32c.o memcached-storage.o memcached-slab_automove_extstore.o \
	    --start-group \
	    ../libevent.a \
	    --whole-archive $(PTHREAD_LIB) $(C_LIB) --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group \
	    $(CRT_ENDS)

# Check out a local copy of libevent.
stamp-libevent-dir:
	rm -f $@
	if ! test -d libevent; then \
	    git clone --branch release-2.1.12-stable git@github.com:libevent/libevent.git; \
	fi
	touch $@

# Check out a local copy of memcached.
stamp-memcached-dir:
	rm -f $@
	if ! test -d memcached; then \
	    git clone --branch ukl git@github.com:unikernelLinux/memcached.git; \
	fi
	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@
