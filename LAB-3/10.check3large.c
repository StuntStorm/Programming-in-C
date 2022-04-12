// Write a program to check which is greater from 3
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a 1st No A : ");
    scanf("%d",&a);
    printf("Enter a 2nd No B : ");
    scanf("%d",&b);
    printf("Enter a 3rd No C : ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is the Largest\n",a);
        else
            printf("%d is the Largest\n",c);
    }
    else if(b>a)
    {
        if(b>c)
            printf("%d is the Largest\n",b);
        else
            printf("%d is the Largest\n",c);
    }
    else if (a = b = c)
    {
        printf("They All are same\n");
    }
    else
    {
        printf("Please enter a valid number!\n");
    }
}