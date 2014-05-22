#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("_SC_IOV_MAX is %ld\n", sysconf(_SC_IOV_MAX));
}
