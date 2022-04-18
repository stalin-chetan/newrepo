#include <stdio.h>

int even_sum(int [], int);

int main()
{

    int n;
    printf("enter how many number you want? ");
    scanf("%d", &n);
    int array[100];

    printf("enter the element of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum_even = even_sum(array,n);
    printf("the sum of the even number among them is %d", sum_even);
    return 0;
}

int even_sum(int array[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            sum = sum + array[i];
        }
    }
    return sum;
}