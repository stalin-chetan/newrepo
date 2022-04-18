// Write a program that sorts n number of integers in descending order.
#include <stdio.h>
int main()
{
    int n;
    printf("Please enter the number of integer you want:");
    scanf("%d", &n);

    int array[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}