#include <stdio.h>
#include <math.h>

//function prototype / signature
float get_area_rect(float, float);

int main()
{
    float length, breadth;
    printf("Enter the length and breadth : ");
    scanf("%f%f", &length, &breadth);

    float area = get_area_rect(length, breadth);
    printf("Area = %lf", area);
    return 0;
}
float get_area_rect(float length, float breadth)
{
    return length * breadth;
}