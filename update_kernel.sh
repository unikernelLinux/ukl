#!/bin/bash

if cmp -s "../linux/include/linux/ukl.h" "ukl.h"; then
	printf 'ukl.h already in kernel\n'
else
	set -x
	cp ukl.h ../linux/include/linux/ukl.h
	rm ../linux/vmlinux || true
	set +x
fi


if cmp -s "../linux/scripts/link-vmlinux.sh" "link-vmlinux.sh"; then
	printf 'link-vmlinux.sh already in kernel\n'
else
	set -x
	cp link-vmlinux.sh ../linux/scripts/
	rm ../linux/vmlinux || true
	set +x
fi

if cmp -s "../linux/init/main.c" "main.c"; then
	printf 'main.c already in kernel\n'
else
	set -x
	cp link-vmlinux.sh ../linux/scripts/
	rm ../linux/vmlinux || true
	set +x
fi

if cmp -s "../linux/.config" ".config"; then
	printf '.config already in kernel\n'
else
	set -x
	cp link-vmlinux.sh ../linux/scripts/
	make -C ../linux olddefconfig
	rm ../linux/vmlinux || true
	set +x
fi
