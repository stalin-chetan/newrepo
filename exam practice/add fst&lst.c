/*if a four digit number is input through the keyboard, write a program to obtain the sum of the 
first and last digit of this number*/
#include<stdio.h>
int main()
{
    int num,a,b,sum;
    printf("Enter a four digit number: ");
    scanf("%d",&num);
    int temp = num;
    a = temp%10;
    temp = temp/1000;
    b = temp%10;
    
    sum = a+b;
    printf("The sum of first and last digit of %d is %d",num,sum);
    return 0;

}