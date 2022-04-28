//

#include <stdio.h>

void count();

int main()
{
    count();
}

void count()
{
    char x;
    int u=0,l=0,n=0;
    printf("Keep entering characters ( '*' to stop ): \n");
    scanf("%c",&x);
    do
    {
         if (x>=65 && x<=90)
            u++;
        else if (x>=48 && x<=57)
            n++;
        else if (x>=97 && x<=122)
            l++;
        scanf("%c",&x);
    }while (x!='*');

    printf("-----------------------------\nUppercase count = %d\nLowercase count = %d\nNumber count = %d\n-----------------------------\n",u,l,n);

}
