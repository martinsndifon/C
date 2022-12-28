#include<stdio.h>
//another method of writing array of characters(strings)
void modify(char*, char*);

void main()
{
	char str1[] = "Jenny";
	char str2[] = "Khatri";
	modify(str1, str2);
}

void modify(char* str1, char* str2)
{
	int i, lenght = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		lenght++;
	}
	printf("lenght of 1st string is: %d\n", lenght);
	str2[1] = 'k';
	printf("%s %s\n",str1, str2);
}