#!/bin/bash

# Output file for QEMU
outfile="actions.out"

# Build
autoreconf -i
./configure --enable-use-ret --with-program=hello
make -j`nproc`

# Boot the machine
sudo timeout 10m make boot-actions

# Check to see that output contains magic string
# If Test fails, print QEMU output
if ! grep -sq "hello, from the UKL world" "$outfile"
then
    echo "TEST FAIL - UKL BOOT"
    cat $outfile
    rm -f $outfile
    exit 1
fi

echo "Starting QEMU...\n"
sleep 5s

# Close QEMU
QEMU_PID=`pidof qemu-system-x86_64`
sudo kill $QEMU_PID

#Otherwise, print success message
echo "TEST PASS - UKL BOOT"

rm -f $outfile

exit 0

