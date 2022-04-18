#include<stdio.h>
int main()
{
    int n=5;
    int i,j;
    for(i=1; i<=5; i++)
    {
        int a=1;
        for(j=5; j>=i; j--)
        {
            printf(" %d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;

}