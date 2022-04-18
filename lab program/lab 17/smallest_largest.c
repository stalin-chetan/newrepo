#include <stdio.h>

void smallest(int[], int);
void largest(int[], int);

int main()
{
    int i, j, n;
    printf("enter the number of element in the array: ");
    scanf("%d", &n);
    int array[100];
    printf("enter the element of the matrix in the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    smallest(array, n);
    largest(array, n);
    return 0;
}

void smallest(int array[], int n)
{
    int small_num = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < small_num)
        {
            small_num = array[i];
        }
    }
    printf("%d is the smallest number\n", small_num);
}
void largest(int array[], int n)
{
    int large_num = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > large_num)
        {
            large_num = array[i];
        }
    }
    printf("%d is the largest number", large_num);
}
