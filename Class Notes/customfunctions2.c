//Demonstration of functions in C
#include<stdio.h>


void sum();

int main()
{
    sum();
}

void sum()
{
    int a,b,s;
    printf("Enter 2 Values : ");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("Sum : %d\n",s);
}
