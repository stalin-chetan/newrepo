#include <stdio.h>
#include <string.h>

void main()
{
    char a[12];
    char *q = "hellos";
    int length = strlen(q);  // 6
    int j;
    for (j = 0; j < length; j++)
    {
        a[j] = q[length - j];
    }
    printf("%s", a);
}