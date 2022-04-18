//Write a program that sort a given array in a ascending order using function

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of the element of array: ");
    scanf("%d", &n);

    printf("enter the element of the array: ");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if(array[i]>)
        }
    }
    printf("the list of the number in ascending order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}