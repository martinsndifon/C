#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int ui = (unsigned int)INT_MAX + 1;
	//int i = -5;
	printf("%d\n", ui);
	printf("%i\n", ui);
	printf("%u", ui);
}