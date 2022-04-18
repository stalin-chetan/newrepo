#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,num;
    while(1)
    {
        printf("Choose the option: \n1:Factorial\n2:prime or not \n3:Odd or Even \n4:Exit \n ==>");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
                printf("Enter a number: ");
                scanf("%d",&num);
                int fact = 1;
                for(int i =1; i<=num;i++)
                {
                    fact = fact*i;
                }
                printf("the factorial of %d is %d\n",num,fact);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d",&num);
                for(int i=2; i<=num/2;i++)
                {
                    if(num%i==0)
                    {
                        printf("this is not a prime number\n");
                        break;
                    }
                    else
                    {
                        printf("this is a prime number\n");
                    }
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d",&num);
                if(num%2==0)
                {
                    printf("this is a even number\n");
                }        
                else
                {
                    printf("This is a odd number\n");
                }
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}