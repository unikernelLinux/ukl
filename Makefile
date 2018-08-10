# Archiving UKL.o into UKL.a
#
#
obj-y += server.o #ukl.o server.o #checkif.o

all: 
	make -C ../linux M=$(PWD)
	ar cr UKL.a server.o
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a

clean:
	rm -rf *.ko *.o *.mod.* .H* .tm* .*cmd Module.symvers modules.order *.a

# clean: 
# 	make -C ../linux M=$(PWD) clean


# all: depend
# 	gcc -o myPrint.o myPrint.c -I. -I./include # -I../arch/x86/include/ -I../arch/x86/include/uapi -I.

# depend:
# 	rm asm
# 	ln -s ../linux/include/asm-generic/ asm
# #	rm asm
# #	ln -s ../linux/arch/x86/include/asm/ asm
# #	rm uapi
# #	ln -s ../linux/arch/x86/include/uapi/ uapi
# 	rm include
# 	ln -s ../linux/include/ include


# obj-y += ksocket.o ksocket_tcp_srv_demo.o #checkif.o

# all: 
# 	make -C ../../linux-4.4.147 M=$(PWD)
# 	ar cr UKL.a ksocket.o ksocket_tcp_srv_demo.o #ukl.o server.o #server.o	
# 	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a


# clean:
# 	rm -rf *.ko *.o *.mod.* .H* .tm* .*cmd Module.symvers modules.order *.a