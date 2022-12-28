#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
// A function to check if a
// string str is palindrome
void isPalindrome(char *str)
{
    // Start from leftmost and
    // rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters
    // while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
            return;
    }
    printf("%s\n", str);
}

int main()
{
	int i, j, mul;
	char *mulstr, *str;

	for (i = 10; i <= 99; i++)
	{
		for (j = 10; j <= 99; j++)
		{

			mul = i * j;
			mulstr = itoa(mul, str, 10);
			printf("%s\n", mulstr);
			isPalindrome(mulstr);
		}
	}
}