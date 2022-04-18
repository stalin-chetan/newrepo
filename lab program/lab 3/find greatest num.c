//  que 1

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("the greater number is: ");
    a>b?printf("%d",a):printf("%d",b);
    return 0;
}
