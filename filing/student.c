#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    char address[100];
    char faculty[100];
    long reg_num;
    int academic_year;
};

int main()
{
    struct student s[2];

    printf("enter the detail of the students \n");

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the %d student detail\n", i + 1);
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);

        fflush(stdin);
        printf("Enter address: ");
        gets(s[i].address);

        fflush(stdin);
        printf("Enter faculty: ");
        gets(s[i].faculty);

        printf("Enter the registration number: ");
        scanf("%ld", &s[i].reg_num);

        printf("Enter the academicn year: ");
        scanf("%d", &s[i].academic_year);
    }

    FILE *fp;
    fp = fopen("student.dat", "ab");
    if (fp == NULL)
    {
        printf("File cannot be opened");
        exit(0);
    }

    fwrite(s, sizeof(s), 1, fp);
    fclose(fp);

    struct student a;

    fp = fopen("student.dat", "rb");
    if (fp == NULL)
    {
        printf("file cannot opened");
        exit(1);
    }

    struct student a[2];
    while (fread(&a, sizeof(struct student), 1, fp) == 1)
    {
        if (a.academic_year == 2016)
        {
            printf("name = ");
            puts(a.name);

            printf("address: ");
            puts(a.address);

            printf("faculty");
            puts(a.faculty);

            printf("registration number: %lu", a.reg_num);

            printf("academic year: %d", a.academic_year);
        }
    }
    return 0;
}