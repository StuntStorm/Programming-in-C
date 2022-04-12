// Write a program to check which is positive,negative or equal to zero
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a>0)
    {
       printf("%d is a positive number\n",a);
    }
    else if(a == 0)
    {
        printf("%d is a equal to zero\n",a);
    }
    else
    {
        printf("%d is a negative number\n",a);
    }
}