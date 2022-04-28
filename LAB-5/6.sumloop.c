//Calculate the sum of first 10 numbers
#include <stdio.h>

void print();

int main()
{
    print();
}
void print()
{
    int sum;
    for (int i=1;i<=10;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}
