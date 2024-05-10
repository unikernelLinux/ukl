$(common-objpfx)csu/abi-note.o: abi-note.S \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/generic/symbol-hacks.h \
 $(common-objpfx)csu/abi-tag.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/symbol-hacks.h:
$(common-objpfx)csu/abi-tag.h:
