
//Implement the power function to calculate xn

#include <stdio.h>

int power(int a,int b);

int main()
{
    int x,n,g;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&n);
    g=power(x,n);
    printf("%d^%d = %d",x,n,g);
}

int power(int a,int b)
{
    int i,result=1;
    for (i=0;i<b;i++)
    {
        result*=a;
    }
    return result;
}
