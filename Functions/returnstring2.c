#include<stdio.h>

char* display();

void main()
{
	char* str;
	str = display();
	//str[0] = 'z'; string can be accessed but cannot be modified because it is read only
	printf("string is %s", str);
}

char* display()
{
	char* str = "jenny"; // adding "static" infront of char* will make it global
	return str;
}