//Write a Program to print your character

#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,q,r;
    printf("Enter a Number : ");
    scanf("%d", &a);
    scanf("%d", &b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    q = a/b;
    r = a%b;
    printf("Sum        : %d\n",sum);
    printf("Difference : %d\n",sub);
    printf("Product    : %d\n",mul);
    printf("Quotient   : %d\n",q);
    printf("Reminder   : %d\n",r);
}