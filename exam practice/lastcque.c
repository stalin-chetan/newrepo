// Write a program to input neme, address, registration no, faculty and academic year of admission in university of 'n'
// number of studnets of Pokhara University and append then in a data file called 'STUDENT.DAT' then display the records
// of those students by reading the records from 'STUDENT.DAT' data file who got admission in 2016.

#include <stdio.h>
#include <stdlib.h>

struct students
{
    char name[100];
    char address[100];
    long regnum;
    char faculty[100];
    int year;
};

int main()
{
    int n;
    printf("enter the number of student you want to enter the data: ");
    scanf("%d", &n);

    struct students s[n];

    FILE *fp = fopen("STUDENT.DAT", "a+");
    if (fp == NULL)
    {
        printf("FILE CANNOT BE OPENED");
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter the detail of the %d student:\n", i + 1);
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);

        fflush(stdin);
        printf("Enter the address: ");
        gets(s[i].address);

        fflush(stdin);
        printf("Enter registration number: ");
        scanf("%lu", &s[i].regnum);

        fflush(stdin);
        printf("Enter faculty: ");
        gets(s[i].faculty);

        fflush(stdin);
        printf("Enter admission year: ");
        scanf("%d", &s[i].year);
    }
    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);

    fopen("STUDENT.DAT", "r");
    fread(s, sizeof(s), 1, fp);
    for (int i = 0; i < n; i++)
    {
        if (s[i].year == 2016)
        {
            printf("\nName: ");
            puts(s[i].name);

            printf("address: ");
            puts(s[i].address);

            printf("registration number: %lu\n", s[i].regnum);

            printf("faculty: ");
            puts(s[i].faculty);

            printf("academic year: %d\n\n", s[i].year);
        }
    }
    fclose(fp);

    return 0;
}