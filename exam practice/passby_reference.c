#include <stdio.h>

void check_fun(int x, int y, int *a, int *b)
{
    if(x<y)
    {
       *a = y;
       *b = x;
    }
    else{
        *a = x;
        *b = y;
    }
}
int main()
{
    int q, w;
    int a = 1, b = 8;
    check_fun(a,b,&q,&w);
    printf("largest: %d smallest: %d",q, w);
    return 0;
}
