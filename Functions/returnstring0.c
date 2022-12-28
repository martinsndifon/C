#include<stdio.h>

char* display();

void main()
{
	char* str;
	str = display();
	//str[0] = 'z'; string cannot be modified because it is read only
	printf("string is %s", str);
}

char* display()
{
	return "jenny";
}