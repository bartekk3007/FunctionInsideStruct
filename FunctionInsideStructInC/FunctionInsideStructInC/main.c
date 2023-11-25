#include <stdio.h>
#include <stdlib.h>

struct member
{
	int a;
	int b;
	void (*func)();
};

void function()
{
	printf("To jest tekst\n");
}

int main(void)
{
	void (*funct)() = function;
	funct();

	struct member mem;
	mem.func = function;

	mem.func();

	return 0;
}