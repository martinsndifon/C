#include<stdio.h>
#include<stdlib.h>

/**a dangling pointer is a pointer that is pointing
 * to a memory location that has been freed()
 * Or more precisely it points to a memory location 
 * that no longer exist
 * The solution is to assigned the pointer to NULL
 * after it has been freed()  
 */

int main()
{
	int *ptr = (int *)malloc(sizeof (int));
	*ptr = 10;
	printf("%d\n", *ptr);
	free(ptr); //ptr now becomes a dangling pointer
	//printf("%d\n", *ptr); - this will print garbage value

	ptr = NULL;
	if (ptr == NULL)
	{
		printf("this is a null pointer\n");
	}
	
}