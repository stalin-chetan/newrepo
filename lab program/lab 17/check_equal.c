#include <stdlib.h>
#include <stdio.h>

int is_same(int[][100], int, int, int[][100], int, int);

int main()
{
    int mat1[100][100], m1, n1, mat2[100][100], m2, n2;
    printf("enter the number of rows and cols for first matrix: ");
    scanf("%d%d", &m1, &n1);
    printf("enter the number of rows and cols for the second matrix: ");
    scanf("%d%d", &m2, &n2);
    printf("enter the element of the first matrix: ");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter the element of the second matrix: ");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    is_same(mat1, m1, n1, mat2, m2, n2);
    if (is_same)
    {
        printf("they are equal");
    }
    else
    {
        printf("they are not equal");
    }
    return 0;
}

int is_same(int mat1[100][100], int m1, int n1, int mat2[100][100], m2, n2)
{
    int i, j;
    if (m1 != n2 || m2 != n1)
    {
        printf("they are not equal");
        exit(0);
    }
    else
    {
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                if (mat1[i][j] == mat2[i][j])
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
}