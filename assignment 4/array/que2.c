// Twenty-five numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are positive, how
// many are negative, how many are even and how many odd.

#include <stdio.h>
#include <string.h>

int main()
{
    int num[26];
    int i, n, odd = 0, even = 0;
    int positive = 0, negative = 0;

    printf("Please enter 25 number first: ");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 25; i++)
    {
        num[i] < 0 ? negative++ : positive++;
        (num[i] % 2 == 0) ? even++ : odd++;
    }
    
    printf("there are %d even number\n", even);
    printf("there are %d odd number\n", odd);
    printf("there are %d positive number\n", positive);
    printf("there are %d negative number\n", negative);
    return 0;
}