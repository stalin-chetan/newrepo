#include <stdio.h>
int main()
{
    int year;
    printf("enter a year to check whether the year is leap or not: ");
    scanf("%d", &year);

    if (year % 4 != 0)
    {
        printf("this is not a leap year");
    }
    else if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("This is a leap year");
        }
        else
        {
            printf("this is not a leap year");
        }
    }
    return 0;
}