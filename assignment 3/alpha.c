#include <stdio.h>
int main()
{
    int b, i, j, k=71, s, l;

    for (i = 71; i >= 65; i--)
    {
        k= k-1;
        for (j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        for (s = 70; s >= i; s--)
        {
            printf("  ");
        }
        for (l = 70; l >= i; l--)
        {
            printf("  ");
        }
        while (k>=65)
        {
            printf("%c ",k);
            k--;
        }
        
        
        printf("\n");
    }
    return 0;
}