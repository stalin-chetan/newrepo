//************************* EX : 5.8 **********************//
//Program of sum and average until the user enter 0

#include<stdio.h>
int main()
{
    float a, sum=0, avg;
    int count = 0;
    while(1)
    {
        printf("Enter number: ");
        scanf("%f",&a);

        if(a == 0)
        {
            break;
        }
        sum = sum + a;
        count = count + 1;
    }
    avg = sum / count;

    printf("sum = %.3f, average = %.3f",sum,avg);
    return 0;
}