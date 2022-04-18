#include <stdio.h>

struct date
{
    int year;
    int month;
    int week;
    char day_name[20];
};
struct date D;

int main()
{
    printf("enter the today's date: ");
    scanf("%d%d%d", &D.year, &D.month, &D.week);
    printf("enter today day name: ");
    fflush(stdin);
    gets(D.day_name);
    printf("Date = %d/%d/%d", D.year, D.month, D.week);
    puts(D.day_name);
    return 0;
}