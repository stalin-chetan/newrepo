#include <stdio.h>

float absolute(float);
float power(float, int);

int main()
{
    int exp;
    float base, num;
    printf("enter a number to find its absolute: ");
    scanf("%f", &num);
    printf("enter the base part: ");
    scanf("%f", &base);
    printf("enter the exponent: ");
    scanf("%d", &exp);

    printf("the absolute value is : %.3f\n", absolute(num));
    printf("the %.3f to the power %d is : %.3f\n", base, exp, power(base, exp));
}

float absolute(float num)
{
    if (num < 0)
    {
        num = num * -1;
    }
    return num;
}
float power(float base, int exp)
{
    float num = 1;
    for (int i = 1; i <= exp; i++)
    {
        num = num * base;
    }
    return num;
}