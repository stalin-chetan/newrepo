#include<stdio.h>
int main()
{
    int a=10;
    int *ptr = &a;

    printf("the value of a is %d",*ptr);
    return 0;
}