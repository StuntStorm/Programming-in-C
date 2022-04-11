z//Write a Program to print Kiran's Salary

#include<stdio.h>
int main()
{
    float s, d, h, g;
    printf("Enter Basic Salary: ");
    scanf("%f",&s);

    d = 0.4 * s;
    h = 0.2 * s;
    g = s + d + h;

    printf("----------Calculations----------");
    printf("\n Basic Salary       : ₹%.2f",  s);
    printf("\n Dearness Allowance : ₹%.2f", d);
    printf("\n House Rent         : ₹%.2f", h);
    printf("\n--------------------------------");
    printf("\n Gross Salary       : ₹%.2f", g);
    printf("\n--------------------------------\n");
}