#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//custom string reverse function

int main()
{
    int i, l, j;
	char ch;
    char str[50];

    printf("Enter string:");
    gets(str);

	l = strlen(str);

	//first way
	for (i = 0; i < l/2; i++)
	{
		ch = str[i];
		str[i] = str[(l - 1) - i];
		str[(l - 1) - i] = ch;
	}
	printf("Reversed string is: %s\n", str);

	//second way
	for (i = 0, j = (l - 1); i < j; i++, j--)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	printf("Your string is: %s\n", str);
}