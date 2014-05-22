#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main()
{
	int result;
	struct rlimit rlim;

	result = getrlimit(RLIMIT_CPU, &rlim);
	printf("RLIMIT_CPU:\n");
	printf("current: %ld\n", (long)rlim.rlim_cur);
	printf("max:     %ld\n", (long)rlim.rlim_max);

	result = getrlimit(RLIMIT_NOFILE, &rlim);
	printf("RLIMIT_NOFILE:\n");
	printf("current: %ld\n", (long)rlim.rlim_cur);
	printf("max:     %ld\n", (long)rlim.rlim_max);

	result = getrlimit(RLIMIT_NPROC, &rlim);
	printf("RLIMIT_NPROC:\n");
	printf("current: %ld\n", (long)rlim.rlim_cur);
	printf("max:     %ld\n", (long)rlim.rlim_max);

}
