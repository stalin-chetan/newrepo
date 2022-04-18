#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=8; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("* ");
        }printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        printf("| \n");
    }
    return 0;
}