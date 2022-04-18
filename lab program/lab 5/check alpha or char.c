#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57) || (ch==' ') )
    {
        printf("this is alphanumeric or space");
    }
    else
    {
        printf("this is invalid");
    }
    return 0;
}