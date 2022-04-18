// Write a program that checks whether a given string is a palindrome with use of string handling
// functions.

#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    printf("Enter a string to check the palindrome or not: \n");
    gets(a);

    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        printf("this is palindrome string");
    }
    else
    {
        printf("this is not a palindrome string");
    }
    
    return 0;
}