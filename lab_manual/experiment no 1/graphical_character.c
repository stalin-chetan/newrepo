#include <stdio.h>

int main()
{
    char a;
    printf("enter a graphical character to know the ASCII codes: ");
    scanf("%c", &a);

    printf("The ASCII code of the %c is %d", a, a);
    return 0;
}