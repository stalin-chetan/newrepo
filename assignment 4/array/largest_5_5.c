#include <stdio.h>
int main()
{
    int matrix[5][5], i, j;
    printf("enter the element of the matrix: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int largest = matrix[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }
    printf("the largest among all the number int given matrix is %d", largest);
    return 0;
}