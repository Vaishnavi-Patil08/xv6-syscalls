
#include "kernel/types.h"
#include "user/user.h"

int main() {
    int call_count = info(2);
    printf("Total number of system call “info” made by the current process: %d\n", call_count);
    int active_processes = info(1);
    printf("Number of processes in the system: %d\n", active_processes);
    call_count = info(2);
    printf("Total number of system call “info” made by the current process: %d\n", call_count);
    int pages = info(4);
    printf("The number of memory pages used by the current process above the address 0xF000000: %d\n", pages);
    call_count = info(2);
    printf("Total number of system call “info” made by the current process: %d\n", call_count);
    int kstack_addr = info(3);
    printf("The address of the kernel stack: 0x%x\n", kstack_addr);
    

    exit(0);
}
