#include<stdio.h>
int checker(int x, int y, int arr[])
{
    if(x<y)
    {
        arr[0]= y;
        arr[1] = x;
    }   
    else
    {
        arr[0]= x;
        arr[1] = y;
    }   
}
int main()
{
    int a=5, b= 10, arr[2];
    checker(a,b,arr);
    printf("%d %d",arr[0],arr[1]);

    return 0;
}