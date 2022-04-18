#include<stdio.h>
#include<math.h>

struct complex 
{
    float real;
    float img;

};

int main()
{
    struct complex a;
    printf("enter the real value: ");
    scanf("%f",&a.real);
    printf("enter the imaginary part: ");
    scanf("%f",&a.img);

    float absoulute = sqrt(a.real * a.real + a.img * a.img);
    printf("the absolute of the given complex number is %.2f",absoulute);
    return 0;
}