#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    int power;
    power = pow(x,y);
    printf("%d power of %d is %d",x,y,power);
    return 0;
}