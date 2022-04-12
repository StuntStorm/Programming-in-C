/*
On one hot summer day Bob and his sister Alice decided to buy a watermelon.
They chose the biggest and the ripest one, in their opinion.
After that the watermelon was weighed, and the scales showed w kilos.
They rushed home, dying of thirst, and decided to divide the melon, however
they faced a hard problem. Bob and Alice are great fans of even numbers,
so they want to divide the watermelon in such a way that each of the two parts
weighs even number of kilos, at the same time it is not necessary that the parts
are equal. They are extremely tired and want to start their meal as soon as possible,
so you please help them and find out, if they can divide the
watermelon in the way they want.
For sure, each of them should get a part of positive weight.
*/

#include <stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if (w%2==0 && w>2)
        printf("YES");
    else
        printf("NO");
}