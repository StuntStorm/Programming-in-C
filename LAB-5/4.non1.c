//print number 1 to n
#include <stdio.h>

void print(int n);

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    print(n);
}

void print(int n)
{
    for (int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
}
