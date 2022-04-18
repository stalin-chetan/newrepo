// Write a program that checks whether a given square matrix of dimension 3x3 is an identity matrix.
#include <stdio.h>
#include <string.h>
#define ROWS 3
#define COLS 3
int main()
{
    int a[10][10], b[10][10];
    int i, j;
    int flag = 0;

    printf("Enter the element of matrix: ");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 1;
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("this is an identity matrix");
    }
    else
    {
        printf("this not a identity matrix");
    }

    return 0;
}