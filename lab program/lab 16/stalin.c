//Write a program that prints an identity matrix of order n using a user defined function. the user defined should accept an integer paramater that signifies the order of the identity matrix to be printed.

#include <stdio.h>
int identity_mat(void);

int main()
{

    identity_mat();
    return 0;
}

int identity_mat(void)
{
    int n, i, j;
    int identity[100][101];
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (identity[i] == identity[j])
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