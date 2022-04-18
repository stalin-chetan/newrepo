#include <stdio.h>
int main()
{
    int matrix[4][4], transpose[4][4], i, j;
    printf("enter the element of the 4x4 matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("the transpose of the given matrix is: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}