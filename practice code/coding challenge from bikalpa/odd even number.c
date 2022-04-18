#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int flag = 1;

    if(x%2==0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    if(flag){
        printf("even number");
    }
    else{
        printf("odd number");
    }
    return 0;
}