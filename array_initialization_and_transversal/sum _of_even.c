//Write a program that finds the sum of only even numbers among the n elements in an array initialized with the elements given by the user.
#include <stdio.h>
int main()
{
    int array[101];
    int i, length, sum = 0;

    printf("Enter the length of array: ");
    scanf("%d", &length);

    printf("Enter the element of the array");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < length; i++)
    {
        if (array[i] % 2 == 0)
        {
            sum = sum + array[i];
        }
        else
        {
            continue;
        }
    }
    printf("the sum of th even number among the array is %d", sum);
    return 0;
}