//write a program in c that display the sum of 1 to 50 using recursive function
#include <stdio.h>

int sum_fun(int);

int main()
{
    int m = 50;
    printf("the sum of the digit from 1 to 50 is %d", sum_fun(m));
    return 0;
}

int sum_fun(int n)
{
    if (n != 0)
    {
        return n + sum_fun(n - 1);
    }
    else
        return n;
}