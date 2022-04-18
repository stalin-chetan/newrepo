#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    float x1, x2;

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("the real root when we take positive sign: %.2f\n", x1);
    printf("the real root when we take negative sign: %.2f", x2);
    return 0;
}