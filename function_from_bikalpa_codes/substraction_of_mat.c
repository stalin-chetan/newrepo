//write a program in c that take two matrices from the user and return the substractio of the given two matrices by using user defined function:
#include <stdio.h>

void sub_mat(int[10][10], int[10][10], int, int);

int main()
{
    int i, j, mat1[10][10], mat2[10][10], row, col;
    printf("enter the number of rows and column in the matrix: ");
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
    sub_mat(mat1, mat2, row, col);
    return 0;
}

void sub_mat(int mat1[10][10], int mat2[10][10], int row, int col)
{
    int i, j, sub[10][10];
    printf("the subtract of the two given matrix is : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
}
