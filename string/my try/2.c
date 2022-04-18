#include <stdio.h>
#include <string.h>
#define ROWS 3
#define COLS 3
int main()
{
    int string[10][10];
    int flag1 = 0, flag = 0;
    int i, j;
    printf("Enter the elements of the strings:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &string[i][j]);
        }
    }

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; i < COLS; j++)
        {
            if (string[i] == string[j])
            {
                if (string[i][j] == 1)
                {
                    flag = 1;
                }
            }
            if (string[i] != string[j])
            {
                if (string[i][j] == 0)
                {
                    flag1 = 1;
                }
            }
        }
    }
    if (flag == 1 && flag1 == 1)
    {
        printf("this is an identity matrix");
    }
    else
    {
        printf("this is not an identity matrix");
    }

    return 0;
}