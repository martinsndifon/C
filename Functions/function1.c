#include<stdio.h>

void sum(void); //funtion declaration

void main()
{
	sum(); //function call
}

void sum(void) //function definition
{
	int a, b, sum = 0;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
}