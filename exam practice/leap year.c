/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year 
or not. (Hint: Use the % operator)  */

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    
    if(year%400 == 0)
    {
        printf("this is a leap year");    
    }
    else if(year%100 == 0)
    {
        printf("this is not a leap year");
    }
    else if(year%4==0)
    {
        printf("this is a leap year");
    }
    else
    {
        printf("this is not a leap year");
    }
    
    return 0;
}