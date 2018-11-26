#!/bin/bash

if cmp -s "../linux/include/linux/ukl.h" "kernel/ukl.h"; then
	printf 'ukl.h already in kernel\n'
else
	set -x
	cp kernel/ukl.h ../linux/include/linux/ukl.h
	rm ../linux/vmlinux || true
	set +x
fi


if cmp -s "../linux/scripts/link-vmlinux.sh" "kernel/link-vmlinux.sh"; then
	printf 'link-vmlinux.sh already in kernel\n'
else
	set -x
	cp kernel/link-vmlinux.sh ../linux/scripts/
	rm ../linux/vmlinux || true
	set +x
fi

if cmp -s "../linux/init/main.c" "kernel/main.c"; then
	printf 'main.c already in kernel\n'
else
	set -x
	cp kernel/main.c ../linux/init/
	rm ../linux/vmlinux || true
	set +x
fi

if cmp -s "../linux/.config" "kernel/.config"; then
	printf '.config already in kernel\n'
else
	set -x
	cp kernel/.config ../linux/
	make -C ../linux olddefconfig
	rm ../linux/vmlinux || true
	set +x
fi

if cmp -s "../linux/include/asm-generic/vmlinux.lds.h" "kernel/vmlinux.lds.h"; then
	printf 'vmlinux.lds.h already in kernel\n'
else
	set -x
	cp kernel/vmlinux.lds.h ../linux/include/asm-generic/
	rm ../linux/arch/x86/kernel/vmlinux.lds || true
	rm ../linux/vmlinux || true
	set +x
fi

if cmp -s "../linux/arch/x86/kernel/vmlinux.lds.S" "kernel/vmlinux.lds.S"; then
	printf 'vmlinux.lds.S already in kernel\n'
else
	set -x
	cp kernel/vmlinux.lds.S ../linux/arch/x86/kernel/
	rm ../linux/arch/x86/kernel/vmlinux.lds || true
	rm ../linux/vmlinux || true
	set +x
fi
