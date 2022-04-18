//Write a program in C that inserts a character at given index of a given string.
//For example, if the user enter Gnesh as a striing, 2 as index and a as the character to be substituted, the final string should be Ganesh.

#include <string.h>
#include <stdio.h>
int main()
{
    int index;
    char str[101], str1[101], letter;
    printf("Please enter a string: ");
    scanf("%s", str);

    printf("enter the character to be inserted: ");
    scanf(" %c", &letter);

    printf("enter the number where it should be placed: ");
    scanf("%d", &index);
    int i, j, len;
    len = strlen(str);

    for (i = 0; i < index; i++)
    {
        str1[i] = str[i];
    }

    str1[index] = letter;

    for (j = index; str[j] != '\0'; j++)
    {
        str1[j + 1] = str[j];
    }
    
    printf("now it becomes %s", str1);

    return 0;
}