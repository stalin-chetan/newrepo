// Write a program in C that swaps two strings input from the user

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "chetan";
    char b[20] = "Thapa";
    char temp[20];
    printf(" a = %s\n", a);
    printf(" b = %s\n", b);
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);

    printf(" a = %s\n", a);
    printf(" b = %s", b);

    return 0;
}
