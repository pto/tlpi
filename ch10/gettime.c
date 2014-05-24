#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

int main()
{
	struct timeval tv1, tv2;
	struct timespec ts1, ts2;

	if (gettimeofday(&tv1, NULL)) {
		perror("gettimeofday");
		exit(EXIT_FAILURE);
	}	

	if (gettimeofday(&tv2, NULL)) {
		perror("gettimeofday");
		exit(EXIT_FAILURE);
	}

	if (clock_gettime(CLOCK_REALTIME, &ts1)) { 
		perror("clock_gettime");
		exit(EXIT_FAILURE);
	}

	if (clock_gettime(CLOCK_REALTIME, &ts2)) {
		perror("clock_gettime");
		exit(EXIT_FAILURE);
	}

	printf(" first tv_usec: %ld\n", tv1.tv_usec);
	printf("second tv_usec: %ld\n", tv2.tv_usec);
	printf(" first tv_nsec: %ld\n", ts1.tv_nsec);
	printf("second tv_nsec: %ld\n", ts2.tv_nsec);
	printf(" sizeof time_t: %ld\n", (long)sizeof(time_t));
}
