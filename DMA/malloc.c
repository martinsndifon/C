#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n, *ptr;

	printf("Enter total values: ");
	scanf("%d", &n);
	ptr = (int *)malloc(n * sizeof(int));
	printf("Enter values\n");
	for (i = 0; i < n; i++)
		scanf("%d", (ptr + i));
	printf("Entered values are:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", *(ptr + i));
	free(ptr);

	return (0);
}