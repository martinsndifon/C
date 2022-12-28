#include <stdio.h>

//adds all individual digit of a number

int sumdigit(int n)
{
	if (n == 0)
		return (0);
	return (n % 10 + sumdigit(n / 10));
}

int main(void)
{
	printf("%d", sumdigit(111));
	return (0);
}