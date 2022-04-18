//Write a progrma in C that takes the coefficients of quadratic equation (a, b, c) as input and then
//calculates the real roots of that equation (if it exists). The quadratic formula is given as follows
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,x1,x2;
    printf("ENter the value of a:");
    scanf("%f",&a);
    printf("ENter the value of b:");
    scanf("%f",&b);
    printf("ENter the value of c:");
    scanf("%f",&c);
    dis = (b*b - 4*a*c);
    if(dis>0)
    {    
        x1 = (-b + sqrt(dis))/(2*a);
        printf("the real root + sign is %.2f\n",x1);
        x2 = (-b - sqrt(dis))/(2*a);
        printf("the real root - sign is %.2f\n",x2);
    }
    else
    {
        printf("these are not the real roots\n");
    }
    return 0;
}