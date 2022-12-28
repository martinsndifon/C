#include<stdio.h>

//direct recursion

int sum(int x)
{
	int s = 0;
	if (x == 1)
		return x;
	s = x + sum(x - 1);
	return s;
}

int main()
{
	int a, i;
	printf("enter number\n");
	scanf("%d", &i);

	a = sum(i);
	printf("sum is: %d", a);
}