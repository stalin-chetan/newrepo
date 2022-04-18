#include <stdio.h>
#include <math.h>

int main()
{
    int x, a, b, c, num1, num2;
    int i = 1;
    while (i <= 500)
    {
        a = i % 10;
        num1 = i / 10;
        b = num1 % 10;
        num2 = num1 / 10;
        c = num2 % 10;

        x = pow(a, 3) + pow(b, 3) + pow(c, 3);
        if (x == i)
        {
            printf("%d ", x);
        }
        i++;
    }

    return 0;
}