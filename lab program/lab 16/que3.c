// //Write a program that prints the smaller number among two number given as input. Your program must use an user defined function that
// takes two numbers as parameters and return the smaller number as return value.

#include <stdio.h>

void small_number(int a, int b);

int main()
{
    int num1, num2;
    printf("enter two number:");
    scanf("%d%d", &num1, &num2);
    small_number(num1, num2);
    return 0;
}

void small_number(int num1, int num2)
{


    if (num1 < num2)
    {
        printf("%d is smaller than %d", num1, num2);
    }
    else
    {
        printf("%d is smaller than %d", num2, num1);
    }
}