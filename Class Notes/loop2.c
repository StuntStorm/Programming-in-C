//Demonstration of loops in C
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    i=1;


    /*
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    */

    /*
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    */

    do
    {
        printf("%d\n",i);
        i++;
    }while(i<=n);
}

