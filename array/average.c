// Write a program to print the average marks and the percentage obtained by the five students in
//five test using arrays
#include <stdio.h>
int main()
{
    int i;
    float per, sum = 0;
    int marks[5];

    printf("Enter the marks obtained by students:");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    per = sum / 500 * 100;
    printf("The average marks and percentage scored by students is  %f%%", per);

    return 0;
}