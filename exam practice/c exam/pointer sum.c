#include <stdio.h>
int main()
{
    int array[5];
    int sum =0;
    int *ptra;

    ptra = array;
    printf("enter the element of the array:");
    for(int i=0; i<5; i++)
    {
        scanf("%d", *ptra);
    }
    for(int i=0; i<5; i++)
    {
        sum = sum + ptra[i];
        ptra++;
    }
    printf("the sum of the element of the given array is %d", sum);

    return 0;
}