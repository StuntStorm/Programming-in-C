
//Read a number from the user and print the sum of its digits.

#include <stdio.h>

int sumOfDigits(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of its digits is %d",sumOfDigits(n));
}

int sumOfDigits(int n)
{
    int sum=0;
    do
    {
        sum+=n%10;
        n/=10;
    }while(n>0);
    return sum;
}