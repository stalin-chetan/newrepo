// Write a program to print the fibonancci series.

#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    
    printf("the first term: 0\n");
    printf("the second term is: 1\n");

    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("fibonancii series is: ");
    for(int i=0;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d  ",c);
    }
    return 0;
}
hello t