#include<stdio.h>
int main()
{
    int num1, num2, sum;
    int *ptra,*ptrb, *ptrsum;

    ptra = &num1;
    ptrb = &num2;
    ptrsum = &sum;
    printf("Enter two number :\n");
    printf("First number: ");
    scanf("%d",ptra);
    printf("Enter the second one: ");
    scanf("%d",ptrb);

    *ptrsum = *ptra + *ptrb;

    printf("The sum of the two given number is %d",*ptrsum);
    return 0;
}