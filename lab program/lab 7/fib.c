 //Write a program in C which checks whether a given integer is armstrong number or not.
#include<math.h>
#include<stdio.h> 
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    int count=0;
    int temp = n;
    while(temp>0)
    {
        temp = temp/10;
        count = count +1;
    }
    printf("%d\n",count);
    
    int sum=0;
    temp = n;
    int digit;
    while(temp>0)
    {
        digit = temp%10;
        sum = sum+ pow(digit,count);
        temp = temp/10;
    }
    if(n==sum)
    {
        printf("this is a fibonancii number: ");

    }
    else
    {
        printf("this is not a fibonancii number:");
    }
    return 0;

}