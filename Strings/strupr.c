#include<stdio.h>
#include<string.h>

//custom function to convert string to uppercase

int main()
{
	int i;
	char str[30];
	printf("Enter string: ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		
	}
	printf("%s", str);
}