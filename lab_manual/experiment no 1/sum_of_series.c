// 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! - x^10/10!
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact = fact * i;
        return fact;
    }
}
int main()
{
    float x, result = 1;
    int term = 6;
    float sign = 1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    int a = 2;
    for (int i = 1; i <= term; i++)
    {
        sign =sign * (-1);
        result = result + sign * (pow(x, a) / (float)factorial(a));
        a += 2;
    }

    printf("the result of the given series is %f", result);sa

    return 0;
}