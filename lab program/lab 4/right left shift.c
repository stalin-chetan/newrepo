
//Write a program in C that takes a number and then prints the result of the number divided by 4 as
//well as multiplied by 4. (Hint: left shift results multiplication by 2, right shift results division by 2

#include<stdio.h>
int main()
{
    int number,division,multiplication;
    printf("enter a number:");
    scanf("%d",&number);
    division = number >> 2;
    multiplication = number << 2;
    printf("the division of %d and 4 is %d\n",number,division);
    printf("the product of %d * 4 = %d",number,multiplication);
    return 0;
}
