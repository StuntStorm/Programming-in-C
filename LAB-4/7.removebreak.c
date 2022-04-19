//Remove break statements from the above program and test. What is the difference?
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 1st Value : ");
    scanf("%d",&a);
    printf("Enter 2nd Value : ");
    scanf("%d",&b);
    printf("1. Sum\n2.Difference\n3.Product\n4.Quotient\n5.Reminder\n6.Largest\n\nWhich Mathematical Operation Do you want : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Sum : %d\n",a+b);

        case 2:
            printf("Difference : %d\n",a-b);

        case 3:
            printf("Product : %d\n",a*b);

        case 4:
            printf("Quotient : %d\n",a/b);

        case 5:
            printf("Reminder : %d\n",a%b);


        case 6:

        /* Using If and Else statement

        if (a>b)
        {
            printf("Largest : %d\n",a);
        }
        else
        {
            printf("Largest : %d\n",b);
        }
        */

        // Using Nested Switch

        d = a>b;
        switch(d)
        {
            case 0:
                printf("Largest : %d\n",b);

            case 1:
                printf("Largest : %d\n",a);

        }

        default:
            printf("Invalid Option!\n");
    }
}

// Answer : The difference is that without break, the program doesnt stop after the called switch it carries on and runs the other switches as well
