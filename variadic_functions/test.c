#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void _toupper(char *str);
int main()
{
	int len;
	char *ptr;
	char s[20];
	len = (unsigned int)INT_MAX + 1024;
	ptr = itoa(len, s, 8);
	_toupper(s);
	printf("%s", s);


	return (0);
}

void _toupper(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
}