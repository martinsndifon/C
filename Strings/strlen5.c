#include<stdio.h>

//string lenght function using the (s[i]) method

int _strlen(char *s);

int main(void)
{
	int l;
	char str[10] = "Martins";
	l = _strlen(str);
	printf("%s\n", str);
	printf("%d", l);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}