//Write a program in c that transpose the given 4 * 3 matrix;
#include<stdio.h>
int main()
{
    int mat1[4][3];
    int mat2[3][4];
    int i,j;
    printf("enter the element of the first matrix : ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("the transpose of the 4*3 matrix is below \n");

    for(i=0; i<3;i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",mat1[j][i]);
        }
        printf("\n");
    }
    return 0;
}