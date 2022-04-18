//write a program that count the number of vowel letter in a given string using user defined function
#include <stdio.h>

int vowel_num(char[]);
int main()
{
    int i;
    char string[101];
    printf("enter the character in the string:");
    gets(string);
    vowel_num(string);

    return 0;
}
int vowel_num(char string[])
{
    int i, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (
            string[i] == 'a' || string[i] == 'A' ||
            string[i] == 'e' || string[i] == 'E' ||
            string[i] == 'i' || string[i] == 'I' ||
            string[i] == 'o' || string[i] == 'O' ||
            string[i] == 'u' || string[i] == 'U')
        {
            count++;
        }
    }
    printf("there are %d vowel", count);
}