//******************************** EX : 5.3 ************************************************///
// To calculate the HCF
#include<stdio.h>
int main()
{
    int a,b;
    int remainder;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    printf("GCD = %d",a);
    return 0;
}
