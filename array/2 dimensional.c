#include<stdio.h>
int main()
{
    int a[2][2], b[2][2], sum[2][2];
    printf("let's print the sum of the matrices. \nEnter the point of the matrices:\n");
    for(int i=0;i<2;++i)
    {
        for(int j=0; j<2; ++j)
        {
            printf("enter a%d%d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<2;++i)
    {
        for(int j=0;j<2;++j)
        {
            printf("enter b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0; i<2; ++i)
    {
        for(int j=0;j<2;++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("sum of the matrices is : \n");
    for(int i=0; i<2; ++i)
    {
        for(int j=0;j<2;++j)
        {
            printf("%d  ",sum[i][j]);         
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");
        printf("\n");
    return 0;
}