// Write a program in C that takes n numbers as input from the user, stores it in an array, and finally prints them to the screen by traversing through that array.
#include <stdio.h>
int main()
{
    int array[101];
    int number;
    printf("enter the number of element in array: ");
    scanf("%d", &number);
    printf("Enter the elements of the array : ");
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("the given element in the array are: ");
    for (int i = 0; i < number; i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}