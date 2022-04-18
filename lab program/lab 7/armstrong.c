//Write a program in C which checks whether a given integer is armstrong number or not
#include<math.h>
#include<stdio.h>
int main()
{
    int sum = 0;
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int count=0;
    int number_copy = number;
    while(number_copy>0)
    {
        count++;
        number_copy = number_copy/10;
    }   
    number_copy = number;
    while(number_copy>0)
    {
        int digit = number_copy%10;
        sum = sum + pow(digit,count);
        number_copy = number_copy/10;
    }
    if(number == sum )
    {
        printf("This is a  armstrong number");
    }
    else{
        printf("this is not a armstrong number");
    }

    return 0;
}