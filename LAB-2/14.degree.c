// Write a program which reads in the degrees Fahrenheit from the user and prints out the corresponding degree in Celsius

#include<stdio.h>
int main()
{
    int f;
    printf("Enter Fahrenheit Value : ");
    scanf("%d", &f);

    float c = (f - 32) * 5 / 9;

    printf("Celsius : %.2f\n",c);

    /* Difference between float and double
     A float has 7 decimal digits of precision and occupies 32 bits
     Double is more precise than float and can store 64 bits, double of the number of bits float can store. */
}
