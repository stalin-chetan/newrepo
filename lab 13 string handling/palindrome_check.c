// Write a program that checks whether a given string is a palindrome with use of string handling functions
#include <stdio.h>
#include <string.h>

int main()
{
    char string[101];
    printf("Please enter a string to check it is palindrome or not : ");
    scanf("%s", string);

    char temp[101];

    strcpy(temp, string);
    strrev(temp);
    if (strcmp(temp, string) == 0)
    {
        printf("The given string is palindrome");
    }
    else
    {
        printf("The given string is not palindrome!");
    }
    return 0;
}