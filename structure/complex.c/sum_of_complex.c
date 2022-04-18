#include<stdio.h>

struct complex
{
    float real;
    float img;
};

int main()
{
   struct complex c1,c2,c3;
   printf("enter the first complex number:");
   scanf("%f%f",&c1.real,&c1.img);
   printf("enter the second complex number: ");
   scanf("%f%f",&c2.real,&c2.img);

   c3.real = c1.real + c2.real;
   c3.img = c1.img + c2.img;

   printf("the sum of the two complex number is %.1f + %.1fi",c3.real,c3.img);


    return 0;
}
 