#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d%d",&m,&n);

    int matrix[m][n];
    printf("Enter the value of the matrix: ");
    int i,j;
    for(i=0;i<m;i++);
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<m;i++);
    {
        for(j=0;j<n;j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("the sum of the given matrix is %d",sum);
    return 0;
}