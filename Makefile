# Archiving UKL.o into UKL.a
#

obj-y += threadsglibc.o ukl.o multithread.o network_server.o server.o

ukl: kernelupdate
	rm ukl.o || true
	make -C ../linux M=$(PWD)

all:
	make -C ../linux -j$(nproc)

multithread: clean 
	make -C ../linux M=$(PWD)
	rm network_server.o || true
	ar cr UKL.a multithread.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm ../linux/vmlinux || true
	make -C ../linux -j$(nproc)

network_server: clean
	make -C ../linux M=$(PWD)
	rm multithread.o || true
	ar cr UKL.a network_server.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm ../linux/vmlinux || true
	make -C ../linux -j$(nproc)

threadsglibc: clean 
	# ./update_kernel.sh
	make -C ../linux M=$(PWD)
	ar cr UKL.a threadsglibc.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm ../linux/vmlinux || true

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
	rm UKL.a || true
	ar cr UKL.a ../userthreads/threadsnew.o ukl.o allo/*

server: clean 
	cp kmemcached/server.c .
	make -C ../linux M=$(PWD)
	ar cr UKL.a server.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	rm ../linux/vmlinux || true

kmemcached:
	make -C ../linux M=$(PWD)
	rm UKL.a || true
	ar cr UKL.a ../kmemcached/kmemcached.o ukl.o
	rm ../linux/vmlinux || true
	make -C ../linux -j$(nproc)