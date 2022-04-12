//Given two numbers a and b, determine if a is divisible by b.

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%b==0)
        printf("YES");
    else
        printf("NO");
}