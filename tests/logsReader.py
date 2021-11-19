#!/usr/bin/env python3

#Python File to Parse QEMU Output and record test latencies

def line_starts_with(string, fp):
    return [line for line in fp if line.startswith(string)]

with open("./test.out") as fp:
    Lines = fp.readlines()
    testList = ["REF_TEST", "WRITE_TEST", "READ_TEST", "MMAP_TEST", "MUNMAP_TEST", "PF_TEST", "SELECT_TEST", "POLL_TEST", "EPOLL_TEST"]
    for line in Lines:
        if "testName" in line:
            testName=line.strip().split("testName:",1)[1]
        if "testTime" in line:
            testTime = line.strip().split("testTime:", 1)[1]
            testList.remove(testName)
            print("test '{}' ran in {} seconds".format(testName,testTime))
    if len(testList)>0:
        print("The following tests failed to run:")
        print(testList)
        exit(1)
