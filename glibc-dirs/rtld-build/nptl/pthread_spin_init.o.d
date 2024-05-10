$(common-objpfx)nptl/pthread_spin_init.o: \
 ../sysdeps/x86_64/nptl/pthread_spin_init.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/i386/nptl/pthread_spin_init.c
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/i386/nptl/pthread_spin_init.c:
