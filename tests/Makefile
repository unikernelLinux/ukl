UKL_FLAGS=-ggdb -mno-red-zone -mcmodel=kernel -fno-pic

#MYBENCH_SMALL
boot_test:./boot/boot_test.c 
	gcc -c -o unit_test.o ./boot/boot_test.c $(UKL_FLAGS)

lmbench_syscalls_test:./lmbench/lmbench_syscalls_test.c
	gcc -c -o unit_test.o ./lmbench/lmbench_syscalls_test.c $(UKL_FLAGS) -UUSE_VMALLOC -UBYPASS -UUSE_MALLOC \
                -DREF_TEST -DWRITE_TEST -DREAD_TEST -DMMAP_TEST -DMUNMAP_TEST -DPF_TEST -DEPOLL_TEST \
                -DSELECT_TEST -DPOLL_TEST -DOPEN_CLOSE_TEST

lmbench_latency_test:./lmbench/lmbench_latency_test.c
	gcc -c -o unit_test.o ./lmbench/lmbench_latency_test.c $(UKL_FLAGS) -UUSE_VMALLOC -UBYPASS -UUSE_MALLOC \
                -DREF_TEST -DWRITE_TEST -DREAD_TEST -DMMAP_TEST -DMUNMAP_TEST -DPF_TEST -DEPOLL_TEST \
                -DSELECT_TEST -DPOLL_TEST -DOPEN_CLOSE_TEST

pthread_test:./pthreads/pthread_test.c
	gcc -pthread -c -o unit_test.o ./pthreads/pthread_test.c $(UKL_FLAGS)

clean_test:
	-rm -rf unit_test.o ../unit_test.o
