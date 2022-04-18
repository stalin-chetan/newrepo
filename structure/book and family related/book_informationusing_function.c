#include <stdio.h>

struct book
{
    int identity;
    char name[20];
    int prize;
};

struct book input();
void output(struct book b);
int main()
{
    struct book b;
    b = input();
    output(b);

    return 0;
}
struct book input()
{
    struct book b1;
    printf("enter the identity numbmer, name, prize: ");
    scanf("%d", &b1.identity);
    fflush(stdin);
    gets(b1.name);
    fflush(stdin);
    scanf("%d", &b1.prize);
    return b1;
}
void output(struct book b)
{
    printf("%d", b.identity);
    puts(b.name);
    printf("%d", b.prize);
}