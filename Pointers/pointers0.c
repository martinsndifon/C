#include<stdio.h>

int main(void)
{
	int a = 10, b = 9, c;
	int *p, *q;
	p = &a;
	q = &b;
	c = *q;
	printf("value of a = %d\n", a);
	printf("value of a = %d\n", *p);
	printf("address of a = %x\n", &a);
	printf("address of a = %x\n", p);
	printf("address of p = %x\n", &p);
	printf("value of b = %d, %d\n", b, *q);
	printf("value of b = %d\n", c);
}