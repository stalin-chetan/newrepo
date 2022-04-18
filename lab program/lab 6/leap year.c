//Write a C program to check whether a year is leap year or not. Use nested if-else statements. (Hint:
//All years divisible by 4 are leap year, except for those which are divisible by 100 for which they should
//also be divisible by 400 to be leap year.)

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    int flag = 1;
    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                flag = 1;
            }   
            else
            {
                flag = 0;
            }
        }            
        else
        {
            flag = 0;
        }
        
    }
    else
    {
        flag = 0;
    }

    if(flag == 1)
    {
        printf("this is a leap year");
    }
    else
    {
        printf("this not a leap year");
    }
    return 0;
}