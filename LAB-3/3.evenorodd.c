// Write a program to check if its even or odd

#include<stdio.h>
int main()
{
    int no;
    printf("Enter Your Number : ");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}