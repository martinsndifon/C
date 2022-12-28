#include<stdio.h>

//pointer to pointer in c

int main()
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***r = &q;
	//print value of a
	printf("value of a = %d, %d, %d, %d\n", a, *p, **q, ***r);
	***r = 25;
	printf("value of a = %d\n", a);
	**q = 30;
	printf("value of a = %d\n", a);
	//print addresses
	printf("address of a = %x, %x\n", &a, p);
	printf("address of p = %x, %x\n", &p, q);
	printf("address of q = %x, %x\n", &q, r);


}
