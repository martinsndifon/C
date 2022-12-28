#include<stdio.h>
#include<string.h>

//custom function to convert string to lowercase

int main()
{
	int i;
	char str[30];
	printf("Enter string: ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		
	}
	printf("%s", str);
}