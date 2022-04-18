

//. Write a program in C that checks whether a given number is odd or even by using bitwise operator.
//(Hint: odd numbers always have a 1 in their binary representation. So, when a number is ANDed with
//1, odd numbers always result 1.)

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if((number & 1) == 1)
    {
        printf("this is a odd number");
    }
    else
    {
        printf("this is a even number");
    }
    return 0;
}
