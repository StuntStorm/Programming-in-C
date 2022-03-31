//This is a program to find the sum of 2 numbers
#include<stdio.h>
int main()
{
  /* Method #1 (SUM)

  int num1,num2,sum; //Variable Decleration Statement
  num1 = 10;  //Initialization
  num2 = 20; //Initialization
  sum = num1 + num2; //Initialization
  printf("%d",sum);
  ---------------------*/

  /* Method #2 (SUM)

  int num1,num2;
  num1 = 100;
  num2 = 200;
  printf("%d",num1+num2);
  ---------------------*/

  /* Value Assigning

  int num1,num2;
  num1 = num2 = 100; //Assigning value from RIGHT to LEFT
  printf("%d",num1+num2);
  ---------------------*/

  /* Decleration & Initialization

  int num1=19,num2=30; //Decleration and Initialization
  printf("%d",num1+num2);
  ---------------------*/

  /* Garbage Value

  int num1=19,num2; //Decleration and Initialization || Sometimes Previous Junk values are stored if not specified
  printf("%d",num1+num2);
  ---------------------*/

  /* Representation of Precedence of Operator And Associativity

  int a=10,b=5,c=2,d; //Decleration and Initialization
  d = a+b*c; //Answer : 20 AND NOT 30 Because * is greater than +
  printf("%d",d);

  //Associativty : Used when its - or + && / or *. It has to start from LEFT TO RIGHT (BECAUSE THEY HAVE THE SAME PRECEDENCE)
  //PRECEDENCE OF OPERATOR : Where to start when there is * and +. Then begin with * and then +.
  ---------------------*/

  /* Float Value

  float num1=2.3; //Decleration and Initialization
  printf("%f",num1);
  ---------------------*/

  /* Printing Character

  char name = 'A';
  printf("%c",name);
  ---------------------*/

  /* Printing ASCII code of the Character using format %d

  char name = 'A';
  printf("%d",name);
  ---------------------*/

  // NOTE : char and int together is called Integral Datatype

}
