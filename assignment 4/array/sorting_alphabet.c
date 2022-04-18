#include <stdio.h>
#include <string.h>
int main()
{
    char string[101][101], temp[101];
    int n, i, j;
    printf("enter the number of string: ");
    scanf("%d", &n);

    printf("enter the name: ");
    for (i = 0; i < n; i++)
    {
        gets(string[i]);
    }
    int result;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {

            result = strcmp(string[i], string[i + 1]);
            if (result > 0)
            {
                strcpy(temp, string[i]);
                strcpy(string[i], string[i + 1]);
                strcpy(string[i + 1], temp);
            }
        }
    }
    printf("the arrangement of the given string is \n");
    for (i = 0; i <= n; i++)
    {
        printf("%s \n", string[i]);
    }

    return 0;
}