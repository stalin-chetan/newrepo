// Write a program that calculates the scalar multiplication of a matrix of dimension 3x3. (Hint: When a
// matrix is multiplied by a scalar x, the resultant matrix has all of its elements multiplied by x).
#include <stdio.h>

int main()
{
    int array[3][3];
    int scalar, i, j;
    printf("Please enter the value of scalar ");
    scanf("%d", &scalar);
    printf("Enter a 3x3 matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            array[i][j] = array[i][j] * scalar;
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
