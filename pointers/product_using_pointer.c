#include<stdio.h>
int main()
{
    int num1, num2, pro;
    int *ptra,*ptrb, *ptrpro;

    ptra = &num1;
    ptrb = &num2;
    ptrpro = &pro;
    printf("Enter two number :\n");
    printf("First number: ");
    scanf("%d",ptra);
    printf("Enter the second one: ");
    scanf("%d",ptrb);

    *ptrpro = (*ptra) * (*ptrb);

    printf("The product of the two given number is %d",*ptrpro);
    return 0;
}