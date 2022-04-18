//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 4; k >=i ; k--)
        {
            printf("* ");
        }
        for (int l = 3; l >= i; l--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}