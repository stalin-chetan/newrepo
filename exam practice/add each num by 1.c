/*If a five-digit number is input through the keyboard, write a program to print a new number by adding
one to each of its digits. For example, if the number that is input is 12391, then the output should be 
displayed as 23502. */

#include<stdio.h>
int main()
{
    int num,a,b,c,d,e,sum;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    a = (num%10)+1;
    num = num/10;
    b = (num%10)+1;
    num = num/10;
    c = (num%10)+1;
    num = num/10;
    d = (num%10)+1;
    num = num/10;
    e = (num%10)+1;
    num = num/10;
    sum =   (e*10000)+(d*1000)+(c*100)+(b*10)+a;
    printf("output = %d",sum);
    return 0;
}