#!/bin/bash

if [[ ! -z $1 && $1 != "enable" && $1 != "disable" ]]; then
    echo "Invalid argument: $1" >&2
    echo ""
    echo "Usage: $(basename $0) [disable|enable]"
    exit 1
fi

if [[ $1 == "disable" ]]; then
	echo "1" > /sys/devices/system/cpu/intel_pstate/no_turbo
fi

if [[ $1 == "enable" ]]; then
	echo "0" > /sys/devices/system/cpu/intel_pstate/no_turbo
fi
