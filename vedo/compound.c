#include <stdio.h>
#include <math.h>
int main()
{
    float amt, year, rate, CI, total;
    printf("enter the amount of the deposit: ");
    scanf("%f", &amt);

    printf("enter year: ");
    scanf("%f", &year);
    printf("\n\n");
    printf("your Details: \n");
    if (amt < 1000 && year >= 2)
    {
        rate = 5;
        CI = amt * (pow((1 + 0.05), year));
        printf("the rate of interest is %.2f%%\n", rate);
    }
    else if (amt > 1000 && amt < 5000 && year >= 2)
    {
        rate = 7;
        CI = amt * (pow((1 + 0.07), year));
        printf("the rate of interest is %.2f%%\n", rate);
    }
    else if (amt > 5000 && year >= 1)
    {
        rate = 8;
        CI = amt * (pow((1 + 0.08), year));
        printf("the rate of interest is %.2f%%\n", rate);
    }
    else if (year >= 5)
    {
        rate = 10;
        CI = amt * (pow((1 + 0.1), year));
        printf("the rate of interest is %.2f%%\n", rate);
    }
    else
    {
        rate = 3;
        CI = amt * (pow((1 + 0.03), year));
        printf("the rate of interest is %.2f%%\n", rate);
    }

    printf("time = %.2f year\n", year);
    printf("amount deposited in bank is Rs. %.3f \n", amt);
    printf("Total money at your bank is Rs. %.4f\n", CI);

    return 0;
}