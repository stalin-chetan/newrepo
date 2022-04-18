#include<stdio.h>
int main()
{
    int i,j,k,l,m=20;
    
    for(i=1,k=1;i<5;i++)
    {
        for(l=1;l<=m;l++)
        
            printf(" ");
            m -= 2;
        
        for(j=1;j<=i;j++,k++)
        
            printf("%d ",k);
        
        printf("\n");
    }
    
    return 0;
}