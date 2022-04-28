
// Read a number from the user and find the sum that number and its reverse.

#include <stdio.h>

int sumOfReverse(int n);

int main()
{
    int n,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    x=sumOfReverse(n);
    printf("Sum of %d and %d is %d\n",n,x,n+x);
}

int sumOfReverse(int n)
{
    int value=0;
     do
    {
        value = value*10 + n%10;
        n/=10;
    }while(n>0);
    return value;
}
