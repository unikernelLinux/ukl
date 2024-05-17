#!/bin/bash

set -x

docker pull fedora:36
CONTAINER=init-builder-$USER
docker stop $CONTAINER
docker rm -f $CONTAINER
ABSINIT=`readlink -f .`
docker run --rm --privileged --name=${CONTAINER} -v ${ABSINIT}:/src -dit fedora:36 /bin/bash
docker exec -it $CONTAINER dnf -y update
docker exec -it $CONTAINER dnf -y install sed elfutils-libelf-devel bc hostname perl dropbear \
        msr-tools wget dnf-plugins-core bzip2 curl xz cpio shadow-utils procps-ng iproute pciutils net-tools kmod \
	gdb
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker exec -w /src/ -it $CONTAINER ./set-passwd.sh
make -C ../ukl-getsyms
docker cp ../ukl-getsyms $CONTAINER:/
docker cp ../libuklsyms.so $CONTAINER:/ukl-getsyms/
docker exec -w /src/ -it $CONTAINER ./buildinitrd.sh ukl-initrd
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker stop $CONTAINER
