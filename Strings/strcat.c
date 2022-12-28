#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len1, len2, i;
    char s1[30] = "jenny";
    char s2[7] = "khatri";
    strcat(s1, s2);
    printf("%s\n", s1);

//using strncat
    strncat(s1, s2, 4);
    printf("%s\n", s1);

//custom function that does the same thing
    len1 = strlen(s1);
    len2 = strlen(s2);
    for (i = 0; i <= len2; i++)
    {
        s1[len1 + i] = s2[i];
    }
    printf("%s", s1);
}