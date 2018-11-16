# Archiving UKL.o into UKL.a
#

obj-y += multithread.o network_server.o ukl.o 
multithread: clean
	make -C ../linux M=$(PWD)
	rm network_server.o
	ar cr UKL.a multicore.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a

network_server: clean
	make -C ../linux M=$(PWD)
	rm multithread.o
	ar cr UKL.a network_server.o ukl.o 
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a
	kernelupdate
	runUKL

clean:
	rm -rf *.ko *.o *.mod.* .H* .tm* .*cmd Module.symvers modules.order *.a

kernelupdate:
	./update_kernel.sh
	rm ../linux/vmlinux
	make -C ../linux olddefconfig
	make -C ../linux all

runUKL:
	make -C ../min-initrd runU

all: kernelupdate runUKL

