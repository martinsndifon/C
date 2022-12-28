#include<stdio.h>

int main()
{
	char ch;
	printf("Enter character:\n");
	scanf("%C", &ch);
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("you entered a vowel");
		break;
	
	default: printf("You entered a consonant");
	}
}