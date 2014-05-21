#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main()
{
	int result;
	struct rlimit rlim;

	result = getrlimit(RLIMIT_NOFILE, &rlim);
	printf("current: %ld\n", (long)rlim.rlim_cur);
	printf("max:     %ld\n", (long)rlim.rlim_max);
}
