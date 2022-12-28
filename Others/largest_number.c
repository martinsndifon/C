#include<stdio.h>

int largest_number(int a, int b, int c)
{

    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return  largest;
}

int main(void)
{
    int x, y, z, q;
    printf("Enter first number: ");
    scanf("%i", &x);
    
    printf("Enter second number: ");
    scanf("%i", &y);

    printf("Enter third number: ");
    scanf("%i", &z);

    q = largest_number(x, y, z);

    printf("The largest number is: %i\n", q);
}