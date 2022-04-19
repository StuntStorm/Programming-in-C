/*Alice and Bob are decorating a Christmas Tree. Alice wants only 3 types of ornaments
to be used on the ChristmasTree: yellow, blue and red.
They have y yellow ornaments, b blue ornaments, and r red ornaments
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    for(e=a;e>=1;e--)
    {
        f=d+1;
        g=f+1;
        if (d<=a && f<=b && g<=c)
        {
            printf("%d\n",d+f+g);
            break;
        }
        d-=1;
    }
}