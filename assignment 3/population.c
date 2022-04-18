#include <math.h>
#include <stdio.h>
int main()
{
    int pop, n;
    float p = 100000, r = 10;
    for (n = 1; n <= 10; n++)
    {
        pop = p / pow((1 + r / 100), n);
        printf("population %d years ago = %d\n", n, pop);
    }

    return 0;
}