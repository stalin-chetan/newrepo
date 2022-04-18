#include<stdio.h>

int sum_using_recur(int n);

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("the sum of the given number is %d", sum_using_recur(n));
    return 0;
}

int sum_using_recur(int n)
{
   if(n==0)
   {
       return 0;
   }

    return (n + sum_using_recur(n-1)); 
}