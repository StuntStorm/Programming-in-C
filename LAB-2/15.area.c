// Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle

#include<stdio.h>
int main()
{
    float l,b,r;
    printf("Enter Length  : ");
    scanf("%f", &l);
    printf("Enter Breadth : ");
    scanf("%f", &b);
    printf("Enter Radius  : ");
    scanf("%f", &r);

    //rectangle
    float ar = l*b;
    float pr = 2 * ar;

    //circle
    float ac = 3.14*r*r;
    float cc = 2*3.14*r;

    printf(" : %.2f\n",ac);
    printf(" : %.2f\n",cc);

    printf("----------Calculations----------\n");
    printf("Area of Rectangle       : %.2f\n",ar);
    printf("Perimeter of Rectange   : %.2f\n",pr);
    printf("--------------------------------\n");
    printf("Area of Circle          : %.2f\n",ac);
    printf("Circumference of Circle : %.2f\n",cc);
    printf("--------------------------------\n");

}
