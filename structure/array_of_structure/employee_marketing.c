#include <stdio.h>
#include <string.h>
struct Date
{
    int year;
    int month;
    int day;
};
struct Employee
{
    char name[100];
    int salary;
    char address[100];
    long phone;
    char department[100];
    struct Date d;
};

int main()
{
    struct Employee emp[500];

    for (int i = 0; i < 500; i++)
    {
        fflush(stdin);
        printf("Enter the name of the employee %d: ", i);
        gets(emp[i].name);

        printf("Enter the salary of the employee %d: ", i);
        scanf("%d", &emp[i].salary);

        fflush(stdin);
        printf("Enter the address of the employee %d: ", i);
        gets(emp[i].address);

        fflush(stdin);
        printf("Enter the phone number of the employee %d: ", i);
        scanf("%lu", &emp[i].phone);

        fflush(stdin);
        printf("Enter the department of the employee %d: ", i);
        gets(emp[i].department);

        fflush(stdin);
        printf("Enter the date of birth of the employee %d: ", i);
        scanf("%d%d%d", &emp[i].d.year, &emp[i].d.month, &emp[i].d.day);
    }

    for (int i = 0; i < 500; i++)
    {
        if (strcmp(emp[i].department, "marketing") == 0)
        {
            printf("Name = ");
            puts(emp[i].name);

            printf("salary = %d\n", emp[i].salary);

            printf("address = ");
            puts(emp[i].address);

            printf("phone number = %lu\n", emp[i].phone);

            printf("Department = ");
            puts(emp[i].department);

            printf("Date of birth= %d/%d/%d", emp[i].d.year, emp[i].d.month, emp[i].d.day);

            printf("\n");
        }
    }
    return 0;
}