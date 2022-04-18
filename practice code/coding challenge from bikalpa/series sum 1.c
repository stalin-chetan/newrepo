
//sum of the series some thing bla bla from bikalpa codes
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the nmnber of the series:");
    scanf("%d",&n);

    int sum=0;
    int i;
    int term;

    for(i=1; i<=n;i++){
        term = ((n*(n+1)) / 2) * 10* n;
        sum = sum + term; 
    }
    printf("the sum of the series is %d",sum);
    return 0;
}