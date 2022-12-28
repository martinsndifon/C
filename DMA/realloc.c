#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n, m, *ptr, *ptr1;

	printf("Enter total values: ");
	scanf("%d", &n);
	ptr = (int *)malloc(n * sizeof(int));
	printf("Enter values\n");
	for (i = 0; i < n; i++)
		scanf("%d", (ptr + i));

	printf("Enter updated value of n: ");
	scanf("%d", &m);
	ptr1 = (int *)realloc(ptr, m * sizeof(int));
	printf("previous address is: %p and new address is: %p5\n", ptr, ptr1);

	printf("Enter new values\n");
	for (i = n; i < m; i++)
		scanf("%d", (ptr1 + i));

	printf("Entered values are:\n");
	for (i = 0; i < m; i++)
		printf("%d\t", *(ptr1 + i));

	free(ptr1);
	
	return (0);
}