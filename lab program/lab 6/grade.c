//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
//Computer. Calculate percentage and grade according to following (Use if--else-if--else
//ladder):
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F
#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,per;
    printf("Enter your marks in physic : ");
    scanf("%f",&m1);
    printf("Enter your marks in Chemistry : ");
    scanf("%f",&m2);
    printf("Enter your marks in Biology : ");
    scanf("%f",&m3);
    printf("Enter your marks in Mathematic : ");
    scanf("%f",&m4);
    printf("Enter your marks in Computer : ");
    scanf("%f",&m5);

    per = (m1+m2+m3+m4+m5) * 0.5;

    if(per>=90)
    {
        printf("Division = A");
    }
    else if(per>=80)
    {
        printf("Divison = B");
    }
    else if(per>=70)
    {
        printf("Divisiom = C");
    }
    else if(per>=60)
    {
        printf("Divisiom = D");
    }
    else if(per>=50)
    {
        printf("Divisiom = E");
    }
    else if(per < 40)
    {
        printf("Divisiom = F");
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}