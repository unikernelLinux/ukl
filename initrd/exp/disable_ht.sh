#!/bin/bash
for CPU in `ls -d -v /sys/devices/system/cpu/cpu[0-9]*`; do
    CPUID=$(basename $CPU)
    echo "CPU: $CPUID";
    if test -e $CPU/online; then
        echo "1" > $CPU/online;
    fi;
    COREID="$(cat $CPU/topology/core_id)";
    SOCKETID="$(cat $CPU/topology/physical_package_id)";
    eval "COREENABLE=\"\${core${SOCKETID}_${COREID}enable}\"";
    if ${COREENABLE:-true}; then
        echo "${CPU} socket=${SOCKETID} core=${COREID} -> enable"
        eval "core${SOCKETID}_${COREID}enable='false'";
    else
        echo "$CPU socket=${SOCKETID} core=${COREID} -> disable";
        echo "0" > "$CPU/online";
    fi;
done;
