#include<stdio.h>
int main()
{
    int a,b,c,num,num1;
    int i=1;
    while(i<=500)
    {
        a = i%10;
        num1 = i/10;
        b = num1 % 10;
        num1 = num1/10;
        c = num1 %10;
    
        num = (a*a*a)+(b*b*b)+(c*c*c);
        if(num==i)
        {
            printf("%d  ",num);
        }
        i++;
        
    }
    return 0;
}