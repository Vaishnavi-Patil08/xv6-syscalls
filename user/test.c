// File: user/test_getprocnum.c

#include "kernel/types.h"
#include "user/user.h"

int main() {
    int num_procs = getprocnum();  // Call the new system call
    printf("Number of active processes: %d\n", num_procs);
    exit(0);
}
