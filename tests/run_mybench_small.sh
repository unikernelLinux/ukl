#! /bin/bash

#Name of File where output should be directed
test_output="test.out"

#Total Tests Passed
declare -i TOTAL_PASS=0

#Total Tests Failed
declare -i TOTAL_FAIL=0

#String to Print Results
RESULTS=""

#Remove old object Files
rm unit_test.o
rm ../unit_test.o

#Make test
make mybench_small_test

#Move Test file to UKL Directory
cp unit_test.o ../

#Navigate to UKL Directory
cd ../


#Build Test as UKL Application
make unit_test
make linux-build

#Run Test in UKL
sudo timeout 10m make run

#Check for Magic String to Verify each Test

#FILE OPEN/CLOSE
if ! grep -sq "UKL: File Open/Close Successful" "$test_output"; then
    echo "TEST FAIL - FILE OPEN/CLOSE"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"FILE OPEN/CLOSE: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - FILE OPEN/CLOSE" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"FILE OPEN/CLOSE: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Clock Get Time
if ! grep -sq "UKL: clock_gettime Successful" "$test_output"; then
    echo "TEST FAIL - clock_gettime()"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result="CLOCK GET_TIME: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
   echo "TEST PASS - clock_gettime()" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result="CLOCK GET_TIME: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#CPU Bench
if ! grep -sq "UKL: CPU Bench Successful" "$test_output"; then
    echo "TEST FAIL - CPU Bench"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"CPU BENCH: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - CPU Bench" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"CPU BENCH: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Get PID Bench
if ! grep -sq "UKL: GET PID Successful" "$test_output"; then
    echo "TEST FAIL - GET PID"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"GET PID: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - GET PID" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"GET PID: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#WRITE
if ! grep -sq "UKL: WRITE Successful" "$test_output"; then
    echo "TEST FAIL - WRITE"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"WRITE: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - WRITE" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"WRITE: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#READ
if ! grep -sq "UKL: READ Successful" "$test_output"; then
    echo "TEST FAIL - READ"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"READ: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - READ" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"READ: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#MMAP
if ! grep -sq "UKL: MMAP Successful" "$test_output"; then
    echo "TEST FAIL - MMAP"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"MMAP: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - MMAP" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"MMAP: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#MUNMAP
if ! grep -sq "UKL: MUNMAP Successful" "$test_output"; then
    echo "TEST FAIL - MUNMAP"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"MUNMAP: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - MUNMAP" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"MUNMAP: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#PAGE FAULT
if ! grep -sq "UKL: Page Fault Bench Successful" "$test_output"; then
    echo "TEST FAIL - PAGE FAULT SIMULATIONS"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"PAGE FAULT SIMULATION: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - PAGE FAULT SIMULATIONS" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"PAGE FAULT SIMULATION: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#SELECT
if ! grep -sq "UKL: SELECT Successful" "$test_output"; then
    echo "TEST FAIL - SELECT"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"SELECT: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - SELECT" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"SELECT: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#POLL
if ! grep -sq "UKL: POLL Successful" "$test_output"; then
    echo "TEST FAIL - POLL"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"POLL: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - POLL" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"POLL: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#EPOLL
if ! grep -sq "UKL: EPOLL Successful" "$test_output"; then
    echo "TEST FAIL - EPOLL"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"EPOLL: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - EPOLL" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"EPOLL: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

echo "Total PASS "
echo $TOTAL_PASS

echo "Total Fail"
echo $TOTAL_FAIL

echo "Unit Test Results"
echo -e "${RESULTS}"

if ! ((TOTAL_FAIL == 0)); then
    echo "===================================="
    echo "SEE FAILURES IN QEMU OUTPUT BELOW"
    echo "===================================="
    cat $test_output
    rm -f $test_output
    exit 1
fi
# # Successful.
rm -f $test_output
#make clean_test

exit 0
