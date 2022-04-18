#include <stdio.h>
struct Dob
{
    int year;
    int month;
    int day;
};

struct student
{
    char name[29];
    int roll;
    struct Dob d;
};

struct student s;
struct Dob d;
struct student input();
void display(struct student s);
int main()
{
    s = input();
    display(s);
    return 0;
}

struct student input()
{
    struct student s1;
    printf("enter the name of the student: ");
    gets(s1.name);
    fflush(stdin);
    printf("enter the roll of the studnent: ");
    scanf("%d", &s1.roll);
    fflush(stdin);
    printf("enter the date of birth of student(yy/mm/dd): ");
    scanf("%d%d%d", &s1.d.year, &s1.d.month, &s1.d.day);
    return s1;
}
void display(struct student s)
{
    printf("Name = ");
    puts(s.name);
    printf("roll = %d\n", s.roll);
    printf("Date of birth = %d/%d/%d", s.d.year, s.d.month, s.d.day);
}