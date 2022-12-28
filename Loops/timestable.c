#include<stdio.h>

void main()
{
	int a, i, r;
	printf("enter number\n");
	scanf("%d", &a);
	for (i = 1; i <= 12; i++)
	{
		r = a*i;
		printf("%d x %d = %d\n",a, i, r);
	}
}