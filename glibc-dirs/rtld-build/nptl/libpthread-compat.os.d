$(common-objpfx)nptl/libpthread-compat.os: \
 libpthread-compat.c $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h ../include/sys/cdefs.h \
 ../misc/sys/cdefs.h ../include/features.h ../include/stdc-predef.h \
 ../include/gnu/stubs.h ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/ieee754/ldbl-96/bits/long-double.h ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
../include/sys/cdefs.h:
../misc/sys/cdefs.h:
../include/features.h:
../include/stdc-predef.h:
../include/gnu/stubs.h:
../sysdeps/x86/bits/wordsize.h:
../sysdeps/ieee754/ldbl-96/bits/long-double.h:
../include/shlib-compat.h:
$(common-objpfx)abi-versions.h:
