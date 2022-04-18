//Demonstration of functions in C
#include<stdio.h>

void sum(int x,int y);
void summing(int x,int y);
int main()
{
    int a,b; //local variable
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    printf("in main, a : %d and b : %d\n",a,b);
    summing(a,b); //function call. a and b are the actual parameters
    sum(a,b);


}

void sum(int x,int y)
{
    int s;
    x=x+1;
    y=y+1;
    s = x+y;
    printf("in sum, a+1 : %d and b+1 : %d\n",x,y);
    printf("Sum : %d\n",s);
}

void summing(int x,int y)
{
    int s;
    s = x+y;
    printf("Sum : %d\n",s);
}
