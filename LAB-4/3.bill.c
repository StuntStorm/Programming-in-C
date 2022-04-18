//Write a program using if or else - Calculate the DTP Bill
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number of Pages : ");
    scanf("%d",&a);
    //a=a*3;
    printf("Enter the number of Copies : ");
    scanf("%d",&b);
    if (b==1)
    {
        b = 5;
       printf("Price of %d Copy is %d ",b,c);
    }
    else
    {
        printf("%d is not completely divisible by %d\n",a,b);
    }
}