#include<stdio.h>

//add [i]th element of 2 arrays

void main()
{
	int a[5], b[5], c[5], i;

	printf("Enter elements of array a:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter elements of array b:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 5; i++)
	{
		c[i] = a[i] + b[i];
		printf("sum array element at index %d is = %d\n", i, c[i]);
	}
}
	