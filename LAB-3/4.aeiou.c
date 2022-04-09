// Write a program to check if its Vowel or Not
#include<stdio.h>
int main()
{
    char ltr;
    printf("Enter a Character : ");
    scanf("%c",&ltr);
    if(ltr == 'a'|| ltr == 'e'|| ltr == 'i'|| ltr == 'o'|| ltr == 'u'|| ltr == 'A'|| ltr == 'E'|| ltr == 'I'|| ltr == 'O'|| ltr == 'U')
    {
        printf("Yes, It is a Vowel\n");
    }
    else
    {
        printf("No, It is not a Vowel\n");
    }
}