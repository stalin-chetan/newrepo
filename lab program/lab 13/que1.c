//Write a program in c that takes a string as input from the user and count the number of vowel in it

#include<stdio.h>
#include<string.h>
int main()
{


    char string[101];

    printf("Enter a sentence as you want: ");
    fgets(string,101,stdin);
    int i, count=0;

    for(i = 0; string[i] != '\0' ;i++)
    {
        if(
            string[i]=='A'|| string[i]=='a'||
            string[i]=='E'|| string[i]=='e'||
            string[i]=='I'|| string[i]=='i'||
            string[i]=='O'|| string[i]=='o'||
            string[i]=='U'|| string[i]=='u')
            count++;
        

    }
    printf("there are %d vowel in the given sentence",count);
    
    return 0;
}