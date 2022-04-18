//Write a program to find the sum of all prime numbers between 1 to 100;
#include<stdio.h>
int main()
{
    int sum=2;
    int flag=1;
    for(int i=2; i<10; i++)
    {
        if(10%i != 0)
        sum =sum + i;
    }
    printf("the sum is %d",sum);


    return 0;
 }

//write a program to find sum of all even number in x and odd number in y from 1 to 100;
// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     for(int i=1; i<=10; i++)
//     {
//         if(i%2==0)
//         {
//             sum = sum + i;
//         }
//     }
//     printf("the sum is %d\n",sum);
//     return 0;
// }