#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], i, j, k;
    int product[3][3];

    printf("Enter the elements of the first matrices: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrices: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The product of the given matrices is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}