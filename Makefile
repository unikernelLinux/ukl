.PHONY: lebench 

PARALLEL= -j$(shell nproc)

#PATHS
GCC_LIB=gcc-build/x86_64-pc-linux-gnu/libgcc/
LC_DIR=glibc-build/
CRT_LIB=$(LC_DIR)csu/
C_LIB=$(LC_DIR)libc.a
PTHREAD_LIB=$(LC_DIR)nptl/libpthread.a
RT_LIB=$(LC_DIR)rt/librt.a
MATH_LIB=$(LC_DIR)math/libm.a
CRT_STARTS=$(CRT_LIB)crt1.o $(CRT_LIB)crti.o $(GCC_LIB)crtbeginT.o
CRT_ENDS=$(GCC_LIB)crtend.o $(CRT_LIB)crtn.o
SYS_LIBS=$(GCC_LIB)libgcc.a $(GCC_LIB)libgcc_eh.a

LEBench_UKL_FLAGS=-ggdb -mno-red-zone -mcmodel=kernel

all: cloneRepos
	make lebench

cloneRepos:
	make linux-dir
	make gcc-dir
	make glibc-dir
	make min-initrd-dir

undefined_sys_hack.o: undefined_sys_hack.c
	gcc -c -o $@ $< -mcmodel=kernel -ggdb -mno-red-zone

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

fio-3.28:
	wget https://brick.kernel.dk/snaps/fio-3.28.tar.gz
	tar xf fio-3.28.tar.gz
	cd fio-3.28 && patch -p1 < ../fio.patch

fio: fio-3.28 libz.a undefined_sys_hack.o gcc-build glibc-build
	cd fio-3.28 && ./configure --build-static --extra-cflags='-mcmodel=kernel -ggdb -mno-red-zone' --disable-tcmalloc
	make -j -C fio-3.28
	cd fio-3.28 && ld -r -o fio.ukl --allow-multiple-definition $(CRT_STARTS) \
		crc/crc16.o crc/crc32.o crc/crc32c-arm64.o crc/crc32c-intel.o crc/crc32c.o crc/crc64.o crc/crc7.o crc/fnv.o \
		crc/md5.o crc/murmur3.o crc/sha1.o crc/sha256.o crc/sha3.o crc/sha512.o crc/test.o crc/xxhash.o lib/axmap.o \
		lib/bloom.o lib/flist_sort.o lib/gauss.o lib/getrusage.o lib/hweight.o lib/ieee754.o lib/lfsr.o lib/memalign.o \
		lib/memcpy.o lib/mountcheck.o lib/num2str.o lib/output_buffer.o lib/pattern.o lib/prio_tree.o lib/rand.o \
		lib/rbtree.o lib/strntol.o lib/zipf.o gettime.o ioengines.o init.o stat.o log.o time.o filesetup.o eta.o \
		verify.o memory.o io_u.o parse.o fio_sem.o rwlock.o pshared.o options.o smalloc.o filehash.o profile.o debug.o \
		engines/cpu.o engines/mmap.o engines/sync.o engines/null.o engines/net.o engines/ftruncate.o \
		engines/filecreate.o engines/filestat.o engines/filedelete.o engines/exec.o server.o client.o iolog.o backend.o \
		libfio.o flow.o cconv.o gettime-thread.o helpers.o json.o idletime.o td_error.o profiles/tiobench.o \
		profiles/act.o io_u_queue.o filelock.o workqueue.o rate-submit.o optgroup.o helper_thread.o steadystate.o \
		zone-dist.o zbd.o dedupe.o engines/falloc.o engines/e4defrag.o engines/splice.o \
		oslib/asprintf.o oslib/strlcat.o engines/mtd.o oslib/libmtd.o oslib/libmtd_legacy.o diskutil.o fifo.o blktrace.o \
		cgroup.o trim.o engines/sg.o oslib/linux-dev-lookup.o engines/io_uring.o oslib/linux-blkzoned.o fio.o \
		--start-group --whole-archive ../libz.a $(RT_LIB) $(PTHREAD_LIB) $(MATH_LIB) $(C_LIB) \
		--no-whole-archive $(SYS_LIBS) --end-group $(CRT_ENDS)
	mv fio-3.28/fio.ukl .
	ar cr UKL.a fio.ukl undefined_sys_hack.o
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=redef_sym_names UKL.a

