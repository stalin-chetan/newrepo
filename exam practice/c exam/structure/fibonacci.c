#include <stdio.h>
int main()
{
    int sum = 0, a = 0, b = 1, k;
    printf("the fiboseries is : %d ",a);
    for (int i = 0; i < 10; i++)
    {
       a = b;
       b = sum;
       sum = a + b;
        printf("%d ",sum);
    }
    return 0;
}