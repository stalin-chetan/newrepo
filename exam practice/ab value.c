/* Write a program to find the absolute value of a number entered through the keyboard
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num = abs(num);
    printf("%d",num);
    return 0;
}