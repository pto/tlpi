// ppid is a simple example to see a system call in assembly code
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t ppid;

	ppid = getppid();
	printf("%d\n", ppid);
}
