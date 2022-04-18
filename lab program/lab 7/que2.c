//Write a program in C that prints first n numbers in Fibonacci sequence where n is input from the user
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    long int f=0,s=1,sum;
    printf("%ld %ld ",f,s);
    for(int i=0; i<(n-2); i++)
    {
        sum = f+s;
        f = s;
        s = sum;
        printf("%ld ",sum);
    }
    
    return 0;
}