#!/bin/bash

# The purpose of this script is to generate a redis binary and linux kernel
# which do not contain any of our changes for our base lines. It should be
# run from the top level of the ukl project. It will try and checkout
# different commits in the linux and redis subprojects so you should only
# run it from clean repos (no uncommitted changes).

build_redis()
{
	configure --with-program=redis
	pushd redis/
	make stamp-redis-dir
	make data.tar.gz
	cp data.tar.gz ../initrd
	pushd redis/
	orig_rev=`git rev-parse HEAD`
	git checkout 6.2.2
	make clean
	make -j CFLAGS=-fPIE
	cp src/redis-server ../../initrd/
	make clean
	git checkout $orig_rev
	popd
	make clean
	popd
}

build_initrd()
{
	pushd initrd
	rm ukl-initrd.cpio.xz
	sed -i 's/\/UKL/\/usr\/bin\/redis-server myredis.conf/' init
	make ukl-initrd.cpio.xz EXTRABIN=redis-server
	cp ukl-initrd.cpio.xz ../
	sed -i 's/\/usr\/bin\/redis-server myredis.conf/\/UKL/' init
	popd
}

build_kernel()
{
	pushd linux
	orig_rev=`git rev-parse HEAD` # 8cefd86083991c2004c3ca90973d177de6275903
	git checkout v6.3
	cp ../saveconfig ./.config
	make clean
	make -j
	cp arch/x86/boot/bzImage ../vmlinuz
	make clean
	git checkout $orig_rev
	popd
}

build_redis
build_initrd
#build_kernel
