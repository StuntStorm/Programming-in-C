/*A modified version of the above problem is that the frog jumps to the left.
Starting at point 0 on the x-axis, it jumps b units to the left.
Your task is to calculate the position of the frog after k jumps.*/

#include <stdio.h>
int main()
{
    int a,k;
    scanf("%d%d",&a,&k);
    printf("%d",-a*k);
}