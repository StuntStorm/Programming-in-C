//Write a Program to print marks of 5 subjects

#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float total;
    printf("Enter value of the 1st Subject : ");
    scanf("%f", &a);
    printf("Enter value of the 2nd Subject : ");
    scanf("%f", &b);
    printf("Enter value of the 3rd Subject : ");
    scanf("%f", &c);
    printf("Enter value of the 4th Subject : ");
    scanf("%f", &d);
    printf("Enter value of the 5th Subject : ");
    scanf("%f", &e);
    total = a+b+c+d+e;
    printf("Aggregate Marks : %1.2f/500.00\n",total);
    printf("Percentage of Marks : %1.2f/100.00\n",(total/500)*100);
}