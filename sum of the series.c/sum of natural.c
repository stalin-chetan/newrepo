// 1 + 2 + 3 + 4 + 5 + ...............nth term
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the term of the series what you want to calculate: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum of the series up to %d is %d", n, sum);
    return 0;
}