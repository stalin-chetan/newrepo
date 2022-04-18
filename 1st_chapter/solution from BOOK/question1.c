/* Ramesh's basic salary is input through the keyboard.His dearness allowance is
40% of basic salary, and house rent allowance is 20% of his basic salary. Write
a program to calculate his gross salary.*/

#include<stdio.h>
int
main ()
{

  int income, da, hr, gs;	//da= dearness allowance, hr= house rent, gs= gross salary
  printf ("Enter your monthly income : ");
  scanf ("%d", &income);

  printf ("Your monthly income is: %d\n", income);

  da = 0.4 * income;
  hr = 0.2 * income;
  gs = income + da + hr;

  printf ("dearness allowance:%d\n", da);
  printf ("house rent:%d\n", hr);
  printf ("gross income%d\n", gs);


  return 0;
}

