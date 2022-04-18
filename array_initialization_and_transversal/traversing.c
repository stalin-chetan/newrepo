#include <stdio.h>

int main()
{
    char array[101], store[101];
    int n, i, j, num;
    printf("How many alphabet you want to arrange? :");
    scanf("%d", &num);

    printf("Enter the alphabet as you want to arrange: ");
    for (i = 0; i < num; i++)
    {
        scanf(" %c", &array[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            store[i] = array[i + 1];
            array[i + 1] = array[i];
        }
        else
        {
            continue;
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        printf(" %c", store[i]);
        printf("\t");
    }
    return 0;
}