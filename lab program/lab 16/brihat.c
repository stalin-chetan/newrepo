#include <stdio.h>

void indentity_mat(int n);

int main()
{​
    int n;
    printf("Enter the order of the indentity matrix: ");
    scanf("%d", &n);

    indentity_mat(n);
    return 0;
}​

void indentity_mat(int n)
{​
    int i, j;
    int mat[n][n];
    for(i = 0; i < n; i++)
    {​
        for(j = 0; j < n; j++)
        {​
            if(i == j)
            {​
                mat[i][j] = 1; 
            }​else
            {​
                mat[i][j] = 0;
            }​
        }​
    }​

    for(i = 0; i < n; i++)
    {​
        for(j = 0; j < n; j++)
        {​
            printf("%d ", mat[i][j]);
        }​
        printf("\n");
    }​
}