

//. Write a program in C that prints the size of different primitive data types like int, unsigned int,
// float, char, double, short, unsigned short, long, unsigned long, long double, etc. with
// the use of sizeof operator.

#include<stdio.h>
int main()
{
    printf("the size of int is: %d\n",sizeof(int));
    printf("the size of unsigned int is: %d\n",sizeof(unsigned int));
    printf("the size of float is: %d\n",sizeof(float));
    printf("the size of char is: %d\n",sizeof(char));
    printf("the size of double is: %d\n",sizeof(double));
    printf("the size of short is: %d\n",sizeof(short));
    printf("the size of unsigned short is: %d\n",sizeof(unsigned short));
    printf("the size of long is: %d\n",sizeof(long));
    printf("the size of unsigned long is: %d\n",sizeof(unsigned long));
    printf("the size of long double is: %d\n",sizeof(long double));
    return 0;
}