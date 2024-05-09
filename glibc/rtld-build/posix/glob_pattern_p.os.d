$(common-objpfx)posix/glob_pattern_p.os: \
 glob_pattern_p.c $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h ../include/glob.h ../posix/glob.h \
 ../include/sys/cdefs.h ../misc/sys/cdefs.h ../include/features.h \
 ../include/stdc-predef.h ../include/gnu/stubs.h \
 ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/ieee754/ldbl-96/bits/long-double.h glob_internal.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
../include/glob.h:
../posix/glob.h:
../include/sys/cdefs.h:
../misc/sys/cdefs.h:
../include/features.h:
../include/stdc-predef.h:
../include/gnu/stubs.h:
../sysdeps/x86/bits/wordsize.h:
../sysdeps/ieee754/ldbl-96/bits/long-double.h:
glob_internal.h:
