//logic for prime number
#include <stdio.h>

int main()
{              
    int n = 100;
    int flag;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;         
        }
    }
    if (flag == 0)
    {
        printf("not prime");
    }
    else
    {
        printf("this is prime");
    }
    

    return 0;
}