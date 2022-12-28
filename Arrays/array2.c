#include<stdio.h>

//checks number of odd/even numbers in an array

void main()
{
	int a[10], i;
	int even = 0, odd = 0;
	printf("Enter elements:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;
	}
	printf("Even elements are = %d\n", even);
	printf("Odd elements are = %d", odd);
}