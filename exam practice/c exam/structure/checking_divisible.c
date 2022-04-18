#include <stdio.h>
int main()
{
    int a;
    printf("enter a number to check the given number is divisible by 2 4 and 6 or not: ");
    scanf("%d", &a);

    if (a % 2 == 0 && a % 4 == 0 && a % 6 == 0)
    {
        printf("this number is divisible by all number");
    }
    else
    {
        printf("sorry enter another number");
    }

    return 0;
}