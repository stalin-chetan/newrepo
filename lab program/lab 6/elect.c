// Write a C program to input electricity unit consumption and calculate total electricity bill according to
// the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// In all cases additional surcharge of 20% is added to the bill

#include<stdio.h>
int main()
{
    float unit,bill;
    printf("Enter the eletricity unit consumption:");
    scanf("%f",&unit);

    if(unit<20)
    {
        bill = 80;
    }
    else if(unit <= 100)
    {
        bill = 80 + (unit-20)*7.5;
    }
    else if(unit <=200 )
    {
        bill = 80 + 80*7.5 + (unit-100)*8.5;
    }
    else if(unit > 400)
    {
        bill = 80 + 80*7.5 + 100*8.5 + (unit-200)*9.5;
    }
    bill = bill + bill*0.15;
    printf("you need to pay %.3f",bill);
    return 0;
}