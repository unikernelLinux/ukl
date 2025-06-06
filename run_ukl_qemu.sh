#!/bin/bash

qemu-system-x86_64 \
    -cpu host,-smap,-smep -accel kvm -m 4G \
    -kernel $1 \
    -initrd $2 \
    -nodefaults -nographic -serial stdio \
    -append "console=ttyS0 net.ifnames=0 biosdevname=0 clearcpuid=smap,smep mitigations=off mds=off --" \
    -net user
