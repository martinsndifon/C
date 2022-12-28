#include<stdio.h>

//sum of individual rows and columns in a matrix

int main()
{
	int a[3][3], i, j, sumR, sumC;
	printf("Enter matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		sumR = sumC = 0;
		for (j = 0; j < 3; j++)
		{
			sumR = sumR + a[i][j];
			sumC = sumC + a[j][i];
		}
		printf("sum of row = %d and sum of column = %d\n", sumR, sumC);
	}
}