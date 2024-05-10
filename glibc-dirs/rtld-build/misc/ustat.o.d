$(common-objpfx)misc/ustat.o: \
 ../sysdeps/unix/sysv/linux/ustat.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h ../include/shlib-compat.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
../include/shlib-compat.h:
