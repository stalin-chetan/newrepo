#include<stdio.h>

int fun_prime(int);

int main()
{
    int n;
    printf("enter a number to check whether the given number is prime of not: ");
    scanf("%d",&n);

    fun_prime(n);
    return 0;
}

int fun_prime(int x)
{
    int flag;
    for(int i=2; i<x/2; i++)
    {
        if(x %i == 0)
        {
            flag = 1;
            break;
        }
        else 
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        printf("this is not a prime number");

    }
    else{
        printf("this is a prime number");
    }
}