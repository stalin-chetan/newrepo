#include<stdio.h>

double get_golden_ratio(double radius){
    return 3.14 * radius * radius;
}
int main(){
    int radius;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    get_golden_ratio(radius);
    return 0;
}
