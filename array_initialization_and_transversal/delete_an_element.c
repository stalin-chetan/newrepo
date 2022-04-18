#include <stdio.h>

int main()
{
    int array[101];
    int i, n, del;

    printf("please enter the number of element of array: ");
    scanf("%d", &n);

    printf("Please enter the elements in the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("please enter the number you want to remove: ");
    scanf("%d", &del);

    if (del >= n - 1)
    {
        printf("not possible for deletion");
    }
    else
    {
        for (i = del - 1; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }
    }
    printf("Now the list of numbers become: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}