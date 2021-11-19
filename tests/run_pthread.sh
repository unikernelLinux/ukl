#! /bin/bash

#Name of File where QEMU output is stored
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
make pthread_test

#Move Test file to UKL Directory
cp unit_test.o ../

#Navigate to UKL Directory
cd ../


#Build Test as UKL Application
make unit_test
make linux-build

#Run Test in QEMU (with 10 minute Timeout)
sudo timeout 10m make run

#Check for Magic String to Verify each Test

#WORK THREADS
if ! grep -sq "UKL: work_thread_bench successful" "$test_output"; then
    echo "TEST FAIL - WORK THREADS"
    TOTAL_FAIL=$(($TOTAL_FAIL + 1))
    result=$"WORK THREADS: FAIL\n"
    RESULTS="${RESULTS}${result}"
else
    echo "TEST PASS - WORK THREADS" 
    TOTAL_PASS=$(($TOTAL_PASS + 1))
    result=$"WORK THREADS: PASS\n"
    RESULTS="${RESULTS}${result}"
fi

#Print Results to Console
echo "Total PASS "
echo $TOTAL_PASS

echo "Total Fail"
echo $TOTAL_FAIL

echo "Unit Test Results"
echo -e "${RESULTS}"

#Check for Failure
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

exit 0
