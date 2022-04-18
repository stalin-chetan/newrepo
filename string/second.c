#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]= "Dailekh jaharkot";
    int len1,len2;
    len1 = strlen(arr);
    len2 = strlen("dailekh");
    printf("string = %s and its length is = %d\n",arr,len1);
    printf("string = %s  and its length is = %d\n","dailekh",len2);
    return 0;
}