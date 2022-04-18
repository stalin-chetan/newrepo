/*////////////////////////// NEW EX : LOOPS AND ARRAY **********************?????????????????????/*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i;
    int flag;
    for(i=2;i<(n/2);i++)
    {
        if(n%i==0){
            flag = 1;
        }    
        else{
            flag = 0;
        }
    }
    if(flag == 1){
        printf("this number is not a prime number");
    }
    else{
       printf("this is the prime number");
    }
    return 0;
}