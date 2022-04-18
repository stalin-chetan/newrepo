// 0.1, 0.01, 0.001, 0.0001, 0.00001,

#include <stdio.h>

int main()
{

    float a = 1;

    for (int i = 0; i < 5; i++)
    {
        
        a = a / 10;
        printf("%.2f", a);
        
    }
    return 0;
}