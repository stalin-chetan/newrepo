//Write a program in C that counts the number of words

#include <stdio.h>
#include <string.h>
int main()
{
    int count = 1;
    char str[101];
    printf("Enter a sentence: ");
    fgets(str, 101, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            count++;
        }
    }
    printf(" there are %d space in this sentence", count);
    return 0;
}