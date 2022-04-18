// write a program in c to check whether the given number is prime or not, using function
#include <stdio.h>

int is_prime(int n);

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    is_prime(num);
    if (is_prime(num) == 1)
    {
        printf("this is a prime number");
    }
    else
    {
        printf("this is not a prime number");
    }
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

// #include <stdio.h>

// void is_prime(int n);

// int main()
// {
//     is_prime(n);
//     return 0;
// }

// void is_prime(int n)
// {
//     int n, flag=1;
//     printf("enter a number whether to check the prime or not: ");
//     scanf("%d", &n);

//     for (int i = 2; i < n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             flag = 0;
//         }
//         else
//         {
//             flag = 1;
//         }
//     }

//     if (flag == 1)
//     {
//         printf("this is a prime number");
//     }
//     else
//     {
//         printf("this is not a prime nunber");
//     }
// }