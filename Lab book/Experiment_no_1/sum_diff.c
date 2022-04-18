// Write a program to read the value of two variable, and compute sum, difference, and product.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("enter two number: ");
    scanf("%d%d", &num1, &num2);

    int sum, difference, product;
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    printf("the sum of the two given number is %d\n", sum);
    printf("the difference of the two given number is %d\n", difference);
    printf("the product of the two given number is %d", product);
    return 0;
}