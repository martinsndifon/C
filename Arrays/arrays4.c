#include<stdio.h>

//initialization of 2D array
//access and print element of 2D array

int main()
{
	int i, j, sum = 0;
	int a[2][3];
	printf("Enter elements of matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("Matrix is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("Sum of all elements in matrix = %d", sum);
}