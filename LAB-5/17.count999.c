
/* Read integers from the user until 999 is entered.
Count the number of positive, negative and zeroes entered by the user.
*/

#include <stdio.h>

void count();

int main()
{
    count();
}

void count()
{
    int x,p=0,n=0,z=0;
    printf("Enter numbers: ");
    scanf("%d",&x);
     do
    {
        if (x>0)
            p++;
        else if (x<0)
            n++;
        else
            z++;
        scanf("%d",&x);
    }
    while (x!=999);
    printf("You entered %d positive numbers, %d negative numbers and %d zeroes.\n",p,n,z);
}

