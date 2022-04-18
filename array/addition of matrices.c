// WAP in c that prints the sum of the two matrices
#include<stdio.h>
int main()
{
    int array1[4];
    int array2[4];
    int sum;
    printf("enter the value of the first term: ");
    for(int i=1; i<=4; i++)
    {
        scanf("%d",&array1[i]);
    }
    for(int i=1; i<=4; i++)
    {
        scanf("%d",&array2[i]);
    }
    return 0;
}