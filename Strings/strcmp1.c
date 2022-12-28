#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//custom strcmp function

int main()
{
    int i, flag = 0;
    char s1[30];
    char s2[30];
    printf("Enter string 1:");
    gets(s1);
    printf("Enter string 2:");
    gets(s2);

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("The strings are not the same\n");
    }
    else if (flag == 0)
    {
        printf("The strings are the same\n");
    }
    
    return 0;
}