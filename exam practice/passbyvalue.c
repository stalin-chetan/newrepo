#include<stdio.h>

int add_fun(int x, int y)
{
    int sum;
    sum = x+y;
    return sum;
}
int main()
{
    int a=5, b= 9;
    printf("sum is %d", add_fun(a,b));

    return 0;
}