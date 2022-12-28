#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char *str = malloc(30 * sizeof(char));

    printf("Enter string to print: ");
    gets(str);

    i = 0;
    while (*(str + i) != '\0')
        i++;

    write(1, str, i);
    free(str);

    return (0);
}
/*
    char name[30];
    printf("Enter name: ");
    gets(name);
    puts(name);
    puts(name);
*/