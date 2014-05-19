#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <gnu/libc-version.h>

#define BUFFER_SIZE 80

int main()
{
	char buf[BUFFER_SIZE];
	int rc;

	printf("__GLIBC__ is %d and __GLIBC_MINOR__ is %d\n",
		       	__GLIBC__, __GLIBC_MINOR__);
	printf("gnu_get_libc_version() is %s\n",
			gnu_get_libc_version());
	rc = confstr(_CS_GNU_LIBC_VERSION, buf, BUFFER_SIZE);
	if (rc < 0) {
		perror("confstr");
		exit(EXIT_FAILURE);
	}
	printf("confstr(_CS_GNU_LIBC_VERSION, ...) returns %d with string %s\n", rc, buf);
}
