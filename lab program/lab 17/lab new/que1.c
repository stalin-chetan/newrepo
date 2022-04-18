// Write a program to find the largest and the smallest number in an array of numbers iusing user defined functions.

#include <stdio.h>

int largest_num(int[100], int);
int smallest_num(int[100], int);

int main()
{
    int n, list_num[100];
    printf("enter the number of element in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", list_num[i]);
    }
    int l = largest_num(list_num, n);
    int s = smallest_num(list_num, n);
    printf("the largest number in the given array is %d", l);
    printf("the smallest number int the given array is %d", s);
    return 0;
}

int largest_num(int list_num[], int n)
{
    int i;
    int largest = list_num[0];
    for (i = 0; i < n; i++)
    {
        if (largest < list_num[i])
        {
            largest = list_num[i];
        }
    }
    return largest;
}

int smallest_num(int list_num[], int n)
{
    int i;
    int smallest = list_num[0];
    for (i = 0; i < n; i++)
    {
        if (smallest > list_num[i])
        {
            smallest = list_num[i];
        }
    }
    return smallest;
}