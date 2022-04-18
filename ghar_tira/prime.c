#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("enter a number to print the prime number upto: ");
    scanf("%d", &number);
    printf("the list of prime number upto %d are: ", number);
    int i, j;
    if (number <= 0)
    {
        printf("sorry there are no prime avaliable");
        exit(0);
    }

    for (i = 2; i < number / 2; i++)
    {
        for (j = 2; j < number/2; j++)
        {
            if (j % i != 0)
            {
                printf("%d ", j);
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}