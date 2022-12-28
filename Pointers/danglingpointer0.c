#include<stdio.h>

void main()
{
	int *ptr = NULL;
	{
		int a = 5; //adding "static" in front of int converts it to a global variable
		ptr = &a;
		printf("a = %d\n", *ptr);
	}
	printf("%d\n", *ptr); //this is now a dangling pointer because a is local to the block above.
}