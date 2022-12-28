#include <stdio.h>
#include <stdlib.h>

int *display()
{
	int i, *ptr;

	ptr = (int *)malloc(3 * sizeof(int));

	printf("Enter the values:");
	for (i = 0; i < 3; i++)
		scanf("%d", ptr + i);
	
	return (ptr);
}

int main()
{
	int i, *ptr1;
	ptr1 = display();

	printf("The entered values are:\n");
	for(i = 0; i < 3; i++)
		printf("%d\t", *(ptr1 + i));

	free(ptr1);
}