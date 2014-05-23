#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#ifdef __APPLE__
#include <mach-o/getsect.h>
#endif

#ifndef __APPLE__
extern char etext, edata, end;
#endif

int uninitialized;
int initialized = 123;

void function(int *stack1)
{
	int stack2;
	void *heap1 = malloc(10);
	void *heap2 = malloc(10);
	void *program_break = sbrk(0);
	long page_size = sysconf(_SC_PAGESIZE);

	printf("page size      %#14lx (%ld)\n\n", page_size, page_size);

	printf("Addresses are in this order on Linux:\n\n");
	printf("&function      %14p\n", &function);
#ifndef __APPLE__
	printf("&etext         %14p\n", &etext);
#else
	printf("get_etext()    %#14lx\n", get_etext());
#endif
	printf("&initialized   %14p\n", &initialized);
#ifndef __APPLE__
	printf("&edata         %14p\n", &edata);
#else
	printf("get_edata()    %#14lx\n", get_edata());
#endif
	printf("&uninitialized %14p\n", &uninitialized);
#ifndef __APPLE__
	printf("&end           %14p\n", &end);
#else
	printf("get_end()      %#14lx\n", get_end());
#endif
	printf("heap1          %14p\n", heap1);
	printf("heap2          %14p\n", heap2);
	printf("program_break  %14p\n", program_break);
	printf("&stack2        %14p\n", &stack2);
	printf("stack1         %14p\n", stack1);

	free(heap1);
	free(heap2);
}

int main()
{
	int stack1;
	function(&stack1);
}
