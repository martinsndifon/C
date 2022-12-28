#include<stdio.h>

//None Tail recursion

void print(int a)
{
	if (a < 1) return;
	else
		printf("%d\n", a);
		print(a/2);
		printf("%d\n", a);
}

void main()
{
	print(10);
}