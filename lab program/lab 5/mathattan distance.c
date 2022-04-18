//Write a program that takes two points (x1, y1) and (x2, y2) and then calculate the Manhattan
//distance between those points. (Hint)

#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x,y;
    float mdistance;
    printf("Enter the value of x1,y1:");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2,y2: ");
    scanf("%f%f",&x2,&y2);
    mdistance = fabs(x1-x2)+ fabs(y1-y2);
    printf("the distance is %.3f ",mdistance);
    return 0;
}