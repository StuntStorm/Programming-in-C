//Write a Program to print square input

#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter length of the square: ");
    scanf("%f", &a);
    area = a*a;
    printf("Area : %.2f\n",area);
}