// // write a program in c to display all prime numbers less than a given number, using functions.YOur program should contain two functions :
// 1 : print_prime_less_than that takes a number as a parameter and prints the prime numbers less than number
// 2 : iS_prime that takes a number as parameter and then return whether that number is prime.YOu can use the same difination of function you wrote in previous one.

#include <stdio.h>
#include <stdlib.h>

int is_prime(int n);
void print_prime_less_than(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num) == 1)
    {
        printf("this is a prime number\n");
    }
    else
    {
        printf("this is not a prime number\n");
    }
    print_prime_less_than(num);

    return 0;
}

int is_prime(int n)
{
    int i;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void print_prime_less_than(int n)

{
    int i;
    printf("prime number are:");
    for (i = 2; i < n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
}