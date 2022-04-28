
//Enter a number and print its multiplication table.

#include <stdio.h>

void multTable(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    multTable(n);
}

void multTable(int n)
{
    for (int i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
