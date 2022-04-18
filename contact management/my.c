#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Add_new_contact();
void List_of_contact();
void Remove_contact();
void help();

char first_name[20];
char last_name[20];
char number[10];
char address[40];
char email[30];

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

void Add_new_contact()
{
    fflush(stdin);
    printf("\n\n\tEnter first name: ");
    gets(first_name);
    printf("\tEnter last name: ");
    gets(last_name);
    printf("\tEnter address: ");
    gets(address);
    printf("\tEnter email: ");
    gets(email);
    printf("\tEnter phone number: ");
    gets(number);
    if (strlen(number) == 10)
    {
        FILE *ptr = fopen("list.txt", "a");
        if (ptr == NULL)
        {
            printf("File cannot open");
            exit(1);
        }
        fprintf(ptr, "\n");
        fprintf(ptr, "name= %s ", first_name);
        fprintf(ptr, "%s\n", last_name);
        fprintf(ptr, "address = %s\n", address);
        fprintf(ptr, "email = %s\n", email);
        fprintf(ptr, "phone number = %s\n", number);

        printf("\n\n\tContact added to your list");
        fclose(ptr);
    }
    else
    {
        printf("\n\n\t Invalid phone number (*phone number should be 10 digit)");
        main();
    }
}

void List_of_contact()
{
    FILE *ptr = fopen("list.txt", "r");
    if(ptr == NULL)
    {
        printf("file cannot be opened");
        exit(1);
    }

    printf("name: %s %s",first_name,last_name);

}
void Remove_contact()
{
    printf("haha");
}

void help()
{
    printf("\n\n\tI'm avaliable at instagram DM there @stalin_chetan");
}
