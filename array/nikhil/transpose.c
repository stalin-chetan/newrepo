#include <stdio.h>

int main()
{
    int i, j, m = 2, n = 2;
    int matrix[m][n], transpose[m][n];

    printf("enter the element of the matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("the transpose of the matrix is : \n");
    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}