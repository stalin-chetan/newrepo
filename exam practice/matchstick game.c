#include<stdio.h>
int main()
{
    int ui,ci,l=21;
    printf("there are 21 matchstick\n");
    for(int i=1;i<=4;i++)
    { 
        printf("there are %d matchstick left \n",l);
        printf("pick the number 1,2,3,4 : ");
        scanf("%d",&ui);
        if(ui <=4)
        {
            ci = 5-ui;
            printf("you input %d\n",ui);
            printf("computer take %d\n",ci);             
        }
        l = l - (ui +ci);
    
    }
    printf("matchstick left : %d",l);
    return 0;
}