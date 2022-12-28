#include<stdio.h>

// function with argument and without return type

void sum(float, float);

void main()
{
	float a, b;
	printf("enter a & b\n");
	scanf("%f %f", &a, &b);
	sum(a, b);
}
void sum(float x, float y)
{
	float s;
	s = x + y;
	printf("sum = %f", s);
}