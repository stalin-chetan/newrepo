//Write a program in C that takes a number n as input from the user and calculates its factorial
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++)
    {
        fact = fact*i;

    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}