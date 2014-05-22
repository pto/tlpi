#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char etext, edata, end;

int uninitialized;
int initialized = 123;

int function()
{
	return 1;
}

int main()
{
	int stack;
	void *heap = malloc(10);
	void *program_break = sbrk(0);
	long page_size = sysconf(_SC_PAGESIZE);

	printf("page size      %#14lx (%ld)\n\n", page_size, page_size);

	printf("&function      %14p\n", &function);
	printf("&etext         %14p\n", &etext);
	printf("&initialized   %14p\n", &initialized);
	printf("&edata         %14p\n", &edata);
	printf("&uninitialized %14p\n", &uninitialized);
	printf("&end           %14p\n", &end);
	printf("heap           %14p\n", heap);
	printf("program_break  %14p\n", program_break);
	printf("&stack         %14p\n", &stack);

	free(heap);
}
