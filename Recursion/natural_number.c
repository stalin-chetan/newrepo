// Write a program in c to find the sum of the first n natural numbers using recursion.

#include<stdio.h>

int sum_of_natural(int n);

int main()
{
    int n;
    printf("enter a natural number to find the sum: ");
    scanf("%d",&n);

    sum_of_natural(n);
    printf("the sum of the first natural number is %d",sum_of_natural(n));
    return 0;
}

int sum_of_natural(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + sum_of_natural(n-1);
    }
}