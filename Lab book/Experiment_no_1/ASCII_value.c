// Write a program to read the ASCII value and print the equivalent character.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to find ASCII value of it: ");
    scanf("%d", &num);

    printf("%c is the ASCII value of %d\n", num, num);
    return 0;
}