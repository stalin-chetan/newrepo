#include<stdio.h>

struct family{
    char name[20];
    int age;
    char job[20];
};
 
struct family input();
void display(struct family f);
int main()
{
    struct family f;
    f = input();
    display(f);
    return 0;
}
struct family input()
{
    struct family f1;
    printf("entert the name of a member: ");
    gets(f1.name);
    printf("enter the age: ");
    scanf("%d",&f1.age);
    fflush(stdin);
    printf("enter the name of the job: ");
    gets(f1.job);

    return f1;
}

void display(struct family f){
    printf("Name: ");
    puts(f.name);
    printf("age = %d\n",f.age);
    printf("Job: ");
    puts(f.job);
}