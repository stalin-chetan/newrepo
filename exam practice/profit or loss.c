/*If cost price and selling price of an item is input through the keyboard, write a program to determine whether 
the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. */

#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    printf("Enter the CP and SP respectively: ");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    {
        loss = cp - sp;
        printf("you made Rs %d loss ",loss);
    }
    else
    {
        profit = sp - cp;
        printf("you made of Rs %d profit",profit);
    }
    return 0;
}