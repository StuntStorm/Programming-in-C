// Write a program to empolyee


#include<stdio.h>

int main()
{
    char g;
    float s,b;
    printf("Male (M) or Female (F) : ");
    scanf("%c",&g);
    printf("Enter Salary : ");
    scanf("%f",&s);
    if(g=='F' || g=='f') //since user tend to use small or caps input
    {
        if(s>10000)
            b=(float)(s*0.1); //Since the salary is greater than 10k only 10%
        else
            b=(float)(s*0.12); //Since the salary is greater than 10k extra 2% = 12%
    }
    else if(g=='M' || g=='m')
    {
        if(s>10000)
            b=(float)(s*0.05); //Since the salary is greater than 10k only 5%
        else
            b=(float)(s*0.07); //Since the salary is less than 10k extra 2% = 7%
     }
    s+=b;
    printf("Bonus : ₹%.2f\nSalary : ₹%.2f\n",b,s);
}

