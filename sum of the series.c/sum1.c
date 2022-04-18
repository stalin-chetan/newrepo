// 1/1^3 + 1/2^3 + 1/3^3 + 1/4^3 + 1/5^3 +.................nth
#include<math.h>
#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum = sum + (float)1/(pow(i,3));
    }
    printf("the sum of the series is %f",sum);
    return 0;
}
