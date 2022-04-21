//Demonstration of functions in C
#include<stdio.h>


void check();
void test();

int main()
{
    printf("Hello from main()\n");
    check();
    printf("Bye from main()\n");
}

void check()
{
    printf("Check In!\n");
    test();
    printf("Check Out!\n");
}

void test()
{
    printf("Welcome to Test\n");
    printf("Goodbye from test\n");
}

