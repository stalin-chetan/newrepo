/* 
Write a program to input name address registration number faculty and academic year of admission in university of 'n' number of student
 of Pokhara University then display the record of those students who got admission in 2016*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    char address[100];
    long reg_num;
    char faculty[100];
    int aca_year;
};

int main()
{
    struct student *arr;
    int n;

    printf("enter the value of n: ");
    scanf("%d", &n);

    arr = (struct student *)malloc(n * sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        if (arr == NULL)
        {
            printf("Memory Allocation failed :(");
            exit(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Name: ");
        gets((arr + i)->name);

        fflush(stdin);
        printf("Address: ");
        gets((arr + i)->address);

        fflush(stdin);
        printf("Enter the registration number: ");
        scanf("%ld", &(arr + i)->reg_num);

        fflush(stdin);
        printf("enter the faculty of the student: ");
        gets((arr + i)->faculty);

        fflush(stdin);
        printf("enter the academic year of the student: ");
        scanf("%d", &(arr + i)->aca_year);
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr + i)->aca_year == 2016)
        {
            printf("Name = ");
            puts((arr + i)->name);

            printf("Address: ");
            puts((arr + i)->address);

            printf("Registration number: %ld", (arr + i)->reg_num);

            printf("Faculty: ");
            puts((arr + i)->faculty);

            printf("academic year: %d", (arr + i)->aca_year);
        }
    }

    return 0;
}
