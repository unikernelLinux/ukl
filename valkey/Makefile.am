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

EXTRA_DIST = valkey.conf

CLEANFILES = \
	*~ *.o *.a \
	stamp-valkey-dir

clean-local:
	-cd valkey && $(MAKE) clean

distclean-local:
	rm -rf valkey

noinst_DATA = UKL.a

# Libraries built in the top build directory.
CRT_STARTS  = $(abs_top_builddir)/crt1.o $(abs_top_builddir)/crti.o \
	      $(abs_top_builddir)/crtbeginT.o
CRT_ENDS    = $(abs_top_builddir)/crtend.o $(abs_top_builddir)/crtn.o
C_LIB       = $(abs_top_builddir)/libc.a
PTHREAD_LIB = $(abs_top_builddir)/libpthread.a
RT_LIB      = $(abs_top_builddir)/librt.a
MATH_LIB    = $(abs_top_builddir)/libm.a
GCC_LIBS    = $(abs_top_builddir)/libgcc.a $(abs_top_builddir)/libgcc_eh.a

AM_CFLAGS   = $(TARGET_CFLAGS) -ggdb -mno-red-zone -mcmodel=kernel -static
if DEFAULT_PIE
AM_CFLAGS += -fno-PIC -no-pie -fno-PIE
endif

UKL.a: stamp-valkey-dir undefined_sys_hack.o
	rm -f $@
	$(MAKE) distclean -C valkey
# XXX We expect this to fail with undefined references to
# set_bypass_limit / set_bypass_syscall (provided by UKL).
	-$(MAKE) BUILD_WITH_SYSTEMD=no MALLOC=libc OPTIMIZATION=-O2 V=1 \
	    CFLAGS='$(AM_CFLAGS)' -C valkey
	rm -f valkey/src/{valkey-server,valkey-cli,valkey-benchmark}
	cd valkey/deps/lua/src/ && \
	$(MAKE) BUILD_WITH_SYSTEMD=no MALLOC=libc V=1 \
	CFLAGS='$(AM_CFLAGS)' luac.o print.o  && \
	ld -r -o lua --allow-multiple-definition \
	    $(CRT_STARTS) lua.o liblua.a \
	    --start-group \
	    --whole-archive $(MATH_LIB) $(C_LIB) --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group $(CRT_ENDS)
	cd valkey/deps/lua/src/ && \
	ld -r -o luac --allow-multiple-definition \
	    $(CRT_STARTS) luac.o \
	    print.o liblua.a \
	    --start-group \
	    --whole-archive $(MATH_LIB) $(C_LIB) --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group $(CRT_ENDS)
	cd valkey/src/ && \
	ld -r -o valkey-server.o --allow-multiple-definition \
	    $(CRT_STARTS) \
	    threads_mngr.o adlist.o quicklist.o ae.o anet.o dict.o kvstore.o \
	    server.o sds.o zmalloc.o lzf_c.o lzf_d.o pqsort.o zipmap.o sha1.o \
	    ziplist.o release.o memory_prefetch.o io_threads.o networking.o \
	    util.o object.o db.o replication.o rdb.o t_string.o t_list.o t_set.o \
	    t_zset.o t_hash.o config.o aof.o pubsub.o multi.o debug.o sort.o \
	    intset.o syncio.o cluster.o cluster_legacy.o cluster_slot_stats.o \
	    crc16.o endianconv.o slowlog.o eval.o bio.o rio.o rand.o memtest.o \
	    syscheck.o crcspeed.o crccombine.o crc64.o bitops.o sentinel.o \
	    notify.o setproctitle.o blocked.o hyperloglog.o latency.o sparkline.o \
	    valkey-check-rdb.o valkey-check-aof.o geo.o lazyfree.o module.o \
	    evict.o expire.o geohash.o geohash_helper.o childinfo.o defrag.o \
	    siphash.o rax.o t_stream.o listpack.o localtime.o lolwut.o lolwut5.o \
	    lolwut6.o acl.o tracking.o socket.o tls.o sha256.o timeout.o \
	    setcpuaffinity.o monotonic.o mt19937-64.o resp_parser.o call_reply.o \
	    script_lua.o script.o functions.o function_lua.o commands.o strl.o \
	    connection.o unix.o logreqres.o \
	    ../deps/hiredis/libhiredis.a ../deps/lua/src/liblua.a \
	    ../deps/hdr_histogram/libhdrhistogram.a ../deps/fpconv/libfpconv.a \
	    --start-group \
	    --whole-archive $(MATH_LIB) $(RT_LIB) $(PTHREAD_LIB) $(C_LIB) --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group $(CRT_ENDS)
	ar cr UKL.a valkey/src/valkey-server.o undefined_sys_hack.o
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names UKL.a

# Check out a local copy of valkey.
stamp-valkey-dir:
	rm -f $@
	if ! test -d valkey; then \
	    git clone -b valkey-ukl https://github.com/unikernelLinux/valkey.git; \
	fi
	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@

# Configuration file used by valkey.
data.tar.gz: valkey.conf
	rm -f $@
	tar -zcf $@ -C $(srcdir) valkey.conf
