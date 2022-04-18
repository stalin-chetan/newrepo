#include <stdio.h>
#include <string.h>

int main()
{
    char arr[25][25], temp[25];
    printf("enter the name of students: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
        printf("%s",arr[i]);
        printf("\n");
    }

    return 0;
}