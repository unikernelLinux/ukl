# Archiving UKL.o into UKL.a
#

obj-y += ukl.o network_server.o #threadsglibc.o ukl.o multithread.o network_server.o server.o interface.o

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
	ar cr UKL.a network_server.o ukl.o 
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