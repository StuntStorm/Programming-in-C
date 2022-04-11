//Write a program using if or else - read and check if it divisible by 5
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("%d is completely divisible by 5\n",a);
    }
    else
    {
        printf("%d is not completely divisible by 5\n",a);
    }
}