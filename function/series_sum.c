#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    float x;
    int n = 5;
    float sum = 0, term = 0;
    int sign = 1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    for (int i = 1; i <= n; i++)
    {
        term = pow(x, 2 * i - 1) / factorial(2 * i - 1); // 2 * i  - 1 = actual parameter / argument
        sum += sign * term;
        sign = sign * -1;
    }
    printf("the sum of series is: %f\n", sum);
    return 0;
}
int factorial(int n)
{ // n = formal parameter
    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}