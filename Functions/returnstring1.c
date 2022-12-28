#include<stdio.h>

char* display();

void main()
{
	char* str;
	str = display();
	//str[0] = 'z'; string cannot be modified because stack memory will be destroyed after control leave the function display()
	//printf("string is %s", str); will not print for the same reason above
}

char* display()
{
	char str[] = "jenny";
	return str;
}