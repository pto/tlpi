#include <stdio.h>

int main()
{
#ifdef _POSIX_SOURCE
	printf("_POSIX_SOURCE is %ld\n", (long)_POSIX_SOURCE);
#else
	printf("_POSIX_SOURCE is undefined\n");
#endif

#ifdef _POSIX_C_SOURCE
	printf("_POSIX_C_SOURCE is %ld\n", (long)_POSIX_C_SOURCE);
#else
	printf("_POSIX_C_SOURCE is undefined\n");
#endif

#ifdef _XOPEN_SOURCE
	printf("_XOPEN_SOURCE is %ld\n", (long)_XOPEN_SOURCE);
#else
	printf("_XOPEN_SOURCE is undefined\n");
#endif

#ifdef _BSD_SOURCE
	printf("_BSD_SOURCE is %ld\n", (long)_BSD_SOURCE);
#else
	printf("_BSD_SOURCE is undefined\n");
#endif

#ifdef _SVID_SOURCE
	printf("_SVID_SOURCE is %ld\n", (long)_SVID_SOURCE);
#else
	printf("_SVID_SOURCE is undefined\n");
#endif

#ifdef _GNU_SOURCE
	printf("_GNU_SOURCE is %ld\n", (long)_GNU_SOURCE);
#else
	printf("_GNU_SOURCE is undefined\n");
#endif
}
