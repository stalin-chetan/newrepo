//write program in c that take n  as a input from the user and then display the only the even numbers.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter value of n:");
    scanf("%d", &n);
    int number[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("even number among given number are: ");
    for (i = 0; i < n; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("%d ", number[i]);
        }
    }
    return 0;
}