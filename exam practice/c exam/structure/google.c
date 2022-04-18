#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[50];
    int marks, i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    FILE *fptr;
    fptr = (fopen("student.txt", "a"));
    if (fptr == NULL)
    {
        printf("Error!");
        exit(0);
    }
    for (i = 0; i < n; ++i)
    {
        fflush(stdin);
        printf("For student%d\nEnter name: ", i + 1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fflush(stdin);
        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }
    fclose(fptr);
    return 0;
}