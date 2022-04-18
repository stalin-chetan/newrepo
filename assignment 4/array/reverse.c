// program to copy the contents of one arrat into another in the reverse order.

#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];
    char temp[100];
    int count = 0;
    int n = count;
    printf("enter the contents of array: ");
    gets(array);

    strcpy(temp, array);
    strrev(temp);

    printf("the reverse of the %s is %s", array, temp);
    return 0;
}