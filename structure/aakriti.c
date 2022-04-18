// Write a progam to read the name, author and price of 500 bools in library file library.dat
// Now print the book name and price of those books whose price is above rs 300

#include <stdio.h>
#include <stdlib.h>

struct book
{
    char name[100];
    char author[100];
    float price;
};

int main()
{

    struct book b[500];

    FILE *ptr = fopen("student.dat", "ab");
    if (ptr == NULL)
    {
        printf("file cannot opened ");
        exit(0);
    }

    int i;
    printf("Enter the detail of the books: \n");

    for (i = 0; i < 500; i++)
    {
        printf("Enter the book name: ");
        scanf("%s", &b[i].name);

        printf("Enter the author name: ");
        gets(b[i].author);

        printf("enter the  price of the book: ");
        scanf("%f", &b[i].price);
    }

    return 0;
}