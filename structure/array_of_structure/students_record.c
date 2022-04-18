/* Write a program to input name, address, faculty, program and GPA(in maximum 4.0) of 500 students.
 Now display the records of those students whose faculty is "Engineering" and GPA > 3.5.*/

#include <stdio.h>
#include <string.h>

struct student
{
    char student_name[100];
    char address[100];
    char faculty[100];
    char program[100];
    float gpa;
};

int main()
{
    struct student students[2];

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Enter the %d student  name: ", i);
        gets(students[i].student_name);

        fflush(stdin);
        printf("Enter the %d student address: ", i);
        gets(students[i].address);

        fflush(stdin);
        printf("Enter the Faculty of the %d student: ", i);
        gets(students[i].faculty);

        fflush(stdin);
        printf("Enter the Program of the %d student: ", i);
        gets(students[i].program);

        fflush(stdin);
        printf("Enter the gpa of the %d student: ", i);
        scanf("%f", &students[i].gpa);

        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(students[i].faculty, "engineering") == 0 || strcmp(students[i].faculty, "Engineering") == 0 && students[i].gpa > 3.5 && students[i].gpa <= 4.0)
        {
            printf("Student%d Name: ", i);
            puts(students[i].student_name);

            printf("Student%d address: ", i);
            puts(students[i].address);

            printf("Student%d faculty: ", i);
            puts(students[i].faculty);

            printf("Student%d program: ", i);
            puts(students[i].program);

            printf("Student%d GPA:  %.2f", i, students[i].gpa);
            printf("\n");
        }
    }
    return 0;
}