
//Write a program to print the list of all leap years from 1900 to 2100.

#include <stdio.h>

void leapYear();

int main()
{
    leapYear();
}

void leapYear()
{
    int year;
    for (year=1900;year<=2100;year++)
    {
        if ((year%4==0 && year%100!=0)||(year%400==0))
            printf("%d\n",year);
    }
}
