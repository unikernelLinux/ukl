#!/bin/bash

# This is only for use when building the initramfs in a container as it overwrites
# the root password with 'root'

echo root:root | chpasswd
