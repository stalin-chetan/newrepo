//  -1/x + 2/x^2 - 3/x^3 + 4/x^4.............nth term
#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, sign = (-1);
    float sum = 0, term = 0;
    printf("enter the valuue of n; ");
    scanf("%d", &n);
    printf("enter the valuue of x; ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++)
    {
        term = (float)i / pow(x, i);
        sum = sum + (term * sign);
        sign = sign * -1;
    }
    printf("the sum of the series is %f", sum);
    return 0;
}