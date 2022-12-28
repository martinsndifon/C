#include<stdio.h>

//access and print element of an array

void main()
{
	int a[5], i, j;
	printf("Enter element of the array\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 5; j++)
	{
		printf("%d\n", a[j]);
	}
}