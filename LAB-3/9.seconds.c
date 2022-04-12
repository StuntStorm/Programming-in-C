// Write a program to read an amount from seconds to hour

#include<stdio.h>

int main()
{
    int x, h, m, s;
	printf("Enter the seconds: ");
	scanf("%d", &x);
    if(x>0)
    {
	    h = (x/3600);
	    m = (x -(3600*h))/60;
	    s = (x -(3600*h)-(m*60));

	    printf("%d Hours %d Minutes %d Seconds\n",h,m,s);
    }
    else
    {
        printf("Error! Check the value of Seconds again!\n");
    }
}