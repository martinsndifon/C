#include<stdio.h>

void evenodd(int);

void main(void)
{
	int x;
	printf("enter a number\n");
	scanf("%d", &x);
	evenodd(x);
}

void evenodd(int a)
{
	if (a % 2 == 0)
	{
		printf("the number is even\n");
	}
	else
		printf("the number is odd\n");
}