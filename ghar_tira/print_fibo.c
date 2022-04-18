#include<stdio.h>
int main()
{
    int num,a=0, b=1,temp ;
    printf("Enter a number to print the fibonancci series upto: ");
    scanf("%d",&num);
    printf("%d %d ",a,b);
    for(int i=0; i<num; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        printf("%d ",temp);
    }
       
    return 0;
