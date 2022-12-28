#include<stdio.h>
#define N 50

int main()
{
	int a[N][N], b[N][N], c[N][N];
	int i, j, k, sum, m, n, p, q;
	/**
	 * @m is the number rows of first matrix
	 * @n is the number columns of first matrix
	 * @p is the number rows of second matrix
	 * @q is the number of columns of second matrix
	 */

	printf("Enter number of rows and columns of first matrix\n");
	scanf("%d %d", &m, &n);
	printf("Enter first matrix\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter number of rows and columns of second matrix matrix\n");
	scanf("%d %d", &p, &q);
	printf("Enter second matrix\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nFirst Matrix is:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond Matrix is:\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	if (n != p)
	{
		printf("\nInvalid Matrix format for multiplication\n");
		printf("Hint: Number of columns of first matrix must be equal to number of rows of second matrix");
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				sum = 0;
				for (k = 0; k < m; k++)
				{
					sum = sum + a[i][k] * b[k][j];
				}
				c[i][j] = sum;
			}
		}
		printf("\nmultiplication is:\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
}