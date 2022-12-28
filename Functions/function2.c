#include<stdio.h>

char fun(void); //funtion declaration

void main()
{
	char ch; 
	ch = fun();//function call
	printf("your character is: %c", ch);
}

char fun(void) //function definition
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	return c;
}