#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=i; j<=3; j++)
        {
            printf("  ");
        }
        for(int k=i; k<=((2*i)-1); k++)
        {
            printf("%d ",k);
            
        }
        for(int l=((2*i)-2);l>=i;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}