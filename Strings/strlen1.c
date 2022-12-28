#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0;
    unsigned int count = 0, count1 = 0, count2 = 0;
    char name[30];
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
}