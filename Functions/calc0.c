#include<stdio.h>

void add(int a, int b)
{
	printf("addition = %d", a+b);
}

void Sub(int a, int b)
{
	printf("subtraction = %d", a-b);
}

void mul(int a, int b)
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
	printf(" 0 for addition\n 1 for subtraction\n 2 for multiplication\n 3 for division\n");
	printf("Enter choice:\n");
	scanf("%d", &ch);
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	switch (ch)
	{
	case 0:
		add(a, b);
		break;
	case 1:
		Sub(a, b);
		break;
	case 2:
		mul(a, b);
		break;
	case 3:
		div(a, b);
		break;
	default:
		printf("Enter a valid choice");
	}
}