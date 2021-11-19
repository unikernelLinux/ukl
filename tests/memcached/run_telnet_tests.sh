#! /bin/bash

#Name of File where QEMU output is available
qemu_output="../../qemu_memc.out"

#Name of File where telnet output is stored
telnet_output="telnet_test.out"

#Total Tests Passed
declare -i TOTAL_PASS=0

#Total Tests Failed
declare -i TOTAL_FAIL=0

#String to Print Results
RESULTS=""

#run Telnet Set/Get commands
./telnet_commands.sh | telnet 127.0.0.1 11255 > "$telnet_output"

#Check That Key 1 was stored/retrieved
if ! grep -sq "Key 1 Stored" "$telnet_output"; then
    echo "TEST FAIL - SET/GET KEY1"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SET/GET KEY1: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SET/GET KEY1" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SET/GET KEY1: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Key 2 was stored/retrieved
if ! grep -sq "Key 2 Stored" "$telnet_output"; then
    echo "TEST FAIL - SET/GET KEY2"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SET/GET KEY2: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SET/GET KEY2" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SET/GET KEY2: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Key 3 was stored/retrieved
if ! grep -sq "Key 3 Stored" "$telnet_output"; then
    echo "TEST FAIL - SET/GET KEY3"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SET/GET KEY3: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SET/GET KEY3" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SET/GET KEY3: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Key 4 was stored/retrieved
if ! grep -sq "Key 4 Stored" "$telnet_output"; then
    echo "TEST FAIL - SET/GET KEY4"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SET/GET KEY4: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SET/GET KEY4" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SET/GET KEY4: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Key 5 was stored/retrieved
if ! grep -sq "Key 5 Stored" "$telnet_output"; then
    echo "TEST FAIL - SET/GET KEY5"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SET/GET KEY5: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SET/GET KEY5" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SET/GET KEY5: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check That Key 5 was updated/retrieved
if ! grep -sq "Key 5 has been updated" "$telnet_output"; then
    echo "TEST FAIL - UPDATE/GET KEY5"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"UPDATE/GET KEY5: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - UPDATE/GET KEY5" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"UPDATE/GET KEY5: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Check for Failures (and print QEMU output if test failed)
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
    echo "TELNET TEST OUTPUT BELOW"
    echo "===================================="
    cat $telnet_output
    echo "===================================="
    echo "END TELNET TEST OUTPUT "
    echo "===================================="
    rm -f $qemu_output
    rm -f $telnet_output
    echo "**************************************************"
    echo "*** TEST RESULTS BELOW (FIND FULL TEST OUTPUT ABOVE) ***"
    echo "**************************************************"
    echo "Unit Test Results"
    echo -e "${RESULTS}"

    echo "Total PASS "
    echo $TOTAL_PASS

    echo "Total Fail"
    echo $TOTAL_FAIL
    
    #Exit 1 will trigger action to Fail
    exit 1
fi

#Print Results
echo "******************************"
echo "TELNET TEST Results"
echo "******************************"
echo -e "${RESULTS}"

echo "Total PASS "
echo $TOTAL_PASS

echo "Total Fail"
echo $TOTAL_FAIL

rm -f $telnet_output

exit 0