zlib-1.2.11:
	wget https://www.zlib.net/zlib-1.2.11.tar.gz
	tar xf zlib-1.2.11.tar.gz

libz.a: zlib-1.2.11
	cd zlib-1.2.11 && CFLAGS='-mcmodel=kernel -ggdb -mno-red-zone' ./configure --static
	make -j -C zlib-1.2.11
	cp zlib-1.2.11/libz.a .

#LEBench
lebench: undefined_sys_hack.o gcc-build glibc-build
	rm -rf UKL.a
	gcc -c -o OS_Eval.o OS_Eval.c $(LEBench_UKL_FLAGS)
	ld -r -o lebench.ukl --allow-multiple-definition $(CRT_STARTS) OS_Eval.o \
                --start-group --whole-archive  $(PTHREAD_LIB) \
		$(C_LIB) --no-whole-archive $(SYS_LIBS) --end-group $(CRT_ENDS)
	ar cr UKL.a lebench.ukl undefined_sys_hack.o
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=redef_sym_names UKL.a
	make linux-build

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#LINUX
linux-dir:
	git clone git@github.com:unikernelLinux/Linux-Configs.git
	git clone --depth 1 --branch ukl-main-5.14 git@github.com:unikernelLinux/linux.git
	cp Linux-Configs/ukl/golden_config-5.7-broadcom linux/.config
	make -C linux olddefconfig

linux-build:
	- rm -rf linux/vmlinux
	make -C linux $(PARALLEL)

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#MIN_INITRD
min-initrd-dir:
	git clone git@github.com:unikernelLinux/min-initrd.git
	make all -C min-initrd

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#GCC
gcc-dir:
	git clone --depth 1 --branch releases/gcc-9.3.0 'https://github.com/gcc-mirror/gcc.git'
	cd ./gcc; ./contrib/download_prerequisites

gcc-build:
	- mkdir $@
	- mkdir gcc-install
	cd $@; \
	  TARGET=x86_64-elf ../gcc/configure --target=$(TARGET) \
	  --disable-nls --enable-languages=c,c++ --without-headers \
	  --prefix=/home/tommyu/localInstall/gcc-install/ --with-multilib-list=m64 --disable-multilib
	make -C $@ all-gcc $(PARALLEL)
	- make -C $@ all-target-libgcc CFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel' $(PARALLEL)
	- make -C $@ all-target-libgcc CFLAGS_FOR_TARGET='-gggdb -O2 -mno-red-zone -mcmodel=kernel'
	sed -i 's/PICFLAG/DISABLED_PICFLAG/g' gcc-build/x86_64-pc-linux-gnu/libgcc/Makefile
	- make -C $@ all-target-libgcc CFLAGS_FOR_TARGET='-ggdb -O2 -mcmodel=kernel -mno-red-zone'

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#GLIBC
glibc-dir:
	git clone --depth 1 --branch ukl git@github.com:unikernelLinux/glibc.git

glibc-build:
	./cleanbuild.sh

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#RUN
run:
	make runU -C min-initrd

debug:
	make debugU -C min-initrd

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#MOUNT/UNMOUNT
mnt:
	mount min-initrd/min-initrd.d/root mntpt

umnt:
	umount mntpt
#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#CLEAN
glibc-clean:
	rm -rf glibc-build

gcc-clean:
	rm -rf gcc-build

dist-clean: glibc-clean gcc-clean
	rm -rf gcc glibc 
