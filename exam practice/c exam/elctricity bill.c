// #include <stdio.h>
// int main()
// {
//     float charge, units;
//     printf("enter the number of units you consumed: ");
//     scanf("%f", &units);

//     if (units < 100)
//     {
//         charge = 50 + units * 40;
//     }
//     else if (units < 300)
//     {
//         charge = 50 + (100 * 40) + (units - 100) * 50;
//     }
//     else if (units > 300)
//     {
//         charge = 50 + (100 * 40) + (200 * 50) + (units - 300) * 60;
//     }
//     printf("you must pay Rs: %.2f according to your eletricity units consumed",charge);
//     return 0;
// }

#include<stdio.h>

int rev_of_int(int);

int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("the rev of the digit of the given integer is %d",rev_of_int(n));
    return 0;
}

int rev_of_int(int n)
{
    int remainder,rev=0;
    if(n==0)
    {
        return 0;
    }
    else{
        while(n!=0)
        {
            remainder = n%10;
            rev = rev*10 + remainder ;
            n = n/10;
        }
    }

    return rev;
}