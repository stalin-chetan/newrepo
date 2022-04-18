// Write a program in c to display sum of each row for a 3*4 matrx

#include <stdio.h>
int main()
{
    int mat[3][4];
    int row = 3, col = 4;
    int sum_of_first_row =0 , sum_of_sec_row=0, sum_of_third_row=0;

    printf("enter the element of the 3*4 matrax: \n");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= 4; j++)
        {
            if (i == 1)
            {
                sum_of_first_row = sum_of_first_row + mat[i][j];
            }
            else if (i == 2)
            {
                sum_of_sec_row += mat[i][j];
            }
            else if (i == 3)
            {
                sum_of_third_row += mat[i][j];
            }
        }
    }
    printf("the sum of the first row is %d\n", sum_of_first_row);
    printf("the sum of the first row is %d\n", sum_of_sec_row);
    printf("the sum of the first row is %d\n", sum_of_third_row);

    return 0;
}