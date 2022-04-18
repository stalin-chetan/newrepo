#include<stdio.h>
int main()
{
    int hour,salary;
    printf("Enter your overtime hours : ");
    scanf("%d",&hour);
    if(hour>40){
        salary = (hour-40)*12 * 10;
        printf("your salary is %d",salary);
    }
    else{
        printf("do overtime to get extra:");
    }
    return 0;
}