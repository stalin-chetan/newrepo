// //Create a structure fo the following data
//     Emp_id      Emp_name       Address      Department       Date of birth
//                                                             mm     dd    yy

// and also write a  program to input 100 employee records and display whose department is sale

#include <stdio.h>
#include <string.h>

struct DOB
{
    int year;
    int month;
    int day;
};
struct employee
{
    long empid;
    char name[100];
    char address[100];
    char department[100];
    struct DOB d;
};

int main()
{
    struct employee e[2];
    printf("enter the detail of the employees: \n");

    for (int i = 0; i < 2; i++)
    {
        printf("enter the detail of %d employee\n", i + 1);
        printf("\n\nenter employee id: ");
        scanf("%lu", &e[i].empid);

        fflush(stdin);
        printf("Enter name: ");
        gets(e[i].name);

        fflush(stdin);
        printf("Enter the address: ");
        gets(e[i].address);

        fflush(stdin);
        printf("enter the department: ");
        gets(e[i].department);

        printf("enter date of birth: ");
        scanf("%d%d%d", &e[i].d.year, &e[i].d.month, &e[i].d.day);
    }

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(e[i].department, "sales") == 0)
        {
            printf("\n\nEmployee id: %lu\n", e[i].empid);
            printf("Name: %s\n", e[i].name);
            printf("Address: %s\n", e[i].address);
            printf("Department: %s\n", e[i].department);
            printf("%d/%d/%d\n", e[i].d.year, e[i].d.month, e[i].d.day);
        }
    }

    return 0;
}