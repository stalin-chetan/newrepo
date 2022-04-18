// write a program that prints 10 lines of " Hello World" by using a user defined function.
// the user defined function shound not acccept any parameter and should not returnn any values.

#include <stdio.h>

void word(void);

int main()
{
    for (int i = 0; i < 10; i++)
    {
        word();
    }
    return 0;
}

void word(void)
{
    printf("Hello World\n");
}