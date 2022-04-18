// 1 - 1/2 + 1/4 - 1/8 + 1/16 - 1/32 + ........................nth term
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float sum = 0;
    float term = 0;
    int sign = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        term = (float)1 / pow(2, i);
        sum = sum + (term * sign);
        sign = sign * (-1);
    }
    printf("the sum of the series is %f", sum);
    return 0;
}