// Write a program in c using recursive program ot generate the Fibonacci series up to N terms;
#include<stdio.h>

int fun_fiboseries(int );

int main()
{
    int term;
    printf("Enter the number of terms to print fibonacci series: ");
    scanf("%d",&term);
    printf("the fibonacci series is : ");
    for(int n=0; n<term; n++)
    {
        printf("%d ",fun_fiboseries(n));
    }
    return 0;
}

int fun_fiboseries(int n)
{
    if(n==1 || n== 0)
    {
        return n;
    }
    else
    {
        return  fun_fiboseries(n-1) + fun_fiboseries(n-2);
    }
}