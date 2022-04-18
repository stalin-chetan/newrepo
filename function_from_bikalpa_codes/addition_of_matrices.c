// WAP in C that add the two matrices with using user defined function.
#include <stdio.h>

void sum_of_mat(int[10][10], int[10][10], int, int);

int main()
{
    int i, j, mat1[10][10], mat2[10][10], row, col;

    printf("enter the number of rows and cols: ");
    scanf("%d%d", &row, &col);

    printf("enter the element of the mat1: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter the element of the mat2: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    sum_of_mat(mat1, mat2, row, col);
    return 0;
}
void sum_of_mat(int mat1[10][10], int mat2[10][10], int row, int col)
{
    int sum[10][10];
    int i, j;
    printf("the sum of the two matrix is : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}