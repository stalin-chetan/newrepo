// (f) If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("enter the age of ram: ");
    scanf("%d", &ram);
    printf("enter the age of shyam: ");
    scanf("%d", &shyam);
    printf("enter the age of ajay: ");
    scanf("%d", &ajay);

    if (ram <= shyam)
    {
        if (ram <= ajay)
        {
            printf("ram is the youngest of the three");
        }
        else
        {
            printf("ajay is the youngest one");
        }
        if (shyam <= ram)
        {
            if (shyam <= ajay)
            {
                printf("shyam is the youngest one");
            }
            else
            {
                printf("ajay is the younges one");
            }
        }
        return 0;
    }