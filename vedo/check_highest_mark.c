// wap to read marks of 10 studnts and return maximum marks using function and arrys

#include <stdio.h>

int main()
{
    int i, array[100], n = 10;

    printf("enter the marks of the students: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int maximum_marks = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > maximum_marks)
        {
            maximum_marks = array[i];
        }
    }
    printf("maximum marks obtained by the students is %d", maximum_marks);

    return 0;
}