//write a program in c that concatenates two strings first name and last mane to produce a string full name for if firstr name stores chetan and second stores thapa then full name should store chetan thapa
#include <string.h>
#include <stdio.h>
int main()
{
    char first_name[101], last_name[101];
    
    printf("please enter your first name: ");
    scanf("%s", first_name);

    printf("Please enter your last name: ");
    scanf("%s", last_name);

    strcat(first_name, last_name);

    puts(first_name);

    return 0;
}