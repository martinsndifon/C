#include<stdio.h>

/**
 * Null pointers points to zero
 * they cannot be dereferenced
 * when using a null pointer you have to check if the 
 * program actually returned one so you can end your 
 * program
 */

int main()
{
	int a = 3;
	int *ptr = NULL;
	//int *ptr1;
	if (ptr == NULL)
	{
		printf("this is a null pointer\n");
	}
	else
	{
		printf("%d\n", *ptr);

	}
	//printf("%d\n", ptr1);
}