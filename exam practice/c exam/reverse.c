#include<stdio.h>
int main()
{
    int num, rev=0,remainder;
    printf("enter a number to reverse");
    scanf("%d",&num);

   
    while (num !=0)
    {
        remainder = num % 10;
        rev = remainder + rev * 10;
        num = num / 10;
    }
    
    printf("there are %d number: ",rev);
    return 0;
} 