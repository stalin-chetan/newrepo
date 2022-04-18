//. Write a C program to input angles of a triangle and check whether triangle is valid or not. (Hint: sum
//of angles in triangle is 180 degrees)
#include<stdio.h>
int main()
{
    float ang1,ang2,ang3,sum;
    printf("Enter the value of 1st angle: ");
    scanf("%f",&ang1);
    printf("Enter the value of 2nd angle: ");
    scanf("%f",&ang2);
    printf("Enter the value of 3rd angle: ");
    scanf("%f",&ang3);
    sum = ang1 + ang2 + ang3;

    if(sum<=180){
        printf("Valid Angles");
    }
    else{
        printf("Invalid Angles");
    }
    return 0;
}