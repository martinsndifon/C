#include <stdio.h>

union abc
{
	int a; char b; float c;
};

void main()
{
	union abc u;
	union abc *ptr = &u;
	u.a = 7;
	//u.b = 'y';
	//u.c = 65.23;

	printf("a value is: %d\n", ptr->a);
	printf("b value is: %c\n", ptr->b);
	printf("c value is: %.2f", ptr->c);
}