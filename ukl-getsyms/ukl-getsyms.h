#ifndef UKL_GETSYMS_H
#define UKL_GETSYMS_H

#define IOCTL_MAGIC 'k'
#define IOCTL_GET_SYMBOLS _IOR(IOCTL_MAGIC, 1, struct ioctl_data)

struct ioctl_data {
    char **symNames;
    void **symDefs;
    int numSymbols;
};

#endif
