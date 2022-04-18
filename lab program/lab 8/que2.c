// 1 + 1/3^3 + 1/5^3 + 1/7^3 + 1/9^3 +.................nth
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float sum = 0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2)
    {
        sum = sum + (float)1 / (pow(i, 3));
    }
    printf("the sum of the series: %f", sum);
    return 0;
}