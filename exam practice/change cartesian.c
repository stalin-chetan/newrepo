/* Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates */

#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    printf("Enter the polar value of x,y : ");
    scanf("%f%f",&x,&y);

    r= sqrt(x*x + y*y);
    theta = atan2(y,x);
    theta = theta*180/3.14;
    printf("r = %f and theta = %f",r,theta);
    return 0;
}