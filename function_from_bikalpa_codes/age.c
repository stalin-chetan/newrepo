//write a program to input age of a person and print in days with appropriate prompts.
#include <stdio.h>
int main()
{
    int age, age_in_days;
    printf("please enter your age: ");
    scanf("%d", &age);

    if (age > 0)
    {
        age_in_days = age * 365;
    }
    printf("your age in day is %d", age_in_days);
    return 0;
}