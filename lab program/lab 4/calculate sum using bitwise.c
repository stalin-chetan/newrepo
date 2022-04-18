
/****************************** QUE: 3 **************************************/
//Write a program in C that takes two numbers as input from the user, and then calculate sum as well
//as difference in the same statement using , operator.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("the sum and the difference of the number is %d,%d respectively..\n",a+b,a-b);
    return 0;
}
