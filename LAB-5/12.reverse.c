//Read a number from the user and print the digits in reverse order
#include <stdio.h>

void reverse();

int main()
{
    reverse();
}

void reverse()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Digits in reverse order are ");
    do
    {
        printf("%d ",n%10);
        n/=10;
    }while(n>0);
    printf("\n");
}
