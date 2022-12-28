#include<stdio.h>

int fact(int n);

int main(void)
{
    printf("%d\n", fact(2));
}

int fact(int n)
{
	if (n < 0)
		return (-1);
    if(n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}