#include <stdio.h>
#include <math.h>
void power(int a, int b)
{
    printf("The value of %d raised to the power of %d is %.1f\n", a, b, pow(a, b));
}
int main()
{
    power(2, 5);
    power(3, 5);
    return 0;
}