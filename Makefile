# Archiving UKL.o into UKL.a
#

obj-y += ukl.o interface.o # network_server.o #threadsglibc.o ukl.o multithread.o network_server.o server.o interface.o

ukl: kernelupdate
	rm -rf ukl.o 
	make -C ../linux M=$(PWD)

all:
	make -C ../linux -j$(nproc)

multithread: clean 
	make -C ../linux M=$(PWD)
	rm -rf network_server.o 
	ar cr UKL.a multithread.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm -rf ../linux/vmlinux 
	make -C ../linux -j$(nproc)

network_server: clean
	make -C ../linux M=$(PWD)
	rm -rf multithread.o 
	ar cr UKL.a network_server.o ukl.o interface.o
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm -rf ../linux/vmlinux 
	make -C ../linux -j$(nproc)

threadsglibc: clean 
	# ./update_kernel.sh
	make -C ../linux M=$(PWD)
	ar cr UKL.a threadsglibc.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm -rf ../linux/vmlinux 

clean:
	rm -rf *.ko *.o *.mod.* .H* .tm* .*cmd Module.symvers modules.order *.a

kernelupdate:
	./update_kernel.sh
	make -C ../linux -j$(nproc)

runUKL:
	make -C ../min-initrd runU

run: runUKL

debug:
	make -C ../min-initrd debugU

try:
	rm -rf UKL.a 
	ar cr UKL.a ../userthreads/threadsnew.o ukl.o allo/*

newserver: clean 
	gcc newserver.c -c -o newserver.o -ggdb
	make -C ../linux M=$(PWD)
	ar cr UKL.a newserver.o ukl.o interface.o
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm -rf ../linux/vmlinux 
	make -C ../linux -j$(nproc)

kmemcached:
	make -C ../linux M=$(PWD)
	rm -rf UKL.a 
	ar cr UKL.a ../kmemcached/kmemcached.o ukl.o
	rm -rf ../linux/vmlinux 
	make -C ../linux -j$(nproc)

tcpserver:
	gcc tcpserver.c -c -o tcpserver.o -mcmodel=kernel
	make -C ../linux M=$(PWD)
	ar cr UKL.a tcpserver.o ukl.o interface.o glibc/*.o
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm -rf ../linux/vmlinux 
	make -C ../linux -j$(nproc)

helloworld:
	gcc helloworld.c -c -o helloworld.o -mcmodel=kernel -ggdb
	rm -rf glibc
	mkdir glibc
	cp ../glibc/glibc-build/libc.a glibc/
	cp libcMakefile glibc/Makefile
	make -C glibc/
	make -C ../linux M=$(PWD)
	rm -rf UKL.a
	# ar cr UKL.a helloworld.o ukl.o interface.o glibc/printf.o glibc/stdio.o glibc/vfprintf-internal.o
	# glibc/stdio.o glibc/vfprintf-internal.o glibc/stdfiles.o glibc/wctrans.o glibc/towctrans.o glibc/scratch_buffer_set_array_size.o glibc/mempcpy.o glibc/malloc.o glibc/lc-ctype.o glibc/wcrtomb.o glibc/vtables.o glibc/printf-parsemb.o glibc/scratch_buffer_grow_preserve.o glibc/reg-printf.o glibc/libc_fatal.o glibc/alloca_cutoff.o glibc/_itoa.o glibc/genops.o glibc/assert.o glibc/reg-type.o glibc/lc-numeric.o glibc/iopadn.o glibc/errno-loc.o glibc/strnlen.o glibc/printf_fp.o glibc/_strerror.o glibc/wcsrtombs.o glibc/readonly-area.o glibc/reg-modifier.o glibc/funlockfile.o glibc/libc_multiple_threads.o glibc/libc-lowlevellock.o glibc/strchrnul.o glibc/fileops.o glibc/wfileops.o
	ar cr UKL.a helloworld.o ukl.o interface.o glibc/*.o
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a 
	rm -rf ../linux/vmlinux 
	make -C ../linux -j$(nproc)