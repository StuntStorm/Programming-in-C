//Write a program using switch - Number
#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a Number : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("One\n");
        break;
        case 2:

            printf("Two");
        break;
        case 3:
            printf("Three\n");
        break;
        default:
            printf("NONE\n");

    }
}