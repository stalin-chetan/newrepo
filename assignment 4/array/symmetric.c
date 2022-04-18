#include <stdio.h>
int main()
{
    int is_symmetric = 0;
    int matrix[100][100], matrix1[100][100], ROWS, COLS, i, j;
    printf("enter the number of rows and coulum in matrix: ");
    scanf("%d%d", &ROWS, &COLS);

    printf("enter the element of the %dx%d matrix: \n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("enter the element of the %dx%d matrix: \n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (matrix1[i][j] != matrix[j][i])
            {
                is_symmetric = 0;
            }
            else
            {
                is_symmetric = 1;
            }
        }
    }

    if (is_symmetric)
    {
        printf("this is a symmetric matrix");
    }
    else
    {
        printf("this matrix is not symmetric");
    }
    return 0;
}