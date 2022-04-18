#include <stdio.h>

int main()
{
    int arr[50];
    int size;
    int countp = 0;
    int countn = 0;
    int i = 0;
    printf("Enter the size of array");
    scanf("%d", &size);
    printf("Enter array\n");
    for (i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
            ++countp;
        else
           
        ++countn;
    }
    printf("No of positive number : %d\n No of negative number :%d", countp, countn);
    return 0;
}