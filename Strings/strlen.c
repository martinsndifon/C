#include<stdio.h>
#include<string.h>

int main()
{
    unsigned int count = 0;
    char name[30];
    printf("Enter name: ");
    gets(name);
    count = strlen(name);
    printf("string lenth is: %d", count);
}