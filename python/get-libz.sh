#!/usr/bin/env sh
path=$(find /usr -name libz.so.1 2>/dev/null) 
cp $path data
