//Read 10 numbers and find the largest
#include <stdio.h>

void largest();

int main()
{
    largest();
}

void largest()
{
    printf("Enter 10 numbers: ");
    int n,max=0;
    for (int i=0;i<10;i++)
    {
        scanf("%d",&n);
        if (n>max)
            max=n;
    }
    printf("The largest number is %d\n",max);
}
