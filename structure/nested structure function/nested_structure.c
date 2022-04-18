#include<stdio.h>

struct DOB
{
    int year;
    int month;
    int day;
}; 

struct student
{
    char name[29];
    int age;
    int roll;
    struct DOB d;

};

int main()
{
    struct student s;
    struct DOB d;
    printf("Enter the name of the student: ");
    gets(s.name);
    fflush(stdin);
    printf("enter the age and roll: ");
    scanf("%d%d",&s.age,&s.roll);
    printf("enter the date of birth of the student(yy/mm/dd):");
    scanf("%d%d%d",&s.d.year,&s.d.month,&s.d.day);

    printf("Name = ");
    puts(s.name);
    printf(" age = %d\n roll = %d\n date of birth = %d/%d/%d",s.age,s.roll, s.d.year,s.d.month,s.d.day);
    return 0;
}