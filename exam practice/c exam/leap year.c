//write a program in c to check the given year is leap year or not

#include <stdio.h>
int main()
{
    int year;
    printf("enter the year to check the leap year of not: ");
    scanf("%d", &year);

    int flag = 1;

    if (year % 4 != 0)
    {
        flag = 0;
    }
    else if (year % 100 == 0)
    {
        if (year % 400 != 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("this is a leap year");
    }
    else
    {
        printf("this is not a leap year");
    }
    return 0;
}