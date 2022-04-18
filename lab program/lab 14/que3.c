// Write a program in C that inserts a character at given index of a given string. For example, if the user
// enters Gnesh as a string, 1 as index and a as the character to be substituted, the final string should
// be Ganesh.

#include <stdio.h>
#include <string.h>
int main()
{
    char string[101],string2[101], letter;
    int index;
    printf("Enter the string: ");
    fgets(string, 101, stdin);

    printf("Enter the value of index: ");
    scanf("%d", &index);

    printf("Enter the character to be inserted:");
    scanf(" %c", &letter);
    int n=strlen(string),i;
    for(i=n;i>=index; i--)
    {
        string[i+1]=string[i];
    }
    string[index]=letter;

    printf("now new string is %s", string);

    return 0;
}