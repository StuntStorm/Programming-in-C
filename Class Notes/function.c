//Demonstration of functions in C
#include<stdio.h>


int check();


int main()
{
    int a=check();
    printf("%d is returned from check\n",a);
}

int check()
{
    return 10,20;
}


