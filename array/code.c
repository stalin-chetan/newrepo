#include<stdio.h>

int main()
{
    int n;
    printf("enter the number of element you want: ");
    scanf("%d",&n);
    int arr[n];
    int temp;
    printf("enter the element of the array: ");
     for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[i]> arr[j])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}