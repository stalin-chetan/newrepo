#include <stdio.h>
struct book
{
    int identity;
    char name[20];
    int price;
    int pages;
    char writer[20];
};

int main()
{
    struct book b;
    printf("Please enter the book identity number: ");
    scanf("%d", &b.identity);
    fflush(stdin);
    printf("Please enter the name of the book: ");
    gets(b.name);
    fflush(stdin);
    printf("Please enter the price of the book: ");
    scanf("%d", &b.price);
    fflush(stdin);
    printf("Please enter the pages in the book: ");
    scanf("%d", &b.pages);
    fflush(stdin);
    printf("Please enter the writer of the book: ");
   gets(b.writer);

    printf("Book details: \n");
    printf(" identity number: %d\n price: %d\n pages: %d\n ", b.identity, b.price, b.pages);
    puts( b.name);
    puts( b.writer);

    return 0;
}