
// //write a C program that tell whether the given character from the keyboard is alphabet or numeric

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("the character is ");
    ch >= 65 ? printf("alphabet") : printf("numeric"); 
    return 0;
}