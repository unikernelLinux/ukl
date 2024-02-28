#!/bin/bash

set -x

ABSINIT=`readlink -f .`
docker build ukl-base -t ukl-base:latest
CONTAINER=$(docker run --rm --privileged -v ${ABSINIT}:/src -dit ukl-base:latest /bin/bash)
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker exec -w /src/ -it $CONTAINER ./set-passwd.sh
docker exec -w /src/ -it $CONTAINER ./buildinitrd.sh ukl-initrd $1
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker stop $CONTAINER >/dev/null 2>&1 &
