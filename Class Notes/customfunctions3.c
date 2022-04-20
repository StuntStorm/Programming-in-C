//Demonstration of functions in C
#include<stdio.h>


int sum(int x,int y);

int main()
{
    int a,b,s; //local variable
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    s = sum(a,b);
    printf("Sum : %d\n",s);
}

int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}
