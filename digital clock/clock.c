#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hour, minute, second;
    int delay = 1000;

    printf("Set a time first: \n");
    printf("hour: ");
    scanf("%d", &hour);
    printf("minute: ");
    scanf("%d", &minute);
    printf("second: ");
    scanf("%d", &second);

    if (hour > 12 || minute > 60 || second > 60)
    {
        printf("Enter correct time!");
        exit(0);
    }
    printf("\n\n\n\n\n");

    while (1)
    {
        second++;

        if (second > 59)
        {
            minute++;
            second = 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
    
        }
        if (hour > 12)
        {
            hour = 1;
        }
        printf("\t\t\t\t\t\t_________________");
        printf("\n\t\t\t\t\t\t|Time : %02d:%02d:%02d|\n", hour, minute, second);
        printf("\t\t\t\t\t\t|_______________|");
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t-Chetan & Rabin");

        _sleep(delay);
        system("cls");
    }
    return 0;
}
