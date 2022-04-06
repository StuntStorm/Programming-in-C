//Write a Program to print rectangle input

#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter length and breath of the rectangle: ");
    scanf("%f%f", &a,b);
    area = a*b;
    printf("Area : %.2f\n",area);
}