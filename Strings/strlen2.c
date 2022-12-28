#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//dynamically allocate memory to the string

int main()
{
    int i = 0;
    unsigned int count = 0, count1 = 0, count2 = 0;
    char *name = malloc(30 * sizeof(char));
    printf("Enter name: ");
    gets(name);
    count = strlen(name);
    printf("string lenth is: %d\n", count);

    while (name[i] != '\0')
    {
        count1++;
        i++;
    }
    printf("New string lenght is: %d\n", count1);
    
    for (int j = 0; name[j] != '\0'; j++)
    {
       count2++;
    }
    printf("last string lenght is: %d\n", count2);
    free(name);

    return 0;
}