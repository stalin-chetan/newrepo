#include <stdio.h>
#include <math.h>
int main()
{
    int x, n = 3;
    float sum = 0;
    printf("enter the value of x: ");
    scanf("%d", &x);
    sum = (float)(x - 1) / x;
    for (int i = 2; i <= n; i++)
    {
        sum = sum + 0.5 * pow(((float)(x - 1) / x), i);
    }
    printf("the sum of the series is %.3f", sum);
    return 0;
}