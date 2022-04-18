//write a program to check the armstrong number
#include <stdio.h>
#include<math.h>
int main()
{
    int number, count = 0;
    printf("enter the number to check whether the number is armstrong or not: ");
    scanf("%d", &number);
    int sum = 0;
    int temp = number;
    int original_number = number;

    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int remainder;
    for (int i = 0; i < count; i++)
    {
        remainder = number % 10;

        sum = sum + (int)pow(remainder, count);

        number = number / 10;
    }
    
    if(original_number == sum)
    {
        printf("the %d is the armstrong number",original_number);
    }
    else
    {
        printf("%d is not a armstrong number",original_number);
    }
    return 0;
}