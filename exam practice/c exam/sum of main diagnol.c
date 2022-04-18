#include <stdio.h>
int main()
{
    int mat1[100][100];
    int row, col, sum;
    printf("enter the number of row and column");
    scanf("%d %d", &row, &col);
    printf("enter the elements of the first matrix: ");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + mat1[i][j];
            }
        }
    }
    printf("the sum of the main diagonal number is %d", sum);
    return 0;
}