$(common-objpfx)csu/elf-init.o: elf-init.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h \
 /usr/lib/gcc/x86_64-linux-gnu/12/include/stddef.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
/usr/lib/gcc/x86_64-linux-gnu/12/include/stddef.h:
