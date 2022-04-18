// Write a program to calculate the result of cb^3 / d^2 . (read the value of c, b,d form the user)

#include <stdio.h>

int main()
{
    int b, c, d;
    float result;
    printf("enter the value of b: ");
    scanf("%d", &b);
    printf("enter the value of c: ");
    scanf("%d", &c);
    printf("enter the value of d: ");
    scanf("%d", &d);

    result = c * b * b * b / d * d;
    printf("the calculatio of the given number is %.2f", result);
    return 0;
}