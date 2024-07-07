#!/bin/bash

set -x

# create a base image with all of our desired packages
docker build -t ukl-base .

CONTAINER=init-builder-$USER
docker stop $CONTAINER
docker rm -f $CONTAINER
ABSINIT=`readlink -f .`

# use base image to create a proper filesystem for our initrd
docker run --rm --privileged --name=${CONTAINER} -v ${ABSINIT}:/src -dit ukl-base /bin/bash
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker exec -w /src/ -it $CONTAINER ./set-passwd.sh
docker exec -w /src/ -it $CONTAINER ./buildinitrd.sh ukl-initrd
docker exec -w /src/ -it $CONTAINER rm -rf ukl-initrd
docker stop $CONTAINER
