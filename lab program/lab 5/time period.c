
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float length,time,gravity;
    printf("Enter the lenght of the pendulum:");
    scanf("%f",&length);
    printf("Enter the gravity:");
    scanf("%f",&gravity);

    time = 2 * PI * sqrt(length/gravity);
    printf("the time period of the pendulum is %.3f",time);
    return 0;
}
