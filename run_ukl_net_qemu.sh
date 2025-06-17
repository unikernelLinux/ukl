#!/bin/bash

set -x

SMP=${3:-1}

TAPDEV=${5:-tap0}
ip tuntap add dev $TAPDEV mode tap multi_queue
ip link set dev $TAPDEV master virbr0
ip link set dev virbr0 up
ip link set dev $TAPDEV up


qemu-system-x86_64 \
    -cpu host,-smap,-smep -accel kvm -m 4G \
    -kernel $1 \
    -initrd $2 \
    -nodefaults -nographic -serial stdio \
    -append "console=ttyS0 net.ifnames=0 biosdevname=0 clearcpuid=smap,smep mitigations=off mds=off -- 192.168.122.128 52:54:00:12:34:56 ${4}" \
    -netdev tap,ifname=${TAPDEV},id=eth0,script=no,downscript=no,queues=${SMP} \
    -device virtio-net-pci,netdev=eth0,mq=on,vectors=$((2*$SMP+2)) \
    -smp $SMP -s -S

ip tuntap del dev $TAPDEV mode tap multi_queue
