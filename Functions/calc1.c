#include<stdio.h>

void add(int a, int b)
{
	printf("addition = %d", a+b);
}

void sub(int a, int b)
{
	printf("subtraction = %d", a-b);
}

void mult(int a, int b)
{
	printf("multiplication = %d", a*b);
}

void div(int a, int b)
{
	printf("division = %d", a/b);
}

void main()
{
	int ch, a, b;
	void (*fptr[4])(int, int) = {add, sub, mult, div};
	printf(" 0 for addition\n 1 for subtraction\n 2 for multiplication\n 3 for division\n");
	printf("Enter choice:\n");
	scanf("%d", &ch);
	if (ch < 0 || ch > 3)
	{
		printf("You have entered an invalid choice");
		return;
	}
	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	
	(*fptr[ch])(a,b);
}