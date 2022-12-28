#include<stdio.h>

int sum(int, int);

void main()
{
	int (*ptr)(int, int); //argumant(s) must match the argument(s) in the funtion it is pointing to
	int s = 0;

	ptr = &sum;
	s = (*ptr)(2, 3);
	printf("sum = %d\n", s);
}

int sum(int a, int b)
{
	return a + b;
}