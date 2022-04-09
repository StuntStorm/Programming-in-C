//Write a program to check if the character is lower or upper and if its lower give its upper and vise versa
#include <stdio.h>
int main()
{
    char ltr;
    printf("Enter the character: ");
    scanf("%c",&ltr);
    if (ltr>=65 && ltr<=90)
    {
        printf("It is uppercase\n");
        ltr = ltr+32;
        printf("\nLowercase: %c\n",ltr);

    }
    else if (ltr>=97 && ltr<=122)
    {
        printf("It is lowercase\n");
        ltr = ltr-32;
        printf("\nUppercase: %c\n",ltr);

    }
    else
        printf("Invalid Character!\n");
}
