//Write a program that takes two points (x1, y1) and (x2, y2) and then calculate the Euclidean
//distance between those points. (Hint)

#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2;
    float edistance;
    printf("Enter the first point x1 and y1:");
    scanf("%f%f",&x1,&y1);

    printf("Enter the second value  x2,y2:");
    scanf("%f%f",&x2,&y2);

    edistance = sqrt((y2-y1) * (y2-y1) + (x2-x1) * (x2-x1));
    printf("Distance Between two point is %.3f",edistance);

    return 0;   
}