//Demonstration of functions in C
#include<stdio.h>


int sum(int x);

int main()
{
    int a; //local variable
    printf("Enter the 1st Number : ");
    scanf("%d", &a);
    printf("Sum : %d\n",sum(a));
}

int sum(int x)
{
    int y;
    printf("Enter the 2nd Number : ");
    scanf("%d",&y);
    return x+y;
}
