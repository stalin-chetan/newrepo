#include <stdio.h>
int main()
{
    int matrix1[6][6], matrix2[6][6], sum[6][6];
    int i, j;

    printf("Enter the element of the first 6 X 6 matrix: \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the element of the second 6 X 6 matrix: \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The sum of the given two matrix is:\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}