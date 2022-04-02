#include<stdio.h>
int main()
{
  /* Escape Sequence
  > \n is New Line
  > \t is tab space
  > \ it wont e printed but if you use \\ it will print as \
  --------------------*/

  /* Using Escape Sequence

  printf("Amrita School of Eng\t");
  printf("Amrita Campus\n");
  printf("Vallikavu\t");
  printf("5\\8\\2022");

  // Using Muliple Formatting in one printf

  int a =10,b=20;
  float c=2.3;
  printf("Value of the variable a is %d and the value of b is %d and c is %f",a,b,c);
  */

  /* Taking Input from the User
  int a;
  printf("Enter two Number:");
  scanf("%d",&a);
  printf("The Value of a is %d",a);
  ---------------------*/

  /*Adding 2 numbers that User Input - METHOD 1

  int a,b,c;
  printf("Enter two Number:");
  scanf("%d",&a);
  scanf("%d",&b);
  c = a+b;
  printf("The Value of a is %d",c);
  --------------------------------*/

  /* Adding 2 numbers that User Input - METHOD 2

  int a,b,c;
  printf("Enter two Number:");
  scanf("%d%d",&a,&b);
  c = a+b;
  printf("The Value of a is %d",c);
  ----------------------------------------*/
}
