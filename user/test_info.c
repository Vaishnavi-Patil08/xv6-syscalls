
#include "kernel/types.h"
#include "user/user.h"

int main() {
    int active_processes = info(1);
    printf("1. Number of processes in the system: %d\n", active_processes);
    int pages = info(3);
    printf("2. The number of memory pages used by the current process above the address 0xF000000: %d\n", pages);
    int kstack_addr = info(4);
    printf("3. The address of the kernel stack: 0x%x\n", kstack_addr);
    int call_count = info(2);
    printf("4. Total number of system call “info” made by the current process: %d\n", call_count);

    exit(0);
}
