//write a program in c that sort a n number in ascending order;
#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int temp;
    printf("enter the number of element in the array:");
    scanf("%d",&n);

    printf("enter the element of the array:");
    for(int j=0; j<n; j++)
    {
        scanf("%d",&a[j]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n-i-1); j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("the sorted array in ascending form is : ");
    for(int j=0; j<n; j++)
    {
        printf("%d ",a[j]);
    }
    return 0;

}