//Write a program using switch - Find the Largest of the 2
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 Number : ");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 0:
            printf("%d is greater than %d\n",b,a);
        break;
        case 1:
            printf("%d is greater than %d\n",a,b);
    }
}
