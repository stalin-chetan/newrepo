//Define structure named student that hold the following information
/*  the roll number of students
    the name of the students'   
    the GPA scored by student 
    the marks scored by students in 5 subjects
*/

#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float gpa;
    float marks[5];
};

int main()
{
    struct student stu;
    printf("enter the roll number of the student: ");
    scanf("%d", &stu.roll);
    printf("enter the name of the student: ");
    fflush(stdin);
    gets(stu.name);
    printf("entet the gpa obtained: ");
    scanf("%f", &stu.gpa);
    printf("enter the marks obtained in different subject: ");
    for (int i = 1; i <= 5; i++)
    {
        scanf("%f", &stu.marks[i]);
    }
    float average, total_marks = 0;
    for (int i = 1; i <= 5; i++)
    {
        total_marks = total_marks + stu.marks[i];
    }
    average = total_marks / 5;
    printf("the average marks obtained by the student is %.2f", average);
    return 0;
}