#! /bin/bash

#Name of File where QEMU output should be directed
test_output="test.out"

#Name of File where Python output should be directed
latency_output="latency.out"

#Remove old object Files
rm unit_test.o
rm ../unit_test.o

#Make test
make lebench_latency_test

#Move Test file to UKL Directory
cp unit_test.o ../

#Navigate to UKL Directory
cd ../

#Build Test as UKL Application
make unit_test
make linux-build

#Run Test in QEMU - 20 minute timeout
sudo timeout 20m make run

#Use Python Script to Parse QEMU output and story in file
./tests/logsReader.py > "$latency_output"

#Get Python Exit Code
ret=$?

#If Python exits 1, test fails (print all output)
if [ $ret -ne 0 ]; then
     echo "**********************"
     echo "QEMU OUTPUT BELOW"
     echo "**********************"
     cat $test_output
     echo "**********************"
     echo "QEMU OUTPUT ABOVE"
     echo "**********************"
     echo "TEST FAILURE"
     cat $latency_output
     rm -f $test_output
     rm -f $latency_output
     exit 1
fi


# If test is successful, print results
cat $latency_output
rm -f $test_output
rm -f $latency_output

exit 0
