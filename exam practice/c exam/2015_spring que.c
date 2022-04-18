#include<stdio.h>
int a= 100, b=200;

int funt1(int c);

int main()
    {
        int count,c;
        for(count=1; count<=10; ++count)
        {
            c = 4 * count;
            printf("%d ", funt1(c));
        }
    }

int  funt1(int x)
    {
        int c;
        c = (x<30) ? (a-x) : (b+x);
        return (c);
    }