// //write a program to detect the number is odd or even
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("This number is ");
    num & 1 ? printf("odd"): printf("even");
    getch ;
	return 0;
}
