#include<stdio.h>
int main()
{
    int a=0,b=1,sum=1,n,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=3; i<=n;++i)
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
        sum = sum + c;
    }
    printf("sum = %d",sum);
    
    return 0;
}