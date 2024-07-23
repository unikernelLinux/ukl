#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <errno.h>
#include "ukl-getsyms.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <symbol1> <symbol2> ... <symbolN>\n", argv[0]);
        return 1;
    }

    int fd = open("/dev/ukl-getsyms", O_RDWR);
    if (fd < 0) {
        perror("Failed to open device");
        return 1;
    }

    struct ioctl_data syms;
    syms.numSymbols = argc - 1;
    syms.symNames = argv + 1;
    
    syms.symDefs = malloc(syms.numSymbols * sizeof(void *));
    
    if (!syms.symDefs) {
        perror("Failed to allocate memory");
        close(fd);
        return 1;
    }

    if (ioctl(fd, IOCTL_GET_SYMBOLS, &syms) < 0) {
        perror("ioctl failed");
        free(syms.symDefs);
        close(fd);
        return 1;
    }

    // Print the results to send to bash program which makes .so
    for (int i = 0; i < syms.numSymbols; i++) {
        printf("%s %p ", syms.symNames[i], syms.symDefs[i]);
    }

    // Clean up
    free(syms.symDefs);
    close(fd);

    return 0;
}
