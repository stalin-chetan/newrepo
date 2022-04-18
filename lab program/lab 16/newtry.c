// #include <stdio.h>

// int is_prime(int[], int);
// int sum_of_prime(int, int);

// int main()
// {
//     int size, i;
//     printf("enter the size of array:");
//     scanf("%d", &size);
//     int array[size];
//     printf("Enter the element of the array:");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     sum_of_prime(array[], size);

//     return 0;
// }

// int is_prime(int array[], int size)
// {
//     int i;
//     for (i = 2; i < size; i++)
//     {
//         if (array[i] == 1)
//         {
//             return 0;
//         }
//         else if (array[i] % i != 0)
//         {
//             return 1;
//         }
//     }
// }

// int sum_of_prime(int size, int is_prime)
// {
//     int i, sum = 0;
//     for (i = 0; i < size; i++)
//     {
//         if (is_prime == 1)
//         {
//             sum += i;
//         }
//     }
// }