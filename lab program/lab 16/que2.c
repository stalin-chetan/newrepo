// Write a program that prints an identity matrix of order n using a user defined function. The user defined function should accept an integer
//parameter that signifies the order of the identiry matrix to be printed.

#include <stdio.h>

void identity_matrix(int n);

int main()
{
    int n;
    printf("enter the order of matrix: ");
    scanf("%d",&n);

    identity_matrix(n);
    return 0;
}

void identity_matrix(int n)
{

    int i, j;

    int array[101][101];

    printf("identity matrix is : \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}