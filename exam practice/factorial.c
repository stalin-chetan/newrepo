#include<stdio.h>
int main()
{
    int num,fact = 1;
    int i;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=num;i>=1;i--)
    {
        fact = fact * i;
    }
    printf("factiorial = %d",fact);
    return 0;
}