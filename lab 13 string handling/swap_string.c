// Write a program in C that swaps two strings input from the user.
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[101], string2[101];
    printf("please enter the first string: ");
    scanf("%s", string1);

    printf("please enter the second string: ");
    scanf("%s", string2);
    char temp[101];

    strcpy(temp, string1);
    strcpy(string1, string2);
    strcpy(string2, temp);
    printf("\n");
    printf("Now the first string is %s\n", string1);
    printf("And the second string is %s", string2);

    return 0;
}