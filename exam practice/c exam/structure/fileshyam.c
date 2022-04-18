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
    FILE *fp = fopen("RESULT.txt", "wb");
    if (fp == NULL)
    {
        printf("FILE CANNOT BE OPENED");
        exit(0);
    }

    int i;

    for (i = 0; i < 2; i++)
    {
        printf("\n\nPlease enter the detail of %d student:\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        gets(s[i].name);

        printf("Address: ");
        fflush(stdin);
        gets(s[i].address);

        printf("Faculty: ");
        fflush(stdin);
        gets(s[i].faculty);

        printf("Program: ");
        fflush(stdin);
        gets(s[i].program);

        fflush(stdin);
        printf("GPA: ");
        scanf("%f", &s[i].gpa);
    }
    fwrite(s,sizeof(s),1,fp);

    fclose(fp);
    struct students a[2];

    fopen("RESULT.txt", "rb");
    if (fp == NULL)
    {
        printf("file cannot opened");
        exit(1);
    }
    fread(a, sizeof(a), 1, fp);
    for(i=0;i<2;i++)
    {
        if ((strcmp(s[i].faculty, "engineering")==0) && s[i].gpa > 3.5)
        {
            printf("\n");
            printf("\nName:%s", a[i].name);
            printf("\naddress:%s", a[i].address);
            printf("\nFaculty:%s", a[i].faculty);
            printf("\nProgram:%s", a[i].program);
            printf("\ngpa: %.2f", a[i].gpa);
        }
    }
    fclose(fp);

    return 0;
}