// write a program that takes two numbers from user and then find its sum difference product and division result
// your program use of 4 user define functions add and substract , multiply divide. write the prototypes of these function as well as
// their defintiion use these function from the main function
#include <stdio.h>

float multiply(float, float);
float add(float, float);
float divide(float, float);
float substract(float, float);

int main()
{

    float num1, num2;
    printf("Please enter two number: ");
    scanf("%f%f", &num1, &num2);

   printf("Addition = %f\n",add(num1,num2));
   printf("substraction = %f\n",substract(num1,num2));
   printf("division = %f\n",divide(num1,num2));
   printf("multiplication = %f\n",multiply(num1,num2));

    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}
float substract(float num1, float num2)
{
    return num1 - num2;
}
float multiply(float num1, float num2)
{
    return num1 * num2;
}
float divide(float num1, float num2)
{
    return num1 / num2;
}