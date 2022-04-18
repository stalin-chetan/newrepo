#include<stdio.h>
int main()
{
    int num1,num2,sum,diff,product,remainder;
    float quotient;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d",&num2);

    sum = num1 + num2;
    diff = num1 - num2;
    remainder = num1 % num2;
    quotient = (float)num1 / num2;
    product = (float)num1 * num2;

    printf("The sum of these number is %d\n",sum);
    printf("The difference of these number is %d\n",diff);
    printf("The remaining remainder of these number is %d\n",remainder);
    printf("The quotient of these number is %.2f\n",quotient);
    printf("The product of these number is %d\n",product);
    return 0;
}