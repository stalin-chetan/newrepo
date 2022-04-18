// Write a program in c that copy the order of the array and reverse it
#include <stdio.h>

int main()
{
    int array[101], rev[101];
    int length;
    printf("enter the lenght of array: ");
    scanf("%d", &length);

    printf("Enter the value element of array ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < length; i++)
    {
        rev[i] = array[length - 1 - i];
    }

    printf("\nnow the they become: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", rev[i]);
    }

    return 0;
}