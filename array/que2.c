// WAP in c that takes n numbers as a input from the keyword and then displays their sum using array
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number of terms you want: ");
    scanf("%d",&n);

    int array[n];
    printf("Enter the value to be stored in  array:");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum = sum+ array[i];
    }
    printf("the sum of the given array is %d",sum);
    return 0;
}