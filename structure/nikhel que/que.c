// // Construct a structure person which have members name age sex address and phoe no also create another structure pname which have
//  member fname and lname combine both struct in one structure and read person information and display the information of a person

#include <stdio.h>

struct name
{
    char fname[100];
    char lname[100];
} n;

struct student
{
    struct name n;
    int age;
    char sex;
    char address[100];
    long phone;
};

int main()
{
    struct student s;

    printf("enter the details of the student: \n");
    fflush(stdin);

    printf("first name: ");
    gets(s.n.fname);

    fflush(stdin);
    printf("last name: ");
    gets(s.n.lname);

    printf("Enter age: ");
    scanf("%d", &s.age);

    fflush(stdin);
    printf("Enter sex(M or F): ");
    scanf("%c", &s.sex);

    fflush(stdin);
    printf("enter the address: ");
    gets(s.address);

    fflush(stdin);
    printf("enter the phone number: ");
    scanf("%lu", &s.phone);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("Name of the student: ");
    printf("%s %s", s.n.fname, s.n.lname);
    printf("\n");

    printf("the age of the student is : %d", s.age);
    printf("\n");

    printf("the sex of the student is(M for male and F for female) %c", s.sex);
    printf("\n");

    printf("the address of the student is: ");
    puts(s.address);

    printf("contact number of the student is %lu", s.phone);
    printf("\n");

    return 0;
}