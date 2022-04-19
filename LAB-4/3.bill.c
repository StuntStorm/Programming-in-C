//Write a program using if or else - Calculate the DTP Bill
#include <stdio.h>
int main()
{
    int p,c,cost;
    printf("Enter the number of pages : ");
    scanf("%d",&p);
    printf("Enter the number of copies : ");
    scanf("%d",&c);
    cost = p*3;
    if (c==1)
    {
        cost = cost + p*5;
    }
    else if(c>0)
    {
        cost = cost + (c*3+2)*p;
    }
    else
    {
        printf("Invalid Data!");
    }
    printf("Total amount to be paid is Rs.%d\n",cost);
}

