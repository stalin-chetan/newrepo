// Write a program in c that take n number form the keyword and display in the revese order
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of item that you want to store in array:");
    scanf("%d", &n);
    int array[n];
    printf("Enter the number that you want to stored in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}