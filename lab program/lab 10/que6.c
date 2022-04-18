//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4
#include <stdio.h>
int main()
{
    int a;
    int i, j, k, l;

    for (i = 1; i <= 4; i++)
    {
        for (j = 3; j >= i; j--)
        {
            printf("  ");
        }
        a = i;
        for (k = 1; k <= i; k++)
        {
            printf("%d ", a);
            a++;
        }

        a = a - 2;
        for (l = 2; l <= i; l++)
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}