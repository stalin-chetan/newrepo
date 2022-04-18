#include<stdio.h>
int main()
{
    int num;
    int flag=1;
    // do // exit level checker ;; while is entry level checker  
    {
        printf("enter a number:");
        scanf("%d",&num);

    // }
    scanf("%d",&num);
     while (num<0)
     {    
        printf("enter a value:");
        scanf("%d",&num);
     }
    

    for(int i=2; i<num; i++ )
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("this is a prime number");
    }
    else
    {
        printf("this is a composite number");
    }
    return 0;
}
