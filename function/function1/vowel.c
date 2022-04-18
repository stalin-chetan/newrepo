#include <stdio.h>

int vow(char[]);

int main()
{
    char string[101];
    printf("enter  a string: ");
    scanf("%s", string);

    int number = vow(string);
    printf("there are %d vowel in the given string",number);

    return 0;
}

int vow(char string[])
{
    int count = 0;
    for (int i = 0; i != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {
            count++;
        }
    }
    return count;
}