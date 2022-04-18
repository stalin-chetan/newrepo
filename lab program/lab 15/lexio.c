#include <stdio.h>
#include <string.h>

int main()
{
    char name[101][101];
    int i, j, n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("enter the name : ");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    char temp[101];
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}