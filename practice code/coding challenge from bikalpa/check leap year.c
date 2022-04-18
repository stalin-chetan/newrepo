
///******************************* EX : 5.2 **********************************//
//Leap year or not

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    int leap_year;

    if(year % 4 != 0)
    {
        leap_year = 0;
    }
    else{
        if(year%100!=0)
        {
            leap_year = 1;
        }
        else{
            if(year%400==0)
            {
                leap_year = 1;
            }
            else{
                leap_year = 0;
            }
        }
    }    
    if(leap_year){
        printf("This is leap year");
    }
    else{
        printf("this is not a leap year");
    }
    return 0;
}
