# Archiving UKL.o into UKL.a
#
#
obj-y += ukl.o server.o 

all: 
	make -C ../linux M=$(PWD)
	rm UKL.a
	ar cr UKL.a ukl.o server.o

clean: 
	make -C ../linux M=$(PWD) clean


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
