// Twenty-five numbers are entered from the keyboard into an array.
// The number to be searched is entered through the keyboard by the
// user. Write a program to find if the number to be searched is
// present in the array and if it is present, display the number of times
// it appears in the array.

#include <stdio.h>
#include <string.h>

int main()
{
    int num[26];
    int i, n, count = 0;

    printf("Please enter 25 number first: ");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Enter the number you want to search:");
    scanf("%d", &n);
    for (i = 0; i < 25; i++)
    {
        if (num[i] == n)
        {
            count++;
        }
    }
    printf("%d is found %d time in the given set of numbers", n, count);

    return 0;
}