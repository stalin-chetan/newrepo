#include <stdio.h>
#include <string.h>

int main()
{
    int a[5] = {2, 5, 1, 6, 8};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5- i - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
           
        }
    }
    printf("the number in ascending order is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}