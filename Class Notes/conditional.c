//Write a program using conditional operations
#include<stdio.h>
int main()
{
    /*

    //Using Conditional Operator to print either Hi or Hello

    int a;
    scanf("%d",&a);
    a>10?printf("Hi\n"):printf("HELLO\n");
    */

    /*

    //Using Conditional Operator by assigning value for b

    int a,b;
    scanf("%d",&a);

    b=a>100?1:0;
    printf("a=%d b=%d\n",a,b);
    */

    //Using Conditional Operator by assigning value for b with character of the string

    int a,b;
    scanf("%d",&a);

    b=a>100?printf("Hi\n"):printf("HELLO\n"); //conditional operator Ternary operator
    printf("a=%d b=%d\n",a,b);
}
