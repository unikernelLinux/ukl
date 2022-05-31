.PHONY: memcached libevent

PARALLEL= -j$(shell nproc)

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

all:
	make memcached

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#libeevnt
libevent:
	- make clean -C libevent/
	cd libevent && ./autogen.sh && ./configure --disable-shared CFLAGS='-ggdb -mno-red-zone -mcmodel=kernel' \
		&& make --trace |& tee ../elog
	- rm -rf mylibevent
	ar cr mylibevent libevent/*.o

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#memcached
memcached:
	- rm -rf memcached.ukl UKL.a memcached/memcached.ukl ../UKL.a
	- make clean -C memcached/
	cd memcached && ./autogen.sh && ./configure CFLAGS='-ggdb -mno-red-zone -mcmodel=kernel'
	make -C memcached --trace |& tee mlog
	cd memcached && ld -r -o memcached.ukl --allow-multiple-definition $(CRT_STARTS) \
		memcached-memcached.o memcached-hash.o \
		memcached-jenkins_hash.o memcached-murmur3_hash.o memcached-slabs.o memcached-items.o \
		memcached-assoc.o memcached-thread.o memcached-daemon.o memcached-stats_prefix.o \
		memcached-util.o memcached-cache.o memcached-bipbuffer.o memcached-base64.o memcached-logger.o \
		memcached-crawler.o memcached-itoa_ljust.o memcached-slab_automove.o memcached-authfile.o \
		memcached-restart.o memcached-proto_text.o memcached-proto_bin.o memcached-extstore.o \
		memcached-crc32c.o memcached-storage.o memcached-slab_automove_extstore.o \
		--start-group ../mylibevent --whole-archive $(PTHREAD_LIB) $(C_LIB) --no-whole-archive \
                $(SYS_LIBS) --end-group $(CRT_ENDS)
	cp memcached/memcached.ukl .
	ar cr UKL.a memcached.ukl ../undefined_sys_hack.o
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=../redef_sym_names UKL.a
	cp UKL.a ../

clone-dir:
	git clone --branch 1.6.15 git@github.com:memcached/memcached.git
	git clone --branch release-2.1.12-stable git@github.com:libevent/libevent.git


