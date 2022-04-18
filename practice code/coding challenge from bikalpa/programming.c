#include<stdio.h>
#include<string.h>

int main()
{
    char a[]= {"PROGRAMMING"};
    int n = strlen(a);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}