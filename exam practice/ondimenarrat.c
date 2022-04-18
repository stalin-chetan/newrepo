#include<stdio.h>

int main()
{
    int x;
    int a[]= {1,2,3,4,5};
    printf("enter a number to check: ");
    scanf("%d",&x);

    for(int i=0; i<5; i++)
    {
        if(a[i]==x)
        {
            printf("%d is avaliable in array",a[i]);
        }
    }
    return 0;
}