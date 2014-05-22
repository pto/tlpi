#include <stdio.h>
#include <stdlib.h>

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

	printf("&function      %14p\n", &function);
	printf("&etext         %14p\n", &etext);
	printf("&initialized   %14p\n", &initialized);
	printf("&edata         %14p\n", &edata);
	printf("&uninitialized %14p\n", &uninitialized);
	printf("&end           %14p\n", &end);
	printf("heap           %14p\n", heap);
	printf("&stack         %14p\n", &stack);

	free(heap);
}
