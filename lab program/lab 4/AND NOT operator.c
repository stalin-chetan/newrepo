/*********************** LAB 4 ***************************************************/
//Write a program in C that takes two numbers as input and then demonstrate different bitwise
//operations like AND, OR, NOT, XOR etc. between them

#include<stdio.h>
int main()
{
    int a,b,and,or,xor,not,RS,LS;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    
    and = a & b;
    or = a | b;
    not = ~a;
    xor = a ^ b;
    LS = b >> a;
    RS = b << a;
    printf("AND =  %d\n",and);
    printf("OR = %d\n",or);
    printf("NOT =  %d\n",not);
    printf("XOR = %d\n",xor);
    printf("LS = %d\n",LS);
    printf("RS = %d\n",RS);
    return 0;
}
