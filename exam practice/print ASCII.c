#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    while(number<=250)
    {
        printf("the ASCII value of %d is %c\n",number,number);
        break;
    }
    return 0;
}