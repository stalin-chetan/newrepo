#include <stdio.h>
int main()
{
    int number[100];
    int i, n, smallest, largest;

    printf("enter a the value of n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    smallest = number[0];
    largest = number[0];

    for (i = 0; i < n; i++)
    {
        if (number[i] > largest)
        {
            largest = number[i];
        }
        if (number[i] < smallest)
        {
            smallest = number[i];
        }
    }

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);

    return 0;
}