obj-m += ukl-getsyms.o

all: initlib
	$(MAKE) -C $(shell pwd)/../linux M=$(shell pwd)
initlib: ukl-initlib.c
	$(CC) $^ -o $@
clean:
	rm -rf *.o *.ko *.order *.mod* *.symvers *.so initlib
