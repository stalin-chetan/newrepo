#include <stdio.h>
#include <math.h>
long factorial(int);
float series_sum(float, int);
int main(){
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("the sum of series is: %f\n", series_sum(x, 8));
    return 0;
}
long factorial(int n){ // n = formal parameter
    int f = 1;
    int i;
    for (i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}
float series_sum(float x, int n){
    float sum = 0, term = 0;
    int sign = 1;
    for(int i = 1; i <= n; i++){
        term = pow(x, 2 * i - 1) / factorial(2 * i - 1); // 2 * i  - 1 = actual parameter / argument
        sum += sign * term;
        sign = sign * -1;
    }
    return sum;
}