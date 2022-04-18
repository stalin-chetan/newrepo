#include <stdio.h>
int is_prime(int);

int main()
{
    int i, n, sum = 0;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    printf("enter the element of the array: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        int num = array[i];
        if (is_prime(num))
        {
            sum = sum + num;
        }
    }
    printf("the sum of the prime numbers in array is: %d", sum);
    return 0;
}
int is_prime(int num)
{
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}