
// Write a program in C that inserts a character at given index of a given string. For example, if the user
// enters Gnesh as a string, 1 as index and a as the character to be substituted, the final string should
// be Ganesh.

#include <stdio.h>
#include <string.h>
int main()
{
    char string[101], string2[101], res[101];
    int index;
    printf("Enter the string: ");
    gets(string);
    printf("Enter the character to be inserted:");
    gets(string2);
    printf("Enter the value of index: ");
    scanf("%d", &index);

    int i, j, k;

    for (i = 0, k = 0; i < index; i++, k++)
    {
        res[k] = string[i];
    }
    for (j = 0; string2[j] != '\0'; j++, k++)
    {
        res[k] = string2[j];
    }

    for (i = index; string[i] != '\0'; i++)
    {
        res[k] = string[i];
        k++;
    }

    res[k] = '\0';
    strcpy(string, res);

    printf("now new string is ");
    puts(string);
    return 0;
}