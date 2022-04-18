#include <stdio.h>

int main()
{

    

    for (int i = 0; i < 5; i++)
    {
        printf("0.");
        for (int j = 0; j < i; j++)
        {
            printf("0");
        }
        printf("1,");
    }
    return 0;
}