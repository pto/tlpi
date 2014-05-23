// getenv shows that getenv does not use a single staticly-allocated buffer
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	for (i = 0; i < 5; i++) {
		printf("%p\n", getenv("THIS"));
		printf("%p\n", getenv("THAT"));
	}
}
