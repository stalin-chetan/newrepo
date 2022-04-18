// Write a program that takes weekday number as input and then print the weekday in words. For
// example, if the user inputs 1, you should display Sunday. If the user inputs 2, you should print
// Monday and so on. Use switch-case statements.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter today's weekday in number:");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("SUNDAY");
            break;
        case 2:
            printf("MONDAY");
            break;
        case 3:
            printf("TUESDAY");
            break;
        case 4:
            printf("WEDNESDAY");
            break;
        case 5:
            printf("THURSDAY");
            break;
        case 6:
            printf("FRIDAY");
            break;
        case 7:
            printf("SATURDAY");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}