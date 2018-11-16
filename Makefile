# Archiving UKL.o into UKL.a
#

obj-y += multicore.o ukl.o #server.o #checkif.o multicore.o network_server.o

all: clean
	make -C ../linux M=$(PWD)
	ar cr UKL.a multicore.o ukl.o #../memcached-1.5.10/memcached multicore.o network_server.o
	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a

clean:
	rm -rf *.ko *.o *.mod.* .H* .tm* .*cmd Module.symvers modules.order *.a

# all: clean
# 	gcc -Wp,-MD,/home/ali/gitRepos/ukl/.network_server.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/8/include -I../linux/arch/x86/include -I../linux/arch/x86/include/generated  -I../linux/include -I../linux/arch/x86/include/uapi -I../linux/arch/x86/include/generated/uapi -I../linux/include/uapi -I../linux/include/generated/uapi -include ../linux/include/linux/kconfig.h -include ../linux/include/linux/compiler_types.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -DCC_HAVE_ASM_GOTO -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -DRETPOLINE -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned    -DKBUILD_BASENAME='"network_server"' -DKBUILD_MODNAME='"network_server"' -c -o /home/ali/gitRepos/ukl/network_server.o /home/ali/gitRepos/ukl/network_server.c; 
# 	gcc -Wp,-MD,/home/ali/gitRepos/ukl/.ukl.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/8/include -I../linux/arch/x86/include -I../linux/arch/x86/include/generated  -I../linux/include -I../linux/arch/x86/include/uapi -I../linux/arch/x86/include/generated/uapi -I../linux/include/uapi -I../linux/include/generated/uapi -include ../linux/include/linux/kconfig.h -include ../linux/include/linux/compiler_types.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -DCC_HAVE_ASM_GOTO -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -DRETPOLINE -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned    -DKBUILD_BASENAME='"ukl"' -DKBUILD_MODNAME='"ukl"' -c -o /home/ali/gitRepos/ukl/ukl.o /home/ali/gitRepos/ukl/ukl.c; 
# 	ar cd UKL.a network_server.o ukl.o


# clean:
# 	rm -rf *.ko *.o *.mod.* .H* .tm* .*cmd Module.symvers modules.order *.a


# tiny: clean
# 	gcc -Wp,-MD,/home/ali/gitRepos/ukl/.network_server.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/8/include -I../linux/arch/x86/include -I../linux/arch/x86/include/generated  -I../linux/include -I../linux/arch/x86/include/uapi -I../linux/arch/x86/include/generated/uapi -I../linux/include/uapi -I../linux/include/generated/uapi -include ../linux/include/linux/kconfig.h -include ../linux/include/linux/compiler_types.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -DCC_HAVE_ASM_GOTO -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m32 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=large -funit-at-a-time -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -DRETPOLINE -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned    -DKBUILD_BASENAME='"network_server"' -DKBUILD_MODNAME='"network_server"' -c -o /home/ali/gitRepos/ukl/network_server.o /home/ali/gitRepos/ukl/network_server.c; 
# 	gcc -Wp,-MD,/home/ali/gitRepos/ukl/.ukl.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/8/include -I../linux/arch/x86/include -I../linux/arch/x86/include/generated  -I../linux/include -I../linux/arch/x86/include/uapi -I../linux/arch/x86/include/generated/uapi -I../linux/include/uapi -I../linux/include/generated/uapi -include ../linux/include/linux/kconfig.h -include ../linux/include/linux/compiler_types.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -DCC_HAVE_ASM_GOTO -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m32 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=large -funit-at-a-time -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -DRETPOLINE -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-var-tracking-assignments -g -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned    -DKBUILD_BASENAME='"ukl"' -DKBUILD_MODNAME='"ukl"' -c -o /home/ali/gitRepos/ukl/ukl.o /home/ali/gitRepos/ukl/ukl.c; 
# 	ar cd UKL.a network_server.o ukl.o




# tinyall: clean
# 	make  -m elf_i386 -C ../linux M=$(PWD)
# 	ar cr UKL.a network_server.o ukl.o #../memcached-1.5.10/memcached multicore.o
# 	rm -rf *.ko *.mod.* .H* .tm* .*cmd Module.symvers modules.order built-in.a

# # clean: 
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