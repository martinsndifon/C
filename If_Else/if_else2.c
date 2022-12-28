#include<stdio.h>


void main()
{
	char ch;
	printf("Enter Character:\n");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("You entered an UPPERCASE letter");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("You entered a lowercase letter");
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("You entered a number");
	}
	else
		printf("You entered a special character");
}
