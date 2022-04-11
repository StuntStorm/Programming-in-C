//Write a program using switch - Character
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("Vowel a\n");
        break;
        case 'e':
        case 'E':
            printf("Vowel e\n");
        break;
        case 'i':
        case 'I':
            printf("Vowel i\n");
        break;
        case 'o':
        case 'O':
            printf("Vowel o\n");
        break;
        case 'u':
        case 'U':
            printf("Vowel u\n");
        break;
        default:
            printf("Consonant\n");

    }
}