//Write a program using conditional operations - find largest
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 Number : ");
    scanf("%d%d",&a,&b);

    //1st way - direct approach
    //a>b?printf("%d is the Largest\n",a) : printf("%d is the Largest\n",b);

    //2nd way - Reduce 2 printf to 1
    c = a>b?a:b;
    printf("%d is the Largest\n",c);
}