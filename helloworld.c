#include <unistd.h>
#include <sys/syscall.h>

int main(void) {
    syscall(SYS_write, 1, "Heello, World!\n", 14);
    syscall(SYS_exit, 0);
}
