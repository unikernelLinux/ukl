#! /bin/bash

#Name of File where QEMU output is stored
qemu_output="../../qemu_memc.out"

#Name of File where memaslap with 1 Thread is stored
memaslap_1_output="memaslap_1.out"

#Name of File where memaslap with 16 Threads is stored
memaslap_16_output="memaslap_16.out"

#Total Tests Passed
declare -i TOTAL_PASS=0

#Total Tests Failed
declare -i TOTAL_FAIL=0

#String to Print Results
RESULTS=""

#run memaslap test -- 1 thread for 30 seconds
memaslap --servers=127.0.0.1:11255 --time=30s > "$memaslap_1_output"

#Check That Reads Succeeded
if grep -sq "read_bytes: 0" "$memaslap_1_output"; then
    echo "SINGLE THREAD: UNABLE TO READ BYTES "
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SINGLE THREAD READ: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SINGLE THREAD READ" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SINGLE THREAD READ: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Writes Succeeded
if grep -sq "written_bytes: 0" "$memaslap_1_output"; then
    echo "SINGLE THREAD: UNABLE TO WRITE BYTES "
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SINGLE THREAD WRITE: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SINGLE THREAD WRITE" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SINGLE THREAD WRITE: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Sleep for 1 second before second test
sleep 1

# Run memslap with 16 threads for 30 seconds
memaslap --servers=127.0.0.1:11255 --time=30s --threads=16 > "$memaslap_16_output"

#Check That Reads Succeeded
if grep -sq "read_bytes: 0" "$memaslap_16_output"; then
    echo "16 THREADS: UNABLE TO READ BYTES "
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"16 THREADS READ: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - 16 THREADS READ" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"16 THREADS READ: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Writes Succeeded
if grep -sq "written_bytes: 0" "$memaslap_16_output"; then
    echo "16 THREADS: UNABLE TO WRITE BYTES "
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"16 THREADS WRITE: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - 16 THREADS WRITE" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"16 THREADS WRITE: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check for Failures
if ! ((TOTAL_FAIL == 0)); then
    QEMU_PID=`pidof qemu-system-x86_64`
    sudo kill $QEMU_PID
    echo "===================================="
    echo "QEMU OUTPUT BELOW"
    echo "===================================="
    cat $qemu_output
    echo "===================================="
    echo "END QEMU OUTPUT"
    echo "===================================="
    echo "===================================="
    echo "SINGLE SINGLE THREAD RESULTS"
    echo "===================================="
    cat $memaslap_1_output
    echo "===================================="
    echo "END THREAD RESULTS"
    echo "===================================="
    echo "===================================="
    echo "16 THREADS RESULTS"
    echo "===================================="
    cat $memaslap_16_output
    echo "===================================="
    echo "END 16 THREADS RESULTS"
    echo "===================================="
    rm -f $qemu_output
    rm -f $memaslap_1_output
    rm -f $memaslap_16_output
    echo "******************************"
    echo "*** FULL TEST OUTPUT ABOVE ***"
    echo "******************************"
    echo "Unit Test Results"
    echo -e "${RESULTS}"
    
    echo "Total PASS "
    echo $TOTAL_PASS

    echo "Total Fail"
    echo $TOTAL_FAIL
    exit 1
fi

echo "******************************"
echo "MEMASLAP TEST Results"
echo "******************************"
echo -e "${RESULTS}"

echo "Total PASS "
echo $TOTAL_PASS

echo "Total Fail"
echo $TOTAL_FAIL

rm -f $memaslap_1_output
rm -f $memaslap_16_output

exit 0
