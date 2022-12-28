#include<stdio.h>

//best way to declare a string in a function and return it

char* display();

void main()
{
	char* str;
	str = display();
	str[0] = 'z';
	printf("string is %s", str);
}

char* display()
{
	static char str[] = "jenny"; // adding "static" infront oc char* makes it global
	return str;
}