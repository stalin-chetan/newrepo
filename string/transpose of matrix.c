// transpose of the matrix
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(){
    
    int matrix[ROWS][COLS];
    int transpose[COLS][ROWS];
    int i, j;
    printf("Enter the elements in the matrix: ");
    for(i = 0; i< ROWS; i++){
        for(j = 0; j < COLS; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    // finding the transpose
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // printing the transpose
    for( i =0 ; i< ROWS; i++){
        for(j=0; j < COLS; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}