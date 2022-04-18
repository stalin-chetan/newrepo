#include <stdio.h>
#define row 3
#define col 3
int main()
{
    int i, j;
    int matrix1[row][col];
    int matrix2[row][col];

    printf("Enter the elements of the matrix1: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int result[i][j];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}