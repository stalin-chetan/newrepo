// Write a program in c to input name, address, faculty, program and GPA(in maximum 4.0) of 500 students and
//  store them in 'RESULT.DAT' data file and display the records of those students whose faculty is 'Engineering'
//   and GPA > 3.5.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct students
{
    char name[100];
    char address[100];
    char faculty[100];
    char program[100];
    float gpa;
};

int main()
{
    struct students s[2];
    FILE *fp = fopen("RESULT.txt", "w");
    if (fp == NULL)
    {
        printf("FILE CANNOT BE OPENED");
        exit(0);
    }

    int i;

    for (i = 0; i < 2; i++)
    {
        printf("\n\nPlease enter the detail of %d student:\n", i + 1);
        fflush(stdin);
        printf("Name: ");
        gets(s[i].name);

        fflush(stdin);
        printf("Address: ");
        gets(s[i].address);

        fflush(stdin);
        printf("Faculty: ");
        gets(s[i].faculty);

        fflush(stdin);
        printf("Program: ");
        gets(s[i].program);

        fflush(stdin);
        printf("GPA: ");
        scanf("%f", &s[i].gpa);
    }
    fwrite(s, sizeof(s), 1, fp);

    fclose(fp);

    fopen("RESULT.txt", "r");
    if (fp == NULL)
    {
        printf("file cannot opened");
        exit(1);
    }

    fread(s, sizeof(s), 1, fp);
    for (i = 0; i < 2; i++)
    {
        if ((strcmp(s[i].faculty, "engineering") == 0) && s[i].gpa > 3.5)
        {
            printf("\n");
            printf("Name: %s", s[i].name);
            printf("\naddress: %s", s[i].address);
            printf("\nFaculty: %s", s[i].faculty);
            printf("\nProgram: %s", s[i].program);
            printf("\ngpr: %.2f", s[i].gpa);
        }
    }
    fclose(fp);

    return 0;
}
