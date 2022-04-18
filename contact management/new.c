#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct detail
{
    char fname[20];
    char lname[20];
    char address[20];
    long number;
    char gmail[20];
}c;


int main()
{
    printf("\n\n\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t-----------------------Contact Management System---------------------------\n");
    printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

    printf("\t\t\t\t\tMain menu: \n");
    printf("\t\t\t\t\t _____________________");
    printf("\n\t\t\t\t\t|1. Add new contact: |\n");

    printf("\t\t\t\t\t|____________________|");
    printf("\n\t\t\t\t\t|2. List of contact: |\n");

    printf("\t\t\t\t\t|____________________|");
    printf("\n\t\t\t\t\t|3. Remove Contact:  |\n");

    printf("\t\t\t\t\t|____________________|");
    printf("\n\t\t\t\t\t|4. Help!            |\n");

    printf("\t\t\t\t\t|____________________|");
    printf("\n\t\t\t\t\t|5. Exit:            |");

    printf("\n\t\t\t\t\t|____________________|");

    int choice;

    printf("\n\n\n\t\t\t\tEnter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        Add_new_contact();
        break;

    case 2:
        List_of_contact();
        break;

    case 3:
        Remove_contact();
        break;

    case 4:
        help();
        break;

    case 5:
        exit(1);
        break;

    default:
        printf("\t\tEnter correct option! :(");
        break;
    }

    return 0;
}

void Add_new_contact 
{
    
    FILE ptr = fopen("contact.txt", "a");
    if(ptr==  NULL)
    {
        printf("file cannot be opened");
        exit(0);
    }
    printf("Enter the detail: \n");
    fflush(stdin);
    printf("First Name: ");
    scanf)
}
