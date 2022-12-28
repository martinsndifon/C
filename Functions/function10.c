#include<stdio.h>

int max(int, int);

int main(void)
{
	int x, y, m;
	printf("enter two numbers\n");
	scanf("%d %d", &x, &y);
	m = max(x, y);
	if (m == 0)
	{
		printf("numbers are equal\n");
	}
	else
		printf("maximum number is: %d\n", m);
}

int max(int a, int b)
{
	if (a == b)
	{
		return 0;
	}
	else if (a > b)
	{
		return a;
	}
	else
		return b;
}