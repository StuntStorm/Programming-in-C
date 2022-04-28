/*A menu driven simple calculator.
Your calculator should have the options to add, subtract, multiply and divide*/

#include <stdio.h>

void calculator();

int main()
{
    calculator();
}

void calculator()
{
    int option=1,a,b;
    while (option!=5)
    {
        printf("1. Sum\n2. Difference\n3. Product\n4. Quotient\n5. Exit\n\nEnter your option: ");
        scanf("%d",&option);
        if (option>5 || option<1)
        {
            printf("Invalid Option\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        if (option==1)
            printf("The sum is %d\n",a+b);
        else if (option==2)
            printf("The difference is %d\n",a-b);
        else if (option==3)
            printf("The product is %d\n",a*b);
        else if (option==4)
            printf("The quotient is %d\n",a/b);
    }
    printf("Exited the Menu page");
}
