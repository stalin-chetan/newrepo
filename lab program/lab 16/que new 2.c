#include <stdio.h>

void identity_matrix(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    identity_matrix(n);

    return 0;
}

void identity_matrix(int n)
{
    int i, j;
    int matrix[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", 1);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}