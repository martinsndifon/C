#include<stdio.h>
#include<stdlib.h>

/**
 * a wild pointer is an uninitialized pointer
 * Always initialized pointers to NULL when you don't
 * want to use at declaration OR dynamically allocate 
 * memory to it
 */

int main()
{
	int *ptr;
	printf("%d", *ptr); //prints garbage value
}

/** Solution
{
	int *ptr = NULL;
	printf("%d", *ptr); //prints 0
}
*/

/** Solution0
{
	int *ptr = (int *)malloc(sizeof (int));
	*ptr = 10;
	printf("%d", *ptr); //prints 10
}
*/