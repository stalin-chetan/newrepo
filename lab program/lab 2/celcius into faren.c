//Write a program in C that converts the temperature in Celcius unit to Fahrenheit.
#include<stdio.h>
int main()
{
    float cel,faren;
    printf("Enter temperature in celcius:");
    scanf("%f",&cel);

    faren = (cel*1.8)+38;
    printf("the changed temperature in farenheit is %.2ff\n",faren); 
    return 0;
}