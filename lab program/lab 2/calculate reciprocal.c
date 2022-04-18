//. Write a program in C that calculates and displays reciprocal of a given number.
#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter a number:");
    scanf("%d",&a);
    b = (float)1/a;
    printf("the reciprocal of %d is %.2f",a,b);
    return 0;
}