// . Write a program in C that prints the sum of the 10 numbers input by the user using for loop. Your
// program should immediately break out of loop if any number input by the user is negative; in which
// case the sum upto that term is to be printed
#include <stdio.h>
int main()
{
    int num,sum=0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);
        if(num<=0)
        {
            break;
        }
        else{
            sum = sum + num;
        }
    }
    printf("the sum of the given nuber is %d",sum);
    return 0;
}