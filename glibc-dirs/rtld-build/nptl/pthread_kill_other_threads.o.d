$(common-objpfx)nptl/pthread_kill_other_threads.o: \
 pthread_kill_other_threads.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h ../include/shlib-compat.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
../include/shlib-compat.h:
