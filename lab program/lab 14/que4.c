// //Write a program in c that concatenate two strings firsr name and last name to produce a string full name. fot example if 
// first name store "Bikalpa" and last name stores "Dhakal" then full name should store "Bikalpa Dhakal"

#include<stdio.h>
#include<string.h>
int main()
{
    char first[101],last[101],full[101];
    printf("Enter your first name please: ");
    gets(first);

    printf("Enter your last name please: ");
    gets(last);

    strcpy(first,strcat(first,''));
    strcpy(full,strcat(first,last));

    puts(full);
    return 0;
}
