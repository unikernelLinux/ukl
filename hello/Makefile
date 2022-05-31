.PHONY: hello

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

#-----------------------------------------------------------------------------

hello: UKL.a
	cp $< ..

UKL.a: hello-world.o
	rm -rf UKL.a
	ld -r -o hello-world-obj.o -allow-multiple-definition $(CRT_STARTS) \
	    $<\
	    --start-group --whole-archive $(MATH_LIB) $(RT_LIB) $(PTHREAD_LIB) $(C_LIB) --no-whole-archive \
	    $(SYS_LIBS) --end-group $(CRT_ENDS)
	ar cr UKL.a hello-world-obj.o ../undefined_sys_hack.o
	objcopy --prefix-symbols=ukl_ UKL.a
	objcopy --redefine-syms=../redef_sym_names UKL.a

.c.o:
	gcc $(UKL_FLAGS) -static -c $< -o $@

clean:
	rm -f *.o *~ *.a
