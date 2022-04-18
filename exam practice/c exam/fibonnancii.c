//write a program to print first n fibonannci series
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int a = 0,sum=0;
    int b = 1, term;
    printf("the fibonancii series upto %d term is:",n);
    printf("%d %d ", a, b);

    for (int i = 2; i < n; i++)
    {
        term = a + b;
        a = b;
        b = term;
        sum = term + sum;
        printf("%d ",term);
    }
    printf("\nthe sum of the fibonancii series upto is %d",sum+1);
    
    return 0;
}