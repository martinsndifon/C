#include<stdio.h>

// function with argument and with return type

float sum(float, float);

void main()
{
	float a, b, s;
	printf("enter a & b\n");
	scanf("%f %f", &a, &b);
	s = sum(a, b);
	printf("sum = %f", s);
}
float sum(float x, float y)
{
	float s;
	s = x + y;
	return s;
}