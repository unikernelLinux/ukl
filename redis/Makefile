.PHONY: redis

#PATHS
DIR := ${CURDIR}/..
GCC_LIB=$(DIR)/gcc-build/x86_64-pc-linux-gnu/libgcc/
LC_DIR=$(DIR)/glibc-build/
CRT_LIB=$(LC_DIR)csu/
C_LIB=$(LC_DIR)libc.a
PTHREAD_LIB=$(LC_DIR)nptl/libpthread.a
RT_LIB=$(LC_DIR)rt/librt.a
MATH_LIB=$(LC_DIR)math/libm.a
CRT_STARTS=$(CRT_LIB)crt1.o $(CRT_LIB)crti.o $(GCC_LIB)crtbeginT.o
CRT_ENDS=$(GCC_LIB)crtend.o $(CRT_LIB)crtn.o
SYS_LIBS=$(GCC_LIB)libgcc.a $(GCC_LIB)libgcc_eh.a

UKL_FLAGS=-ggdb -mno-red-zone -mcmodel=kernel

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

redis: redis-dir
	- rm -rf redis-server.ukl UKL.a
	make distclean -C redis/
	- make BUILD_WITH_SYSTEMD=no MALLOC=libc V=1 CFLAGS='-ggdb -mno-red-zone -mcmodel=kernel' -C redis/
	- rm -rf redis/src/redis-server redis/src/redis-cli redis/src/redis-benchmark
	cd redis/deps/lua/src/ && ld -r -o lua --allow-multiple-definition $(CRT_STARTS) lua.o liblua.a \
		--start-group --whole-archive $(MATH_LIB) $(C_LIB) --no-whole-archive $(SYS_LIBS) \
		--end-group $(CRT_ENDS)
	cd redis/deps/lua/src/ && ld -r -o luac --allow-multiple-definition $(CRT_STARTS) luac.o \
		print.o liblua.a --start-group --whole-archive $(MATH_LIB) $(C_LIB) --no-whole-archive \
		$(SYS_LIBS) --end-group $(CRT_ENDS)
	cd redis/src/ && ld -r -o redis-server --allow-multiple-definition $(CRT_STARTS) \
		adlist.o quicklist.o ae.o \
		anet.o dict.o server.o sds.o zmalloc.o lzf_c.o lzf_d.o pqsort.o zipmap.o sha1.o \
		ziplist.o release.o networking.o util.o object.o db.o replication.o rdb.o t_string.o \
		t_list.o t_set.o t_zset.o t_hash.o config.o aof.o pubsub.o multi.o debug.o sort.o \
		intset.o syncio.o cluster.o crc16.o endianconv.o slowlog.o scripting.o bio.o rio.o \
		rand.o memtest.o crcspeed.o crc64.o bitops.o sentinel.o notify.o setproctitle.o \
		blocked.o hyperloglog.o latency.o sparkline.o redis-check-rdb.o redis-check-aof.o \
		geo.o lazyfree.o module.o evict.o expire.o geohash.o geohash_helper.o childinfo.o \
		defrag.o siphash.o rax.o t_stream.o listpack.o localtime.o lolwut.o lolwut5.o \
		lolwut6.o acl.o gopher.o tracking.o connection.o tls.o sha256.o timeout.o setcpuaffinity.o \
		monotonic.o mt19937-64.o ../deps/hiredis/libhiredis.a ../deps/lua/src/liblua.a \
		--start-group --whole-archive $(MATH_LIB) $(RT_LIB) $(PTHREAD_LIB) $(C_LIB) --no-whole-archive \
		$(SYS_LIBS) --end-group $(CRT_ENDS)
	cp redis/src/redis-server redis-server.ukl
	ar cr UKL.a redis-server.ukl ../undefined_sys_hack.o
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=../redef_sym_names UKL.a
	cp UKL.a ../

redis-dir:
	if ! test -d redis; then \
	    git clone -b redis-ukl git@github.com:unikernelLinux/redis.git; \
	fi

