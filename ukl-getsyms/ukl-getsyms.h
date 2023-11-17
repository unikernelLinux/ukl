#ifndef UKL_GETSYMS_H
#define UKL_GETSYMS_H

#define MAJOR_UKL_GETSYMS 248
#define IOCTL_GET_SYMBOLS _IOWR(MAJOR_UKL_GETSYMS, 1, struct ioctl_data)

struct ioctl_data {
    char **symNames;
    void **symDefs;
    int numSymbols;
};

#endif
