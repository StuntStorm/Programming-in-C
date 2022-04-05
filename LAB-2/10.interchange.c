//Write a Program to print interchange value

#include<stdio.h>
int main()
{
    int c,d,r;
    printf("Enter value of the C : ");
    scanf("%d", &c);
    printf("Enter value of the D : ");
    scanf("%d", &d);
    r = c;
    c = d;
    d = r;
    printf("Value of C : %d and Value of D : %d\n",c,d);
}