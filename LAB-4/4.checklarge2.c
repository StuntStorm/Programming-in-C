//Write a program using conditional operation - read 2 input and find largest
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    (a>b)?
    (printf("%d is Larger than %d\n",a,b))
    :
    (printf("%d is Larger than %d\n",b,a));
}