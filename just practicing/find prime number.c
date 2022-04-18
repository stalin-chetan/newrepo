// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     int number = 1;
//     for(int i=2;i<num;i++)
//     {
//         if(num%i == 0)
//         {
//             number = 0;
//             break;
//         }
//         else
//         {
//             printf("%d  ",i);

//         }
//     }
//     if(number==1)
//     {
//         printf("this is a prime number; ");
//     }
//     else{
//         printf("this is not a prime number");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int i, j, is_prime;
    for (i = 2; i <= 200; i++){
        // assume that the number is prime at first
        is_prime = 1;
        for (j=2; j <= i-1 ; j++){
            
            if (i % j == 0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime){
            printf("%d ", i);
        }
    }
    return 0;
}