#!/bin/bash

#Run UKL (running memcached as a Background process)
cd ../
sudo make run_memcached > qemu_memc.out &

#Sleep for 30 seconds to allow UKL to Boot
sleep 30

