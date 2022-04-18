// Consider a following structure

//     Roll    name    address  faculty    date of birth
//                                         mm    yy    dd

// Write  a program to create "student.txt" file to store the above record for 100 students

#include <stdio.h>
#include <stdlib.h>

struct dob
{
    int year;
    int month;
    int day;
};
struct student
{
    int roll;
    char name[100];
    char address[100];
    char faculty[100];
    struct dob d;
};

int main()
{
    struct student s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\n\n Enter the detail of the %d student\n", i + 1);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);

        fflush(stdin);
        printf("Enter address: ");
        gets(s[i].address);

        fflush(stdin);
        printf("Enter faculty: ");
        gets(s[i].faculty);

        fflush(stdin);
        printf("Enter the date of birth: ");
        scanf("%d%d%d", &s[i].d.year, &s[i].d.month, &s[i].d.day);
    }

    FILE *fp = fopen("detstudent.txt", "w+");

    if (fp == NULL)
    {
        printf("FILE CANNOT BE OPENED");
        exit(0);
    }

    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);

    return 0;
}