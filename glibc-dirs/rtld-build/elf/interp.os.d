$(common-objpfx)elf/interp.os: interp.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h \
 $(common-objpfx)runtime-linker.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
$(common-objpfx)runtime-linker.h:
