// //k) Given the coordinates (x,y) of center of  a circle and its radius, write a program that will
//  determine whether a point lies inside the circle, on the circle or outside the circle.
//  (Hint: Use sqrt() and pow() functions)

#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    float r, d, dis;
    printf("Enter the coordinate of the circle: ");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    dis = pow(x, 2) + pow(y, 2);
    d = pow(r, 2);
    if (dis == d)
    {
        printf("point is on the circle");
    }
    else
    {
        if (dis < d)
        {
            printf("the point lies inside the circle");
        }
        else
        {
            printf("the point lies outside the circle");
        }
    }
    return 0;
}