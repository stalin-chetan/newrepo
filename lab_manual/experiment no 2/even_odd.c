#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("This is even number");
    }
    else
    {
        printf("This is odd number");
    }
    return 0;
}