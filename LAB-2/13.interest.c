// Write a program to calculate simple interest ( NOTE : SI = (P*T*R)/100 )

#include<stdio.h>
int main()
{
    int p,n;
    float r;
    printf("Enter Principle Amount : ");
    scanf("%d", &p);
    printf("Enter Time Period      : ");
    scanf("%d", &n);
    printf("Enter Rate of Interest : ");
    scanf("%f", &r);

    float s = (p*n*r)/100;

    printf("----------Calculations----------");
    printf("\n Principle Amount : %d", p);
    printf("\n Time Period      : %d", n);
    printf("\n Rate of Interest : %.2f", r);
    printf("\n--------------------------------");
    printf("\n Simple Interest  : ₹%.2f", s);
    printf("\n--------------------------------\n");
}
