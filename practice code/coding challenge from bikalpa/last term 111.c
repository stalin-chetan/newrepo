
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if((number & 7) == 7)
    {
        printf("last digit are 111");
    }
    else
    {
        printf("last digit are not 111\n");
    }
    return 0;
}
