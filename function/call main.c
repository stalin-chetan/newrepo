#include<stdio.h>
void message();
int message()
{
    message();
    return 0;
}
void main()
{
    printf("Can't Imagine life without C");
    message();
}