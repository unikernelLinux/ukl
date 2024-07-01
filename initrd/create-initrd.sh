#!/bin/bash

set -x

docker build -t ukl-base .

CONTAINER=init-builder-$USER
docker stop $CONTAINER
docker rm -f $CONTAINER
ABSINIT=`readlink -f .`
docker run --rm --privileged --name=${CONTAINER} -v ${ABSINIT}:/src -dit ukl-base /bin/bash
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker exec -w /src/ -it $CONTAINER ./set-passwd.sh
docker exec -w /src/ -it $CONTAINER ./buildinitrd.sh ukl-initrd
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker stop $CONTAINER
