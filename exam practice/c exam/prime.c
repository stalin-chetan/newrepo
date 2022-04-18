#include <stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    int isprime = 1;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (num == 1)
    {
        printf("1 is not a prime number");
    }

    else if (isprime == 0)
    {
        printf("the given number is not a prime number;");
    }
    else
    {
        printf("the given number is a prime  number");
    }

    return 0;
}