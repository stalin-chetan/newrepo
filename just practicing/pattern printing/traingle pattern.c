#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 20; i++)
    {
        for (j = i; j <= 19; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= ((2 * i) - 1); k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}