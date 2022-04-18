#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str1[100], res[100];
    int index;

    printf("enter a string: ");
    gets(str);
    printf("Enter the string to be inserted: ");
    gets(str1);
    printf("enter the position where string is to be inserted ");
    scanf("%d", &index);

    int i, j, k;

    for (i = 0, k = 0; i < index; i++, k++)
    {
        res[k] = str[i];
    }
    for (j = 0; str1[j] != '\0'; j++, k++)
    {
        res[k] = str1[j];
    }
    for (i = index; str[i] != '\0'; i++)
    {
        res[k] = str[i];
        k++;
    }
    res[k] = '\0';
    strcpy(str, res);
    printf("the string after modification is ");
    puts(str);
    return 0;
}