#include <stdio.h>
#include <math.h>

int main()
{
    double numerator, denomenator, result;
    numerator = ((2.9678 * pow(10, -27)) + (0.876 * pow(10, -38)));
    denomenator = ((7.025 * pow(10, 16)) - (9.75 * pow(10, 12)));
    result = numerator / denomenator;
    printf("The value of F will be %f", result);
    return 0;
}