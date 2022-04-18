// write a program to input name address registration number , faculty and academic year of admission in university of 100 student of pokhara
// university and append them in a data file called student.dat then display the records of those students by reading the record from
// student.dat datafile who got admission on 2016

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    char address[100];
    char faculty[100];
    long reg_name;
    int year;
};

int main()
{
    struct student s[2];

    int i;

    printf("Enter the detail of the students: \n");

    for (i = 0; i < 2; i++)
    {
        printf("enter the detail of the %d student", i + 1);
        fflush(stdin);
        printf("Name: ");
        gets(s[i].name);

        fflush(stdin);
        printf("address: ");
        gets(s[i].address);

        fflush(stdin);
        printf("faculty: ");
        gets(s[i].faculty);

        printf("registration number: ");
        scanf("%lu", &s[i].reg_name);

        printf("academic year: ");
        scanf("%d", &s[i].year);
    }

    FILE *fp = fopen("student.txt", "a");
    if (fp == NULL)
    {
        printf("FILE CANNOT OPENED");
        exit(0);
    }
    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);

    struct student a[2];
    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("FILE CANNOT OPENED");
        exit(1);
    }
    fread(s, sizeof(a), 1, fp);
    i = 0;
    while (fread(a, sizeof(a), 1, fp) == 1)
    {
        if (a[i].year == 2016)
        {
            printf("\nname: %s\n", a[i].name);
            printf("adderss: %s\n", a[i].address);
            printf("faculty: %s\n", a[i].faculty);
            printf("registration number: %lu\n", a[i].reg_name);
            printf("academic year: %d", a[i].year);
        }
        i++;
    }
    fclose(fp);

    return 0;
}