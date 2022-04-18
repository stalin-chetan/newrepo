// 1 2 3 4 3 2 1
//   2 3 4 3 2
//     3 4 3
//       4

#include <stdio.h>
int main()
{
    int a = 1;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < 4 - i; j++)
        {
            printf("%d ", a + j);
        }
        if (i <= 3)
        {
            for (j = 3; j > i; j--)
            {
                printf("%d ", j);
            }
        }
        a++;

        printf("\n");
    }

    return 0;
}