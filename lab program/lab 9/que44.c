// . Print the first 10 natural numbers in C without using loop statements. Implement the looping logic
// with the use of goto statement

#include<stdio.h>
int main()
{
    int n=1;
    loop: if(n<=10)
    {
        printf("%d ",n);
        n++;
        goto loop;
    }
    return 0;
}