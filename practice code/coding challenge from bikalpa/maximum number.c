//Write a program in C that takes two numbers from user as input and then displays the maximum
// among the two numbers.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a, &b);
    a > b ? printf("%d is greater",a): printf("%d is greater",b);

    return 0;
}    
