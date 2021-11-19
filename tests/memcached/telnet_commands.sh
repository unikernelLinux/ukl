#! /bin/bash

sleep 1

#Flush Cache
echo "flush_all"
sleep .5

#Store and Retrieve Key 1
echo "set key1 0 900 12"
sleep .5
echo "Key 1 Stored"
sleep .5
echo "get key1"
sleep .5

#Store and Retrieve Key 2
echo "set key2 0 900 12"
sleep .5
echo "Key 2 Stored"
sleep .5
echo "get key2"
sleep .5

#Store and Retrieve Key 3
echo "set key3 0 900 12"
sleep .5
echo "Key 3 Stored"
sleep .5
echo "get key3"
sleep .5

#Store and Retrieve Key 4
echo "set key4 0 900 12"
sleep .5
echo "Key 4 Stored"
sleep .5
echo "get key4"
sleep .5

#Store and Retrieve Key 5
echo "set key5 0 900 12"
sleep .5
echo "Key 5 Stored"
sleep .5
echo "get key5"
sleep .5

#Update and Retieve Key 5
echo "replace key5 0 900 22"
echo "Key 5 has been updated"
sleep .5
echo "get key5"
sleep .5

#Quit Telnet
echo "quit"
