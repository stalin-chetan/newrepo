// Modify the program in question 1 so that the loop doesn't end when negative number is encountered.
// Instead, just ignore the negative number in the sum, and continue for other remaining numbers
#include <stdio.h>
int main()
{
    int num,sum=0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a  number: ");
        scanf("%d", &num);
        if(num<0)
        {
            continue;
        }
        else{
            sum = sum + num;
        }
    }
    printf("the sum of the given nuber is %d",sum);
    return 0;
}