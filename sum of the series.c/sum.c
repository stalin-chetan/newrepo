// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +.................nth
#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the value of n to find the sum of the series: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum = sum + (float)1/i;
    }
    printf("the sum of the series is %f",sum);
    return 0;
}