#include <stdio.h>

int main()
{
    char string1[] = "PuLcHoWk";
    char string2[] = "PULCHOWK";
    int i, j, length;
    /* Pattern */
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 3 || i == 5 || i == 7)
            {
                putchar(string2[j]);
            }
            else
            {
                putchar(string1[j]);
            }
        }
        putchar('\n');
    }
    return 0;
}