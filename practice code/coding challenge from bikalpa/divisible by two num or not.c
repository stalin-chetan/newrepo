
//Write a program in C that takes an integer as input from the user and then display whether that
//number is divisible by both 3 as well as 5 but not divisible by 100.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    (number % 3 == 0) && (number % 5 == 0) && (number % 100 != 0)
    ? printf("this is divisible by 3 and 5") : printf("this is divisible by  other ");
    return 0;
}