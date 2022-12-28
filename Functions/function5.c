#include<stdio.h>

// functions with no argument and without return type

void sum(void);
void sub(void);
void div(void);
void mul(void);

void main()
{
	sum();
	sub();
	div();
	mul();
}

void sum(void)
{
	int a = 5, b = 7, sum = 0;
	sum = a + b;
	printf("sum = %d\n", sum);
}

void sub(void)
{
	int a = 5, b = 7, sub = 0;
	sub = a - b;
	printf("sub = %d\n", sub);
}

void div(void)
{
	float a = 5, b = 7, div = 0;
	div = a / b;
	printf("div = %f\n", div);
}

void mul(void)
{
	int a = 5, b = 7, mul = 0;
	mul = a * b;
	printf("mul = %d\n", mul);
}