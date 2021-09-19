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
	# Removed Clone line as cloning will take plaace via YAML script
	# git clone git@github.com:unikernelLinux/Linux-Configs.git
	# git clone --depth 1 --branch ukl git@github.com:unikernelLinux/linux.git
	cp Linux-Configs/ukl/golden_config-5.7-broadcom linux/.config
	make -C linux oldconfig

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
