#include <stdio.h>
int main()
{
    int array[5];
    int i, num, flag = 1;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter a number : ");
    scanf("%d", &num);
    for (i = 0; i < 5; i++)
    {
        if (array[i] == num)
        {
            printf("The number exists in the array.\n");
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number not found.\n");
    }

    return 0;
}