//Write a program using if or else - read 2 input and check if 1st no divisible by the 2nd no.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    if (a%b==0)
    {
        printf("%d is completely divisible by %d\n",a,b);
    }
    else
    {
        printf("%d is not completely divisible by %d\n",a,b);
    }
}