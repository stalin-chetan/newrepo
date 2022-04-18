#include <stdio.h>

struct distance
{
    float feet;
    float inche;
};

int main()
{
    struct distance d1, d2, sum;
    printf("enter the first distance: ");
    scanf("%f%f", &d1.feet, &d1.inche);
    printf("enter the second distance: ");
    scanf("%f%f", &d2.feet, &d2.inche);

    sum.feet = d1.feet + d2.feet;
    sum.inche = d1.inche + d2.inche;

    if(sum.inche >= 12)
    {
        sum.inche = sum.inche - 12;
        sum.feet ++;
    }

    printf("the sum of the given two distance is %.1f feet and %.1f inches",sum.feet,sum.inche);
    return 0;
}