//Write a program that sorts an array of names of n students in lexicographical(alphabetical) order
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("How many names you want to sorts:");
    scanf("%d", &n);

    char names[100][100];
    int i, j;

    for (i = 0; i < n; i++)
    {

        printf("Enter names: \n");
        scanf("%s", names[i]);
    }

    char temp[100];

    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("the names sorted are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}