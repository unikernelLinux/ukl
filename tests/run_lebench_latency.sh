#! /bin/bash

#Name of File where output should be directed
test_output="test.out"

#String to Print Results
RESULTS=""

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

#Run Test in UKL
sudo timeout 10m make run

#Insert call to Python Script


# # Successful.
rm -f $test_output
#make clean_test

exit 0
