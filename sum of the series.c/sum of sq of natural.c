// 1^2 +2^2 + 3^2 + 4^2 + ......nth
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter a the value of n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("the sum of the series is %d", sum);
    return 0;
}