#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int square[101], cubes[101];
    for (int i = 0; i < 5; i++)
    {
        square[i] = numbers[i] * numbers[i];
        cubes[i] = numbers[i] * numbers[i] * numbers[i];
    }
    printf("the square of the given array is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", square[i]);
    }
    printf("\nthe cubes of the given array is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", cubes[i]);
    }
    return 0;
}