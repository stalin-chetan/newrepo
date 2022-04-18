// Write a program to read the radius of a sphere and compute its Surface Area and Volume.
#include <stdio.h>
#define PI 3.14
int main()
{
    float radius, area, volume;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    volume = (4 / 3) * PI * radius * radius * radius;

    printf("the Area of the circle is %.2f\n", area);
    printf("The Volume of the the circle is %.2f\n", volume);

    return 0;
}