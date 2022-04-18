#include <stdio.h>
int main()
{
    int l, b, area;
    printf("enter the value of l and b");
    scanf("%d%d", &l, &b);
    area = l * b;
    if (area > 2500)
        
    {
        printf("this is auditorium");
    }
    else if (area >= 500 && area < 2500)
    {
        printf("this is hall");
    }
    else if (area >= 150 && area < 150)
    {
        printf("this is big room");
    }
    else if (area < 150)
    {
        printf("this is small room");
    }
    else
    {
        printf("this doesnot include in the list");
    }
    return 0;
}