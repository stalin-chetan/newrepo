#include <stdio.h>
int main()
{
    int three[3][] = {
        2, 4, 3,
        6, 8, 2,
        2, 3, 1};
    printf("%d\n", three[1][1]);
    return 0;
}