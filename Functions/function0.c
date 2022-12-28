#include<stdio.h>

void sum(void)
{
	int a, b, sum = 0;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
}

void main()
{
	sum();
	printf("Hello\n");
	sum();
	sum();
} 