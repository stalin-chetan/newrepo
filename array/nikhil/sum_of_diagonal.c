//Write a program to find sum of diagonal elements of 2x2 matrix

#include <stdio.h>
int main()
{
    int i, j, ROW = 2, COL = 2;
    int sum = 0;

    int matrix[ROW][COL];
    printf("Enter the element of the matrix: \n");

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("the sum of the diagonal of the matrix is %d", sum);
    return 0;
}
