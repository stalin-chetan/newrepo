#include <stdio.h>
int main()
{
    int R1, R2, R3, R4, sales;
    float C1, C2;
    printf("enter the sales amount of either  company A or B");
    scanf("%d", &sales);
    if (sales == 2000)
    {
        R1 = (2000 * 5) / 100;
        printf("c1=%f", (2000 * 5) / 100);
    }
    else if (sales > 2000)
    {
        R2 = (2000 * 6) / 100;
         printf("c1=%f", (2000 * 6) / 100);
    }
    else if (sales > 2000)
    {
        R2 = (2000 * 5) / 100;
         printf("c1=%f", (2000 * 5) / 100);
    }
    else if (sales == 4000)
    {
        R3 = (4000 * 10) / 100;
        printf("c2=%f", (4000 * 10) / 100);
    }
    else if (sales > 4000)
    {
        R4 = (4000 * 12) / 100;

        printf("c2=>f", (4000 * 12) / 100);
    }
    return 0;
}