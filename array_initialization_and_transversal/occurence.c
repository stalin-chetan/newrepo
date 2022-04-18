//Write a program in C that takes n integers from the user, stores it in an array, and finds the number of occurrence of another number given as input.
#include <stdio.h>
int main()
{
    int array[101];
    int i, length, count = 0, element;

    printf("Enter the length of array: ");
    scanf("%d", &length);

    printf("Enter the element of the array");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element you want to check occurrence:");
    scanf("%d", &element);

    for (i = 0; i < length; i++)
    {
        if (array[i] == element)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("the sum of th even number among the array is %d", count);
    }
    else
    {
        printf("there is no repetation of %d ", element);
    }
    return 0;
}