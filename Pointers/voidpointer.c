#include<stdio.h>

/*
void pointers can point to any variable type but to 
access it, you have to type cast it. you cannot
dereference a void pointer without first type casting
(int *) for example.
*/

int main()
{
	void *vp;

	int a = 5;
	float b = 	1.34;
	char ch = 'c';

	vp = &a;
	printf("a = %d\n", *(int *)vp);

	vp = &b;
	printf("a = %f\n", *(float *)vp);

	vp = &ch;
	printf("a = %c\n", *(char *)vp);
}