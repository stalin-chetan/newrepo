//. Find the sum of the following series upto 10 terms:
// 1 - 12 + 123 - 1234 + 12345 - 123456 + ...

#include <stdio.h>
int main()
{
    int n=10, sum = 0, term = 0;
    int sign = 1;
    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + i;
        sum = sum + (sign * term);
        sign = sign * (-1);
    }
    printf("the sum of the series is %d", sum);
    return 0;
}