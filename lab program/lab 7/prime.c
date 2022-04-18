//Write a program in C that checks whether a given integer is prime or not.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int flag = 0;
    for(int i=2; i<=(number/2); i++)
    {
        if(number % i == 0)
        {
            flag = 1;
            break;
        }
       

    }
        if(flag==0){

            printf("this is  a prime number: ");
        }
        else{
            printf("This is not a  prime number: ");

        }
    return 0;
}