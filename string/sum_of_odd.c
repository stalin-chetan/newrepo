// Write a program that finds the sum of of elements in 3x3 matrix
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(){​

    int matrix[ROWS][COLS];
    int i, j;

    int sum = 0;

    printf("Enter the elements of the matrix: \n");

    // taking input into matrix
    for(i = 0 ; i < ROWS; i++){​
        for(j = 0; j < COLS; j++){​
            scanf("%d", &matrix[i][j]);
        }​
    }​

    // printing element of matrix
    for(i = 0; i < ROWS; i++){​ 
        for(j = 0; j < COLS; j++){​
            if(matrix[i][j]%2==0)
            {
                sum += matrix[i][j];
            }
            

        }​
    }​

    // print the result
    printf("The sum of elements in the matrix is: %d\n", sum);

    return 0;
}​