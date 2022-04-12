/*A modified version of the above problem is that the frog jumps to the left.
Starting at point 0 on the x-axis, it jumps b units to the left.
Your task is to calculate the position of the frog after k jumps.*/

#include <stdio.h>

int main()
{
    int t,i;
    unsigned long long int a,b,k,d;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%lli%lli%lli",&a,&b,&k);
        d=a-b;
        if (k%2==0)
            printf("%lli\n",(k/2)*d);
        else
            printf("%lli\n",(k/2)*d+a);
    }
}