//code to find the number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int number,count=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    int temp = number;
    while(temp != 0)
    {
        temp = temp/10;
        count++;
    }
    printf("count = %d\n",count);
                   
    int sum=0;
    temp = number;

    while(temp != 0){
       int digit = temp % 10;
        sum = sum + (int)pow(digit,count);
        temp = temp/10;
    }
    
    if(number == sum){
        printf("this number is an armstrong number");
    }
    else{
        printf("this is not an armstong number");
    }
    

    return 0;
}