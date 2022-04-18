#include<stdio.h>
int main()
{
    int num, fact=1;
    printf("enter a number to find the factorial: ");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        fact = fact + fact * i;
    }
    printf("the factorial of the given number is %d",fact);
    
    return 0;

}