//write a program in c that count number if word in sentence
#include <stdio.h>
#include <string.h>
int main()
{
    char sen[101];
    printf("Enter a sentence to know the how many words are there: ");
    gets(sen);
    int count = 1;

    for (int i = 0; sen[i] != '\0'; i++)
    {
        if (sen[i] == 32)
        {
            count++;
            
        }
    }
    printf("there are %d words in the given sentence", count);
    return 0;
}