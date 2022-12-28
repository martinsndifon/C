#include <stdio.h>
#include <string.h>

// Function to check if a number is a palindrome
int isPalindrome(int n)
{
    // Convert the number to a string
    char str[10];
    sprintf(str, "%d", n);

    // Check if the string is a palindrome
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

// Main function
int main()
{
    // Initialize variables
    int a, b, prod, max = 0;

    // Iterate over all pairs of 3-digit numbers
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            // Calculate the product of the numbers
            prod = i * j;

            // Check if the product is a palindrome and greater than the current maximum
            if (isPalindrome(prod) && prod > max)
            {
                a = i;
                b = j;
                max = prod;
            }
        }
    }

    // Print the result
    printf("The largest palindrome made from the product of two 3-digit numbers is %d, which is the product of %d and %d.\n", max, a, b);

    return 0;
}
