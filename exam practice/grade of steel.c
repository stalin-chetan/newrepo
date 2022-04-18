/* A certain grade of steel is graded according to the following conditions:
    (i)   Hardness must be greater than 50
    (ii)  Carbon content must be less than 0.7
    (iii) Tensile strength must be greater  tha 5600

    The grades are as follows: 
    Grade is 10 if all three conditions are met 
    Grade is 9 if condition (i) and (ii) are met
    Grade is 8 if condition (ii) and (iii) are met 
    Grade is 7 if condition (i) and (iii) are met
    Grade is 6 if only condition is met
    Grade is 5 if none of the conditions are met

    Write a program, which will require the user to give values of hardness, carbon content and 
    tensile strength of the steel under consideration and output the grade of the steel
    */
   #include<stdio.h>
   int main()
   {
       float hardness, cc, st;
        printf("enter the hardness,carbon content and tensile strength: ");
        scanf("%f%f%f",&hardness,&cc,&st);

        if(hardness>50 && cc<0.7 && st>5600)
        {
            printf("this is Grade 10 steel");
        }
        else if(hardness>50 && cc<0.7 && st<5600)
        {
            printf("this is Grade 9 steel");
        }
        else if(hardness<50 && cc<0.7 && st>5600)
        {
            printf("this is Grade 8 steehardness>50 && cc<0.7 && st>5600l");
        }
        else if(hardness>50 && st>5600 && cc>0.7)
        {
            printf("this is Grade 7 steel");
        }
        else if(hardness>50 || cc<0.7 || st>5600)
        {
            printf("this is Grade 6 steel");
        }
        else
        {
            printf("this is Grade 5 steel");
        }

       return 0;
   }