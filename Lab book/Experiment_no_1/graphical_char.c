// Write a program to read the graphical characters and the print their equivalent  ASCII codes.

#include <stdio.h>

int main()
{

    for (int i = 0; i <= 255; i++)
    {
        printf("%d graphical character is %c\n", i, i);
    }
    return 0;
}