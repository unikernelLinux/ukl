$(common-objpfx)posix/oldglob.os: \
 ../sysdeps/unix/sysv/linux/oldglob.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
../include/shlib-compat.h:
$(common-objpfx)abi-versions.h:
