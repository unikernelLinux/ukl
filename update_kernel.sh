#!/bin/bash

if cmp -s "../linux/include/linux/ukl.h" "ukl.h"; then
	printf 'ukl.h already in kernel\n'
else
	cp ukl.h ../linux/include/linux/ukl.h
fi


if cmp -s "../linux/scripts/link-vmlinux.sh" "link-vmlinux.sh"; then
	printf 'link-vmlinux.sh already in kernel\n'
else
	cp link-vmlinux.sh ../linux/scripts/
fi

if cmp -s "../linux/init/main.c" "main.c"; then
	printf 'main.c already in kernel\n'
else
	cp link-vmlinux.sh ../linux/scripts/
fi

if cmp -s "../linux/.config" ".config"; then
	printf '.config already in kernel\n'
else
	cp link-vmlinux.sh ../linux/scripts/
	rm ../linux/vmlinux || true
	make -C ../linux olddefconfig
fi
