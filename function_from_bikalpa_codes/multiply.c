// write a program in c that multiply two matrix by using user defined function:

#include <stdio.h>
#include<stdlib.h>
void multiply_mat(int[100][100],
                  int m1,
                  int n1,
                  int[100][100],
                  int m2,
                  int n2);

int main()
{
    int mat1[100][100], mat2[100][100];
    int i, j;
    int m1, m2, n1, n2;
    printf("enter the number of rows for first matrix: ");
    scanf("%d%d", &m1, &n1);
    printf("enter the number of rows for second matrix: ");
    scanf("%d%d", &m2, &n2);
    printf("enter the elements of the matrix 1:\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter the elements of the matrix 2:\n");
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    multiply_mat(mat1, m1, n1, mat2, m2, n2);
    return 0;
}

void multiply_mat(int mat1[100][100],
                  int m1,
                  int n1,
                  int mat2[100][100],
                  int m2,
                  int n2)
{
    int result[m1][n2];
    int i, j, k;
    if(m1!=m2||n1!=n2)
    {
        printf("sorry, this can't be multiplied");
        exit(0);
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            int sum = 0;
            for (k = 0; k < m2; k++)
            {
                sum += mat1[i][k] + mat2[k][j];
            }
            result[i][j] = sum;
        }
    }
    printf("the multiplication of the two given matrix is: \n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
