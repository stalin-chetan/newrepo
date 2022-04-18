//. Write a program in C that prints all prime numbers between 100 and 200.
#include <stdio.h>
int main()
{
    int prime, number;

    printf("the prime number between 100 to 200 are: ");
    for (int i = 100; i <= 200; i++)
    {
        prime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}