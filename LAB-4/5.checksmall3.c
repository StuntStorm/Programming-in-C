//Write a program using conditional operation - read 3 input and find smallest
#include<stdio.h>
int main()
{
    int a,b,c,smol;

    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
    //conditional operation
    smol=(a<b&&a<c?a:b<c?b:c);

    /* ------EXPLANATION------
    a<b - check if b is greater than a
    && - And
    a<c? - c is greater than a
    a - so if both true it will print a
    : - condition
    b<c? - it will check this which is, Is c greater than b
    b - if that condition is true, it will print b
    : - condition
    c - it will print c
    -------------------------*/

    printf("\nThe smallest number is : %d\n",smol);

}