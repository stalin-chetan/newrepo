#include<stdio.h>
int main()
{
    int num,m;
    printf("Enter a number whose multiplication table is needed:");
    scanf("%d",&num);

    for(int i = 1; i<=10; i++)
    {       
        m = num * i;
        printf("%d * %d = %d \n",num,i,m);     
    }
    return 0;
}