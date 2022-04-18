//WAP a program to read the 15 person age and find out how many person fall under the 
//following categories
//stil a baby @ 0-5
//attending school : 6-18
//adult life 18+

#include<stdio.h>
int main()
{
    int age;
    int count_1=0,count_2=0,count_3=0;
    for(int i =1; i<=15;i++)
    {
        printf("Enter age : ");
        scanf("%d",&age);
        if(age <= 5){
            printf("still a baby\n");
            count_1 = count_1 + 1;
        }
        else if(age <= 18)
        {
            printf("Attending school\n");
            count_2= count_2 + 1;
        }
        else
        {
            printf("adult life\n");
            count_3 = count_3 + 1;
        }
    }
    printf("there are %d number of baby\n",count_1);
    printf("there are %d number of person attending school\n",count_2);
    printf("there are %d number of person who are 18+\n",count_3);
    return 0;
}