#include <stdio.h>
#include <math.h>

void squareAndCube();

int main()
{
    squareAndCube();
}

void squareAndCube()
{
    int i,n,r,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    r = pow(i,2);
    s = pow(i,3);
    for (i=1;i<=n;i++)
    {
        printf("The Square and Cube of %d is %d and %d\n",i,r,s);
    }
}
