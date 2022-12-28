#include<stdio.h>

// function with no argument but with return type

int sum(void);

void main()
{
	int s;
	s = sum();
	printf("sum = %d", s);
}
int sum(void)
{
	int a, b, sum = 0;
	printf("enter two numbers\n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	return sum;
}