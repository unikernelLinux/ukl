#!/bin/bash
set -x

cp ukl.h ../linux/include/linux/ukl.h
cp link-vmlinux.sh ../linux/scripts/
cp main.c ../linux/init/
cp .config ../linux/
