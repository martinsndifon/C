#include<stdio.h>

//pointer arithmetic(subtraction)

int main()
{
	//int d;
	int a[] = {0, 1, -1, 10, 5};
	int *p = &a[0];
	int *q = &a[3];
	//d = q - p; //this returns how many elements p and q are far apart from each other
	//q = q - 2; //this moves the pointer q 2 elements back
	printf("q-p = %d\n", q - p);
	printf("p-q = %d\n", p - q);
	printf("value of q = %d\n", *q);
	q = q - 2;
	printf("value of q = %d\n", *q);
	p = p + 2;
	printf("q-p = %d\n", q - p);
	q = q - 2; //this will print garbage value because we have left the boundary of the array
	printf("value of q = %d\n", *q);
}