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

    if(unit < 50)
    {
        bill = unit * 0.50;
    }
    else if(unit < 150)
    {
        bill = 50*0.50 + (unit - 50)*0.75; 
    }
    else if(unit < 250)
    {
        bill = 50*0.50 + 100*0.75 + (unit-150)*1.2;
    }
    else if(unit>250)
    {
        bill = 50*0.50 + 100*0.75 + 100*1.2 + (unit-250)*1.5;
    }
    bill = bill + bill*0.2;

    printf("You need to pay %.3f",bill);
    return 0;
}