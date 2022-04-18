#include<stdio.h>
 int main()
 {
     char am1[]= "Hello How are you";
     char am2[]= {'H','e','l','l','o','h','r','u','z'};
     int r1 = sizeof(am1)/ sizeof(am2[0]);
     int r2 = sizeof(am2)/sizeof(am2[0]);
     printf("r1= %d,r2=%d",r1,r1);
     return 0;
 }