// M a d a n
// a d a n
// d a n
// a n
// n

#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Madan";
    int n;
    n = strlen(a);
    int b = 0;
    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", a[j + b]);
        }
        b++;
        printf("\n");
    }
    return 0;
}