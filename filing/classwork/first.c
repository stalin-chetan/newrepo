// M
// M a
// M a d
// M a d a
// M a d a n

#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Madan";
    int n = strlen(a);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}