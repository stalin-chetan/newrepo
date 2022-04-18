#include<stdio.h>
#include<string.h>
#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS];
    int flag =0;
    int i,j;
    printf("Please enter the 3x3 matrix: ");

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            if(a[i]==a[j] && a[i][j]!=1)
            {
                flag = 0;
                break;
            }
            if(a[])
        }
    }

    



    return 0;
}